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

// 0xC1 (0x491 - 0x3D0)
// WidgetBlueprintGeneratedClass ItemInspectScreen.ItemInspectScreen_C
class UItemInspectScreen_C : public UFortItemInspectionScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(Transient, DuplicateTransient)
	class UHorizontalTabList_C*                  ExtraDetailsPanelTabList;                          // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 ExtraDetailsTabContentSwitcher;                    // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ItemActionSwitcher;                                // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemAlterationsListDetailWidget_C*    ItemAlterationsListDetailWidget;                   // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemCraftingIngredientsDetailWidget_C* ItemCraftingIngredientsDetailWidget;               // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDescriptionDetailWidget_C*        ItemDescriptionDetailWidget;                       // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectEvolutionConfirmation_C*   ItemInspectEvolutionConfirmation;                  // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectEvolveRarityConfirmation_C* ItemInspectEvolveRarityConfirmation;               // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectUpgradeCallout_C*          ItemInspectUpgradeCallout;                         // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectUpgradeConfirmation_C*     ItemInspectUpgradeConfirmation;                    // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemPerksListDetailWidget_C*          ItemPerksListDetailWidget;                         // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectionMainItemDetailsHostPanel_C* MainDetailsPanel;                                  // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PerksAndAlterationsBox;                            // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USupportHeroSquadBonusesDetailWidget_C* SupportHeroSquadBonusesDetailWidget;               // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USurvivorTraitsDetailWidget_C*         SurvivorTraitsDetailWidget;                        // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectionItemExtraDetailsHostPanel_C* TabbedExtraDetailsPanel;                           // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_PreviewLabel;                                 // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWindowTitleBarArea*                   WindowTitleBar;                                    // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                             InspectedItem;                                     // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectedEvolutionIndex;                            // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FCD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             SelectedEvolutionItem;                             // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UpgradeAllowed;                                    // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EvolveAllowed;                                     // 0x481(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FavoriteAllowed;                                   // 0x482(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FCE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemView_C*                           ItemView;                                          // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RarityUpgradingAllowed;                            // 0x490(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemInspectScreen_C");
		return Clss;
	}

	void RefreshItemViewHandlerStates(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool Temp_bool_Variable1, enum class EInputActionState Temp_byte_Variable12, enum class EInputActionState Temp_byte_Variable123, bool CallFunc_ZoomAllowed_ReturnValue, bool CallFunc_RotateAllowed_ReturnValue, enum class EInputActionState K2Node_Select_Default, enum class EInputActionState K2Node_Select1_Default);
	void Setup_Evolution_Selection_for_Comparisons(class UFortItem* Item, int32 RecipeIndex);
	enum class EInputActionState GetUpgradeRarityInputState(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool CallFunc_HasRarityUpgrade_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue12, enum class EInputActionState K2Node_Select_Default);
	enum class EInputActionState GetFavoriteInputState(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, enum class EInputActionState K2Node_Select_Default);
	enum class EInputActionState GetEvolutionInputState(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool CallFunc_HasEvolutions_ReturnValue, int32 CallFunc_GetMaxLevel_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, enum class EInputActionState K2Node_Select_Default);
	enum class EInputActionState GetViewInputState(enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool Temp_bool_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsSchematicOrCraftedWeapon_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EInputActionState K2Node_Select_Default);
	void HideDisableAllInputActions();
	void HandleUpgradeItemRarity(bool* Passthrough);
	void RefreshExtraDetailsTabs(class FName SelectedTabId, int32 CallFunc_GetTabCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FName CallFunc_GetSelectedTabId_ReturnValue, bool CallFunc_SelectTabByID_ReturnValue, class FName CallFunc_GetTabIdAtIndex_ReturnValue, bool CallFunc_SelectTabByID_ReturnValue1, int32 CallFunc_GetTabCount_ReturnValue1, TArray<struct FFortAlterationSlotStatus>& CallFunc_GetAlterationSlots_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue12, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo, bool CallFunc_RegisterFortTab_ReturnValue, class UFortWorker* K2Node_DynamicCast_AsFort_Worker, bool K2Node_DynamicCast_bSuccess1, class UFortHero* K2Node_DynamicCast_AsFort_Hero1, bool K2Node_DynamicCast_bSuccess12, bool CallFunc_IsSchematic_ReturnValue, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo1, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo12, bool CallFunc_RegisterFortTab_ReturnValue1, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo123, bool CallFunc_RegisterFortTab_ReturnValue12, bool CallFunc_RegisterFortTab_ReturnValue123);
	void OnItemCycleChangedItem(class UFortItem* NewItemToRepresent);
	void Passthrough(bool* Passthrough);
	void SetInspectModeForChildPanels(enum class EFortItemInspectionMode NewInspectMode);
	void SetTabButtonStyle(class UObject* Object, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess);
	void ShowPreviewHeader(bool ShowPreviewLabel, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void RefreshCallout(bool CallFunc_BooleanAND_ReturnValue);
	void RefreshActionHandlers(class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue, enum class EInputActionState CallFunc_GetUpgradeRarityInputState_ReturnValue, enum class EInputActionState CallFunc_GetFavoriteInputState_ReturnValue, enum class EInputActionState CallFunc_GetEvolutionInputState_ReturnValue, enum class EInputActionState CallFunc_GetViewInputState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue);
	void HandleEvolutionComplete(TArray<struct FFortItemInstanceQuantityPair>& ResultingItems, const struct FFortItemInstanceQuantityPair& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void RefreshOnUpgrade();
	void HandleCursorModeChanging(bool IsEnabled, bool CallFunc_HandleBack_PassThrough, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OpenItemInspect__Function_(class UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavoriting, bool ShouldShowPreviewDisplay, bool Allow_Rarity_Upgrading);
	void ResetDetailsPanel();
	void SetupActionHandlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1234, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1234567, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, enum class EInputActionState CallFunc_GetUpgradeRarityInputState_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle12345678);
	void GetFirstEvolutionOption(class UFortItem** EvolutionItem, const TArray<struct FFortItemQuantityPair>& Results, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, TArray<struct FRecipe>& CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRecipe& CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue);
	void HandleEvolutionChoiceSelected(class UFortItem* Item, int32 RecipeIndex);
	void HandleEvolutionChoiceUnhovered(class UFortItem* Item);
	void HandleEvolutionChoiceHovered(class UFortItem* Item);
	void SetInspectMode(enum class EFortItemInspectionMode NewInspectMode, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void HandleUpgrade(bool* Passthrough);
	void HandleEvolution(bool* Passthrough);
	void HandleView(bool* Passthrough);
	void HandleFavorite(bool* Passthrough, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFavorite_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void HandleBack(bool* Passthrough, bool K2Node_SwitchEnum_CmpSuccess, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void SetItemToRepresent(class UFortItem* Item, bool CallFunc_IsValid_ReturnValue);
	void OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203();
	void BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature();
	void BndEvt__InspectedItem_K2Node_ComponentBoundEvent_9_FortOnItemChangedDelegate__DelegateSignature(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void BndEvt__InspectedItem_K2Node_ComponentBoundEvent_10_FortOnItemDestroyedDelegate__DelegateSignature();
	void BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature();
	void BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature(class UFortItem* Item, int32 RecipeIndex);
	void BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature();
	void OnActivated();
	void OpenItemInspect(class UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavorite, bool IsTemporaryItem, bool bAllowRarityUpgrading);
	void Destruct();
	void OnDeactivated();
	void BndEvt__DetailPanelTabList_PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void OnInputModeChanged(bool bUsingGamepad);
	void BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_34_OnEvolutionConfirm__DelegateSignature();
	void BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature();
	void BndEvt__ItemInspectEvolveRarityConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature(class UFortItem* Item, int32 RecipeIndex);
	void Construct();
	void ExecuteUbergraph_ItemInspectScreen(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class UFortMcpContext* CallFunc_GetContext_ReturnValue12, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123, class UFortMcpContext* CallFunc_GetContext_ReturnValue1234, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345, bool Temp_bool_Variable, bool CallFunc_IsInZone_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortMcpContext* CallFunc_GetContext_ReturnValue123456, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_ComponentBoundEvent_bItemChanged, bool K2Node_ComponentBoundEvent_bAmmoChanged, bool K2Node_ComponentBoundEvent_bIngredientsChanged, bool CallFunc_HandleBack_PassThrough, bool CallFunc_HandleBack_PassThrough1, class UFortHUDContext* CallFunc_GetContext_ReturnValue1234567, class UFortItem* K2Node_ComponentBoundEvent_Item1, int32 K2Node_ComponentBoundEvent_RecipeIndex1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue12345678, class UFortItem* K2Node_Event_ItemToInspect, enum class EFortItemInspectionMode K2Node_Event_Mode, bool K2Node_Event_ShouldAllowUpgrading, bool K2Node_Event_ShouldAllowEvolution, bool K2Node_Event_ShouldAllowFavorite, bool K2Node_Event_IsTemporaryItem, bool K2Node_Event_bAllowRarityUpgrading, class UFortMcpContext* CallFunc_GetContext_ReturnValue123456789, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HandleUpgrade_PassThrough, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_GetMaxLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HandleEvolution_PassThrough, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UItemView_C* CallFunc_Create_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue12345678910, class UFortAsyncAction_MCPContextUpgradeItem* CallFunc_UpgradeItem_ReturnValue, bool K2Node_Event_bUsingGamepad, bool CallFunc_IsValid_ReturnValue, class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class UFortItem* K2Node_ComponentBoundEvent_Item, int32 K2Node_ComponentBoundEvent_RecipeIndex, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, class UFortItemInspectCycleWidget* CallFunc_GetCycleWidget_ReturnValue12);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
