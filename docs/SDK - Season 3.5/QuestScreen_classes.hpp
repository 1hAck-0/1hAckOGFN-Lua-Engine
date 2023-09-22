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

// 0xE1 (0x4D1 - 0x3F0)
// WidgetBlueprintGeneratedClass QuestScreen.QuestScreen_C
class UQuestScreen_C : public UFortQuestScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(Transient, DuplicateTransient)
	class UJournalQuestDetails_C*                JournalQuestDetails;                               // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJournalQuestRewardDetails_C*          JournalQuestRewardDetails;                         // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            QuestDetailsScrollbox;                             // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTreeView*                       QuestsTreeView;                                    // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_2;                                        // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestItem*                        ActiveQuestItem;                                   // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RowNamePlay;                                       // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RowNameAbandon;                                    // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RowNameCollect;                                    // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RowNameReplayIntro;                                // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RowNameReplayOutro;                                // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RowNamePinQuest;                                   // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RowNameStopConversation;                           // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         PreviousEntry;                                     // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFrontEnd_;                                       // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F1F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  CloseJournal;                                      // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  RowNameUnpinQuest;                                 // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJournalQuestDetails_C*                QuestDetailsWidgetReference;                       // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJournalQuestRewardDetails_C*          RewardDetailsWidgetReference;                      // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                        InitialQuestToSelect;                              // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          UpdatePendingSeenItemTimerHandle;                  // 0x4A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<class UQuestTreeEntry_C*>             QuestButtons;                                      // 0x4A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         bDisableClaimRewardButton;                         // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F20[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  AbandonQuest;                                      // 0x4C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ShouldExpandAllOnStart;                            // 0x4D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuestScreen_C");
		return Clss;
	}

	void CalculateInitialQuestToSelect(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, TArray<class UFortQuestItem*>& CallFunc_GetCurrentQuests_OutCurrentQuests, int32 CallFunc_Add_IntInt_ReturnValue, class UFortQuestItem* CallFunc_Array_Get_Item, bool CallFunc_IsVisibleToUser_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue1, bool CallFunc_IsValid_ReturnValue, class UFortQuestItem* CallFunc_GetMainQuest_ReturnValue);
	void HandleAbandonQuest(bool* Passthrough);
	void ShouldShowPlayQuest(class UFortQuestItem* Quest, bool* ShouldShowPlay, bool CallFunc_IsValid_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_AllowsTileMatching_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_CanFindTileForQuest_ReturnValue, bool CallFunc_IsValid_ReturnValue12, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsLocalPlayerPartyLeader_ReturnValue, bool CallFunc_CanNavigateToQuestObjective_ReturnValue, bool CallFunc_IsValid_ReturnValue123);
	void Toggle_Disable_Claim_Reward_Button(bool ToDisable);
	void HandleInventory(bool* Passthrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
	void Update_Category_Buttons_Bang_State(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQuestTreeEntry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Update_Pending_Seen_Quest_Items();
	void RefreshQuestCategories(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, TArray<class UFortQuestCategory*>& CallFunc_GetCurrentQuestsCategories_Categories, class UFortQuestCategory* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void HandleOnEndSpokenDialog();
	void StopConversation(bool* Passthrough);
	void ReplayOutroAudio(bool* Passthrough, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, class UFortConversation* CallFunc_GetClaimConversation_ReturnValue);
	void HandlePendingNavigationOp(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1, const struct FFortUINavigationOperation& CallFunc_TryGetPendingNavigationOp_NavigationOp, bool CallFunc_TryGetPendingNavigationOp_ReturnValue, bool CallFunc_HasPendingNavigationOp_ReturnValue, class UFortQuestItem* K2Node_DynamicCast_AsFort_Quest_Item, bool K2Node_DynamicCast_bSuccess);
	void SelectQuest(class UFortQuestItem* Quest, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestCategory* CallFunc_GetQuestCategory_ReturnValue);
	void HandleQuestOp(class UFortQuestItem* Quest, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void PinQuest(bool* Passthrough, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsQuestPinned_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_SetQuestPinned_ReturnValue, bool CallFunc_IsValid_ReturnValue12);
	void UpdateInputHandlers(class UFortQuestItem* Active_Quest, bool IsVOEnabled_, bool IsQuestAudioPlaying_, class UFortQuestItem* LocalQuestReference, bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool Temp_bool_Variable1, enum class EInputActionState Temp_byte_Variable12, enum class EInputActionState Temp_byte_Variable123, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, int32 CallFunc_GetRemainingDailyQuestRerolls_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EInputActionState Temp_byte_Variable1234, enum class EInputActionState Temp_byte_Variable12345, bool Temp_bool_Variable12, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_ShouldShowPlayQuest_ShouldShowPlay, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, bool CallFunc_EqualEqual_ByteByte_ReturnValue123, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue12, bool CallFunc_BooleanOR_ReturnValue123, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_IsQuestVOEnabled_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue1, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue1, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, enum class EInputActionState K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_IsQuestAudioPlaying_IsQuestAudioPlaying, bool CallFunc_BooleanAND_ReturnValue1, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue12, class UFortConversation* CallFunc_GetClaimConversation_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue123, bool CallFunc_BooleanAND_ReturnValue12, class UFortConversation* CallFunc_GetIntroConversation_ReturnValue, bool CallFunc_IsValid_ReturnValue12, enum class EInputActionState K2Node_Select1_Default, bool CallFunc_BooleanAND_ReturnValue123, enum class EInputActionState K2Node_Select12_Default, bool CallFunc_IsQuestPinned_ReturnValue);
	void ClaimReward(bool* Passthrough, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue);
	void SelectInitialQuest(class UObject* NewLocalVar_0);
	void OnAbandonQuestConfirmed(class UFortQuestItem* QuestToAbandon, bool CallFunc_AbandonQuest_questAbandoned_);
	void ReplayIntroAudio(bool* Passthrough, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, class UFortConversation* CallFunc_GetIntroConversation_ReturnValue);
	void SetupInputHandlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle12, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle1234567, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle12345678, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle123456789, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle12345678910, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910);
	void PopulateDetailWidgets();
	void PlayQuest(bool* Passthrough, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_HandleBack_PassThrough);
	void HandleBack(bool* Passthrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
	TArray<class UObject*> OnGetChildrenForCategory(class UObject* Item, TArray<class UObject*>& K2Node_MakeArray_Array, class UFortQuestCategory* K2Node_DynamicCast_AsFort_Quest_Category, bool K2Node_DynamicCast_bSuccess);
	void DialogResult_CE39442C4BCACCFD8414B495A3B27A21(enum class EFortDialogResult Result, class FName ResultName);
	void BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_150_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_252_OnTabSelected__DelegateSignature(class FName TabId);
	void Refresh_Tree_View();
	void OnActivated();
	void OnDeactivated();
	void BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_200_OnListViewItemWidgetDestroyed__DelegateSignature(class UUserWidget* Widget);
	void PlayerPartyStateChanged(struct FFortTeamMemberInfo& PlayerInfo);
	void OnClientPartyStateChanged(enum class EFortPartyState PartyState);
	void OnMatchamkingComplete(enum class EMatchmakingCompleteResult Result);
	void OnMatchmakingStarted();
	void OnPartyLeft();
	void BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent_23_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void Construct();
	void OnItemSelected(class UObject* Item, bool bIsSelected);
	void ShowAbandonQuestDialog(class UFortQuestItem* QuestToAbandon);
	void ExecuteUbergraph_QuestScreen(int32 EntryPoint, enum class EFortDialogResult K2Node_CustomEvent_Result1, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName K2Node_ComponentBoundEvent_TabId1, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class FName K2Node_ComponentBoundEvent_TabId, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUserWidget* K2Node_ComponentBoundEvent_Widget1, class UQuestTreeEntry_C* K2Node_DynamicCast_AsQuest_Tree_Entry, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_Array_RemoveItem_ReturnValue, const struct FFortTeamMemberInfo& K2Node_CustomEvent_PlayerInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, enum class EFortPartyState K2Node_CustomEvent_PartyState, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, bool CallFunc_BooleanOR_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, enum class EMatchmakingCompleteResult K2Node_CustomEvent_Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue123, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UQuestTreeEntry_C* K2Node_DynamicCast_AsQuest_Tree_Entry1, bool K2Node_DynamicCast_bSuccess12, int32 CallFunc_Array_Add_ReturnValue, class UObject* K2Node_CustomEvent_Item, bool K2Node_CustomEvent_bIsSelected, class UFortQuestItem* K2Node_DynamicCast_AsFort_Quest_Item, bool K2Node_DynamicCast_bSuccess123, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, class UFortQuestItem* K2Node_CustomEvent_QuestToAbandon, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, class UFortPartyContext* CallFunc_GetContext_ReturnValue123, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue12345);
	void AbandonQuest__DelegateSignature(class UFortQuestItem* QuestToAbandon);
	void CloseJournal__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
