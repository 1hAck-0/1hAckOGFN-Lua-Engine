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

// 0xA0 (0x3B8 - 0x318)
// BlueprintGeneratedClass HBOnboardingFlow.HBOnboardingFlow_C
class AHBOnboardingFlow_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              OnboardingQuest;                                   // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              PlayPeriodicEventMovieQuest;                       // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPlayedPeriodicEventMovie;                         // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHasRecheckedNeedToPlayPeriodicEventMovie;         // 0x339(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CBA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CompleteZoneObjective;                             // 0x340(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   NameHomebaseObjective;                             // 0x350(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FMargin                               NotificationPadding;                               // 0x360(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FDataTableRowHandle                   PlaySatelliteCineObjective;                        // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UFortAccountItemDefinition*            ShowNewsToken;                                     // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ClientQuestLoginRetryCount;                        // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ClientQuestLoginNumRetries;                        // 0x38C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   PlayPeriodicEventCineObjective;                    // 0x390(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   StormShieldDefenseObjective;                       // 0x3A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UClass*                                PeriodicEventMovieAnnouncementClass;               // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HBOnboardingFlow_C");
		return Clss;
	}

	bool HasCompletedOnboardingObjective(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetCampaignQuestManager(class UFortQuestManager** QuestManager, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue);
	void GetOnboardingQuestItem(class UFortQuestItem** Result, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue);
	void CanAccessManagementFeatures(bool* Can_Manage, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, enum class EFortFrontEndFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortFrontEndFeatureStateReason CallFunc_GetFeatureState_OutReason, enum class EFortFrontEndFeatureState CallFunc_GetFeatureState_OutFeatureState1, enum class EFortFrontEndFeatureStateReason CallFunc_GetFeatureState_OutReason1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, enum class EFortFrontEndFeatureState CallFunc_GetFeatureState_OutFeatureState12, enum class EFortFrontEndFeatureStateReason CallFunc_GetFeatureState_OutReason12, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue12);
	void RecheckNeedToPlayEventMovie(bool* WaitingToCheckAgain, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue);
	bool NeedsToPlayEventMovie(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsQuestInProgress_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void Handle_Client_Quest_Login_Failed(int32 NewLocalVar_0, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void ShowBannerSelect(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UBannerSelectionWidget_C* K2Node_DynamicCast_AsBanner_Selection_Widget, bool K2Node_DynamicCast_bSuccess);
	void HandleMcpFailure();
	void UserConstructionScript();
	void OnCanceled_C2C889344301B8DBF8F046A2A175D133();
	void OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133();
	void OnCanceled_856A325D44ECC73B857CE5B301E90D33();
	void OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33();
	void OnFailure_0A5ABC9C483947108FD9FB9980E7C62F();
	void OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F();
	void OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F();
	void OnFailure_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0();
	void OnCanceled_856A325D44ECC73B857CE5B35313D7CD();
	void OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD();
	void OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251();
	void OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6();
	void OnFailure_74930F274B5470B17CF720953FE7E260();
	void OnSuccess_74930F274B5470B17CF720953FE7E260();
	void OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0();
	void OnStateEntered_7FBC276641DD576B7417ED97A4734318();
	void OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2();
	void DialogResult_1D81E4B94CE33A3425130BABD5A7283B(enum class EFortDialogResult Result, class FName ResultName);
	void OnStateEntered_7E48C3B34B1AC823ECCC5BB9D4D63515();
	void OnFailure_50CD26324B96B121A5B49DA66113AE5D();
	void OnIgnored_50CD26324B96B121A5B49DA66113AE5D();
	void OnSuccess_50CD26324B96B121A5B49DA66113AE5D();
	void OnStateEntered_BB8A89D3479CA430A9243EB07FF8B51D();
	void OnFailure_C786FAEA4B655E5031CC7A8B4C8B9DB5();
	void OnSuccess_C786FAEA4B655E5031CC7A8B4C8B9DB5();
	void StartPlaySatelliteCine();
	void StartNameHomebase();
	void HandleClientEvent_HomebasePersonalized(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void StartOnboardingZone();
	void StartFlow();
	void HandleCheckOnboardingZoneComplete();
	void HandleSwitchToHomeBase();
	void HandlePlaySatelliteCine();
	void HandleNameHomebase();
	void Handle_Client_Quest_Login_Failed_Retry();
	void Handle_Client_Quest_Login_Retries_Exhausted();
	void HandleClientEvent_SubGameSelected(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_OnRejoinGameAbandoned(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleCompanionAppOnboardingAbort();
	void HandleNoEntitlement();
	void HandleForcedLogout(class FText Reason_Title, class FText Reason);
	void HandlePlayEventCine();
	void HandleMobileManagementRestricted();
	void HandleClientEvent_PlayEventMovie(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_SubGameSelection(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_RejoinAvailable(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleSubGameSelection();
	void ReenterFlow();
	void ExecuteUbergraph_HBOnboardingFlow(int32 EntryPoint, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_AutoSelectSubGame_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue1, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue12, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_IsValid_ReturnValue12, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123456, bool CallFunc_IsMobileApp_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234567, bool CallFunc_IsMobileApp_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345678, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue123, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123456789, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue123, bool CallFunc_IsValid_ReturnValue1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345678910, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234567891011, bool CallFunc_IsMobileApp_ReturnValue12, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue1234, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123456789101112, bool CallFunc_IsValid_ReturnValue12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortClientAnnouncement* CallFunc_FinishSpawningActor_ReturnValue, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112, bool CallFunc_IsValid_ReturnValue123456, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue12345678910111213, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue12345, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue1234567, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314, bool CallFunc_IsValid_ReturnValue12345678, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112131415, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213141516, class UFortQuestManager* CallFunc_GetCampaignQuestManager_QuestManager, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue123456789, class UObject* K2Node_HandleClientEvent_EventSource12345, class UObject* K2Node_HandleClientEvent_EventFocus12345, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent12345, const struct FTransform& CallFunc_MakeTransform_ReturnValue12, bool Temp_bool_Has_Been_Initd_Variable, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, class AFortClientAnnouncement* CallFunc_FinishSpawningActor_ReturnValue1, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue1, bool CallFunc_IsValid_ReturnValue12345678910, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314151617, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234567891011121314, enum class EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue123456789101112131415, const struct FFortHomeBaseInfo& CallFunc_GetHomeBaseInfo_Result, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue1234567, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue1234567891011, bool CallFunc_BooleanOR_ReturnValue, class UFortQuestManager* CallFunc_GetCampaignQuestManager_QuestManager1, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue1, bool CallFunc_IsValid_ReturnValue123456789101112, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue12, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue12, bool CallFunc_Not_PreBool_ReturnValue123, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue123, bool CallFunc_Not_PreBool_ReturnValue1234, bool Temp_bool_IsClosed_Variable, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, enum class EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112131415161718, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819, class UObject* K2Node_HandleClientEvent_EventSource1234, class UObject* K2Node_HandleClientEvent_EventFocus1234, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent1234, class UObject* K2Node_HandleClientEvent_EventSource123, class UObject* K2Node_HandleClientEvent_EventFocus123, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819202122, class FText K2Node_CustomEvent_Reason_Title, class FText K2Node_CustomEvent_Reason, class FText CallFunc_MakeLiteralText_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, bool CallFunc_IsValid_ReturnValue12345678910111213, class FText CallFunc_MakeLiteralText_ReturnValue12, class FText CallFunc_MakeLiteralText_ReturnValue123, bool CallFunc_Not_PreBool_ReturnValue12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920212223, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_NeedsToPlayEventMovie_ReturnValue, bool CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain, bool CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain1, class FText CallFunc_MakeLiteralText_ReturnValue1234, class FText CallFunc_MakeLiteralText_ReturnValue12345, bool CallFunc_CanAccessManagementFeatures_Can_Manage, bool CallFunc_Not_PreBool_ReturnValue123456, class UObject* K2Node_HandleClientEvent_EventSource12, class UObject* K2Node_HandleClientEvent_EventFocus12, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent12, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021222324, class UFortAsyncAction_LoadCurrentSubgameProfiles* CallFunc_LoadCurrentSubgameProfiles_ReturnValue, bool CallFunc_IsValid_ReturnValue1234567891011121314, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819202122232425, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920212223242526, class UFortQuestItem* CallFunc_GetOnboardingQuestItem_Result, bool CallFunc_IsValid_ReturnValue123456789101112131415, class UFortQuestItem* CallFunc_GetOnboardingQuestItem_Result1, bool CallFunc_HasCompletedQuest_ReturnValue, class UFortQuestManager* CallFunc_GetCampaignQuestManager_QuestManager12, class UFortAsyncAction_EnsureClientQuestLogin* CallFunc_SendEnsureClientQuestLogin_ReturnValue, class UFortQuestManager* CallFunc_GetCampaignQuestManager_QuestManager123, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue12, bool CallFunc_IsValid_ReturnValue12345678910111213141516, bool CallFunc_IsValid_ReturnValue1234567891011121314151617, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue1234, class UObject* K2Node_HandleClientEvent_EventSource1, class UObject* K2Node_HandleClientEvent_EventFocus1, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue12, bool CallFunc_ClassIsChildOf_ReturnValue1, class AFortClientAnnouncement* CallFunc_FinishSpawningActor_ReturnValue12, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue12, bool CallFunc_IsValid_ReturnValue123456789101112131415161718, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021222324252627);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
