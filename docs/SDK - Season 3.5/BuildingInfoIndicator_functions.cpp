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


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.RefreshBuildingInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuildingInfoIndicator_C::RefreshBuildingInfo()
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "RefreshBuildingInfo");

	Params::UBuildingInfoIndicator_C_RefreshBuildingInfo_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleQuickbarFocusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuickBars          QuickBar                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              QuickBarSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuildingInfoIndicator_C::HandleQuickbarFocusChanged(enum class EFortQuickBars QuickBar, int32 QuickBarSlot)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "HandleQuickbarFocusChanged");

	Params::UBuildingInfoIndicator_C_HandleQuickbarFocusChanged_Params Parms;
	Parms.QuickBar = QuickBar;
	Parms.QuickBarSlot = QuickBarSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleAttachedTrapChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingTrap*               BuildingTrap                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuildingInfoIndicator_C::HandleAttachedTrapChanged(class ABuildingTrap* BuildingTrap)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "HandleAttachedTrapChanged");

	Params::UBuildingInfoIndicator_C_HandleAttachedTrapChanged_Params Parms;
	Parms.BuildingTrap = BuildingTrap;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.UpdateBuildingInfo_InteractionWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Interactable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CanBePlayerEdited                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsAnyTrapAttached                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsTrapAttachedFacingPlayer                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsPreviewTrapAttached                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortBuildingInteractionInteractionType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InteractionCost                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortResourceType       BuildingMaterial                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BuildKeybindAction                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlaceTrapAvailable                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               TopTrapActive                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               TrapAvailable                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               EditAvailable                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue12                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuildingInteractionTemp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12345                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123456                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1234567                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12345678                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuildingInteractionTemp_byte_Variable123456789                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortResourceItemDefinition* CallFunc_GetResourceItemDefinition_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue     ()
