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

// Class BlueprintContext.BlueprintContextBase
// 0x0000 (0x0028 - 0x0028)
class UBlueprintContextBase : public USubsystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BlueprintContext.BlueprintContextBase");
		return ptr;
	}

};


// Class BlueprintContext.BlueprintContextLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintContextLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BlueprintContext.BlueprintContextLibrary");
		return ptr;
	}


	class USubsystem* STATIC_GetContext(class UObject* ContextObject, class UClass* Class);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
