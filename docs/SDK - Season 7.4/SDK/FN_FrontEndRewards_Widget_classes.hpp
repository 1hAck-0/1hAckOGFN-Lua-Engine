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

// WidgetBlueprintGeneratedClass FrontEndRewards_Widget.FrontEndRewards_Widget_C
// 0x0158 (0x0530 - 0x03D8)
class UFrontEndRewards_Widget_C : public UFortRewardNotificationWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            AnimShowBorder;                                           // 0x03E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            AnimFadeHeader;                                           // 0x03E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            AnimShowHeader;                                           // 0x03F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           ButtonPrimaryAction;                                      // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFrontEndRewards_ChoiceRewards_C*            ChoiceRewards;                                            // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFrontEndRewards_Conversation_VO_C*          ConversationWidget;                                       // 0x0408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFrontEndRewards_CurrentReward_C*            CurrentRewardIcon;                                        // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFrontEndRewards_Expedition_C*               ExpeditionRewards;                                        // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UInputReflector_C*                           InputReflector;                                           // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFrontEndRewards_ListRewards_C*              ListRewards;                                              // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFrontEndRewards_EpicQuest_C*                NewQuest;                                                 // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class URewards_Header_C*                           RewardHeader;                                             // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFrontEndRewards_Queue_C*                    RewardsQueue;                                             // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonWidgetSwitcher*                       RewardSwitcher;                                           // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class URotatingStarburstWidget_C*                  RotatingStarburst;                                        // 0x0450(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USafeZone*                                   SafeZone_5;                                               // 0x0458(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USafeZone*                                   SafeZone_6;                                               // 0x0460(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USafeZone*                                   SafeZone_7;                                               // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBoxBottom;                                            // 0x0470(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBoxTop;                                               // 0x0478(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            TextStorage;                                              // 0x0480(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortRewardNotificationSubWidget*            CurrentSubWidget;                                         // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsIntroComplete;                                          // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0491(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0491(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnComplete
	bool                                               IsReadyToShowRewardWidget;                                // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	TArray<class UFortRewardNotificationSubWidget*>    SubWidgets;                                               // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ShowClaimedReward;                                        // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSubWidgetPopulated;                                     // 0x04C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsError;                                                  // 0x04C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x04C3(0x0005) MISSED OFFSET
	unsigned char                                      UnknownData04[0x10];                                      // 0x04C3(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnRewardsClaimed
	class UItemInspectScreen_C*                        ItemInspectScreen;                                        // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x04E0(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnRewardsClaimError
	bool                                               ClaimErrorEnountered;                                     // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunningFrontEndRewards;                                  // 0x04F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TriggerUpdateOnComplete;                                  // 0x04F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x04F3(0x0005) MISSED OFFSET
	class UFortRewardNotificationData*                 LastClaimedReward;                                        // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPendingSafePop;                                         // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0501(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData08[0x10];                                      // 0x0501(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnRewardsIgnored
	bool                                               bCompleted;                                               // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0519(0x0007) MISSED OFFSET
	class UFortGiftBoxItem*                            LastGiftBox;                                              // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFort_Entry_Music_Controller_BP_C*           MusicController;                                          // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FrontEndRewards_Widget.FrontEndRewards_Widget_C");
		return ptr;
	}


	void Play_Victory_Music();
	void HandleOnItemCacheRewardsClaimFailed();
	void HandleOnItemCacheRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>* Rewards);
	void PopulateItemCacheReward();
	void HandleOnGiftBoxRemoved(bool bSucceeded);
	void ShowGiftBox();
	void HandleGiftBoxOpened();
	void PopulateGiftBox();
	void HandleOnDifficultyIncreaseRewardsClaimFailed();
	void HandleOnDifficultyIncreaseRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>* Rewards);
	void ClaimDifficultyIncreaseRewards();
	void PopulateDifficultyIncreaseRewards();
	void HandleOnMissionRewardsClaimFailed();
	void DebugPrintChoiceReward(class UObject* Object);
	void SafePop();
	void TriggerUpdateWhenDone();
	void HandleOnMissionAlertRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>* Rewards);
	void ClaimMissionAlertRewards();
	void PopulateMissionAlertRewards();
	void InitRewardsQueue();
	void InitializeRewardsData(struct FFrontEndRewards_Definition* FrontEndRewards_Definition);
	void InitAdditionalRewards(struct FFrontEndRewards_Definition Definition);
	void HandleBorderShown();
	void SkipPopAnimation();
	void SkipOpenAnimation();
	void PopulateVO();
	void HandleOnNoRewardsToClaim();
	void UnbindEvents();
	void ResetQueueState();
	void TransitionIn();
	void OpenReward();
	void PopulateChoiceRewardsWidgetFromCardList(TArray<class URewards_ItemCard_C*>* Cards);
	void HandleCurrentRewardTransitionOutComplete();
	void HandleOpenAnimationFinished();
	void InitSubWidgets();
	void HandleOnMissionRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>* Rewards);
	void PopulateListRewardsWidgetFromCardList(TArray<class URewards_ItemCard_C*>* Cards);
	void HandleOnCollectionBookRewardsClaimed(struct FFortCollectionBookRewards RewardRequested, bool Success, TArray<struct FFortItemInstanceQuantityPair>* ActualRewards);
	void HandleOnQuestRewardsClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>* Rewards);
	void ClaimCollectionBookChoiceReward(class UFortRewardNotificationData* NotificationData, int SelectionIndex, class UFortItem* Item);
	void ClaimCollectionBookRewards();
	void ClaimQuestListReward();
	void PopulateCollectionBookRewards();
	void PopulateExpedition();
	void PopulateNewQuest();
	void PopulateQuestRewards();
	void PopulateMissionRewards();
	void SetHeaderVisibility();
	void ClaimMissionRewards();
	void CreateCardsFromItemInstanceQuantityList(TArray<struct FFortItemInstanceQuantityPair>* Items, TArray<class URewards_ItemCard_C*>* Cards);
	void CreateCardsFromItemQuantityList(TArray<struct FFortItemQuantityPair>* Items, TArray<class URewards_ItemCard_C*>* Cards);
	void CreateCardsFromItemList(TArray<class UFortItem*>* Items, TArray<TEnumAsByte<EFortInventoryType>>* ItemInventoryTypeList, TArray<class URewards_ItemCard_C*>* Cards);
	void ClaimQuestChoiceReward(class UFortRewardNotificationData* NotificationData, int SelectionIndex, class UFortItem* Item);
	void HandleChoiceRewardSelected(int RewardIndex, class UFortItem* Item);
	void InitInitialRewards(struct FFrontEndRewards_Definition Definition);
	void HandleExpeditionCompleted(bool Succeeded, TArray<struct FFortItemInstanceQuantityPair>* Rewards);
	void Cleanup();
	void ShowCurrentReward();
	void PopulateCurrentRewardWidget();
	void AdjustCurrentRewardPadding();
	void BindEvents();
	void HandleShowHeaderFinished();
	void PopNextReward();
	void DropReward(class UFortRewardNotificationData* InReward);
	void HandleCurrentRewardDisplayed();
	void OnNavigationLeft();
	void OnNavigationRight();
	void OnNavigationUp();
	void OnNavigationDown();
	void OnPrimaryActionDisabled();
	void OnPrimaryActionEnabled();
	void OnPrimaryActionHidden();
	void OnPrimaryActionTextChanged(struct FText Text);
	void BndEvt__ButtonOpen_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void Construct();
	void OnActivated();
	void HideStarburst(float Delay);
	void InspectItem(class UFortItem* ItemToInspect);
	void IntroSequence();
	void Destruct();
	void OnMatchmakingOrLobbyStarted();
	void ExecuteUbergraph_FrontEndRewards_Widget(int EntryPoint);
	void OnRewardsIgnored__DelegateSignature(class UFrontEndRewards_Widget_C* RewardsWidget);
	void OnRewardsClaimError__DelegateSignature(class UFrontEndRewards_Widget_C* RewardsWidget);
	void OnRewardsClaimed__DelegateSignature(class UFrontEndRewards_Widget_C* RewardsWidget);
	void OnComplete__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
