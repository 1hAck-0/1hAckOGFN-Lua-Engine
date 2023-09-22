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


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.HandleFavorite
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFavorite_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationTab_C::HandleFavorite(bool* Passthrough, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsFavorite_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "HandleFavorite");

	Params::UAthenaCustomizationTab_C_HandleFavorite_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsFavorite_ReturnValue = CallFunc_IsFavorite_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RegisterFavorite
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UAthenaCustomizationTab_C::RegisterFavorite(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "RegisterFavorite");

	Params::UAthenaCustomizationTab_C_RegisterFavorite_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SetItemDetailsToDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        HeaderText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        DescriptionText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSingleLineDescription_ReturnValue                    ()
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationTab_C::SetItemDetailsToDisplay(class UFortItem* InputPin, class FText HeaderText, class FText DescriptionText, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class FText CallFunc_GetSingleLineDescription_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue1)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "SetItemDetailsToDisplay");

	Params::UAthenaCustomizationTab_C_SetItemDetailsToDisplay_Params Parms;
	Parms.InputPin = InputPin;
	Parms.HeaderText = HeaderText;
	Parms.DescriptionText = DescriptionText;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetSingleLineDescription_ReturnValue = CallFunc_GetSingleLineDescription_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue1 = CallFunc_GetDynamicFontMaterial_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SetHeaderToBanner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaCustomizationTab_C::SetHeaderToBanner()
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "SetHeaderToBanner");

	Params::UAthenaCustomizationTab_C_SetHeaderToBanner_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SetupBanner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue                            (HasGetValueTypeHash)

void UAthenaCustomizationTab_C::SetupBanner(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "SetupBanner");

	Params::UAthenaCustomizationTab_C_SetupBanner_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameAccountId_ReturnValue = CallFunc_GetGameAccountId_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.ShowVaultItemByCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaCustomizationCategoryCustomizationType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SubslotIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanShowEmpty                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_GetFavoriteItemForCategory_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue                            (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpProfileAthena*       CallFunc_GetAthenaProfile_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaCharacterItemDefinition*CallFunc_GetRandomDefaultAthenaCharacterDefinition_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortAthenaLoadout          CallFunc_GetLoadoutForPlayer_ReturnValue                         ()
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationTab_C::ShowVaultItemByCategory(enum class EAthenaCustomizationCategory CustomizationType, int32 SubslotIndex, bool CanShowEmpty, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortItem* CallFunc_GetFavoriteItemForCategory_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class UAthenaCharacterItemDefinition* CallFunc_GetRandomDefaultAthenaCharacterDefinition_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue12, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123, const struct FFortAthenaLoadout& CallFunc_GetLoadoutForPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "ShowVaultItemByCategory");

	Params::UAthenaCustomizationTab_C_ShowVaultItemByCategory_Params Parms;
	Parms.CustomizationType = CustomizationType;
	Parms.SubslotIndex = SubslotIndex;
	Parms.CanShowEmpty = CanShowEmpty;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFavoriteItemForCategory_ReturnValue = CallFunc_GetFavoriteItemForCategory_ReturnValue;
	Parms.CallFunc_GetGameAccountId_ReturnValue = CallFunc_GetGameAccountId_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAthenaProfile_ReturnValue = CallFunc_GetAthenaProfile_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetRandomDefaultAthenaCharacterDefinition_ReturnValue = CallFunc_GetRandomDefaultAthenaCharacterDefinition_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_GetContext_ReturnValue123 = CallFunc_GetContext_ReturnValue123;
	Parms.CallFunc_GetLoadoutForPlayer_ReturnValue = CallFunc_GetLoadoutForPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.HandleSlotHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaCustomizationCategoryType                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        HeaderText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        DescriptionText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              SubslotIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetFavoriteItemForCategory_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationTab_C::HandleSlotHovered(enum class EAthenaCustomizationCategory Type, class FText HeaderText, class FText DescriptionText, int32 SubslotIndex, class UFortItem* CallFunc_GetFavoriteItemForCategory_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable, int32 K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "HandleSlotHovered");

	Params::UAthenaCustomizationTab_C_HandleSlotHovered_Params Parms;
	Parms.Type = Type;
	Parms.HeaderText = HeaderText;
	Parms.DescriptionText = DescriptionText;
	Parms.SubslotIndex = SubslotIndex;
	Parms.CallFunc_GetFavoriteItemForCategory_ReturnValue = CallFunc_GetFavoriteItemForCategory_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SelectFirstWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationTab_C::SelectFirstWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "SelectFirstWidget");

	Params::UAthenaCustomizationTab_C_SelectFirstWidget_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.ShowSavingModal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    UIManager                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable1                                              (ConstParm)
