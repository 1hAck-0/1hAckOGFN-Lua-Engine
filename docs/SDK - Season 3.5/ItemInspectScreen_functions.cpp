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


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshItemViewHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ZoomAllowed_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RotateAllowed_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::RefreshItemViewHandlerStates(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool Temp_bool_Variable1, enum class EInputActionState Temp_byte_Variable12, enum class EInputActionState Temp_byte_Variable123, bool CallFunc_ZoomAllowed_ReturnValue, bool CallFunc_RotateAllowed_ReturnValue, enum class EInputActionState K2Node_Select_Default, enum class EInputActionState K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "RefreshItemViewHandlerStates");

	Params::UItemInspectScreen_C_RefreshItemViewHandlerStates_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.CallFunc_ZoomAllowed_ReturnValue = CallFunc_ZoomAllowed_ReturnValue;
	Parms.CallFunc_RotateAllowed_ReturnValue = CallFunc_RotateAllowed_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.Setup Evolution Selection for Comparisons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecipeIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::Setup_Evolution_Selection_for_Comparisons(class UFortItem* Item, int32 RecipeIndex)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "Setup Evolution Selection for Comparisons");

	Params::UItemInspectScreen_C_Setup_Evolution_Selection_for_Comparisons_Params Parms;
	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetUpgradeRarityInputState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EInputActionState       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasRarityUpgrade_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EInputActionState UItemInspectScreen_C::GetUpgradeRarityInputState(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool CallFunc_HasRarityUpgrade_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue12, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "GetUpgradeRarityInputState");

	Params::UItemInspectScreen_C_GetUpgradeRarityInputState_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_HasRarityUpgrade_ReturnValue = CallFunc_HasRarityUpgrade_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue12 = CallFunc_BooleanAND_ReturnValue12;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetFavoriteInputState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EInputActionState       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EInputActionState UItemInspectScreen_C::GetFavoriteInputState(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "GetFavoriteInputState");

	Params::UItemInspectScreen_C_GetFavoriteInputState_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetEvolutionInputState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EInputActionState       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasEvolutions_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMaxLevel_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EInputActionState UItemInspectScreen_C::GetEvolutionInputState(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool CallFunc_HasEvolutions_ReturnValue, int32 CallFunc_GetMaxLevel_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "GetEvolutionInputState");

	Params::UItemInspectScreen_C_GetEvolutionInputState_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_HasEvolutions_ReturnValue = CallFunc_HasEvolutions_ReturnValue;
	Parms.CallFunc_GetMaxLevel_ReturnValue = CallFunc_GetMaxLevel_ReturnValue;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetViewInputState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EInputActionState       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSchematicOrCraftedWeapon_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EInputActionState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EInputActionState UItemInspectScreen_C::GetViewInputState(enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool Temp_bool_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsSchematicOrCraftedWeapon_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EInputActionState K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "GetViewInputState");

	Params::UItemInspectScreen_C_GetViewInputState_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsSchematicOrCraftedWeapon_ReturnValue = CallFunc_IsSchematicOrCraftedWeapon_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemInspectScreen.ItemInspectScreen_C.HideDisableAllInputActions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::HideDisableAllInputActions()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HideDisableAllInputActions");

	Params::UItemInspectScreen_C_HideDisableAllInputActions_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleUpgradeItemRarity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleUpgradeItemRarity(bool* Passthrough)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleUpgradeItemRarity");

	Params::UItemInspectScreen_C_HandleUpgradeItemRarity_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshExtraDetailsTabs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SelectedTabId                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTabCount_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetSelectedTabId_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectTabByID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetTabIdAtIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectTabByID_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTabCount_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortAlterationSlotStatus>CallFunc_GetAlterationSlots_ReturnValue                          (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHero*                   K2Node_DynamicCast_AsFort_Hero                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo     K2Node_MakeStruct_FortTabButtonLabelInfo                         ()
// bool                               CallFunc_RegisterFortTab_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorker*                 K2Node_DynamicCast_AsFort_Worker                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHero*                   K2Node_DynamicCast_AsFort_Hero1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess12                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSchematic_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo     K2Node_MakeStruct_FortTabButtonLabelInfo1                        ()
// struct FFortTabButtonLabelInfo     K2Node_MakeStruct_FortTabButtonLabelInfo12                       ()
// bool                               CallFunc_RegisterFortTab_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo     K2Node_MakeStruct_FortTabButtonLabelInfo123                      ()
// bool                               CallFunc_RegisterFortTab_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RegisterFortTab_ReturnValue123                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::RefreshExtraDetailsTabs(class FName SelectedTabId, int32 CallFunc_GetTabCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FName CallFunc_GetSelectedTabId_ReturnValue, bool CallFunc_SelectTabByID_ReturnValue, class FName CallFunc_GetTabIdAtIndex_ReturnValue, bool CallFunc_SelectTabByID_ReturnValue1, int32 CallFunc_GetTabCount_ReturnValue1, TArray<struct FFortAlterationSlotStatus>& CallFunc_GetAlterationSlots_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue12, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo, bool CallFunc_RegisterFortTab_ReturnValue, class UFortWorker* K2Node_DynamicCast_AsFort_Worker, bool K2Node_DynamicCast_bSuccess1, class UFortHero* K2Node_DynamicCast_AsFort_Hero1, bool K2Node_DynamicCast_bSuccess12, bool CallFunc_IsSchematic_ReturnValue, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo1, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo12, bool CallFunc_RegisterFortTab_ReturnValue1, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo123, bool CallFunc_RegisterFortTab_ReturnValue12, bool CallFunc_RegisterFortTab_ReturnValue123)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "RefreshExtraDetailsTabs");

	Params::UItemInspectScreen_C_RefreshExtraDetailsTabs_Params Parms;
	Parms.SelectedTabId = SelectedTabId;
	Parms.CallFunc_GetTabCount_ReturnValue = CallFunc_GetTabCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetSelectedTabId_ReturnValue = CallFunc_GetSelectedTabId_ReturnValue;
	Parms.CallFunc_SelectTabByID_ReturnValue = CallFunc_SelectTabByID_ReturnValue;
	Parms.CallFunc_GetTabIdAtIndex_ReturnValue = CallFunc_GetTabIdAtIndex_ReturnValue;
	Parms.CallFunc_SelectTabByID_ReturnValue1 = CallFunc_SelectTabByID_ReturnValue1;
	Parms.CallFunc_GetTabCount_ReturnValue1 = CallFunc_GetTabCount_ReturnValue1;
	Parms.CallFunc_GetAlterationSlots_ReturnValue = CallFunc_GetAlterationSlots_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue12 = CallFunc_Greater_IntInt_ReturnValue12;
	Parms.K2Node_DynamicCast_AsFort_Hero = K2Node_DynamicCast_AsFort_Hero;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_FortTabButtonLabelInfo = K2Node_MakeStruct_FortTabButtonLabelInfo;
	Parms.CallFunc_RegisterFortTab_ReturnValue = CallFunc_RegisterFortTab_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Worker = K2Node_DynamicCast_AsFort_Worker;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_DynamicCast_AsFort_Hero1 = K2Node_DynamicCast_AsFort_Hero1;
	Parms.K2Node_DynamicCast_bSuccess12 = K2Node_DynamicCast_bSuccess12;
	Parms.CallFunc_IsSchematic_ReturnValue = CallFunc_IsSchematic_ReturnValue;
	Parms.K2Node_MakeStruct_FortTabButtonLabelInfo1 = K2Node_MakeStruct_FortTabButtonLabelInfo1;
	Parms.K2Node_MakeStruct_FortTabButtonLabelInfo12 = K2Node_MakeStruct_FortTabButtonLabelInfo12;
	Parms.CallFunc_RegisterFortTab_ReturnValue1 = CallFunc_RegisterFortTab_ReturnValue1;
	Parms.K2Node_MakeStruct_FortTabButtonLabelInfo123 = K2Node_MakeStruct_FortTabButtonLabelInfo123;
	Parms.CallFunc_RegisterFortTab_ReturnValue12 = CallFunc_RegisterFortTab_ReturnValue12;
	Parms.CallFunc_RegisterFortTab_ReturnValue123 = CallFunc_RegisterFortTab_ReturnValue123;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnItemCycleChangedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   NewItemToRepresent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::OnItemCycleChangedItem(class UFortItem* NewItemToRepresent)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "OnItemCycleChangedItem");

	Params::UItemInspectScreen_C_OnItemCycleChangedItem_Params Parms;
	Parms.NewItemToRepresent = NewItemToRepresent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.Passthrough
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::Passthrough(bool* Passthrough)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "Passthrough");

	Params::UItemInspectScreen_C_Passthrough_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetInspectModeForChildPanels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortItemInspectionMode NewInspectMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::SetInspectModeForChildPanels(enum class EFortItemInspectionMode NewInspectMode)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "SetInspectModeForChildPanels");

	Params::UItemInspectScreen_C_SetInspectModeForChildPanels_Params Parms;
	Parms.NewInspectMode = NewInspectMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetTabButtonStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::SetTabButtonStyle(class UObject* Object, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "SetTabButtonStyle");

	Params::UItemInspectScreen_C_SetTabButtonStyle_Params Parms;
	Parms.Object = Object;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.ShowPreviewHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowPreviewLabel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::ShowPreviewHeader(bool ShowPreviewLabel, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "ShowPreviewHeader");

	Params::UItemInspectScreen_C_ShowPreviewHeader_Params Parms;
	Parms.ShowPreviewLabel = ShowPreviewLabel;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshCallout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::RefreshCallout(bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "RefreshCallout");

	Params::UItemInspectScreen_C_RefreshCallout_Params Parms;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshActionHandlers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       CallFunc_GetUpgradeRarityInputState_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       CallFunc_GetFavoriteInputState_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       CallFunc_GetEvolutionInputState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputActionState       CallFunc_GetViewInputState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::RefreshActionHandlers(class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue, enum class EInputActionState CallFunc_GetUpgradeRarityInputState_ReturnValue, enum class EInputActionState CallFunc_GetFavoriteInputState_ReturnValue, enum class EInputActionState CallFunc_GetEvolutionInputState_ReturnValue, enum class EInputActionState CallFunc_GetViewInputState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "RefreshActionHandlers");

	Params::UItemInspectScreen_C_RefreshActionHandlers_Params Parms;
	Parms.CallFunc_GetCycleWidget_ReturnValue = CallFunc_GetCycleWidget_ReturnValue;
	Parms.CallFunc_GetUpgradeRarityInputState_ReturnValue = CallFunc_GetUpgradeRarityInputState_ReturnValue;
	Parms.CallFunc_GetFavoriteInputState_ReturnValue = CallFunc_GetFavoriteInputState_ReturnValue;
	Parms.CallFunc_GetEvolutionInputState_ReturnValue = CallFunc_GetEvolutionInputState_ReturnValue;
	Parms.CallFunc_GetViewInputState_ReturnValue = CallFunc_GetViewInputState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionComplete
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair>ResultingItems                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FFortItemInstanceQuantityPairCallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleEvolutionComplete(TArray<struct FFortItemInstanceQuantityPair>& ResultingItems, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleEvolutionComplete");

	Params::UItemInspectScreen_C_HandleEvolutionComplete_Params Parms;
	Parms.ResultingItems = ResultingItems;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshOnUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::RefreshOnUpgrade()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "RefreshOnUpgrade");

	Params::UItemInspectScreen_C_RefreshOnUpgrade_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleCursorModeChanging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleBack_PassThrough                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleCursorModeChanging(bool IsEnabled, bool CallFunc_HandleBack_PassThrough, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleCursorModeChanging");

	Params::UItemInspectScreen_C_HandleCursorModeChanging_Params Parms;
	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_HandleBack_PassThrough = CallFunc_HandleBack_PassThrough;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OpenItemInspect (Function)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   ItemToInspect                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemInspectionMode Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldAllowUpgrading                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShouldAllowEvolution                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShouldAllowFavoriting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShouldShowPreviewDisplay                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Allow_Rarity_Upgrading                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::OpenItemInspect__Function_(class UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavoriting, bool ShouldShowPreviewDisplay, bool Allow_Rarity_Upgrading)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "OpenItemInspect (Function)");

	Params::UItemInspectScreen_C_OpenItemInspect__Function__Params Parms;
	Parms.ItemToInspect = ItemToInspect;
	Parms.Mode = Mode;
	Parms.ShouldAllowUpgrading = ShouldAllowUpgrading;
	Parms.ShouldAllowEvolution = ShouldAllowEvolution;
	Parms.ShouldAllowFavoriting = ShouldAllowFavoriting;
	Parms.ShouldShowPreviewDisplay = ShouldShowPreviewDisplay;
	Parms.Allow_Rarity_Upgrading = Allow_Rarity_Upgrading;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.ResetDetailsPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::ResetDetailsPanel()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "ResetDetailsPanel");

	Params::UItemInspectScreen_C_ResetDetailsPanel_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetupActionHandlers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle1                            (NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle12                           (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123                          (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle123                          (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234                         (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle1234                         (NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle12345                        (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345                        (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456                       (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle123456                       (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234567                      (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle1234567                      (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345678                     (ZeroConstructor, NoDestructor)
// enum class EInputActionState       CallFunc_GetUpgradeRarityInputState_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle12345678                     (NoDestructor)

void UItemInspectScreen_C::SetupActionHandlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1234, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1234567, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, enum class EInputActionState CallFunc_GetUpgradeRarityInputState_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle12345678)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "SetupActionHandlers");

	Params::UItemInspectScreen_C_SetupActionHandlers_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_MakeStruct_DataTableRowHandle1 = K2Node_MakeStruct_DataTableRowHandle1;
	Parms.K2Node_MakeStruct_DataTableRowHandle12 = K2Node_MakeStruct_DataTableRowHandle12;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.K2Node_MakeStruct_DataTableRowHandle123 = K2Node_MakeStruct_DataTableRowHandle123;
	Parms.K2Node_CreateDelegate_OutputDelegate1234 = K2Node_CreateDelegate_OutputDelegate1234;
	Parms.K2Node_MakeStruct_DataTableRowHandle1234 = K2Node_MakeStruct_DataTableRowHandle1234;
	Parms.K2Node_MakeStruct_DataTableRowHandle12345 = K2Node_MakeStruct_DataTableRowHandle12345;
	Parms.K2Node_CreateDelegate_OutputDelegate12345 = K2Node_CreateDelegate_OutputDelegate12345;
	Parms.K2Node_CreateDelegate_OutputDelegate123456 = K2Node_CreateDelegate_OutputDelegate123456;
	Parms.K2Node_MakeStruct_DataTableRowHandle123456 = K2Node_MakeStruct_DataTableRowHandle123456;
	Parms.K2Node_CreateDelegate_OutputDelegate1234567 = K2Node_CreateDelegate_OutputDelegate1234567;
	Parms.K2Node_MakeStruct_DataTableRowHandle1234567 = K2Node_MakeStruct_DataTableRowHandle1234567;
	Parms.K2Node_CreateDelegate_OutputDelegate12345678 = K2Node_CreateDelegate_OutputDelegate12345678;
	Parms.CallFunc_GetUpgradeRarityInputState_ReturnValue = CallFunc_GetUpgradeRarityInputState_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle12345678 = K2Node_MakeStruct_DataTableRowHandle12345678;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.GetFirstEvolutionOption
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   EvolutionItem                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemQuantityPair>Results                                                          (Edit, BlueprintVisible, ZeroConstructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemQuantityPair       CallFunc_Array_Get_Item                                          ()
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemFromItemQuantityPair_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FRecipe>             CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue       (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRecipe                     CallFunc_Array_Get_Item1                                         ()
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::GetFirstEvolutionOption(class UFortItem** EvolutionItem, const TArray<struct FFortItemQuantityPair>& Results, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, TArray<struct FRecipe>& CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRecipe& CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "GetFirstEvolutionOption");

	Params::UItemInspectScreen_C_GetFirstEvolutionOption_Params Parms;
	Parms.Results = Results;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetItemFromItemQuantityPair_ReturnValue = CallFunc_GetItemFromItemQuantityPair_ReturnValue;
	Parms.CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue = CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EvolutionItem != nullptr)
		*EvolutionItem = Parms.EvolutionItem;

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecipeIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::HandleEvolutionChoiceSelected(class UFortItem* Item, int32 RecipeIndex)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleEvolutionChoiceSelected");

	Params::UItemInspectScreen_C_HandleEvolutionChoiceSelected_Params Parms;
	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::HandleEvolutionChoiceUnhovered(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleEvolutionChoiceUnhovered");

	Params::UItemInspectScreen_C_HandleEvolutionChoiceUnhovered_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::HandleEvolutionChoiceHovered(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleEvolutionChoiceHovered");

	Params::UItemInspectScreen_C_HandleEvolutionChoiceHovered_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetInspectMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortItemInspectionMode NewInspectMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::SetInspectMode(enum class EFortItemInspectionMode NewInspectMode, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "SetInspectMode");

	Params::UItemInspectScreen_C_SetInspectMode_Params Parms;
	Parms.NewInspectMode = NewInspectMode;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleUpgrade(bool* Passthrough)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleUpgrade");

	Params::UItemInspectScreen_C_HandleUpgrade_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolution
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleEvolution(bool* Passthrough)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleEvolution");

	Params::UItemInspectScreen_C_HandleEvolution_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleView
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleView(bool* Passthrough)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleView");

	Params::UItemInspectScreen_C_HandleView_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleFavorite
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFavorite_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::HandleFavorite(bool* Passthrough, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFavorite_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleFavorite");

	Params::UItemInspectScreen_C_HandleFavorite_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsFavorite_ReturnValue = CallFunc_IsFavorite_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::HandleBack(bool* Passthrough, bool K2Node_SwitchEnum_CmpSuccess, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "HandleBack");

	Params::UItemInspectScreen_C_HandleBack_Params Parms;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function ItemInspectScreen.ItemInspectScreen_C.SetItemToRepresent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::SetItemToRepresent(class UFortItem* Item, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "SetItemToRepresent");

	Params::UItemInspectScreen_C_SetItemToRepresent_Params Parms;
	Parms.Item = Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203");

	Params::UItemInspectScreen_C_OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__InspectedItem_K2Node_ComponentBoundEvent_9_FortOnItemChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bItemChanged                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAmmoChanged                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIngredientsChanged                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::BndEvt__InspectedItem_K2Node_ComponentBoundEvent_9_FortOnItemChangedDelegate__DelegateSignature(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__InspectedItem_K2Node_ComponentBoundEvent_9_FortOnItemChangedDelegate__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__InspectedItem_K2Node_ComponentBoundEvent_9_FortOnItemChangedDelegate__DelegateSignature_Params Parms;
	Parms.bItemChanged = bItemChanged;
	Parms.bAmmoChanged = bAmmoChanged;
	Parms.bIngredientsChanged = bIngredientsChanged;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__InspectedItem_K2Node_ComponentBoundEvent_10_FortOnItemDestroyedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::BndEvt__InspectedItem_K2Node_ComponentBoundEvent_10_FortOnItemDestroyedDelegate__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__InspectedItem_K2Node_ComponentBoundEvent_10_FortOnItemDestroyedDelegate__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__InspectedItem_K2Node_ComponentBoundEvent_10_FortOnItemDestroyedDelegate__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecipeIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature(class UFortItem* Item, int32 RecipeIndex)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature_Params Parms;
	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "OnActivated");

	Params::UItemInspectScreen_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OpenItemInspect
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   ItemToInspect                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemInspectionMode Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldAllowUpgrading                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShouldAllowEvolution                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShouldAllowFavorite                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsTemporaryItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAllowRarityUpgrading                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::OpenItemInspect(class UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavorite, bool IsTemporaryItem, bool bAllowRarityUpgrading)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "OpenItemInspect");

	Params::UItemInspectScreen_C_OpenItemInspect_Params Parms;
	Parms.ItemToInspect = ItemToInspect;
	Parms.Mode = Mode;
	Parms.ShouldAllowUpgrading = ShouldAllowUpgrading;
	Parms.ShouldAllowEvolution = ShouldAllowEvolution;
	Parms.ShouldAllowFavorite = ShouldAllowFavorite;
	Parms.IsTemporaryItem = IsTemporaryItem;
	Parms.bAllowRarityUpgrading = bAllowRarityUpgrading;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::Destruct()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "Destruct");

	Params::UItemInspectScreen_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "OnDeactivated");

	Params::UItemInspectScreen_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__DetailPanelTabList-PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::BndEvt__DetailPanelTabList_PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__DetailPanelTabList-PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__DetailPanelTabList_PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature_Params Parms;
	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectScreen_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "OnInputModeChanged");

	Params::UItemInspectScreen_C_OnInputModeChanged_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_34_OnEvolutionConfirm__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_34_OnEvolutionConfirm__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_34_OnEvolutionConfirm__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_34_OnEvolutionConfirm__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecipeIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature(class UFortItem* Item, int32 RecipeIndex)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature");

	Params::UItemInspectScreen_C_BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature_Params Parms;
	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemInspectScreen_C::Construct()
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "Construct");

	Params::UItemInspectScreen_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectScreen.ItemInspectScreen_C.ExecuteUbergraph_ItemInspectScreen
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue1234                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue12345                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue123456                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bItemChanged                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bAmmoChanged                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bIngredientsChanged                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleBack_PassThrough                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleBack_PassThrough1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue1234567                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_ComponentBoundEvent_Item1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_RecipeIndex1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue12345678                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_Event_ItemToInspect                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemInspectionMode K2Node_Event_Mode                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ShouldAllowUpgrading                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_ShouldAllowEvolution                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_ShouldAllowFavorite                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsTemporaryItem                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bAllowRarityUpgrading                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue123456789                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HandleUpgrade_PassThrough                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxLevel_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleEvolution_PassThrough                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemView_C*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue12345678910                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_MCPContextUpgradeItem*CallFunc_UpgradeItem_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsingGamepad                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123                          (ZeroConstructor, NoDestructor)
// class UFortItem*                   K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_RecipeIndex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234                         (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345                        (ZeroConstructor, NoDestructor)
// class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue12                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectScreen_C::ExecuteUbergraph_ItemInspectScreen(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class UFortMcpContext* CallFunc_GetContext_ReturnValue12, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123, class UFortMcpContext* CallFunc_GetContext_ReturnValue1234, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345, bool Temp_bool_Variable, bool CallFunc_IsInZone_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortMcpContext* CallFunc_GetContext_ReturnValue123456, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_ComponentBoundEvent_bItemChanged, bool K2Node_ComponentBoundEvent_bAmmoChanged, bool K2Node_ComponentBoundEvent_bIngredientsChanged, bool CallFunc_HandleBack_PassThrough, bool CallFunc_HandleBack_PassThrough1, class UFortHUDContext* CallFunc_GetContext_ReturnValue1234567, class UFortItem* K2Node_ComponentBoundEvent_Item1, int32 K2Node_ComponentBoundEvent_RecipeIndex1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue12345678, class UFortItem* K2Node_Event_ItemToInspect, enum class EFortItemInspectionMode K2Node_Event_Mode, bool K2Node_Event_ShouldAllowUpgrading, bool K2Node_Event_ShouldAllowEvolution, bool K2Node_Event_ShouldAllowFavorite, bool K2Node_Event_IsTemporaryItem, bool K2Node_Event_bAllowRarityUpgrading, class UFortMcpContext* CallFunc_GetContext_ReturnValue123456789, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HandleUpgrade_PassThrough, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_GetMaxLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HandleEvolution_PassThrough, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UItemView_C* CallFunc_Create_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue12345678910, class UFortAsyncAction_MCPContextUpgradeItem* CallFunc_UpgradeItem_ReturnValue, bool K2Node_Event_bUsingGamepad, bool CallFunc_IsValid_ReturnValue, class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class UFortItem* K2Node_ComponentBoundEvent_Item, int32 K2Node_ComponentBoundEvent_RecipeIndex, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue12)
{
	static auto Func = Class->GetFunction("ItemInspectScreen_C", "ExecuteUbergraph_ItemInspectScreen");

	Params::UItemInspectScreen_C_ExecuteUbergraph_ItemInspectScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_GetContext_ReturnValue123 = CallFunc_GetContext_ReturnValue123;
	Parms.CallFunc_GetContext_ReturnValue1234 = CallFunc_GetContext_ReturnValue1234;
	Parms.CallFunc_GetContext_ReturnValue12345 = CallFunc_GetContext_ReturnValue12345;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue123456 = CallFunc_GetContext_ReturnValue123456;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_bItemChanged = K2Node_ComponentBoundEvent_bItemChanged;
	Parms.K2Node_ComponentBoundEvent_bAmmoChanged = K2Node_ComponentBoundEvent_bAmmoChanged;
	Parms.K2Node_ComponentBoundEvent_bIngredientsChanged = K2Node_ComponentBoundEvent_bIngredientsChanged;
	Parms.CallFunc_HandleBack_PassThrough = CallFunc_HandleBack_PassThrough;
	Parms.CallFunc_HandleBack_PassThrough1 = CallFunc_HandleBack_PassThrough1;
	Parms.CallFunc_GetContext_ReturnValue1234567 = CallFunc_GetContext_ReturnValue1234567;
	Parms.K2Node_ComponentBoundEvent_Item1 = K2Node_ComponentBoundEvent_Item1;
	Parms.K2Node_ComponentBoundEvent_RecipeIndex1 = K2Node_ComponentBoundEvent_RecipeIndex1;
	Parms.CallFunc_GetContext_ReturnValue12345678 = CallFunc_GetContext_ReturnValue12345678;
	Parms.K2Node_Event_ItemToInspect = K2Node_Event_ItemToInspect;
	Parms.K2Node_Event_Mode = K2Node_Event_Mode;
	Parms.K2Node_Event_ShouldAllowUpgrading = K2Node_Event_ShouldAllowUpgrading;
	Parms.K2Node_Event_ShouldAllowEvolution = K2Node_Event_ShouldAllowEvolution;
	Parms.K2Node_Event_ShouldAllowFavorite = K2Node_Event_ShouldAllowFavorite;
	Parms.K2Node_Event_IsTemporaryItem = K2Node_Event_IsTemporaryItem;
	Parms.K2Node_Event_bAllowRarityUpgrading = K2Node_Event_bAllowRarityUpgrading;
	Parms.CallFunc_GetContext_ReturnValue123456789 = CallFunc_GetContext_ReturnValue123456789;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HandleUpgrade_PassThrough = CallFunc_HandleUpgrade_PassThrough;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_GetMaxLevel_ReturnValue = CallFunc_GetMaxLevel_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_HandleEvolution_PassThrough = CallFunc_HandleEvolution_PassThrough;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue12345678910 = CallFunc_GetContext_ReturnValue12345678910;
	Parms.CallFunc_UpgradeItem_ReturnValue = CallFunc_UpgradeItem_ReturnValue;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCycleWidget_ReturnValue = CallFunc_GetCycleWidget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.CallFunc_GetCycleWidget_ReturnValue1 = CallFunc_GetCycleWidget_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_RecipeIndex = K2Node_ComponentBoundEvent_RecipeIndex;
	Parms.K2Node_CreateDelegate_OutputDelegate1234 = K2Node_CreateDelegate_OutputDelegate1234;
	Parms.K2Node_CreateDelegate_OutputDelegate12345 = K2Node_CreateDelegate_OutputDelegate12345;
	Parms.CallFunc_GetCycleWidget_ReturnValue12 = CallFunc_GetCycleWidget_ReturnValue12;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
