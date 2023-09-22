#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ItemInspectScreen.ItemInspectScreen_C.GetRefundHelpActions
struct UItemInspectScreen_C_GetRefundHelpActions_Params
{
	TArray<struct FConfirmationDialogAction>           ConfirmActions;                                           // (Parm, OutParm, ZeroConstructor)
	struct FName                                       DeclineAction;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.ShouldShowRefundMessage
struct UItemInspectScreen_C_ShouldShowRefundMessage_Params
{
	bool                                               ShouldShowRefundMessage;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       RefundDescriptionText;                                    // (Parm, OutParm)
};

// Function ItemInspectScreen.ItemInspectScreen_C.ShowRefundConfirmationModalWidget
struct UItemInspectScreen_C_ShowRefundConfirmationModalWidget_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.GetRefundPopupInputActionState
struct UItemInspectScreen_C_GetRefundPopupInputActionState_Params
{
	EInputActionState                                  State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.ShowRefundHelpIfNecessary
struct UItemInspectScreen_C_ShowRefundHelpIfNecessary_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.CreateRefundPopupMenu
struct UItemInspectScreen_C_CreateRefundPopupMenu_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleRefundPopup
struct UItemInspectScreen_C_HandleRefundPopup_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleShowUpgradeTutorial
struct UItemInspectScreen_C_HandleShowUpgradeTutorial_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.CheckForSideTutorialQuests
struct UItemInspectScreen_C_CheckForSideTutorialQuests_Params
{
	bool                                               RelevantSideQuestFound;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.AlterationQuestComplete
struct UItemInspectScreen_C_AlterationQuestComplete_Params
{
	bool                                               QuestComplete;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.UpgradeQuestComplete
struct UItemInspectScreen_C_UpgradeQuestComplete_Params
{
	bool                                               QuestIsComplete;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.SetupUpgrades
struct UItemInspectScreen_C_SetupUpgrades_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.SetupScrollWidget
struct UItemInspectScreen_C_SetupScrollWidget_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.GetRequiredTagContainer
struct UItemInspectScreen_C_GetRequiredTagContainer_Params
{
	class UFortItemDefinition*                         ItemDef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasRequiredTag;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       RequiredTagContainer;                                     // (Parm, OutParm)
};

// Function ItemInspectScreen.ItemInspectScreen_C.SchematicRequirementsMet
struct UItemInspectScreen_C_SchematicRequirementsMet_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.MeetsQuestRequirements
struct UItemInspectScreen_C_MeetsQuestRequirements_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.IsAlterableItem
struct UItemInspectScreen_C_IsAlterableItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.CreateUpgradePopupMenu
struct UItemInspectScreen_C_CreateUpgradePopupMenu_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleAlterationModify
struct UItemInspectScreen_C_HandleAlterationModify_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.GetItemActionSwitcherVisibility
struct UItemInspectScreen_C_GetItemActionSwitcherVisibility_Params
{
	ESlateVisibility                                   Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.GetUpgradeItemInputActionState
struct UItemInspectScreen_C_GetUpgradeItemInputActionState_Params
{
	EInputActionState                                  Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.GetAlterationModifyVisibility
struct UItemInspectScreen_C_GetAlterationModifyVisibility_Params
{
	ESlateVisibility                                   Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.SetOverviewActionsInputState
struct UItemInspectScreen_C_SetOverviewActionsInputState_Params
{
	EInputActionState                                  State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.GetLevelUpVisibility
struct UItemInspectScreen_C_GetLevelUpVisibility_Params
{
	ESlateVisibility                                   Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleSchematicUpgradeOptions
struct UItemInspectScreen_C_HandleSchematicUpgradeOptions_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.UpdateInspectionMode
struct UItemInspectScreen_C_UpdateInspectionMode_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.GetWindowTitleBarVisibility
struct UItemInspectScreen_C_GetWindowTitleBarVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.UnbindDelegates
struct UItemInspectScreen_C_UnbindDelegates_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.BindDelegates
struct UItemInspectScreen_C_BindDelegates_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.GetWidgetForFramingViewedItem
struct UItemInspectScreen_C_GetWidgetForFramingViewedItem_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.RefreshItemViewHandlerStates
struct UItemInspectScreen_C_RefreshItemViewHandlerStates_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.Setup Evolution Selection for Comparisons
struct UItemInspectScreen_C_Setup_Evolution_Selection_for_Comparisons_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RecipeIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.GetUpgradeRarityVisibility
struct UItemInspectScreen_C_GetUpgradeRarityVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.GetFavoriteInputState
struct UItemInspectScreen_C_GetFavoriteInputState_Params
{
	EInputActionState                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.GetEvolutionVisibility
struct UItemInspectScreen_C_GetEvolutionVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.GetViewInputState
struct UItemInspectScreen_C_GetViewInputState_Params
{
	EInputActionState                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.SetAllInputActionStates
struct UItemInspectScreen_C_SetAllInputActionStates_Params
{
	EInputActionState                                  InputActionState;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleUpgradeItemRarity
struct UItemInspectScreen_C_HandleUpgradeItemRarity_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.RefreshExtraDetailsTabs
struct UItemInspectScreen_C_RefreshExtraDetailsTabs_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.OnItemCycleChangedItem
struct UItemInspectScreen_C_OnItemCycleChangedItem_Params
{
	class UFortItem*                                   NewItemToRepresent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.SetInspectModeForChildPanels
struct UItemInspectScreen_C_SetInspectModeForChildPanels_Params
{
	EFortItemInspectionMode                            NewInspectMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.SetTabButtonStyle
struct UItemInspectScreen_C_SetTabButtonStyle_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.ShowPreviewHeader
struct UItemInspectScreen_C_ShowPreviewHeader_Params
{
	bool                                               ShowPreviewLabel;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.RefreshCallout
struct UItemInspectScreen_C_RefreshCallout_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.RefreshActionHandlers
struct UItemInspectScreen_C_RefreshActionHandlers_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionComplete
struct UItemInspectScreen_C_HandleEvolutionComplete_Params
{
	TArray<struct FFortItemInstanceQuantityPair>       ResultingItems;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ItemInspectScreen.ItemInspectScreen_C.RefreshOnUpgrade
struct UItemInspectScreen_C_RefreshOnUpgrade_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleCursorModeChanging
struct UItemInspectScreen_C_HandleCursorModeChanging_Params
{
	bool                                               IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.ResetDetailsPanel
struct UItemInspectScreen_C_ResetDetailsPanel_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.SetupActionHandlers
struct UItemInspectScreen_C_SetupActionHandlers_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.GetFirstEvolutionOption
struct UItemInspectScreen_C_GetFirstEvolutionOption_Params
{
	class UFortItem*                                   EvolutionItem;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceSelected
struct UItemInspectScreen_C_HandleEvolutionChoiceSelected_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RecipeIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceUnhovered
struct UItemInspectScreen_C_HandleEvolutionChoiceUnhovered_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceHovered
struct UItemInspectScreen_C_HandleEvolutionChoiceHovered_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleUpgrade
struct UItemInspectScreen_C_HandleUpgrade_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolution
struct UItemInspectScreen_C_HandleEvolution_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleView
struct UItemInspectScreen_C_HandleView_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleFavorite
struct UItemInspectScreen_C_HandleFavorite_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleBack
struct UItemInspectScreen_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.OnMCPRequestComplete
struct UItemInspectScreen_C_OnMCPRequestComplete_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.DialogResult
struct UItemInspectScreen_C_DialogResult_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent
struct UItemInspectScreen_C_BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RecipeIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent
struct UItemInspectScreen_C_BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.OnActivated
struct UItemInspectScreen_C_OnActivated_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.Destruct
struct UItemInspectScreen_C_Destruct_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.OnDeactivated
struct UItemInspectScreen_C_OnDeactivated_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__DetailPanelTabList-PC_K2Node_ComponentBoundEvent
struct UItemInspectScreen_C_BndEvt__DetailPanelTabList_PC_K2Node_ComponentBoundEvent_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.OnInputModeChanged
struct UItemInspectScreen_C_OnInputModeChanged_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent
struct UItemInspectScreen_C_BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleIsPreviewingChanged
struct UItemInspectScreen_C_HandleIsPreviewingChanged_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleDifferentItemToInspectSetBP
struct UItemInspectScreen_C_HandleDifferentItemToInspectSetBP_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleDifferentInspectionModeSetBP
struct UItemInspectScreen_C_HandleDifferentInspectionModeSetBP_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleItemToInspectChangedBP
struct UItemInspectScreen_C_HandleItemToInspectChangedBP_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleItemToInspectDestroyedBP
struct UItemInspectScreen_C_HandleItemToInspectDestroyedBP_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent
struct UItemInspectScreen_C_BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.Construct
struct UItemInspectScreen_C_Construct_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.OnRemovedFromActivationStack
struct UItemInspectScreen_C_OnRemovedFromActivationStack_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.ShowRefundHelp
struct UItemInspectScreen_C_ShowRefundHelp_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.HandleRefundItem
struct UItemInspectScreen_C_HandleRefundItem_Params
{
};

// Function ItemInspectScreen.ItemInspectScreen_C.OnRefundItemConfirmed
struct UItemInspectScreen_C_OnRefundItemConfirmed_Params
{
	class UFortAccountItem*                            ItemToRefund;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectScreen.ItemInspectScreen_C.ExecuteUbergraph_ItemInspectScreen
struct UItemInspectScreen_C_ExecuteUbergraph_ItemInspectScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