// int32                              CallFunc_GetResourceCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable12345678910                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1234567891011                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABuildingSMActor*            K2Node_DynamicCast_AsBuilding_SMActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123456789101112                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12345678910111213                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue123                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1234                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select12_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select123_Default                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBuildConfirmActionName_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue123                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABuildingSMActor*            K2Node_DynamicCast_AsBuilding_SMActor1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTrapAvailableForBuilding_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerBuilt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1234                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue12345                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue1234                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTrapPickerActionName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          CallFunc_GetQuickbarFocus_OutQuickBar                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutSlot                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutSecondarySlot                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue123                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1234567891011121314                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123456789101112131415                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue12345                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTrapReadyForBuilding_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1234_Default                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTrapAttachTypeName_ReturnValue                       ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// struct FLinearColor                CallFunc_Get_Theme_Color_Theme_Color                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select12345_Default                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// class FText                        CallFunc_Format_ReturnValue                                      ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue123456                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue1                                     ()
// enum class EFortQuickBars          CallFunc_GetQuickbarFocus_OutQuickBar1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutSlot1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutSecondarySlot1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1234                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue123456                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1234567                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12345                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue12345                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select123456_Default                                      ()
// bool                               CallFunc_BooleanAND_ReturnValue1234567                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1234                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue12345678                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select1234567_Default                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuildingInfoIndicator_C::UpdateBuildingInfo_InteractionWidgets(bool Interactable, bool CanBePlayerEdited, bool IsAnyTrapAttached, bool IsTrapAttachedFacingPlayer, bool IsPreviewTrapAttached, enum class EFortBuildingInteraction InteractionType, int32 InteractionCost, enum class EFortResourceType BuildingMaterial, class FName BuildKeybindAction, bool PlaceTrapAvailable, bool TopTrapActive, bool TrapAvailable, bool EditAvailable, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue12, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, enum class EFortBuildingInteraction Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, enum class ESlateVisibility Temp_byte_Variable1234, enum class ESlateVisibility Temp_byte_Variable12345, enum class ESlateVisibility Temp_byte_Variable123456, enum class ESlateVisibility Temp_byte_Variable1234567, enum class ESlateVisibility Temp_byte_Variable12345678, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, bool CallFunc_IsBROnly_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, enum class EFortBuildingInteraction Temp_byte_Variable123456789, class UFortResourceItemDefinition* CallFunc_GetResourceItemDefinition_ReturnValue, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, int32 CallFunc_GetResourceCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable12345678910, enum class ESlateVisibility Temp_byte_Variable1234567891011, bool Temp_bool_Variable12, class ABuildingSMActor* K2Node_DynamicCast_AsBuilding_SMActor, bool K2Node_DynamicCast_bSuccess, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable123456789101112, enum class ESlateVisibility Temp_byte_Variable12345678910111213, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue12, bool CallFunc_Not_PreBool_ReturnValue123, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool Temp_bool_Variable123, bool CallFunc_Not_PreBool_ReturnValue1234, bool CallFunc_BooleanAND_ReturnValue12, bool CallFunc_BooleanAND_ReturnValue123, enum class ESlateVisibility K2Node_Select12_Default, enum class ESlateVisibility K2Node_Select123_Default, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, class FName CallFunc_GetBuildConfirmActionName_ReturnValue, bool CallFunc_BooleanOR_ReturnValue123, class ABuildingSMActor* K2Node_DynamicCast_AsBuilding_SMActor1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsTrapAvailableForBuilding_ReturnValue, bool CallFunc_IsPlayerBuilt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1234, bool CallFunc_BooleanAND_ReturnValue12345, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1234, class FName CallFunc_GetTrapPickerActionName_ReturnValue, enum class EFortQuickBars CallFunc_GetQuickbarFocus_OutQuickBar, int32 CallFunc_GetQuickbarFocus_OutSlot, int32 CallFunc_GetQuickbarFocus_OutSecondarySlot, int32 CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot, bool CallFunc_EqualEqual_ByteByte_ReturnValue123, enum class ESlateVisibility Temp_byte_Variable1234567891011121314, enum class ESlateVisibility Temp_byte_Variable123456789101112131415, bool Temp_bool_Variable1234, class UFortInventoryContext* CallFunc_GetContext_ReturnValue12345, bool CallFunc_HasTrapReadyForBuilding_ReturnValue, enum class ESlateVisibility K2Node_Select1234_Default, class FText CallFunc_GetTrapAttachTypeName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FLinearColor& CallFunc_Get_Theme_Color_Theme_Color, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FLinearColor& K2Node_Select12345_Default, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue123456, class FText CallFunc_Format_ReturnValue1, enum class EFortQuickBars CallFunc_GetQuickbarFocus_OutQuickBar1, int32 CallFunc_GetQuickbarFocus_OutSlot1, int32 CallFunc_GetQuickbarFocus_OutSecondarySlot1, int32 CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1234, bool CallFunc_BooleanAND_ReturnValue123456, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234567, bool Temp_bool_Variable12345, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue12345, class FText K2Node_Select123456_Default, bool CallFunc_BooleanAND_ReturnValue1234567, bool CallFunc_BooleanOR_ReturnValue1234, bool CallFunc_BooleanAND_ReturnValue12345678, class UWidget* K2Node_Select1234567_Default)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "UpdateBuildingInfo_InteractionWidgets");

	Params::UBuildingInfoIndicator_C_UpdateBuildingInfo_InteractionWidgets_Params Parms;
	Parms.Interactable = Interactable;
	Parms.CanBePlayerEdited = CanBePlayerEdited;
	Parms.IsAnyTrapAttached = IsAnyTrapAttached;
	Parms.IsTrapAttachedFacingPlayer = IsTrapAttachedFacingPlayer;
	Parms.IsPreviewTrapAttached = IsPreviewTrapAttached;
	Parms.InteractionType = InteractionType;
	Parms.InteractionCost = InteractionCost;
	Parms.BuildingMaterial = BuildingMaterial;
	Parms.BuildKeybindAction = BuildKeybindAction;
	Parms.PlaceTrapAvailable = PlaceTrapAvailable;
	Parms.TopTrapActive = TopTrapActive;
	Parms.TrapAvailable = TrapAvailable;
	Parms.EditAvailable = EditAvailable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue12 = CallFunc_Not_PreBool_ReturnValue12;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.Temp_byte_Variable1234 = Temp_byte_Variable1234;
	Parms.Temp_byte_Variable12345 = Temp_byte_Variable12345;
	Parms.Temp_byte_Variable123456 = Temp_byte_Variable123456;
	Parms.Temp_byte_Variable1234567 = Temp_byte_Variable1234567;
	Parms.Temp_byte_Variable12345678 = Temp_byte_Variable12345678;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue12 = CallFunc_EqualEqual_ByteByte_ReturnValue12;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_byte_Variable123456789 = Temp_byte_Variable123456789;
	Parms.CallFunc_GetResourceItemDefinition_ReturnValue = CallFunc_GetResourceItemDefinition_ReturnValue;
	Parms.CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_GetResourceCount_ReturnValue = CallFunc_GetResourceCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable12345678910 = Temp_byte_Variable12345678910;
	Parms.Temp_byte_Variable1234567891011 = Temp_byte_Variable1234567891011;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.K2Node_DynamicCast_AsBuilding_SMActor = K2Node_DynamicCast_AsBuilding_SMActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.Temp_byte_Variable123456789101112 = Temp_byte_Variable123456789101112;
	Parms.Temp_byte_Variable12345678910111213 = Temp_byte_Variable12345678910111213;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue12 = CallFunc_BooleanOR_ReturnValue12;
	Parms.CallFunc_Not_PreBool_ReturnValue123 = CallFunc_Not_PreBool_ReturnValue123;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Variable123 = Temp_bool_Variable123;
	Parms.CallFunc_Not_PreBool_ReturnValue1234 = CallFunc_Not_PreBool_ReturnValue1234;
	Parms.CallFunc_BooleanAND_ReturnValue12 = CallFunc_BooleanAND_ReturnValue12;
	Parms.CallFunc_BooleanAND_ReturnValue123 = CallFunc_BooleanAND_ReturnValue123;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.K2Node_Select123_Default = K2Node_Select123_Default;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_GetBuildConfirmActionName_ReturnValue = CallFunc_GetBuildConfirmActionName_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue123 = CallFunc_BooleanOR_ReturnValue123;
	Parms.K2Node_DynamicCast_AsBuilding_SMActor1 = K2Node_DynamicCast_AsBuilding_SMActor1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_IsTrapAvailableForBuilding_ReturnValue = CallFunc_IsTrapAvailableForBuilding_ReturnValue;
	Parms.CallFunc_IsPlayerBuilt_ReturnValue = CallFunc_IsPlayerBuilt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1234 = CallFunc_BooleanAND_ReturnValue1234;
	Parms.CallFunc_BooleanAND_ReturnValue12345 = CallFunc_BooleanAND_ReturnValue12345;
	Parms.CallFunc_GetContext_ReturnValue123 = CallFunc_GetContext_ReturnValue123;
	Parms.CallFunc_GetContext_ReturnValue1234 = CallFunc_GetContext_ReturnValue1234;
	Parms.CallFunc_GetTrapPickerActionName_ReturnValue = CallFunc_GetTrapPickerActionName_ReturnValue;
	Parms.CallFunc_GetQuickbarFocus_OutQuickBar = CallFunc_GetQuickbarFocus_OutQuickBar;
	Parms.CallFunc_GetQuickbarFocus_OutSlot = CallFunc_GetQuickbarFocus_OutSlot;
	Parms.CallFunc_GetQuickbarFocus_OutSecondarySlot = CallFunc_GetQuickbarFocus_OutSecondarySlot;
	Parms.CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot = CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue123 = CallFunc_EqualEqual_ByteByte_ReturnValue123;
	Parms.Temp_byte_Variable1234567891011121314 = Temp_byte_Variable1234567891011121314;
	Parms.Temp_byte_Variable123456789101112131415 = Temp_byte_Variable123456789101112131415;
	Parms.Temp_bool_Variable1234 = Temp_bool_Variable1234;
	Parms.CallFunc_GetContext_ReturnValue12345 = CallFunc_GetContext_ReturnValue12345;
	Parms.CallFunc_HasTrapReadyForBuilding_ReturnValue = CallFunc_HasTrapReadyForBuilding_ReturnValue;
	Parms.K2Node_Select1234_Default = K2Node_Select1234_Default;
	Parms.CallFunc_GetTrapAttachTypeName_ReturnValue = CallFunc_GetTrapAttachTypeName_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_Get_Theme_Color_Theme_Color = CallFunc_Get_Theme_Color_Theme_Color;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_Select12345_Default = K2Node_Select12345_Default;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_GetContext_ReturnValue123456 = CallFunc_GetContext_ReturnValue123456;
	Parms.CallFunc_Format_ReturnValue1 = CallFunc_Format_ReturnValue1;
	Parms.CallFunc_GetQuickbarFocus_OutQuickBar1 = CallFunc_GetQuickbarFocus_OutQuickBar1;
	Parms.CallFunc_GetQuickbarFocus_OutSlot1 = CallFunc_GetQuickbarFocus_OutSlot1;
	Parms.CallFunc_GetQuickbarFocus_OutSecondarySlot1 = CallFunc_GetQuickbarFocus_OutSecondarySlot1;
	Parms.CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot1 = CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1234 = CallFunc_EqualEqual_ByteByte_ReturnValue1234;
	Parms.CallFunc_BooleanAND_ReturnValue123456 = CallFunc_BooleanAND_ReturnValue123456;
	Parms.CallFunc_GetContext_ReturnValue1234567 = CallFunc_GetContext_ReturnValue1234567;
	Parms.Temp_bool_Variable12345 = Temp_bool_Variable12345;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue12345 = CallFunc_Not_PreBool_ReturnValue12345;
	Parms.K2Node_Select123456_Default = K2Node_Select123456_Default;
	Parms.CallFunc_BooleanAND_ReturnValue1234567 = CallFunc_BooleanAND_ReturnValue1234567;
	Parms.CallFunc_BooleanOR_ReturnValue1234 = CallFunc_BooleanOR_ReturnValue1234;
	Parms.CallFunc_BooleanAND_ReturnValue12345678 = CallFunc_BooleanAND_ReturnValue12345678;
	Parms.K2Node_Select1234567_Default = K2Node_Select1234567_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.IsCurrentBuildingBeingRepaired
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBuildingInfoIndicator_C::IsCurrentBuildingBeingRepaired(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "IsCurrentBuildingBeingRepaired");

	Params::UBuildingInfoIndicator_C_IsCurrentBuildingBeingRepaired_Params Parms;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.UpdateBuildingRepairCost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewInteractionCost                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()

