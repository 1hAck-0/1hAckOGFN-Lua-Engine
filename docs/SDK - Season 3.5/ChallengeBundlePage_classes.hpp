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

// 0xA0 (0x470 - 0x3D0)
// WidgetBlueprintGeneratedClass ChallengeBundlePage.ChallengeBundlePage_C
class UChallengeBundlePage_C : public UFortChallengeBundleWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(Transient, DuplicateTransient)
	class UOverlay*                              BacchusCloseOverlay;                               // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChallengeBundleCategoryHeader_C*      ChallengeBundleCategoryHeader;                     // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChallengeProgressWidget_C*            ChallengeProgressWidget;                           // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ClaimRewardsButton;                                // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       LockCheckSwitcher;                                 // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LockedText;                                        // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                MainReward;                                        // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        PageNextButton;                                    // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        PagePreviousButton;                                // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        PanelButton;                                       // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      QuestListTitle;                                    // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          QuestPanel;                                        // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      RewardText;                                        // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpacingLine;                                       // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Status_LockedHB;                                   // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Status_ProgressVB;                                 // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       StatusSwitcher;                                    // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortSwipePanel*                       SwipePanel;                                        // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortTokenType*                        MysteryItemDef;                                    // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChallengeBundlePage_C");
		return Clss;
	}

	void HandleBack(bool* Passthrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void CreateQuestWidget(class UFortQuestItem* Quest, class UFortQuestItemDefinition* QuestDefinition, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UChallengeQuestWidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void RegisterEventListeners(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue);
	void ClaimNextQuestReward();
	void UpdateQuests(bool bHasQuestsToClaim, enum class ESlateVisibility Temp_byte_Variable, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, class UFortChallengeBundleInfo* CallFunc_GetChallengeBundleInfo_ReturnValue, class UFortChallengeBundleItemDefinition* CallFunc_GetBundleDefinition_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, enum class ESlateVisibility K2Node_Select_Default, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, TArray<class UFortQuestItem*>& CallFunc_GetQuests_OwnedQuests, TArray<class UFortQuestItemDefinition*>& CallFunc_GetQuests_UnownedQuests, int32 CallFunc_Array_Length_ReturnValue, class UFortQuestItemDefinition* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, class UFortQuestItem* CallFunc_Array_Get_Item1, bool CallFunc_Less_IntInt_ReturnValue1, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateBundle(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortChallengeBundleInfo* CallFunc_GetChallengeBundleInfo_ReturnValue, int32 CallFunc_GetAchievedCount_OutTotalAchievedCount, int32 CallFunc_GetAchievedCount_OutTotalRequiredCount, float CallFunc_GetAchievedCount_OutAchievedPercent, float CallFunc_GetAchievedCount_OutThresholdPercent, bool CallFunc_IsRewardThresholdAchieved_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool CallFunc_HasSiblingBundles_ReturnValue, bool Temp_bool_Variable, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class UFortChallengeBundleInfo* CallFunc_GetChallengeBundleInfo_ReturnValue1, class UFortItem* CallFunc_GetRewardItem_ReturnValue, class FText CallFunc_IsUnlocked_LockedReason, bool CallFunc_IsUnlocked_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class UFortChallengeBundleItemDefinition* CallFunc_GetBundleDefinition_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, int32 CallFunc_GetRewardCompletionThreshold_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Construct();
	void OnBundleUpdated();
	void BndEvt__PagePreviousButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__PageNextButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__PanelButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_11_OnFortSwipeEvent__DelegateSignature();
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_26_OnFortSwipeEvent__DelegateSignature();
	void ExecuteUbergraph_ChallengeBundlePage(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UCommonButton* K2Node_ComponentBoundEvent_Button12, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_HandleBack_PassThrough, bool CallFunc_IsBROnly_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
