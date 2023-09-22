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


// Function DailyRewardsCurrent.DailyRewardsCurrent_C.Set Item Flare
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable123                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1234                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable12345                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select12_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable1                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Select123_Default                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()

void UDailyRewardsCurrent_C::Set_Item_Flare(float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable1, float Temp_float_Variable12, bool Temp_bool_Variable1, float Temp_float_Variable123, float Temp_float_Variable1234, float Temp_float_Variable12345, bool Temp_bool_Variable12, const struct FVector2D& Temp_struct_Variable, float K2Node_Select_Default, float K2Node_Select1_Default, float CallFunc_RandomFloatInRange_ReturnValue, float K2Node_Select12_Default, const struct FVector2D& Temp_struct_Variable1, bool Temp_bool_Variable123, const struct FVector2D& K2Node_Select123_Default, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue)
{
	static auto Func = Class->GetFunction("DailyRewardsCurrent_C", "Set Item Flare");

	Params::UDailyRewardsCurrent_C_Set_Item_Flare_Params Parms;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_float_Variable12 = Temp_float_Variable12;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_float_Variable123 = Temp_float_Variable123;
	Parms.Temp_float_Variable1234 = Temp_float_Variable1234;
	Parms.Temp_float_Variable12345 = Temp_float_Variable12345;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.Temp_bool_Variable123 = Temp_bool_Variable123;
	Parms.K2Node_Select123_Default = K2Node_Select123_Default;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyRewardsCurrent.DailyRewardsCurrent_C.Set Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item_To_Represent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyRewardsCurrent_C::Set_Item(class UFortItem* Item_To_Represent, int32 Quantity, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortItem* CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue)
{
	static auto Func = Class->GetFunction("DailyRewardsCurrent_C", "Set Item");

	Params::UDailyRewardsCurrent_C_Set_Item_Params Parms;
	Parms.Item_To_Represent = Item_To_Represent;
	Parms.Quantity = Quantity;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue = CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyRewardsCurrent.DailyRewardsCurrent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDailyRewardsCurrent_C::Construct()
{
	static auto Func = Class->GetFunction("DailyRewardsCurrent_C", "Construct");

	Params::UDailyRewardsCurrent_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DailyRewardsCurrent.DailyRewardsCurrent_C.ExecuteUbergraph_DailyRewardsCurrent
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable1                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select1_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyRewardsCurrent_C::ExecuteUbergraph_DailyRewardsCurrent(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable1, enum class ESlateVisibility K2Node_Select_Default, const struct FVector2D& K2Node_Select1_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("DailyRewardsCurrent_C", "ExecuteUbergraph_DailyRewardsCurrent");

	Params::UDailyRewardsCurrent_C_ExecuteUbergraph_DailyRewardsCurrent_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