void UBuildingInfoIndicator_C::UpdateBuildingRepairCost(int32 NewInteractionCost, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "UpdateBuildingRepairCost");

	Params::UBuildingInfoIndicator_C_UpdateBuildingRepairCost_Params Parms;
	Parms.NewInteractionCost = NewInteractionCost;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandlePlayerTargetingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsTargeting                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuildingInfoIndicator_C::HandlePlayerTargetingChanged(bool bIsTargeting)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "HandlePlayerTargetingChanged");

	Params::UBuildingInfoIndicator_C_HandlePlayerTargetingChanged_Params Parms;
	Parms.bIsTargeting = bIsTargeting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HideHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuildingInfoIndicator_C::HideHealth()
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "HideHealth");

	Params::UBuildingInfoIndicator_C_HideHealth_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.Update Keybinds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuildingInfoIndicator_C::Update_Keybinds(bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable1, bool CallFunc_NotEqual_ByteByte_ReturnValue, class FName K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "Update Keybinds");

	Params::UBuildingInfoIndicator_C_Update_Keybinds_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable1 = Temp_name_Variable1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleTrapDurabilityChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentDurability                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxDurability                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuildingInfoIndicator_C::HandleTrapDurabilityChanged(float CurrentDurability, float MaxDurability)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "HandleTrapDurabilityChanged");

	Params::UBuildingInfoIndicator_C_HandleTrapDurabilityChanged_Params Parms;
	Parms.CurrentDurability = CurrentDurability;
	Parms.MaxDurability = MaxDurability;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleBuildingHealthChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Health                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuildingInfoIndicator_C::HandleBuildingHealthChanged(float Health, bool CallFunc_NotEqual_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "HandleBuildingHealthChanged");

	Params::UBuildingInfoIndicator_C_HandleBuildingHealthChanged_Params Parms;
	Parms.Health = Health;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.HandleBuildingFocused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingActor*              FocusedBuilding                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuildingInfoIndicator_C::HandleBuildingFocused(class ABuildingActor* FocusedBuilding, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "HandleBuildingFocused");

	Params::UBuildingInfoIndicator_C_HandleBuildingFocused_Params Parms;
	Parms.FocusedBuilding = FocusedBuilding;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.UpdateBuildingInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortFocusedBuildingInfo    NewBuildingInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EFortBuildingInteractionTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12345                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123456                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1234567                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuildingHealthDisplayRuleTemp_byte_Variable12345678                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123456789                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12345678910                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuildingInfoIndicator_C::UpdateBuildingInfo(struct FFortFocusedBuildingInfo& NewBuildingInfo, enum class EFortBuildingInteraction Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, enum class ESlateVisibility Temp_byte_Variable1234, enum class ESlateVisibility Temp_byte_Variable12345, enum class ESlateVisibility Temp_byte_Variable123456, enum class ESlateVisibility Temp_byte_Variable1234567, enum class EFortBuildingHealthDisplayRule Temp_byte_Variable12345678, enum class ESlateVisibility Temp_byte_Variable123456789, enum class ESlateVisibility Temp_byte_Variable12345678910, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "UpdateBuildingInfo");

	Params::UBuildingInfoIndicator_C_UpdateBuildingInfo_Params Parms;
	Parms.NewBuildingInfo = NewBuildingInfo;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.Temp_byte_Variable1234 = Temp_byte_Variable1234;
	Parms.Temp_byte_Variable12345 = Temp_byte_Variable12345;
	Parms.Temp_byte_Variable123456 = Temp_byte_Variable123456;
	Parms.Temp_byte_Variable1234567 = Temp_byte_Variable1234567;
	Parms.Temp_byte_Variable12345678 = Temp_byte_Variable12345678;
	Parms.Temp_byte_Variable123456789 = Temp_byte_Variable123456789;
	Parms.Temp_byte_Variable12345678910 = Temp_byte_Variable12345678910;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBuildingInfoIndicator_C::Construct()
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "Construct");

	Params::UBuildingInfoIndicator_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildingInfoIndicator.BuildingInfoIndicator_C.ExecuteUbergraph_BuildingInfoIndicator
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123                          (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234                         (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345                        (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456                       (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234567                      (ZeroConstructor, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345678                     (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuildingInfoIndicator_C::ExecuteUbergraph_BuildingInfoIndicator(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, enum class ESlateVisibility Temp_byte_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, enum class ESlateVisibility Temp_byte_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortHUDContext* CallFunc_GetContext_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, bool CallFunc_IsBROnly_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BuildingInfoIndicator_C", "ExecuteUbergraph_BuildingInfoIndicator");

	Params::UBuildingInfoIndicator_C_ExecuteUbergraph_BuildingInfoIndicator_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.K2Node_CreateDelegate_OutputDelegate1234 = K2Node_CreateDelegate_OutputDelegate1234;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate12345 = K2Node_CreateDelegate_OutputDelegate12345;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_CreateDelegate_OutputDelegate123456 = K2Node_CreateDelegate_OutputDelegate123456;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate1234567 = K2Node_CreateDelegate_OutputDelegate1234567;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.K2Node_CreateDelegate_OutputDelegate12345678 = K2Node_CreateDelegate_OutputDelegate12345678;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
