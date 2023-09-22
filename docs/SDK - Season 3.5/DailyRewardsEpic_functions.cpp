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


// Function DailyRewardsEpic.DailyRewardsEpic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDailyRewardsEpic_C::Construct()
{
	static auto Func = Class->GetFunction("DailyRewardsEpic_C", "Construct");

	Params::UDailyRewardsEpic_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyRewardsEpic.DailyRewardsEpic_C.ExecuteUbergraph_DailyRewardsEpic
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12345                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123456                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// enum class ESlateVisibility        Temp_byte_Variable1234567                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12345678                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123456789                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             Temp_byte_Variable12345678910                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyRewardsEpic_C::ExecuteUbergraph_DailyRewardsEpic(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, enum class ESlateVisibility Temp_byte_Variable1234, enum class ESlateVisibility Temp_byte_Variable12345, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class ESlateVisibility Temp_byte_Variable123456, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1234567, enum class ESlateVisibility Temp_byte_Variable12345678, enum class ESlateVisibility Temp_byte_Variable123456789, float CallFunc_RandomFloatInRange_ReturnValue, enum class EFortRarity Temp_byte_Variable12345678910, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("DailyRewardsEpic_C", "ExecuteUbergraph_DailyRewardsEpic");

	Params::UDailyRewardsEpic_C_ExecuteUbergraph_DailyRewardsEpic_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.Temp_byte_Variable1234 = Temp_byte_Variable1234;
	Parms.Temp_byte_Variable12345 = Temp_byte_Variable12345;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_byte_Variable123456 = Temp_byte_Variable123456;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.Temp_byte_Variable1234567 = Temp_byte_Variable1234567;
	Parms.Temp_byte_Variable12345678 = Temp_byte_Variable12345678;
	Parms.Temp_byte_Variable123456789 = Temp_byte_Variable123456789;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.Temp_byte_Variable12345678910 = Temp_byte_Variable12345678910;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
