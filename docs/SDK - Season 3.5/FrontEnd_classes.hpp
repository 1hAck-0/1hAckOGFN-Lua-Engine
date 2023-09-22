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

// 0xA8 (0x498 - 0x3F0)
// WidgetBlueprintGeneratedClass FrontEnd.FrontEnd_C
class UFrontEnd_C : public UFortUIStateWidget_Frontend
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(Transient, DuplicateTransient)
	class UBottomBarWidget_C*                    BottomBar;                                         // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               BottomBarSizedSpacer;                              // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonPTT;                                         // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonToggleChat;                                  // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatWidget_C*                         ChatWidget;                                        // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               MainAreaDarken;                                    // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetStack*                    MainContentStack;                                  // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxPTT;                                        // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USubtitles_C*                          Subtitles;                                         // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTopBar_C*                             TopBar;                                            // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               TopBarSizedSpacer;                                 // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                CheckFrontEndRewardsAction;                        // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Check_Daily_Rewards_Action;                        // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Check_Expedition_Rewards_Action;                   // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CheckRateExperienceAction;                         // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CurrentSubGame;                                    // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayedCurrentEventMovie;                           // 0x479(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EFortUIState                      PreviousUIState;                                   // 0x47A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StartedPlayingVideo;                               // 0x47B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F6F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaTabsScreen_C*                   AthenaTabScreen;                                   // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FlowActive;                                        // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F70[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGiftBoxItem*                      LastGiftBox;                                       // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FrontEnd_C");
		return Clss;
	}

	void InitChatVisibilityButton(bool CallFunc_IsMobileGame_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdatePttVisibility(enum class EPTTState PTTState, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_GetCanPTT_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush12, bool CallFunc_IsMobileGame_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EPTTState Temp_byte_Variable, bool CallFunc_BooleanAND_ReturnValue1, const struct FSlateBrush& K2Node_Select_Default);
	void SetOverlayTitleBarVisibility(bool Visible);
	void PlayEventMovieIfNecessary(bool* PlayingEventMovie, bool Temp_bool_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NeedsToPlayEventMovie_NeedsToPlayEventMovie);
	void NeedsToPlayEventMovie(bool* NeedsToPlayEventMovie, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateVisibilityState(bool HideHeader, bool HideFooter, bool HideChat, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue12);
	void SetChatWidgetVisibility(bool Visible, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void InitForSubGame(bool CallFunc_PlayEventMovieIfNecessary_PlayingEventMovie, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UAthenaTabsScreen_C* CallFunc_Create_ReturnValue, bool CallFunc_ShouldMcpPartyInvitesBeEnabled_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_ShouldMcpPartyInvitesBeEnabled_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, class UMainTabsScreen_C* CallFunc_Create_ReturnValue1, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool K2Node_SwitchEnum1_CmpSuccess);
	void GetActiveTab(class FName* ActiveTab, class UWidget* CallFunc_GetChildAt_ReturnValue, class UMainTabsScreen_C* K2Node_DynamicCast_AsMain_Tabs_Screen, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetActiveTab_ReturnValue);
	void HandleWidgetStackChanged(class UWidget* Widget, int32 ActiveWidgetIndex, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_PopContentWidget_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1, bool CallFunc_HasPendingNavigationOp_ReturnValue);
	void UnbindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMcpContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue12, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456);
	void HandlePopContentStackOp(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_PopContentWidget_ReturnValue);
	class UWidget* PopContentWidgetInternal(const struct FContentPushState& State, class UWidget* CallFunc_PopWigdet_ReturnValue);
	void HandleQuestRewardClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>& Rewards, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortQuestItemDefinition* K2Node_DynamicCast_AsFort_Quest_Item_Definition, bool K2Node_DynamicCast_bSuccess, enum class EFortQuestType CallFunc_GetQuestType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456);
	void HandleEnterFrontend(enum class EFortUIState UIState, enum class EFortUIState LocalUIState, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, class UFortPartyContext* CallFunc_GetContext_ReturnValue123, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1234);
	void SetFooterVisibility(bool Visible);
	void PopContentWidget_Internal();
	void SetHeaderVisibility(bool Visible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void PushContentWidget_Internal(class UWidget* InWidget, bool HideHeader, bool HideFooter);
	void RegisterScriptedActions(enum class EFortUIState InPreviousUIState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue12);
	void HandleMainMenuStateChanged(bool Index, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class FName CallFunc_GetActiveTab_ActiveTab, bool CallFunc_EqualEqual_NameName_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Select1_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	struct FEventReply On_MainAreaDarken_MouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void HandleQuestsCompleted(TArray<class UFortQuestItem*>& Quests);
	void HandleLobbyDisconnected();
	void PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State);
	void OnExitState(enum class EFortUIState NextUIState);
	void Destruct();
	void DailyRewardsTokenGranted();
	void HandleClientEvent_FinishedModalWindows(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void OnFrontEndVisibilityUpdated(bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void HandleClientEvent_EventMovieFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_NotPlayingEventMovie(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void RequestOpenSocialMenu();
	void OnGiftNotifyReceived();
	void Gifting_Complete();
	void Check_For_Gifts();
	void OnGiftBoxRemoved(bool bSuccess);
	void Construct();
	void Loading_Screen_Changed(bool IsVisible);
	void BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleQuestsGranted(TArray<class UFortQuestItem*>& Quests);
	void BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected);
	void BndEvt__ButtonPTT_K2Node_ComponentBoundEvent_138_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void On_Can_PTT();
	void OnEnterState(enum class EFortUIState PreviousUIState);
	void ExecuteUbergraph_FrontEnd(int32 EntryPoint, enum class EPTTState Temp_byte_Variable, enum class EPTTState Temp_byte_Variable1, enum class EPTTState Temp_byte_Variable12, enum class EPTTState Temp_byte_Variable123, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPTTState CallFunc_GetPTTState_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue123, TArray<class UFortQuestItem*>& K2Node_CustomEvent_Quests1, enum class EPTTState CallFunc_GetPTTState_ReturnValue1, class UWidget* K2Node_Event_Widget, const struct FContentPushState& K2Node_Event_State, enum class EFortUIState K2Node_Event_NextUIState, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue1234, enum class EPTTState CallFunc_GetPTTState_ReturnValue12, class UObject* K2Node_HandleClientEvent_EventSource12, class UObject* K2Node_HandleClientEvent_EventFocus12, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent12, enum class EPTTState K2Node_Select_Default, class UClass* Temp_class_Variable, bool K2Node_Event_bHideHeader, bool K2Node_Event_bHideFooter, bool K2Node_Event_bHideChatWidget, class UObject* K2Node_HandleClientEvent_EventSource1, class UObject* K2Node_HandleClientEvent_EventFocus1, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent1, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, class UClass* Temp_class_Variable1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable1234, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, enum class ESubGame CallFunc_GetSubGame_ReturnValue, enum class ESlateVisibility Temp_byte_Variable12345, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UItemReceived_Base_C* CallFunc_Create_ReturnValue, bool K2Node_Event_bSuccess, bool Temp_bool_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234567, bool CallFunc_IsCurrentlyShowingLoadingScreen_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345678, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123456789, bool K2Node_CustomEvent_IsVisible, bool CallFunc_GetItemReceivedFlowActive_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button12, class UFortGiftBoxItemDefinition* CallFunc_GetGiftBoxDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue1, bool CallFunc_IsValidClass_ReturnValue, class UItemReceived_PrePrompt_C* K2Node_DynamicCast_AsItem_Received_Pre_Prompt, bool K2Node_DynamicCast_bSuccess, TArray<class UFortQuestItem*>& K2Node_CustomEvent_Quests, class UFortMcpContext* CallFunc_GetContext_ReturnValue12345678910, class UCommonButton* K2Node_ComponentBoundEvent_Button1, bool K2Node_ComponentBoundEvent_Selected, int32 CallFunc_IsDailyRewardAvailable_OutMinutesUntilNextReward, bool CallFunc_IsDailyRewardAvailable_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default, class UClass* K2Node_Select12_Default, class UFortMcpContext* CallFunc_GetContext_ReturnValue1234567891011, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123456789101112, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345678910111213, class UCommonButton* K2Node_ComponentBoundEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, enum class EFortUIState K2Node_Event_PreviousUIState, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class UFortMcpContext* CallFunc_GetContext_ReturnValue1234567891011121314, class UFortGiftBoxItem* CallFunc_GetNextGiftBox_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
