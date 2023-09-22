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

// Class Crashlytics.CrashlyticsBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UCrashlyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Crashlytics.CrashlyticsBlueprintLibrary");
		return ptr;
	}


	void STATIC_SetUserName(struct FString Name);
	void STATIC_SetUserIdentifier(struct FString ID);
	void STATIC_SetUserEmail(struct FString Email);
	void STATIC_SetStringKey(struct FString Key, struct FString Value);
	void STATIC_SetIntegerKey(struct FString Key, int Value);
	void STATIC_SetFloatKey(struct FString Key, float Value);
	void STATIC_SetBooleanKey(struct FString Key, bool Value);
	void STATIC_LogMessage(struct FString MESSAGE);
	void STATIC_LogException(struct FString MESSAGE);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