// struct FSlateBrush                 CallFunc_NoResourceBrush_ReturnValue                             ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressModalWidget_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationTab_C::ShowSavingModal(class UFortUIManagerWidget_NUI* UIManager, class FText Temp_text_Variable, class FText Temp_text_Variable1, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UProgressModalWidget_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "ShowSavingModal");

	Params::UAthenaCustomizationTab_C_ShowSavingModal_Params Parms;
	Parms.UIManager = UIManager;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.CallFunc_NoResourceBrush_ReturnValue = CallFunc_NoResourceBrush_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RefreshInputActions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable12345                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle1                            (NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle12                           (NoDestructor)
// enum class EInputActionState       K2Node_Select12_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationTab_C::RefreshInputActions(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, bool Temp_bool_Variable12, enum class EInputActionState Temp_byte_Variable1234, enum class EInputActionState Temp_byte_Variable12345, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1, enum class EInputActionState K2Node_Select_Default, bool CallFunc_IsBROnly_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle12, enum class EInputActionState K2Node_Select12_Default)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "RefreshInputActions");

	Params::UAthenaCustomizationTab_C_RefreshInputActions_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.Temp_byte_Variable1234 = Temp_byte_Variable1234;
	Parms.Temp_byte_Variable12345 = Temp_byte_Variable12345;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle1 = K2Node_MakeStruct_DataTableRowHandle1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_MakeStruct_DataTableRowHandle12 = K2Node_MakeStruct_DataTableRowHandle12;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.SelectInitialWidgetForGamepad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaCustomizationTab_C::SelectInitialWidgetForGamepad()
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "SelectInitialWidgetForGamepad");

	Params::UAthenaCustomizationTab_C_SelectInitialWidgetForGamepad_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.EndPickingCustomization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RestoreFocus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationTab_C::EndPickingCustomization(bool RestoreFocus, float Temp_float_Variable, float CallFunc_GetEndTime_ReturnValue, bool CallFunc_IsActivated_ReturnValue, bool Temp_bool_Variable, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, float K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "EndPickingCustomization");

	Params::UAthenaCustomizationTab_C_EndPickingCustomization_Params Parms;
	Parms.RestoreFocus = RestoreFocus;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BeginPickingCustomization
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaCustomizationCategoryCategory                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               WidgetToReturnFocusTo                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        HeaderText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Subslot_Index                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaCustomizationCategoryNewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UAthenaCustomizationTab_C::BeginPickingCustomization(enum class EAthenaCustomizationCategory Category, class UCommonButton* WidgetToReturnFocusTo, class FText HeaderText, int32 Subslot_Index, enum class EAthenaCustomizationCategory NewLocalVar_0, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BeginPickingCustomization");

	Params::UAthenaCustomizationTab_C_BeginPickingCustomization_Params Parms;
	Parms.Category = Category;
	Parms.WidgetToReturnFocusTo = WidgetToReturnFocusTo;
	Parms.HeaderText = HeaderText;
	Parms.Subslot_Index = Subslot_Index;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RegisterInputActions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaCustomizationTab_C::RegisterInputActions()
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "RegisterInputActions");

	Params::UAthenaCustomizationTab_C_RegisterInputActions_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.RegisterCancel
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)

void UAthenaCustomizationTab_C::RegisterCancel(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "RegisterCancel");

	Params::UAthenaCustomizationTab_C_RegisterCancel_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.HandleCancel
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_GetFavoriteItemForCategory_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationTab_C::HandleCancel(bool* Passthrough, class UFortItem* CallFunc_GetFavoriteItemForCategory_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "HandleCancel");

	Params::UAthenaCustomizationTab_C_HandleCancel_Params Parms;
	Parms.CallFunc_GetFavoriteItemForCategory_ReturnValue = CallFunc_GetFavoriteItemForCategory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaCustomizationTab_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "OnInputModeChanged");

	Params::UAthenaCustomizationTab_C_OnInputModeChanged_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaCustomizationTab_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "OnActivated");

	Params::UAthenaCustomizationTab_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaCustomizationTab_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "OnDeactivated");

	Params::UAthenaCustomizationTab_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaCustomizationTab_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "Construct");

	Params::UAthenaCustomizationTab_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaCustomizationTab_C::BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature");

	Params::UAthenaCustomizationTab_C_BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_12_OnCosmeticChangeSaveEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaCustomizationTab_C::BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature");

	Params::UAthenaCustomizationTab_C_BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_30_OnCosmeticChangeSaveEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationTab_C::BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature");

	Params::UAthenaCustomizationTab_C_BndEvt__AthenaCustomizationBannerButton_490_K2Node_ComponentBoundEvent_205_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaCustomizationTab_C::Destruct()
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "Destruct");

	Params::UAthenaCustomizationTab_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__BannerSlot_K2Node_ComponentBoundEvent_547_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationTab_C::BndEvt__BannerSlot_K2Node_ComponentBoundEvent_547_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BndEvt__BannerSlot_K2Node_ComponentBoundEvent_547_CommonButtonClicked__DelegateSignature");

	Params::UAthenaCustomizationTab_C_BndEvt__BannerSlot_K2Node_ComponentBoundEvent_547_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_594_OnItemSelectionEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*                   SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationTab_C::BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_594_OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_594_OnItemSelectionEvent__DelegateSignature");

	Params::UAthenaCustomizationTab_C_BndEvt__SelectionPicker_K2Node_ComponentBoundEvent_594_OnItemSelectionEvent__DelegateSignature_Params Parms;
	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__ButtonOk_K2Node_ComponentBoundEvent_148_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationTab_C::BndEvt__ButtonOk_K2Node_ComponentBoundEvent_148_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BndEvt__ButtonOk_K2Node_ComponentBoundEvent_148_CommonButtonClicked__DelegateSignature");

	Params::UAthenaCustomizationTab_C_BndEvt__ButtonOk_K2Node_ComponentBoundEvent_148_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationTab_C::BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature");

	Params::UAthenaCustomizationTab_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.BndEvt__ButtonConfirm_K2Node_ComponentBoundEvent_30_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCustomizationTab_C::BndEvt__ButtonConfirm_K2Node_ComponentBoundEvent_30_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "BndEvt__ButtonConfirm_K2Node_ComponentBoundEvent_30_CommonButtonClicked__DelegateSignature");

	Params::UAthenaCustomizationTab_C_BndEvt__ButtonConfirm_K2Node_ComponentBoundEvent_30_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationTab.AthenaCustomizationTab_C.ExecuteUbergraph_AthenaCustomizationTab
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable12                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable123                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaCustomizationSlotButtonWrapper_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaCustomizationSlotButtonWrapper_C*CallFunc_Array_Get_Item1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bUsingGamepad                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1234                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaBannerSelectModal_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaCustomizationSlotButtonWrapper_C*CallFunc_Array_Get_Item12                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue12                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaCustomizationSlotButtonWrapper_C*CallFunc_Array_Get_Item123                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue123                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue123                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   K2Node_ComponentBoundEvent_SelectedItem                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleCancel_PassThrough                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryCommitSelectedItem_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UAthenaCustomizationSlotButtonWrapper_C*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)

