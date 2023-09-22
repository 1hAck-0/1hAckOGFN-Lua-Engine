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


// Function ItemInfoWidget.ItemInfoWidget_C.PopulateUsingItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInfoWidget_C::PopulateUsingItem(class UFortItem* NewParam)
{
	static auto Func = Class->GetFunction("ItemInfoWidget_C", "PopulateUsingItem");

	Params::UItemInfoWidget_C_PopulateUsingItem_Params Parms;
	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInfoWidget.ItemInfoWidget_C.Update Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInfoWidget_C::Update_Text(class UFortItem* NewParam)
{
	static auto Func = Class->GetFunction("ItemInfoWidget_C", "Update Text");

	Params::UItemInfoWidget_C_Update_Text_Params Parms;
	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInfoWidget.ItemInfoWidget_C.ExecuteUbergraph_ItemInfoWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_CustomEvent_NewParam                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// class UFortTokenType*              K2Node_DynamicCast_AsFort_Token_Type                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// int32                              CallFunc_GetNumInStack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData12                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData123                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_Format_ReturnValue1                                     ()
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_CustomEvent_NewParam1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetSingleLineDescription_ReturnValue                    ()
// class FText                        CallFunc_GetShortDescription_ReturnValue                         ()
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue1                                ()
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()

void UItemInfoWidget_C::ExecuteUbergraph_ItemInfoWidget(int32 EntryPoint, class UFortItem* K2Node_CustomEvent_NewParam, class FText CallFunc_GetDisplayName_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class UFortTokenType* K2Node_DynamicCast_AsFort_Token_Type, bool K2Node_DynamicCast_bSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, int32 CallFunc_GetNumInStack_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData12, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData123, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue12, class UFortItem* K2Node_CustomEvent_NewParam1, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue1, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetSingleLineDescription_ReturnValue, class FText CallFunc_GetShortDescription_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue1, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInfoWidget_C", "ExecuteUbergraph_ItemInfoWidget");

	Params::UItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Token_Type = K2Node_DynamicCast_AsFort_Token_Type;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData12 = K2Node_MakeStruct_FormatArgumentData12;
	Parms.K2Node_MakeStruct_FormatArgumentData123 = K2Node_MakeStruct_FormatArgumentData123;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue1 = CallFunc_Format_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue1 = CallFunc_MakeLiteralName_ReturnValue1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue12 = CallFunc_MakeLiteralName_ReturnValue12;
	Parms.K2Node_CustomEvent_NewParam1 = K2Node_CustomEvent_NewParam1;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue1 = CallFunc_GetItemDefinitionBP_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSingleLineDescription_ReturnValue = CallFunc_GetSingleLineDescription_ReturnValue;
	Parms.CallFunc_GetShortDescription_ReturnValue = CallFunc_GetShortDescription_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue1 = CallFunc_TextToUpper_ReturnValue1;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
