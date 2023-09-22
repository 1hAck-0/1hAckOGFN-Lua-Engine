// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemInspectScreen.ItemInspectScreen_C.GetRefundHelpActions
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FConfirmationDialogAction> ConfirmActions                 (Parm, OutParm, ZeroConstructor)
// struct FName                   DeclineAction                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::GetRefundHelpActions(TArray<struct FConfirmationDialogAction>* ConfirmActions, struct FName* DeclineAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.GetRefundHelpActions");

	UItemInspectScreen_C_GetRefundHelpActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConfirmActions != nullptr)
		*ConfirmActions = params.ConfirmActions;
	if (DeclineAction != nullptr)
		*DeclineAction = params.DeclineAction;
}


// Function ItemInspectScreen.ItemInspectScreen_C.ShouldShowRefundMessage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldShowRefundMessage        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   RefundDescriptionText          (Parm, OutParm)

void UItemInspectScreen_C::ShouldShowRefundMessage(bool* ShouldShowRefundMessage, struct FText* RefundDescriptionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.ShouldShowRefundMessage");

	UItemInspectScreen_C_ShouldShowRefundMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldShowRefundMessage != nullptr)
		*ShouldShowRefundMessage = params.ShouldShowRefundMessage;
	if (RefundDescriptionText != nullptr)
		*RefundDescriptionText = params.RefundDescriptionText;
}


// Function ItemInspectScreen.ItemInspectScreen_C.ShowRefundConfirmationModalWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::ShowRefundConfirmationModalWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.ShowRefundConfirmationModalWidget");

	UItemInspectScreen_C_ShowRefundConfirmationModalWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.GetRefundPopupInputActionState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EInputActionState              State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::GetRefundPopupInputActionState(EInputActionState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.GetRefundPopupInputActionState");

	UItemInspectScreen_C_GetRefundPopupInputActionState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function ItemInspectScreen.ItemInspectScreen_C.ShowRefundHelpIfNecessary
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::ShowRefundHelpIfNecessary()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.ShowRefundHelpIfNecessary");

	UItemInspectScreen_C_ShowRefundHelpIfNecessary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.CreateRefundPopupMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::CreateRefundPopupMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.CreateRefundPopupMenu");

	UItemInspectScreen_C_CreateRefundPopupMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleRefundPopup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::HandleRefundPopup(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleRefundPopup");

	UItemInspectScreen_C_HandleRefundPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleShowUpgradeTutorial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::HandleShowUpgradeTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleShowUpgradeTutorial");

	UItemInspectScreen_C_HandleShowUpgradeTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.CheckForSideTutorialQuests
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RelevantSideQuestFound         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::CheckForSideTutorialQuests(bool* RelevantSideQuestFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.CheckForSideTutorialQuests");

	UItemInspectScreen_C_CheckForSideTutorialQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantSideQuestFound != nullptr)
		*RelevantSideQuestFound = params.RelevantSideQuestFound;
}


// Function ItemInspectScreen.ItemInspectScreen_C.AlterationQuestComplete
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           QuestComplete                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::AlterationQuestComplete(bool* QuestComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.AlterationQuestComplete");

	UItemInspectScreen_C_AlterationQuestComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestComplete != nullptr)
		*QuestComplete = params.QuestComplete;
}


// Function ItemInspectScreen.ItemInspectScreen_C.UpgradeQuestComplete
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           QuestIsComplete                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::UpgradeQuestComplete(bool* QuestIsComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.UpgradeQuestComplete");

	UItemInspectScreen_C_UpgradeQuestComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestIsComplete != nullptr)
		*QuestIsComplete = params.QuestIsComplete;
}


// Function ItemInspectScreen.ItemInspectScreen_C.SetupUpgrades
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::SetupUpgrades()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.SetupUpgrades");

	UItemInspectScreen_C_SetupUpgrades_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.SetupScrollWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::SetupScrollWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.SetupScrollWidget");

	UItemInspectScreen_C_SetupScrollWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.GetRequiredTagContainer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItemDefinition*     ItemDef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasRequiredTag                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   RequiredTagContainer           (Parm, OutParm)

void UItemInspectScreen_C::GetRequiredTagContainer(class UFortItemDefinition* ItemDef, bool* HasRequiredTag, struct FGameplayTagContainer* RequiredTagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.GetRequiredTagContainer");

	UItemInspectScreen_C_GetRequiredTagContainer_Params params;
	params.ItemDef = ItemDef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasRequiredTag != nullptr)
		*HasRequiredTag = params.HasRequiredTag;
	if (RequiredTagContainer != nullptr)
		*RequiredTagContainer = params.RequiredTagContainer;
}