void UAthenaCustomizationTab_C::ExecuteUbergraph_AthenaCustomizationTab(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Variable12, int32 Temp_int_Variable123, int32 CallFunc_Add_IntInt_ReturnValue12, int32 CallFunc_Add_IntInt_ReturnValue123, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UAthenaCustomizationSlotButtonWrapper_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UAthenaCustomizationSlotButtonWrapper_C* CallFunc_Array_Get_Item1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, bool K2Node_Event_bUsingGamepad, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1234, class UAthenaBannerSelectModal_C* CallFunc_Create_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UCommonButton* K2Node_ComponentBoundEvent_Button123, class UAthenaCustomizationSlotButtonWrapper_C* CallFunc_Array_Get_Item12, int32 CallFunc_Array_Length_ReturnValue12, bool CallFunc_Less_IntInt_ReturnValue12, class UAthenaCustomizationSlotButtonWrapper_C* CallFunc_Array_Get_Item123, int32 CallFunc_Array_Length_ReturnValue123, bool CallFunc_Less_IntInt_ReturnValue123, class UFortItem* K2Node_ComponentBoundEvent_SelectedItem, class UCommonButton* K2Node_ComponentBoundEvent_Button12, bool CallFunc_HandleCancel_PassThrough, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_TryCommitSelectedItem_ReturnValue, TArray<class UAthenaCustomizationSlotButtonWrapper_C*>& K2Node_MakeArray_Array)
{
	static auto Func = Class->GetFunction("AthenaCustomizationTab_C", "ExecuteUbergraph_AthenaCustomizationTab");

	Params::UAthenaCustomizationTab_C_ExecuteUbergraph_AthenaCustomizationTab_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.Temp_int_Variable12 = Temp_int_Variable12;
	Parms.Temp_int_Variable123 = Temp_int_Variable123;
	Parms.CallFunc_Add_IntInt_ReturnValue12 = CallFunc_Add_IntInt_ReturnValue12;
	Parms.CallFunc_Add_IntInt_ReturnValue123 = CallFunc_Add_IntInt_ReturnValue123;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue1 = CallFunc_GetUIManagerWidget_ReturnValue1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button1234 = K2Node_ComponentBoundEvent_Button1234;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_ComponentBoundEvent_Button123 = K2Node_ComponentBoundEvent_Button123;
	Parms.CallFunc_Array_Get_Item12 = CallFunc_Array_Get_Item12;
	Parms.CallFunc_Array_Length_ReturnValue12 = CallFunc_Array_Length_ReturnValue12;
	Parms.CallFunc_Less_IntInt_ReturnValue12 = CallFunc_Less_IntInt_ReturnValue12;
	Parms.CallFunc_Array_Get_Item123 = CallFunc_Array_Get_Item123;
	Parms.CallFunc_Array_Length_ReturnValue123 = CallFunc_Array_Length_ReturnValue123;
	Parms.CallFunc_Less_IntInt_ReturnValue123 = CallFunc_Less_IntInt_ReturnValue123;
	Parms.K2Node_ComponentBoundEvent_SelectedItem = K2Node_ComponentBoundEvent_SelectedItem;
	Parms.K2Node_ComponentBoundEvent_Button12 = K2Node_ComponentBoundEvent_Button12;
	Parms.CallFunc_HandleCancel_PassThrough = CallFunc_HandleCancel_PassThrough;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_TryCommitSelectedItem_ReturnValue = CallFunc_TryCommitSelectedItem_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
