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

// 0x119 (0x579 - 0x460)
// WidgetBlueprintGeneratedClass AthenaLobby.AthenaLobby_C
class UAthenaLobby_C : public UAthenaLobbyBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x460(0x8)(Transient, DuplicateTransient)
	class UAthenaMatchmakingPlay_C*              AthenaMatchmakingPlay;                             // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaToastWidget_C*                  AthenaToastWidget;                                 // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBuildWatermark_C*                     BuildWatermark;                                    // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_0;                                          // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USocialImportButton_C*                 Button_SocialImport;                               // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonGamepadSelect;                               // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDailyQuestsPanel_C*                   DailyQuestsPanel;                                  // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEmergencyNoticeWidget_C*              EmergencyNoticeWidget;                             // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerEmblemAndXp_C*                  PlayerEmblemAndXp;                                 // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaLobbyPlayerPanel_C*             PlayerPanel;                                       // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ShadowPlayHighlights;                              // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   InputCancel;                                       // 0x4C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        SwitcherDetailsActiveIndex;                        // 0x4D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D32[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortTeamMemberInfo>           TeamMembersInfo;                                   // 0x4D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        HoveredPlayerIndex;                                // 0x4E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D33[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   InputScroll;                                       // 0x4F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                        SelectedPlayerIndex;                               // 0x500(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D34[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                NavigationOrderToPlayerIndex;                      // 0x508(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDataTableRowHandle                   PlaylistChange;                                    // 0x518(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   FillChange;                                        // 0x528(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   InputNews;                                         // 0x538(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   InputCustomMatchmaking;                            // 0x548(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        AthenaStoreToastHeartbeat;                         // 0x558(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bTryStoreToast;                                    // 0x55C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D35[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaNewsModal_C*                    NewsModal;                                         // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaHeadlessReminder_C*             HeadlessReminder;                                  // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPartyFinder_C*                        SpawnedPartyFinder;                                // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDpadUpKeyIsDown;                                  // 0x578(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaLobby_C");
		return Clss;
	}

	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void OnPartyFinderClosed(class UCommonActivatablePanel* ActivatablePanel, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void StartAthenaLobbyMusic(TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void OnInputCustomMatchmaking(bool* bPassThrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UCustomMatchmakingKeyModal_C* CallFunc_Create_ReturnValue);
	void HighlightsCountChanged(int32 NewParam, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void ShowModalNews(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaNewsModal_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void OnInputNews(bool* bPassThrough);
	void OnInputFillChangeGamepad(bool* bCommited, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnInputPlaylistChangeGamepad(bool* bCommited, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void IsLocalPlayer(int32 PlayerIndex, bool* IsLocalPlayer, class UFortPartyContext* CallFunc_GetContext_ReturnValue, const struct FFortTeamMemberInfo& CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo, const struct FFortTeamMemberInfo& CallFunc_Array_Get_Item, bool CallFunc_AreUniqueIDsIdentical_ReturnValue);
	void OnSelect(int32 PlayerIndex, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUIManager_C* K2Node_DynamicCast_AsUIManager, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UPartyFinder_C* K2Node_DynamicCast_AsParty_Finder, bool K2Node_DynamicCast_bSuccess1, class UPartyFinder_C* K2Node_DynamicCast_AsParty_Finder1, bool K2Node_DynamicCast_bSuccess12, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsTencentBuild_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, const struct FFortTeamMemberInfo& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void CanNavigatePlayers(bool* bCanNavigatePlayers, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetHoveredPlayer(int32 PlayerIndex, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, int32 CallFunc_GetMaxTeamSizeForSelectedTheater_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CanNavigatePlayers_bCanNavigatePlayers);
	void HoverNextPlayer(int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Get_Item);
	void HoverPreviousPlayer(int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Get_Item);
	void ShouldAddPlay(bool* bShouldAdd, bool CallFunc_ShouldAddCancel_bShouldAdd, bool CallFunc_Not_PreBool_ReturnValue);
	void InitializeInput(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234);
	void OnLobbyPlayerPadUnhovered(int32 PlayerIndex, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void OnLobbyPlayerPadHovered(int32 PlayerIndex, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue);
	void OnLobbyPlayerGadgetsClicked(int32 PlayerIndex);
	void OnLobbyEmptyPlayerClicked(int32 PlayerIndex);
	void OnLobbyDisconnected(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void RefreshLaunch();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_ShouldAddCancel_bShouldAdd, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_OnInputCancel_bCommited, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void ShouldAddScroll(bool* bShouldAdd);
	void ShouldAddCancel(bool* bShouldAdd, bool CallFunc_IsVisible_ReturnValue);
	void RefreshInput(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool Temp_bool_Variable1, enum class EInputActionState Temp_byte_Variable12, enum class EInputActionState Temp_byte_Variable123, bool Temp_bool_Variable12, enum class ESlateVisibility Temp_byte_Variable1234, enum class ESlateVisibility Temp_byte_Variable12345, bool Temp_bool_Variable123, enum class EInputActionState Temp_byte_Variable123456, enum class EInputActionState Temp_byte_Variable1234567, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsCustomMatchmakingKeyEnabled_ReturnValue, enum class EInputActionState K2Node_Select_Default, bool CallFunc_ShouldAddCancel_bShouldAdd, bool CallFunc_ShouldAddScroll_bShouldAdd, enum class ESlateVisibility K2Node_Select1_Default, enum class EInputActionState K2Node_Select12_Default, bool CallFunc_ShouldAddCancel_bShouldAdd1, enum class EInputActionState K2Node_Select123_Default);
	void OnInputAbandon(bool* bCommited);
	void InitializeContextEvents(bool Register, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue12, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1234567, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue12345678, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123456789, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue12345678910);
	void Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void OnInputCancel(bool* bCommited, bool CallFunc_IsVisible_ReturnValue);
	void RefreshPlayerHeroes(int32 UpdatedPlayerIndex, int32 Index, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFortTeamMemberInfo& CallFunc_Array_Get_Item, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, TArray<struct FFortTeamMemberInfo>& CallFunc_GetTeamMembers_TeamMembers, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_Array_IsValidIndex_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue12);
	void OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void OnTeamMemberRemoved(int32 EmptySlot, bool CallFunc_IsActivated_ReturnValue);
	void OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_IsActivated_ReturnValue);
	void Refresh(int32 UpdatedPlayerIndex);
	void Initialize();
	void OnFailure_DA5E62624D068772EA890193344BA4AE();
	void OnSuccess_DA5E62624D068772EA890193344BA4AE();
	void DialogResult_156754AE468EF93DCA2009A412591BA7(enum class EFortDialogResult Result, class FName ResultName);
	void OnNavigationLeft();
	void OnNavigationRight();
	void BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnEndCursorOverPlayer(int32 PlayerIndex);
	void OnPlayerClicked(int32 PlayerIndex);
	void OnBeginCursorOverPlayer(int32 PlayerIndex);
	void BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_308_OnClosed__DelegateSignature();
	void BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void ShowAthenaStoreToast();
	void NewsPanelClosed(class UCommonActivatablePanel* Panel);
	void HeadlessReminderClosed(class UCommonActivatablePanel* NewParam);
	void ShouldShowHeadlessReminder(bool bShouldShow);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature();
	void Event_Abandon();
	void Construct();
	void OnNavigationUp();
	void OnActivated();
	void Gifting_Complete();
	void Check_For_Gifts();
	void Destruct();
	void ShowDailyNews();
	void AcceptPartySuggestion();
	void ExecuteUbergraph_AthenaLobby(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, class UFortGiftBoxItem* CallFunc_GetNextGiftBox_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGiftBoxItemDefinition* CallFunc_GetGiftBoxDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue12, class UFortGiftBoxItem* CallFunc_GetNextGiftBox_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123, class UFortHUDContext* CallFunc_GetContext_ReturnValue1234, class UCommonInputContext* CallFunc_GetContext_ReturnValue12345, class UCommonInputContext* CallFunc_GetContext_ReturnValue123456, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1234567, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue1, enum class EFortDialogResult Temp_byte_Variable, class FName Temp_name_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 K2Node_Event_PlayerIndex12, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 K2Node_Event_PlayerIndex1, int32 K2Node_Event_PlayerIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsBROnly_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_BooleanAND_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin1, class UFortStoreContext* CallFunc_GetContext_ReturnValue12345678, class FText Temp_text_Variable, bool CallFunc_StoreHasStarsForSale_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, bool CallFunc_IsValid_ReturnValue12, class UCommonActivatablePanel* K2Node_CustomEvent_Panel, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, class UCommonActivatablePanel* K2Node_CustomEvent_NewParam, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaHeadlessReminder_C* CallFunc_Create_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, bool K2Node_Event_bShouldShow, class FText Temp_text_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123456789, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortAsyncAction_EnsureClientQuestLogin* CallFunc_SendEnsureClientQuestLogin_ReturnValue, bool CallFunc_IsValid_ReturnValue123, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue12345678910, bool Temp_bool_Variable, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, bool Temp_bool_Variable1, class FText K2Node_Select_Default, const struct FMargin& K2Node_Select1_Default, class UFortHUDContext* CallFunc_GetContext_ReturnValue1234567891011, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123456789101112, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UUserWidget* CallFunc_Create_ReturnValue1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue12345678910111213, class UItemReceived_PrePrompt_C* K2Node_DynamicCast_AsItem_Received_Pre_Prompt, bool K2Node_DynamicCast_bSuccess, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue12, class UCMSContext* CallFunc_GetContext_ReturnValue1234567891011121314, bool CallFunc_IsNewNewsAvailable_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue12, class UItemReceived_Base_C* CallFunc_Create_ReturnValue12, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123456789101112131415, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
