#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Cool
{
	static uintptr_t CoolSigScan(const char* signature, int rva = 0)
	{
		uintptr_t base_address = reinterpret_cast<uintptr_t>(GetModuleHandle(NULL));
		static auto patternToByte = [](const char* pattern)
		{
			auto bytes = std::vector<int>{};
			const auto start = const_cast<char*>(pattern);
			const auto end = const_cast<char*>(pattern) + strlen(pattern);

			for (auto current = start; current < end; ++current)
			{
				if (*current == '?')
				{
					++current;
					if (*current == '?')
						++current;
					bytes.push_back(-1);
				}
				else
				{
					bytes.push_back(strtoul(current, &current, 16));
				}
			}
			return bytes;
		};

		const auto dosHeader = (PIMAGE_DOS_HEADER)base_address;
		const auto ntHeaders = (PIMAGE_NT_HEADERS)((std::uint8_t*)base_address + dosHeader->e_lfanew);

		const auto sizeOfImage = ntHeaders->OptionalHeader.SizeOfImage;
		auto patternBytes = patternToByte(signature);
		const auto scanBytes = reinterpret_cast<std::uint8_t*>(base_address);

		const auto s = patternBytes.size();
		const auto d = patternBytes.data();

		for (auto i = 0ul; i < sizeOfImage - s; ++i)
		{
			bool found = true;
			for (auto j = 0ul; j < s; ++j)
			{
				if (scanBytes[i + j] != d[j] && d[j] != -1)
				{
					found = false;
					break;
				}
			}

			if (found)
				return uintptr_t(&scanBytes[i]);
		}
		return NULL;
	}
}

namespace SDK
{
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// Class CoreUObject.Object
	// 0x0028
	class UObject
	{
	public:
		static GlobalObjectsArray* GObjects;                                                 // 0x0000(0x0000)
		void** Vtable;                                                   // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
		int32_t                                            ObjectFlags;                                              // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
		int32_t                                            InternalIndex;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
		class UClass* Class;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
		FName                                              Name;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
		class UObject* Outer;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

		static inline GlobalObjectsArray* GetGlobalObjects()
		{
			return GObjects;
		}

		std::string GetName();

		std::string GetFullName();

		//static std::map<std::string, uintptr_t> ObjectsCache;
		static std::vector<std::pair<std::string, uintptr_t>> ObjectsCache;

		static void UpdateObjectsCache()
		{
			/*
			for (int i = 0; i < GetGlobalObjects()->Num(); ++i)
			{
				auto object = GetGlobalObjects()->GetByIndex(i);

				if (object == nullptr)
				{
					continue;
				}

				auto objectName = object->GetFullName();
				ObjectsCache[objectName] = uintptr_t(object);
			}
			*/

			//ObjectsCache.clear();

			for (int i = 0; i < GetGlobalObjects()->Num(); ++i)
			{
				auto object = GetGlobalObjects()->GetByIndex(i);

				if (object == nullptr)
				{
					continue;
				}

				auto objectName = object->GetFullName();
				if (objectName.c_str() && objectName.length() > 5)
					ObjectsCache.push_back({ objectName, uintptr_t(object) });
			}
		}

		template<typename T>
		static T* FindObject(const std::string& name, std::string toExclude = "", bool bExclude = false)
		{
			for (int i = 0; i < GetGlobalObjects()->Num(); ++i)
			{
				auto object = GetGlobalObjects()->GetByIndex(i);

				if (object == nullptr)
				{
					continue;
				}

				auto objectName = object->GetFullName();

				if (bExclude && objectName.find(toExclude) != std::string::npos)
					continue;

				if (objectName.find(name) != std::string::npos)
				{
					return (T*)(object);
				}
			}
			return nullptr;
		}

		template<typename T>
		static T* FindObjectCached(const std::string& name, std::string toExclude = "", bool bExclude = false)
		{
			for (auto Object : ObjectsCache)
			{
				if (!Object.second) continue;

				if (bExclude && Object.first.find(toExclude) != std::string::npos)
					continue;

				if (Object.first.find(name) != std::string::npos)
				{
					return (T*)(Object.second);
				}
			}

			/*
			for (const auto& Object : ObjectsCache)
			{
				if (!Object.second) continue;

				if (bExclude && Object.first.find(toExclude) != std::string::npos)
					continue;

				if (Object.first.find(name) != std::string::npos)
				{
					return (T*)(Object.second);
				}
			}
			*/

			return FindObject<T>(name, toExclude, bExclude);
		}

