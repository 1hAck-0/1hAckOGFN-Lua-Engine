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

// WidgetBlueprintGeneratedClass QuestScreen.QuestScreen_C
// 0x0110 (0x0458 - 0x0348)
class UQuestScreen_C : public UFortQuestScreen
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                               CommonBorder_1;                                           // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortniteDefaultBackgroundBlurWidget_C*      FortniteDefaultBackgroundBlurWidget;                      // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UJournalQuestDetails_C*                      JournalQuestDetails;                                      // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UJournalQuestRewardDetails_C*                JournalQuestRewardDetails;                                // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScrollBox*                                  QuestDetailsScrollbox;                                    // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTreeView*                             QuestsTreeView;                                           // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USafeZone*                                   SafeZone_3;                                               // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortQuestItem*                              ActiveQuestItem;                                          // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       rowNamePlay;                                              // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       rowNameAbandon;                                           // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       rowNameCollect;                                           // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       rowNameReplayIntro;                                       // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       rowNameReplayOutro;                                       // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       rowNamePinQuest;                                          // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       rowNameStopConversation;                                  // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCommonButton*                               PreviousEntry;                                            // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bIsFrontend;                                              // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x03D1(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty QuestScreen.QuestScreen_C.CloseJournal
	struct FName                                       rowNameUnpinQuest;                                        // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UJournalQuestDetails_C*                      QuestDetailsWidgetReference;                              // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UJournalQuestRewardDetails_C*                RewardDetailsWidgetReference;                             // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UFortQuestItem*                              InitialQuestToSelect;                                     // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                UpdatePendingSeenItemTimerHandle;                         // 0x0408(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UQuestTreeEntry_C*>                   QuestButtons;                                             // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDisableClaimRewardButton;                                // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData03[0x10];                                      // 0x0421(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty QuestScreen.QuestScreen_C.AbandonQuest
	bool                                               ShouldExpandAllOnStart;                                   // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	class UStreamingInstallProgressBar_C*              StreamingInstallProgressBar;                              // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0448(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty QuestScreen.QuestScreen_C.OnCheckingPatch

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestScreen.QuestScreen_C");
		return ptr;
	}


	struct FEventReply BorderOnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent);
	void SetupFrontendCamera();
	bool CheckBan();
	void ConstructStreamingInstallProgressBar();
	void CalculateInitialQuestToSelect();
	void HandleAbandonQuest(bool* PassThrough);
	void ShouldShowPlayQuest(class UFortQuestItem* Quest, bool* ShouldShowPlay);
	void Toggle_Disable_Claim_Reward_Button(bool ToDisable);
	void HandleInventory(bool* PassThrough);
	void Update_Category_Buttons_Bang_State();
	void Update_Pending_Seen_Quest_Items();
	void RefreshQuestCategories();
	void HandleOnEndSpokenDialog();
	void StopConversation(bool* PassThrough);
	void ReplayOutroAudio(bool* PassThrough);
	void HandlePendingNavigationOp();
	void SelectQuest(class UFortQuestItem* Quest);
	void HandleQuestOp(class UFortQuestItem* Quest);
	void PinQuest(bool* PassThrough);
	void UpdateInputHandlers(class UFortQuestItem* Active_Quest);
	void ClaimReward(bool* PassThrough);
	void SelectInitialQuest();
	void OnAbandonQuestConfirmed(class UFortQuestItem* QuestToAbandon);
	void ReplayIntroAudio(bool* PassThrough);
	void SetupInputHandlers();
	void populateDetailWidgets();
	void PlayQuest(bool* PassThrough);
	void HandleBack(bool* PassThrough);
	TArray<class UObject*> OnGetChildrenForCategory(class UObject* Item);
	void DialogResult_CE39442C4BCACCFD8414B495A3B27A21(EFortDialogResult Result, struct FName ResultName);
	void DialogResult_E0B996764ED97392157AE8A3D55F864D(EFortDialogResult Result, struct FName ResultName);
	void DialogResult_C35A8CD244DE431DD7750FA526449983(EFortDialogResult Result, struct FName ResultName);
	void DialogResult_C0903C7A4B03E8635AF882BD10F7171B(EFortDialogResult Result, struct FName ResultName);
	void BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent(struct FName TabId, class UCommonButton* TabButton);
	void Refresh_Tree_View();
	void OnActivated();
	void OnDeactivated();
	void BndEvt__QuestsTreeView_K2Node_ComponentBoundEvent(class UUserWidget* Widget);
	void PlayerPartyStateChanged(struct FFortTeamMemberInfo PlayerInfo);
	void OnClientPartyStateChanged(EFortPartyState PartyState);
	void OnMatchamkingComplete(EMatchmakingCompleteResult Result);
	void OnMatchmakingStarted();
	void OnPartyLeft();
	void OnItemSelected(class UObject* Item, bool bIsSelected);
	void ShowAbandonQuestDialog(class UFortQuestItem* QuestToAbandon);
	void Construct();
	void OnContentMissing();
	void BindQuestUpdateEvents();
	void UnbindQuestUpdateEvents();
	void ExecuteUbergraph_QuestScreen(int EntryPoint);
	void OnCheckingPatch__DelegateSignature(bool bStarted);
	void AbandonQuest__DelegateSignature(class UFortQuestItem* QuestToAbandon);
	void CloseJournal__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
