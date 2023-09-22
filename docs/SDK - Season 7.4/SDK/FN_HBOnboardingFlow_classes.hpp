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

// BlueprintGeneratedClass HBOnboardingFlow.HBOnboardingFlow_C
// 0x00A0 (0x03D0 - 0x0330)
class AHBOnboardingFlow_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortQuestItemDefinition*                    OnboardingQuest;                                          // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortQuestItemDefinition*                    PlayPeriodicEventMovieQuest;                              // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayedPeriodicEventMovie;                                // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasRecheckedNeedToPlayPeriodicEventMovie;                // 0x0351(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0352(0x0006) MISSED OFFSET
	struct FDataTableRowHandle                         CompleteZoneObjective;                                    // 0x0358(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         NameHomebaseObjective;                                    // 0x0368(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FMargin                                     NotificationPadding;                                      // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         PlaySatelliteCineObjective;                               // 0x0388(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortAccountItemDefinition*                  ShowNewsToken;                                            // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ClientQuestLoginRetryCount;                               // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ClientQuestLoginNumRetries;                               // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         PlayPeriodicEventCineObjective;                           // 0x03A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         StormShieldDefenseObjective;                              // 0x03B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      PeriodicEventMovieAnnouncementClass;                      // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HBOnboardingFlow.HBOnboardingFlow_C");
		return ptr;
	}


	bool HasCompletedOnboardingObjective();
	void GetCampaignQuestManager(class UFortQuestManager** QuestManager);
	void GetOnboardingQuestItem(class UFortQuestItem** Result);
	void CanAccessManagementFeatures(bool* Can_Manage);
	void RecheckNeedToPlayEventMovie(bool* WaitingToCheckAgain);
	bool NeedsToPlayEventMovie();
	void Handle_Client_Quest_Login_Failed();
	void ShowBannerSelect();
	void HandleMcpFailure();
	void UserConstructionScript();
	void OnCanceled_C2C889344301B8DBF8F046A2A175D133();
	void OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133();
	void OnCanceled();
	void OnAllClientsReady();
	void OnFailure();
	void OnIgnored();
	void OnSuccess();
	void OnFailure_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0();
	void OnStateEntered();
	void OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6();
	void OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0();
	void OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2();
	void DialogResult(EFortDialogResult Result, struct FName ResultName);
	void OnStateEntered_BB8A89D3479CA430A9243EB07FF8B51D();
	void OnFailure_C786FAEA4B655E5031CC7A8B4C8B9DB5();
	void OnSuccess_C786FAEA4B655E5031CC7A8B4C8B9DB5();
	void OnFailed();
	void OnCompleted();
	void StartPlaySatelliteCine();
	void StartNameHomebase();
	void HandleClientEvent_HomebasePersonalized(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent ClientEvent);
	void StartOnboardingZone();
	void StartFlow();
	void HandleCheckOnboardingZoneComplete();
	void HandleSwitchToHomeBase();
	void HandlePlaySatelliteCine();
	void HandleNameHomebase();
	void Handle_Client_Quest_Login_Failed_Retry();
	void Handle_Client_Quest_Login_Retries_Exhausted();
	void HandleClientEvent_SubGameSelected(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent ClientEvent);
	void HandleClientEvent_OnRejoinGameAbandoned(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent ClientEvent);
	void HandleCompanionAppOnboardingAbort();
	void HandleNoEntitlement();
	void HandleForcedLogout(struct FText Reason_Title, struct FText Reason);
	void HandlePlayEventCine();
	void HandleMobileManagementRestricted();
	void HandleClientEvent_PlayEventMovie(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent ClientEvent);
	void HandleClientEvent_SubGameSelection(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent ClientEvent);
	void HandleClientEvent_RejoinAvailable(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent ClientEvent);
	void HandleSubGameSelection();
	void ReenterFlow();
	void HandleRetrievePurchaseDataIssue();
	void ExecuteUbergraph_HBOnboardingFlow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
