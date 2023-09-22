#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ItemUIFunctionLibrary.ItemUIFunctionLibrary_C
class UItemUIFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemUIFunctionLibrary_C");
		return Clss;
	}

	void Truncate_Integer_Value(int32 Value, int32 Min_Fractional_Digits, int32 Max_Fractional_Digits, class UObject* __WorldContext, class FText* Formatted_Value, bool Temp_bool_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue12, float CallFunc_Conv_IntToFloat_ReturnValue12, class FText Temp_text_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue12, bool Temp_bool_Variable1, bool Temp_bool_Variable12, bool Temp_bool_Variable123, class FText Temp_text_Variable1, bool Temp_bool_Variable1234, class FText Temp_text_Variable12, float K2Node_Select_Default, class FText Temp_text_Variable123, float K2Node_Select1_Default, float K2Node_Select12_Default, bool Temp_bool_Variable12345, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText K2Node_Select123_Default, class FText K2Node_Select1234_Default, class FText K2Node_Select12345_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Convert_Tier_To_Integer(enum class EFortItemTier Tier, class UObject* __WorldContext, int32* Numeric_Tier, enum class EFortItemTier Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable12, int32 Temp_int_Variable123, int32 Temp_int_Variable1234, int32 Temp_int_Variable12345, int32 Temp_int_Variable123456, int32 Temp_int_Variable1234567, int32 Temp_int_Variable12345678, int32 Temp_int_Variable123456789, int32 Temp_int_Variable12345678910, int32 K2Node_Select_Default);
	void ParseLevelRequiredFromString(const class FString& InString, class UObject* __WorldContext, int32* OutInt, int32 CallFunc_FindSubstring_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, const class FString& CallFunc_GetSubstring_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
