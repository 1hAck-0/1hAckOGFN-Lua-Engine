#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Truncate Integer Value
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Min_Fractional_Digits                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Max_Fractional_Digits                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Formatted_Value                                                  (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// float                              CallFunc_Multiply_FloatFloat_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable1                                              ()
// bool                               Temp_bool_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable12                                             ()
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable123                                            ()
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select12_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12345                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        K2Node_Select123_Default                                         ()
// class FText                        K2Node_Select1234_Default                                        ()
// class FText                        K2Node_Select12345_Default                                       ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UItemUIFunctionLibrary_C::Truncate_Integer_Value(int32 Value, int32 Min_Fractional_Digits, int32 Max_Fractional_Digits, class UObject* __WorldContext, class FText* Formatted_Value, bool Temp_bool_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue12, float CallFunc_Conv_IntToFloat_ReturnValue12, class FText Temp_text_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue12, bool Temp_bool_Variable1, bool Temp_bool_Variable12, bool Temp_bool_Variable123, class FText Temp_text_Variable1, bool Temp_bool_Variable1234, class FText Temp_text_Variable12, float K2Node_Select_Default, class FText Temp_text_Variable123, float K2Node_Select1_Default, float K2Node_Select12_Default, bool Temp_bool_Variable12345, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText K2Node_Select123_Default, class FText K2Node_Select1234_Default, class FText K2Node_Select12345_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemUIFunctionLibrary_C", "Truncate Integer Value");

	Params::UItemUIFunctionLibrary_C_Truncate_Integer_Value_Params Parms;
	Parms.Value = Value;
	Parms.Min_Fractional_Digits = Min_Fractional_Digits;
	Parms.Max_Fractional_Digits = Max_Fractional_Digits;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue1 = CallFunc_GreaterEqual_IntInt_ReturnValue1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue1 = CallFunc_Conv_IntToFloat_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue12 = CallFunc_GreaterEqual_IntInt_ReturnValue12;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue12 = CallFunc_Conv_IntToFloat_ReturnValue12;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue12 = CallFunc_Multiply_FloatFloat_ReturnValue12;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.Temp_bool_Variable123 = Temp_bool_Variable123;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_bool_Variable1234 = Temp_bool_Variable1234;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable123 = Temp_text_Variable123;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.Temp_bool_Variable12345 = Temp_bool_Variable12345;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_Select123_Default = K2Node_Select123_Default;
	Parms.K2Node_Select1234_Default = K2Node_Select1234_Default;
	Parms.K2Node_Select12345_Default = K2Node_Select12345_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Formatted_Value != nullptr)
		*Formatted_Value = Parms.Formatted_Value;

}


// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Convert Tier To Integer
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EFortItemTier           Tier                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Numeric_Tier                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemTier           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable12                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable123                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1234                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable12345                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable123456                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1234567                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable12345678                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable123456789                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable12345678910                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemUIFunctionLibrary_C::Convert_Tier_To_Integer(enum class EFortItemTier Tier, class UObject* __WorldContext, int32* Numeric_Tier, enum class EFortItemTier Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable12, int32 Temp_int_Variable123, int32 Temp_int_Variable1234, int32 Temp_int_Variable12345, int32 Temp_int_Variable123456, int32 Temp_int_Variable1234567, int32 Temp_int_Variable12345678, int32 Temp_int_Variable123456789, int32 Temp_int_Variable12345678910, int32 K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemUIFunctionLibrary_C", "Convert Tier To Integer");

	Params::UItemUIFunctionLibrary_C_Convert_Tier_To_Integer_Params Parms;
	Parms.Tier = Tier;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_int_Variable12 = Temp_int_Variable12;
	Parms.Temp_int_Variable123 = Temp_int_Variable123;
	Parms.Temp_int_Variable1234 = Temp_int_Variable1234;
	Parms.Temp_int_Variable12345 = Temp_int_Variable12345;
	Parms.Temp_int_Variable123456 = Temp_int_Variable123456;
	Parms.Temp_int_Variable1234567 = Temp_int_Variable1234567;
	Parms.Temp_int_Variable12345678 = Temp_int_Variable12345678;
	Parms.Temp_int_Variable123456789 = Temp_int_Variable123456789;
	Parms.Temp_int_Variable12345678910 = Temp_int_Variable12345678910;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Numeric_Tier != nullptr)
		*Numeric_Tier = Parms.Numeric_Tier;

}


// Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.ParseLevelRequiredFromString
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InString                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OutInt                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindSubstring_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindSubstring_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemUIFunctionLibrary_C::ParseLevelRequiredFromString(const class FString& InString, class UObject* __WorldContext, int32* OutInt, int32 CallFunc_FindSubstring_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, const class FString& CallFunc_GetSubstring_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemUIFunctionLibrary_C", "ParseLevelRequiredFromString");

	Params::UItemUIFunctionLibrary_C_ParseLevelRequiredFromString_Params Parms;
	Parms.InString = InString;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_FindSubstring_ReturnValue = CallFunc_FindSubstring_ReturnValue;
	Parms.CallFunc_FindSubstring_ReturnValue1 = CallFunc_FindSubstring_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue1 = CallFunc_Subtract_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutInt != nullptr)
		*OutInt = Parms.OutInt;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
