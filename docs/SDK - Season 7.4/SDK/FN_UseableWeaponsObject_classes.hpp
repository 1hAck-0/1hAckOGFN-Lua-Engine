#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UseableWeaponsObject.UseableWeaponsObject_C
// 0x0018 (0x0040 - 0x0028)
class UUseableWeaponsObject_C : public UObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty UseableWeaponsObject.UseableWeaponsObject_C.UseableWeaponsArray

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UseableWeaponsObject.UseableWeaponsObject_C");
		return ptr;
	}


	void ExecuteUbergraph_UseableWeaponsObject(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