		template <typename T_Load>
		static T_Load* LoadObject(std::string name, UClass* Class = nullptr, UObject* Outer = nullptr)
		{
			auto Name = std::wstring(name.begin(), name.end()).c_str();

			static T_Load* (*StaticLoadObject)(UClass * Class, UObject * InOuter, const wchar_t* Name, const wchar_t* Filename, uint32_t LoadFlags, UObject * Sandbox, bool bAllowObjectReconciliation, void* skunk);
			if (!StaticLoadObject)
				StaticLoadObject = decltype(StaticLoadObject)(Cool::CoolSigScan("40 55 53 56 57 41 54 41 55 41 56 41 57 48 8D AC 24 D8 FD FF FF 48 81 EC ? ? ? ? 48 8B 05"));

			static auto DefaultClass = UObject::StaticClass();
			if (!Class)
				Class = DefaultClass;

			return StaticLoadObject(Class, Outer, Name, nullptr, 0, nullptr, false, nullptr);

			//static auto StaticFindObjectAddr = Cool::CoolSigScan("48 89 5C 24 ? 48 89 74 24 ? 55 57 41 54 41 56 41 57 48 8B EC 48 83 EC 60 80 3D ? ? ? ? ? 45 0F B6 F1");
			//auto StaticFindObject = (T_Fast * (*)(UClass*, UObject * Package, const wchar_t* OrigInName, bool ExactClass))(StaticFindObjectAddr);
			//return StaticFindObject(nullptr, nullptr, Name, false);
		}

		template <typename T_Fast>
		static T_Fast* FindObjectFast(std::string name, UClass* Class = nullptr, UObject* Outer = nullptr)
		{
			auto Name = std::wstring(name.begin(), name.end()).c_str();

			static T_Fast* (*StaticFindObject)(UClass*, UObject * Package, const wchar_t* OrigInName, bool ExactClass);
			if (!StaticFindObject)
				StaticFindObject = decltype(StaticFindObject)(Cool::CoolSigScan("48 89 5C 24 ? 48 89 74 24 ? 55 57 41 54 41 56 41 57 48 8B EC 48 83 EC 60 80 3D ? ? ? ? ? 45 0F B6 F1"));


			T_Fast* ret = 0;

			for (int i = 0; i < 50; i++) // Skunk but sometimes it doesn't return the object so we retry
			{
				ret = StaticFindObject(Class, Outer, Name, false);

				if (!ret)
					ret = LoadObject<T_Fast>(name, Class, Outer);

				if (ret)
					break;
			}

			return ret;
		}

		static UClass* FindClass(const std::string& name)
		{
			for (int i = 0; i < GetGlobalObjects()->Num(); ++i)
			{
				auto object = GetGlobalObjects()->GetByIndex(i);

				if (object == nullptr)
				{
					continue;
				}

				if (object->GetFullName() == name)
				{
					return reinterpret_cast<UClass*>(object);
				}
			}
			return nullptr;
		}

		template<typename T>
		static T* GetObjectCasted(std::size_t index)
		{
			return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
		}

		bool IsA(UClass* cmp) const;

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Object");
			return ptr;
		}

		inline void ProcessEvent(class UFunction* function, void* parms)
		{
			//return GetVFunction<void(*)(UObject*, class UFunction*, void*)>(this, 64)(this, function, parms);
			return o_ProcessEvent(this, function, parms);
		}

