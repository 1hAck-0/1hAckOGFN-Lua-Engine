#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass AthenaLobby.AthenaLobby_C
// 0x0150 (0x0530 - 0x03E0)
class UAthenaLobby_C : public UAthenaLobbyBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBuildWatermark_C*                           BuildWatermark;                                           // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USocialImportButton_C*                       Button_SocialImport;                                      // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           ButtonGamepadSelect;                                      // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UDailyQuestsPanel_C*                         DailyQuestsPanel;                                         // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UEmergencyNoticeWidget_C*                    EmergencyNoticeWidget;                                    // 0x0408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFriendLinkButton_C*                         FriendLinkButton;                                         // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMatchmakingRegionAndPool_C*                 MatchmakingRegion;                                        // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UPCB_InfoPannel_C*                           PCB_InfoPannel;                                           // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UPendingAccountMergeNotification_C*          PendingAccountMergeNotification;                          // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UPlayerEmblemAndXp_C*                        PlayerEmblemAndXp;                                        // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAthenaLobbyPlayerPanel_C*                   PlayerPanel;                                              // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAthenaFrontEndRadialPicker_C*               RadialPicker;                                             // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           ShadowPlayHighlights;                                     // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFancyToastWidget_C*                         StoreToastWidget;                                         // 0x0450(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         InputCancel;                                              // 0x0458(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                SwitcherDetailsActiveIndex;                               // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	TArray<struct FFortTeamMemberInfo>                 TeamMembersInfo;                                          // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                HoveredPlayerIndex;                                       // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0484(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         InputScroll;                                              // 0x0488(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                SelectedPlayerIndex;                                      // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	TArray<int>                                        NavigationOrderToPlayerIndex;                             // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDataTableRowHandle                         InputNews;                                                // 0x04B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         InputCustomMatchmaking;                                   // 0x04C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAthenaNewsModal_C*                          NewsModal;                                                // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAthenaHeadlessReminder_C*                   HeadlessReminder;                                         // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPartyFinder_C*                              SpawnedPartyFinder;                                       // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bDpadUpKeyIsDown;                                         // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	struct FDataTableRowHandle                         InputEmote;                                               // 0x04F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UStoreToastRequest*                          StoreToastRequest;                                        // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TryShowToast;                                             // 0x0508(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                HoveredPlayerIndex_1;                                     // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0514(0x0004) MISSED OFFSET
	class USocialPanel_C*                              SpawnedSocialPanel;                                       // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FDataTableRowHandle                         InputAction_InspectChallenges;                            // 0x0520(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaLobby.AthenaLobby_C");
		return ptr;
	}


	void ConfigureGenericLinkButton();
	void OnKeybindsChanged();
	void CloseEmotePicker();
	void ShowPicker(EFortPickerMode Mode, int InitialOption, bool IgnoreFirstAccept);
	void HandleOnPlayerLeaveUpdatePlayerPanel(int PlayerIndex);
	void RefreshAllPlayerHeroes();
	void OnInputEmote(bool* PassThrough);
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent);
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent);
	void OnPartyFinderClosed(class UCommonActivatablePanel* ActivatablePanel);
	void StartAthenaLobbyMusic();
	void HighlightsCountChanged(int NewParam);
	void ShowModalNews();
	void OnInputNews(bool* bPassThrough);
	void IsLocalPlayer(int PlayerIndex, bool* IsLocalPlayer);
	void OnSelect(int PlayerIndex);
	void CanNavigatePlayers(bool* bCanNavigatePlayers);
	void SetHoveredPlayer(int PlayerIndex);
	void HoverNextPlayer();
	void HoverPreviousPlayer();
	void ShouldAddPlay(bool* bShouldAdd);
	void InitializeInput();
	void OnLobbyPlayerPadUnhovered(int PlayerIndex);
	void OnLobbyPlayerPadHovered(int PlayerIndex);
	void OnLobbyPlayerGadgetsClicked(int PlayerIndex);
	void OnLobbyEmptyPlayerClicked(int PlayerIndex);
	void OnLobbyDisconnected();
	void RefreshLaunch();
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent);
	void ShouldAddScroll(bool* bShouldAdd);
	void ShouldAddCancel(bool* bShouldAdd);
	void RefreshInput();
	void OnInputAbandon(bool* bCommited);
	void InitializeContextEvents(bool Register);
	void Focus();
	void OnInputCancel(bool* bCommited);
	void RefreshPlayerHeroes(int UpdatedPlayerIndex);
	void OnTeamMemberStateChanged(struct FFortTeamMemberInfo TeamMemberInfo);
	void OnTeamMemberRemoved(int EmptySlot);
	void OnTeamMemberAdded(struct FFortTeamMemberInfo TeamMemberInfo);
	void Refresh(int UpdatedPlayerIndex);
	void Initialize();
	void DialogResult(EFortDialogResult Result, struct FName ResultName);
	void OnFailure_DA5E62624D068772EA890193344BA4AE();
	void OnSuccess_DA5E62624D068772EA890193344BA4AE();
	void OnEndCursorOverPlayer(int PlayerIndex);
	void BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent(class UWidget* ActiveWidget, int ActiveWidgetIndex);
	void OnNavigationLeft();
	void OnNavigationRight();
	void BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void OnPlayerClicked(int PlayerIndex);
	void OnBeginCursorOverPlayer(int PlayerIndex);
	void BndEvt__PlayerPanel_K2Node_ComponentBoundEvent();
	void BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void Event_Abandon();
	void NewsPanelClosed(class UCommonActivatablePanel* Panel);
	void Construct();
	void OnActivated();
	void OnNavigationUp();
	void Destruct();
	void ShowDailyNews();
	void AcceptPartySuggestion();
	void tester();
	void ShowMobileAutoFireScreen();
	void OnDeactivated();
	void DisplayStoreUpdated(class UStoreToastRequest* StoreUpdatedRequest);
	void AttemptToShowToast();
	void TryToastAgainNextFrame();
	void ClosePlayerPanel();
	void BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent();
	void OnPlaylistChanged(EFortLobbyType LobbyType);
	void LoadLobbyBackground();
	void Load_Lobby_Background_Recursive();
	void ExecuteUbergraph_AthenaLobby(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
