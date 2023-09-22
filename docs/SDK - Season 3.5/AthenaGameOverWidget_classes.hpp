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

// 0x131 (0x521 - 0x3F0)
// WidgetBlueprintGeneratedClass AthenaGameOverWidget.AthenaGameOverWidget_C
class UAthenaGameOverWidget_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(Transient, DuplicateTransient)
	class UAthenaGamePhaseWidget_C*              AthenaGamePhaseWidget;                             // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaIndicatorLayer_C*               AthenaIndicatorLayer;                              // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaKillFeedWidget_C*               AthenaKillFeedWidget;                              // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaLocalPlayerHitPointInfo_C*      AthenaLocalPlayerHitPointInfo;                     // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSessionId_C*                    AthenaSessionId;                                   // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaTalkingList_C*                  AthenaTalkingList;                                 // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaViewTargetHitPointInfo_C*       AthenaViewTargetHitPointInfo;                      // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaWatchers_C*                     AthenaWatchers;                                    // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEliminatedOverlay_C*                  EliminatedOverlay;                                 // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       GameOverSwitcher;                                  // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       HealthBarSwitcher;                                 // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaMinimapContainer_C*             MinimapContainer;                                  // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     OpenShadowPlayHighlights;                          // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSquadList_C*                    TeamInfo;                                          // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWinnerOverlay_C*                      WinnerOverlay;                                     // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Input_ReturnToLobby;                               // 0x478(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   Input_NextTeammate;                                // 0x488(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   Input_PreviousTeammate;                            // 0x498(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   Input_ReportPlayer;                                // 0x4A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   Input_ViewMatchStats;                              // 0x4B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         ForceSpectatorSetupForReportingPlayer;             // 0x4C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4636[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  KillersName;                                       // 0x4D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         DeadAndSpectating;                                 // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4637[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Input_ToggleMap;                                   // 0x4F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   Input_Matchmake;                                   // 0x500(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   Input_CancelMatchmaking;                           // 0x510(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         MatchmakingComplete;                               // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaGameOverWidget_C");
		return Clss;
	}

	void Handle_CancelMatchmaking(bool* Passthrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void Handle_Matchmake(bool* Passthrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void Handle_ToggleMap(bool* Passthrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void InGameMatchmakingComplete(bool Success);
	void SetViewModel(class UAthenaPlayerViewModel* ViewModel);
	bool CanFollowNextOrPreviousTeammate(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanFollowTeammate_ReturnValue);
	void SetKillersName(struct FFortPlayerDeathReport& FortPlayerDeathReport, bool Temp_bool_Variable, class FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class FText K2Node_Select_Default);
	void OnPlayerOrTeamWon();
	void Handle_ViewMatchStats(bool* Passthrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue);
	void Handle_ReportPlayer(bool* Passthrough, class AFortPlayerControllerAthena* OwningAthenaPC, const class FString& CallFunc_GetSpectatingPlayerName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliation_ReturnValue, const class FString& Temp_string_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const class FString& K2Node_Select_Default, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess1, class FText CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFeedback_C* CallFunc_Create_ReturnValue);
	void InputSetup(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567);
	void Handle_FollowPreviousTeammate(bool* Passthrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void Handle_FollowNextTeammate(bool* Passthrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void InputRefresh(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool Temp_bool_Variable1, enum class EInputActionState Temp_byte_Variable12, enum class EInputActionState Temp_byte_Variable123, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSoloMatchmaking_ReturnValue, bool CallFunc_CanQueueForSoloMatchmaking_ReturnValue, bool CallFunc_CanFollowNextOrPreviousTeammate_ReturnValue, enum class EInputActionState K2Node_Select_Default, enum class EInputActionState K2Node_Select1_Default);
	void Handle_ReturnToLobby(bool* Passthrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void HighlightCountChanged(int32 HighlightCount, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void OnWinnerAnnounced(const class FString& Winner);
	void HideExtraStuffForSpectating();
	void OnViewTargetChanged(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetSpectatingPlayerName_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void OnPlaceChanged();
	void OnPawnDied(struct FFortPlayerDeathReport& DeathReport, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess);
	void OnActivated();
	void Construct();
	void On_Kill_Feed_Updated();
	void BndEvt__OpenShadowPlayHighlights_K2Node_ComponentBoundEvent_188_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnDeactivated();
	void Destruct();
	void ExecuteUbergraph_AthenaGameOverWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class AGameStateBase* CallFunc_GetGameState_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, class UCommonButton* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess1, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, class UFortHUDContext* CallFunc_GetContext_ReturnValue12, class AGameStateBase* CallFunc_GetGameState_ReturnValue1, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena1, bool K2Node_DynamicCast_bSuccess12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, class UFortHUDContext* CallFunc_GetContext_ReturnValue123, class UFortHUDContext* CallFunc_GetContext_ReturnValue1234, class UFortHUDContext* CallFunc_GetContext_ReturnValue12345, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena1, bool K2Node_DynamicCast_bSuccess123, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue12, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena12, bool K2Node_DynamicCast_bSuccess1234);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
