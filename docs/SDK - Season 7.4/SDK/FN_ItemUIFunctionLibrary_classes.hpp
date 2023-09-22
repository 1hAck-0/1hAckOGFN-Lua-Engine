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

// BlueprintGeneratedClass ItemUIFunctionLibrary.ItemUIFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UItemUIFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ItemUIFunctionLibrary.ItemUIFunctionLibrary_C");
		return ptr;
	}


	void STATIC_IsNullItem(class UObject* ItemObject, class UObject* __WorldContext, bool* Is_Null_Item);
	void STATIC_Truncate_Integer_Value(int Value, int Min_Fractional_Digits, int Max_Fractional_Digits, class UObject* __WorldContext, struct FText* Formatted_Value);
	void STATIC_Convert_Tier_To_Integer(TEnumAsByte<EFortItemTier> Tier, class UObject* __WorldContext, int* Numeric_Tier);
	void STATIC_ParseLevelRequiredFromString(struct FString inString, class UObject* __WorldContext, int* outInt);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