// Function ItemInspectScreen.ItemInspectScreen_C.SchematicRequirementsMet
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemInspectScreen_C::SchematicRequirementsMet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.SchematicRequirementsMet");

	UItemInspectScreen_C_SchematicRequirementsMet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemInspectScreen.ItemInspectScreen_C.MeetsQuestRequirements
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemInspectScreen_C::MeetsQuestRequirements()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.MeetsQuestRequirements");

	UItemInspectScreen_C_MeetsQuestRequirements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemInspectScreen.ItemInspectScreen_C.IsAlterableItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemInspectScreen_C::IsAlterableItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.IsAlterableItem");

	UItemInspectScreen_C_IsAlterableItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemInspectScreen.ItemInspectScreen_C.CreateUpgradePopupMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::CreateUpgradePopupMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.CreateUpgradePopupMenu");

	UItemInspectScreen_C_CreateUpgradePopupMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleAlterationModify
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::HandleAlterationModify()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleAlterationModify");

	UItemInspectScreen_C_HandleAlterationModify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.GetItemActionSwitcherVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::GetItemActionSwitcherVisibility(ESlateVisibility* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.GetItemActionSwitcherVisibility");

	UItemInspectScreen_C_GetItemActionSwitcherVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function ItemInspectScreen.ItemInspectScreen_C.GetUpgradeItemInputActionState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EInputActionState              Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::GetUpgradeItemInputActionState(EInputActionState* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.GetUpgradeItemInputActionState");

	UItemInspectScreen_C_GetUpgradeItemInputActionState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function ItemInspectScreen.ItemInspectScreen_C.GetAlterationModifyVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::GetAlterationModifyVisibility(ESlateVisibility* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.GetAlterationModifyVisibility");

	UItemInspectScreen_C_GetAlterationModifyVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function ItemInspectScreen.ItemInspectScreen_C.SetOverviewActionsInputState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputActionState              State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::SetOverviewActionsInputState(EInputActionState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.SetOverviewActionsInputState");

	UItemInspectScreen_C_SetOverviewActionsInputState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.GetLevelUpVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::GetLevelUpVisibility(ESlateVisibility* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.GetLevelUpVisibility");

	UItemInspectScreen_C_GetLevelUpVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleSchematicUpgradeOptions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::HandleSchematicUpgradeOptions(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleSchematicUpgradeOptions");

	UItemInspectScreen_C_HandleSchematicUpgradeOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function ItemInspectScreen.ItemInspectScreen_C.UpdateInspectionMode
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::UpdateInspectionMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.UpdateInspectionMode");

	UItemInspectScreen_C_UpdateInspectionMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.GetWindowTitleBarVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UItemInspectScreen_C::GetWindowTitleBarVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.GetWindowTitleBarVisibility");

	UItemInspectScreen_C_GetWindowTitleBarVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemInspectScreen.ItemInspectScreen_C.UnbindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::UnbindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.UnbindDelegates");

	UItemInspectScreen_C_UnbindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.BindDelegates");

	UItemInspectScreen_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.GetWidgetForFramingViewedItem
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UItemInspectScreen_C::GetWidgetForFramingViewedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.GetWidgetForFramingViewedItem");

	UItemInspectScreen_C_GetWidgetForFramingViewedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshItemViewHandlerStates
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::RefreshItemViewHandlerStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.RefreshItemViewHandlerStates");

	UItemInspectScreen_C_RefreshItemViewHandlerStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.Setup Evolution Selection for Comparisons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RecipeIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::Setup_Evolution_Selection_for_Comparisons(class UFortItem* Item, int RecipeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.Setup Evolution Selection for Comparisons");

	UItemInspectScreen_C_Setup_Evolution_Selection_for_Comparisons_Params params;
	params.Item = Item;
	params.RecipeIndex = RecipeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.GetUpgradeRarityVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UItemInspectScreen_C::GetUpgradeRarityVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.GetUpgradeRarityVisibility");

	UItemInspectScreen_C_GetUpgradeRarityVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemInspectScreen.ItemInspectScreen_C.GetFavoriteInputState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EInputActionState              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EInputActionState UItemInspectScreen_C::GetFavoriteInputState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.GetFavoriteInputState");

	UItemInspectScreen_C_GetFavoriteInputState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemInspectScreen.ItemInspectScreen_C.GetEvolutionVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UItemInspectScreen_C::GetEvolutionVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.GetEvolutionVisibility");

	UItemInspectScreen_C_GetEvolutionVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemInspectScreen.ItemInspectScreen_C.GetViewInputState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EInputActionState              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EInputActionState UItemInspectScreen_C::GetViewInputState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.GetViewInputState");

	UItemInspectScreen_C_GetViewInputState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemInspectScreen.ItemInspectScreen_C.SetAllInputActionStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputActionState              InputActionState               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::SetAllInputActionStates(EInputActionState InputActionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.SetAllInputActionStates");

	UItemInspectScreen_C_SetAllInputActionStates_Params params;
	params.InputActionState = InputActionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleUpgradeItemRarity
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::HandleUpgradeItemRarity()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleUpgradeItemRarity");

	UItemInspectScreen_C_HandleUpgradeItemRarity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshExtraDetailsTabs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::RefreshExtraDetailsTabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.RefreshExtraDetailsTabs");

	UItemInspectScreen_C_RefreshExtraDetailsTabs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.OnItemCycleChangedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               NewItemToRepresent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::OnItemCycleChangedItem(class UFortItem* NewItemToRepresent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.OnItemCycleChangedItem");

	UItemInspectScreen_C_OnItemCycleChangedItem_Params params;
	params.NewItemToRepresent = NewItemToRepresent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.SetInspectModeForChildPanels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortItemInspectionMode        NewInspectMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::SetInspectModeForChildPanels(EFortItemInspectionMode NewInspectMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.SetInspectModeForChildPanels");

	UItemInspectScreen_C_SetInspectModeForChildPanels_Params params;
	params.NewInspectMode = NewInspectMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.SetTabButtonStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::SetTabButtonStyle(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.SetTabButtonStyle");

	UItemInspectScreen_C_SetTabButtonStyle_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.ShowPreviewHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowPreviewLabel               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::ShowPreviewHeader(bool ShowPreviewLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.ShowPreviewHeader");

	UItemInspectScreen_C_ShowPreviewHeader_Params params;
	params.ShowPreviewLabel = ShowPreviewLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshCallout
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::RefreshCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.RefreshCallout");

	UItemInspectScreen_C_RefreshCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshActionHandlers
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::RefreshActionHandlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.RefreshActionHandlers");

	UItemInspectScreen_C_RefreshActionHandlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionComplete
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair> ResultingItems                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemInspectScreen_C::HandleEvolutionComplete(TArray<struct FFortItemInstanceQuantityPair>* ResultingItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionComplete");

	UItemInspectScreen_C_HandleEvolutionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultingItems != nullptr)
		*ResultingItems = params.ResultingItems;
}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshOnUpgrade
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::RefreshOnUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.RefreshOnUpgrade");

	UItemInspectScreen_C_RefreshOnUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleCursorModeChanging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::HandleCursorModeChanging(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleCursorModeChanging");

	UItemInspectScreen_C_HandleCursorModeChanging_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.ResetDetailsPanel
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::ResetDetailsPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.ResetDetailsPanel");

	UItemInspectScreen_C_ResetDetailsPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.SetupActionHandlers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::SetupActionHandlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.SetupActionHandlers");

	UItemInspectScreen_C_SetupActionHandlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.GetFirstEvolutionOption
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               EvolutionItem                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::GetFirstEvolutionOption(class UFortItem** EvolutionItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.GetFirstEvolutionOption");

	UItemInspectScreen_C_GetFirstEvolutionOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EvolutionItem != nullptr)
		*EvolutionItem = params.EvolutionItem;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RecipeIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::HandleEvolutionChoiceSelected(class UFortItem* Item, int RecipeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceSelected");

	UItemInspectScreen_C_HandleEvolutionChoiceSelected_Params params;
	params.Item = Item;
	params.RecipeIndex = RecipeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::HandleEvolutionChoiceUnhovered(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceUnhovered");

	UItemInspectScreen_C_HandleEvolutionChoiceUnhovered_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::HandleEvolutionChoiceHovered(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceHovered");

	UItemInspectScreen_C_HandleEvolutionChoiceHovered_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleUpgrade
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::HandleUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleUpgrade");

	UItemInspectScreen_C_HandleUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolution
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::HandleEvolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolution");

	UItemInspectScreen_C_HandleEvolution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleView
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::HandleView(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleView");

	UItemInspectScreen_C_HandleView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleFavorite
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::HandleFavorite(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleFavorite");

	UItemInspectScreen_C_HandleFavorite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleBack");

	UItemInspectScreen_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemInspectScreen.ItemInspectScreen_C.OnMCPRequestComplete
// (BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::OnMCPRequestComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.OnMCPRequestComplete");

	UItemInspectScreen_C_OnMCPRequestComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.DialogResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::DialogResult(EFortDialogResult Result, struct FName ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.DialogResult");

	UItemInspectScreen_C_DialogResult_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RecipeIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent(class UFortItem* Item, int RecipeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent");

	UItemInspectScreen_C_BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_Params params;
	params.Item = Item;
	params.RecipeIndex = RecipeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent
// (BlueprintEvent)

void UItemInspectScreen_C::BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent");

	UItemInspectScreen_C_BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UItemInspectScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.OnActivated");

	UItemInspectScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemInspectScreen_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.Destruct");

	UItemInspectScreen_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UItemInspectScreen_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.OnDeactivated");

	UItemInspectScreen_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__DetailPanelTabList-PC_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemInspectScreen_C::BndEvt__DetailPanelTabList_PC_K2Node_ComponentBoundEvent(struct FName TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__DetailPanelTabList-PC_K2Node_ComponentBoundEvent");

	UItemInspectScreen_C_BndEvt__DetailPanelTabList_PC_K2Node_ComponentBoundEvent_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.OnInputModeChanged");

	UItemInspectScreen_C_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent
// (BlueprintEvent)

void UItemInspectScreen_C::BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent");

	UItemInspectScreen_C_BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleIsPreviewingChanged
// (Event, Protected, BlueprintEvent)

void UItemInspectScreen_C::HandleIsPreviewingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleIsPreviewingChanged");

	UItemInspectScreen_C_HandleIsPreviewingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleDifferentItemToInspectSetBP
// (Event, Protected, BlueprintEvent)

void UItemInspectScreen_C::HandleDifferentItemToInspectSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleDifferentItemToInspectSetBP");

	UItemInspectScreen_C_HandleDifferentItemToInspectSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleDifferentInspectionModeSetBP
// (Event, Protected, BlueprintEvent)

void UItemInspectScreen_C::HandleDifferentInspectionModeSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleDifferentInspectionModeSetBP");

	UItemInspectScreen_C_HandleDifferentInspectionModeSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleItemToInspectChangedBP
// (Event, Protected, BlueprintEvent)

void UItemInspectScreen_C::HandleItemToInspectChangedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleItemToInspectChangedBP");

	UItemInspectScreen_C_HandleItemToInspectChangedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleItemToInspectDestroyedBP
// (Event, Protected, BlueprintEvent)

void UItemInspectScreen_C::HandleItemToInspectDestroyedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleItemToInspectDestroyedBP");

	UItemInspectScreen_C_HandleItemToInspectDestroyedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent
// (BlueprintEvent)

void UItemInspectScreen_C::BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent");

	UItemInspectScreen_C_BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemInspectScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.Construct");

	UItemInspectScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.OnRemovedFromActivationStack
// (Event, Protected, BlueprintEvent)

void UItemInspectScreen_C::OnRemovedFromActivationStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.OnRemovedFromActivationStack");

	UItemInspectScreen_C_OnRemovedFromActivationStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.ShowRefundHelp
// (BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::ShowRefundHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.ShowRefundHelp");

	UItemInspectScreen_C_ShowRefundHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleRefundItem
// (BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::HandleRefundItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleRefundItem");

	UItemInspectScreen_C_HandleRefundItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.OnRefundItemConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*        ItemToRefund                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::OnRefundItemConfirmed(class UFortAccountItem* ItemToRefund)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.OnRefundItemConfirmed");

	UItemInspectScreen_C_OnRefundItemConfirmed_Params params;
	params.ItemToRefund = ItemToRefund;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.ExecuteUbergraph_ItemInspectScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::ExecuteUbergraph_ItemInspectScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.ExecuteUbergraph_ItemInspectScreen");

	UItemInspectScreen_C_ExecuteUbergraph_ItemInspectScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