		void ExecuteUbergraph(int EntryPoint);
	};


	// Class CoreUObject.Interface
	// 0x0000 (0x0028 - 0x0028)
	class UInterface : public UObject
	{
	public:

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Interface");
			return ptr;
		}

	};


	// Class CoreUObject.Package
	// 0x0068 (0x0090 - 0x0028)
	class UPackage : public UObject
	{
	public:
		unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Package");
			return ptr;
		}

	};


	// Class CoreUObject.Field
	// 0x0008 (0x0030 - 0x0028)
	class UField : public UObject
	{
	public:
		class UField* Next;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Field");
			return ptr;
		}

	};


	// Class CoreUObject.Struct
	// 0x0068 (0x0098 - 0x0030)
	class UStruct : public UField
	{
	public:
		unsigned char padding[0x10]; // 2 ptrs ma g i took so much to find that bozo
		class UStruct* SuperField;                                               // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
		class UField* Children;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
		int32_t                                            PropertySize;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
		int32_t                                            MinAlignment;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
		char                                               pad_0048[64];                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Struct");
			return ptr;
		}

	};


	// Class CoreUObject.Class
	// 0x0168 (0x0200 - 0x0098)
	class UClass : public UStruct
	{
	public:
		unsigned char                                      UnknownData00[0x168];                                     // 0x0098(0x0168) MISSED OFFSET

		template<typename T>
		inline T* CreateDefaultObject()
		{
			return static_cast<T*>(CreateDefaultObject());
		}

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Class");
			return ptr;
		}

		inline UObject* CreateDefaultObject()
		{
			return GetVFunction<UObject * (*)(UClass*)>(this, 103)(this);
		}

	};


	// Class CoreUObject.GCObjectReferencer
	// 0x0038 (0x0060 - 0x0028)
	class UGCObjectReferencer : public UObject
	{
	public:
		unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.GCObjectReferencer");
			return ptr;
		}

	};


	// Class CoreUObject.TextBuffer
	// 0x0028 (0x0050 - 0x0028)
	class UTextBuffer : public UObject
	{
	public:
		unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.TextBuffer");
			return ptr;
		}

	};


	// Class CoreUObject.ScriptStruct
	// 0x0010 (0x00A8 - 0x0098)
	class UScriptStruct : public UStruct
	{
	public:
		unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.ScriptStruct");
			return ptr;
		}

	};


	// Class CoreUObject.Function
	// 0x0030 (0x00C8 - 0x0098)
	class UFunction : public UStruct
	{
	public:
		int32_t                                            FunctionFlags;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
		int16_t                                            RepOffset;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
		int8_t                                             NumParms;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
		char                                               pad_008F[1];                                              // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
		int16_t                                            ParmsSize;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
		int16_t                                            ReturnValueOffset;                                        // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
		int16_t                                            RPCId;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
		int16_t                                            RPCResponseId;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
		class UProperty* FirstPropertyToInit;                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
		class UFunction* EventGraphFunction;                                       // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
		int32_t                                            EventGraphCallOffset;                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
		void* Func;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Function");
			return ptr;
		}

	};


	// Class CoreUObject.DelegateFunction
	// 0x0000 (0x00C8 - 0x00C8)
	class UDelegateFunction : public UFunction
	{
	public:

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.DelegateFunction");
			return ptr;
		}

	};


	// Class CoreUObject.SparseDelegateFunction
	// 0x0010 (0x00D8 - 0x00C8)
	class USparseDelegateFunction : public UDelegateFunction
	{
	public:
		unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.SparseDelegateFunction");
			return ptr;
		}

	};


	// Class CoreUObject.DynamicClass
	// 0x0068 (0x0268 - 0x0200)
	class UDynamicClass : public UClass
	{
	public:
		unsigned char                                      UnknownData00[0x68];                                      // 0x0200(0x0068) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.DynamicClass");
			return ptr;
		}

	};


	// Class CoreUObject.PackageMap
	// 0x00B8 (0x00E0 - 0x0028)
	class UPackageMap : public UObject
	{
	public:
		unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.PackageMap");
			return ptr;
		}

	};


	// Class CoreUObject.Enum
	// 0x0030 (0x0060 - 0x0030)
	class UEnum : public UField
	{
	public:
		unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Enum");
			return ptr;
		}

	};


	// Class CoreUObject.Property
	// 0x0040 (0x0070 - 0x0030)
	class UProperty : public UField
	{
	public:
		//unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET
		uint32_t ArrayDim; // 0x30
		uint32_t ElementSize; // 0x34
		uint64_t PropertyFlags; // 0x38
		char pad_40[4]; // 0x40
		uint32_t Offset_Internal; // 0x44
		char pad_48[0x70 - 0x48];

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Property");
			return ptr;
		}

	};


	// Class CoreUObject.EnumProperty
	// 0x0010 (0x0080 - 0x0070)
	class UEnumProperty : public UProperty
	{
	public:
		unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.EnumProperty");
			return ptr;
		}

	};


	// Class CoreUObject.LinkerPlaceholderClass
	// 0x01B8 (0x03B8 - 0x0200)
	class ULinkerPlaceholderClass : public UClass
	{
	public:
		unsigned char                                      UnknownData00[0x1B8];                                     // 0x0200(0x01B8) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderClass");
			return ptr;
		}

	};


	// Class CoreUObject.LinkerPlaceholderExportObject
	// 0x00C8 (0x00F0 - 0x0028)
	class ULinkerPlaceholderExportObject : public UObject
	{
	public:
		unsigned char                                      UnknownData00[0xC8];                                      // 0x0028(0x00C8) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderExportObject");
			return ptr;
		}

	};


	// Class CoreUObject.LinkerPlaceholderFunction
	// 0x01B8 (0x0280 - 0x00C8)
	class ULinkerPlaceholderFunction : public UFunction
	{
	public:
		unsigned char                                      UnknownData00[0x1B8];                                     // 0x00C8(0x01B8) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderFunction");
			return ptr;
		}

	};


	// Class CoreUObject.MetaData
	// 0x00A0 (0x00C8 - 0x0028)
	class UMetaData : public UObject
	{
	public:
		unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.MetaData");
			return ptr;
		}

	};


	// Class CoreUObject.ObjectRedirector
	// 0x0008 (0x0030 - 0x0028)
	class UObjectRedirector : public UObject
	{
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.ObjectRedirector");
			return ptr;
		}

	};


	// Class CoreUObject.ArrayProperty
	// 0x0008 (0x0078 - 0x0070)
	class UArrayProperty : public UProperty
	{
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.ArrayProperty");
			return ptr;
		}

	};


	// Class CoreUObject.ObjectPropertyBase
	// 0x0008 (0x0078 - 0x0070)
	class UObjectPropertyBase : public UProperty
	{
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.ObjectPropertyBase");
			return ptr;
		}

	};


	// Class CoreUObject.BoolProperty
	// 0x0008 (0x0078 - 0x0070)
	class UBoolProperty : public UProperty
	{
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.BoolProperty");
			return ptr;
		}

	};


	// Class CoreUObject.NumericProperty
	// 0x0000 (0x0070 - 0x0070)
	class UNumericProperty : public UProperty
	{
	public:

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.NumericProperty");
			return ptr;
		}

	};


	// Class CoreUObject.ByteProperty
	// 0x0008 (0x0078 - 0x0070)
	class UByteProperty : public UNumericProperty
	{
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.ByteProperty");
			return ptr;
		}

	};


	// Class CoreUObject.ObjectProperty
	// 0x0000 (0x0078 - 0x0078)
	class UObjectProperty : public UObjectPropertyBase
	{
	public:

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.ObjectProperty");
			return ptr;
		}

	};


	// Class CoreUObject.ClassProperty
	// 0x0008 (0x0080 - 0x0078)
	class UClassProperty : public UObjectProperty
	{
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.ClassProperty");
			return ptr;
		}

	};


	// Class CoreUObject.DelegateProperty
	// 0x0008 (0x0078 - 0x0070)
	class UDelegateProperty : public UProperty
	{
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.DelegateProperty");
			return ptr;
		}

	};


	// Class CoreUObject.DoubleProperty
	// 0x0000 (0x0070 - 0x0070)
	class UDoubleProperty : public UNumericProperty
	{
	public:

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.DoubleProperty");
			return ptr;
		}

	};


	// Class CoreUObject.FloatProperty
	// 0x0000 (0x0070 - 0x0070)
	class UFloatProperty : public UNumericProperty
	{
	public:

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.FloatProperty");
			return ptr;
		}

	};


	// Class CoreUObject.IntProperty
	// 0x0000 (0x0070 - 0x0070)
	class UIntProperty : public UNumericProperty
	{
	public:

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.IntProperty");
			return ptr;
		}

	};


	// Class CoreUObject.Int16Property
	// 0x0000 (0x0070 - 0x0070)
	class UInt16Property : public UNumericProperty
	{
	public:

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Int16Property");
			return ptr;
		}

	};


	// Class CoreUObject.Int64Property
	// 0x0000 (0x0070 - 0x0070)
	class UInt64Property : public UNumericProperty
	{
	public:

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Int64Property");
			return ptr;
		}

	};


	// Class CoreUObject.Int8Property
	// 0x0000 (0x0070 - 0x0070)
	class UInt8Property : public UNumericProperty
	{
	public:

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.Int8Property");
			return ptr;
		}

	};


	// Class CoreUObject.InterfaceProperty
	// 0x0008 (0x0078 - 0x0070)
	class UInterfaceProperty : public UProperty
	{
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.InterfaceProperty");
			return ptr;
		}

	};


	// Class CoreUObject.LazyObjectProperty
	// 0x0000 (0x0078 - 0x0078)
	class ULazyObjectProperty : public UObjectPropertyBase
	{
	public:

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.LazyObjectProperty");
			return ptr;
		}

	};


	// Class CoreUObject.MapProperty
	// 0x0028 (0x0098 - 0x0070)
	class UMapProperty : public UProperty
	{
	public:
		unsigned char                                      UnknownData00[0x28];                                      // 0x0070(0x0028) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.MapProperty");
			return ptr;
		}

	};


	// Class CoreUObject.MulticastDelegateProperty
	// 0x0008 (0x0078 - 0x0070)
	class UMulticastDelegateProperty : public UProperty
	{
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.MulticastDelegateProperty");
			return ptr;
		}

	};


	// Class CoreUObject.MulticastInlineDelegateProperty
	// 0x0000 (0x0078 - 0x0078)
	class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
	{
	public:

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.MulticastInlineDelegateProperty");
			return ptr;
		}

	};


	// Class CoreUObject.MulticastSparseDelegateProperty
	// 0x0000 (0x0078 - 0x0078)
	class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
	{
	public:

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.MulticastSparseDelegateProperty");
			return ptr;
		}

	};


	// Class CoreUObject.NameProperty
	// 0x0000 (0x0070 - 0x0070)
	class UNameProperty : public UProperty
	{
	public:

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.NameProperty");
			return ptr;
		}

	};


	// Class CoreUObject.SetProperty
	// 0x0020 (0x0090 - 0x0070)
	class USetProperty : public UProperty
	{
	public:
		unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.SetProperty");
			return ptr;
		}

	};


	// Class CoreUObject.SoftObjectProperty
	// 0x0000 (0x0078 - 0x0078)
	class USoftObjectProperty : public UObjectPropertyBase
	{
	public:

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.SoftObjectProperty");
			return ptr;
		}

	};


	// Class CoreUObject.SoftClassProperty
	// 0x0008 (0x0080 - 0x0078)
	class USoftClassProperty : public USoftObjectProperty
	{
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.SoftClassProperty");
			return ptr;
		}

	};


	// Class CoreUObject.StrProperty
	// 0x0000 (0x0070 - 0x0070)
	class UStrProperty : public UProperty
	{
	public:

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.StrProperty");
			return ptr;
		}

	};


	// Class CoreUObject.StructProperty
	// 0x0008 (0x0078 - 0x0070)
	class UStructProperty : public UProperty
	{
	public:
		unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.StructProperty");
			return ptr;
		}

	};


	// Class CoreUObject.UInt16Property
	// 0x0000 (0x0070 - 0x0070)
	class UUInt16Property : public UNumericProperty
	{
	public:

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.UInt16Property");
			return ptr;
		}

	};


	// Class CoreUObject.UInt32Property
	// 0x0000 (0x0070 - 0x0070)
	class UUInt32Property : public UNumericProperty
	{
	public:

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.UInt32Property");
			return ptr;
		}

	};


	// Class CoreUObject.UInt64Property
	// 0x0000 (0x0070 - 0x0070)
	class UUInt64Property : public UNumericProperty
	{
	public:

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.UInt64Property");
			return ptr;
		}

	};


	// Class CoreUObject.WeakObjectProperty
	// 0x0000 (0x0078 - 0x0078)
	class UWeakObjectProperty : public UObjectPropertyBase
	{
	public:

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.WeakObjectProperty");
			return ptr;
		}

	};


	// Class CoreUObject.TextProperty
	// 0x0000 (0x0070 - 0x0070)
	class UTextProperty : public UProperty
	{
	public:

		static UClass* StaticClass()
		{
			static auto ptr = UObject::FindClass("Class CoreUObject.TextProperty");
			return ptr;
		}

	};

	/*
	struct FFrame
	{
		char pad[0x10];
		struct UFunction* Node;
		UObject* Object;
		uint8_t* Code;
		uint8_t* Locals;
	};
	*/

	class FOutputDevice
	{
	public:
		bool bSuppressEventTag;
		bool bAutoEmitLineTerminator;
	};

	struct FFrame : public FOutputDevice
	{
		void** VFT; // 10

		// Variables.
		UFunction* Node; // 16
		UObject* Object; // 24 // 0x18
		uint8_t* Code; // 32 // 0x20
		uint8_t* Locals; // 40

		// MORE STUFF HERE

		void* MostRecentProperty; // 48
		uint8_t* MostRecentPropertyAddress; // 56

		void Step(UObject* Context, void* const RESULT_PARAM)
		{
			static void (*StepOriginal)(__int64 frame, UObject * Context, void* const RESULT_PARAM);
			if (!StepOriginal)
				StepOriginal = decltype(StepOriginal)(Cool::CoolSigScan("48 8B 41 20 4C 8B D2 48 8B D1 44 0F B6 08 48 FF"));

			StepOriginal(__int64(this), Context, RESULT_PARAM);
		}

		__forceinline void StepCompiledIn(void* const Result)
		{
			if (Code)
			{
				Step(Object, Result);
			}
		}

		template<typename TNativeType>
		__forceinline TNativeType& StepCompiledInRef(void* const TemporaryBuffer)
		{
			MostRecentPropertyAddress = NULL;

			if (Code)
			{
				Step(Object, TemporaryBuffer);
			}

			return (MostRecentPropertyAddress != NULL) ? *(TNativeType*)(MostRecentPropertyAddress) : *(TNativeType*)TemporaryBuffer;
		}
	};

}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
