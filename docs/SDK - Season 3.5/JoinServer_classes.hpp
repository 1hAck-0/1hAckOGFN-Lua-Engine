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

// 0x84 (0x45C - 0x3D8)
// WidgetBlueprintGeneratedClass JoinServer.JoinServer_C
class UJoinServer_C : public UFortUIStateWidget_NUI
{
public:
	uint8                                        Pad_4BD3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)
	class UBuildWatermark_C*                     BuildWatermark;                                    // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetStack*                    MainContentStack;                                  // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ManualStart;                                       // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BD4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConfirmationDialogAction>     TutorialCanceledConfirmActions;                    // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FName                                  NoneAction;                                        // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundPromptTutorial;                               // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MatchmakingAttempts;                               // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TutorialMatchmakingStarted;                        // 0x424(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BD5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressWidget_C*                     ProgressWidget;                                    // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTutorialWindow_C*                     TutorialWindow;                                    // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AbandonSession;                                    // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BD6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MenuWidget;                                        // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxMatchmakingAttempts;                            // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BD7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URejoinWindow_C*                       RejoinWindow;                                      // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RejoinAttemptCount;                                // 0x458(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("JoinServer_C");
		return Clss;
	}

	void HandleLobbyConnectingToGame();
	void ShowAbandoningProgress(class UWidget* CallFunc_PopWigdet_ReturnValue);
	void ShowRetryRejoinWindow(class FText Failure, bool AllowRetry, class UWidget* CallFunc_PopWigdet_ReturnValue);
	void ShowRetryRejoinSession(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsJoinableGameAvailable_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ShowRejoiningProgress(class UWidget* CallFunc_PopWigdet_ReturnValue);
	void HideRejoinWindow(bool AbandonSession);
	void ShowRejoinWindow(class UWidget* CallFunc_PopWigdet_ReturnValue);
	class UWidget* HandleGetMainMenuContent();
	void ShowTutorialCanceled(class UWidget* CallFunc_PopWigdet_ReturnValue);
	void GetMatchmakingError(enum class EMatchmakingCompleteResult MatchMakingError, class FText* ErrorText, enum class EMatchmakingCompleteResult Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable12, class FText Temp_text_Variable123, class FText Temp_text_Variable1234, class FText Temp_text_Variable12345, class FText Temp_text_Variable123456, class FText Temp_text_Variable1234567, class FText K2Node_Select_Default);
	void HandleLobbyTimeUpdated(int32 TimeRemaining, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsWorldRecordLoaded_ReturnValue, bool CallFunc_JoinFromLobby_ReturnValue);
	void SkipTutorial(class UFortTutorialContext* CallFunc_GetContext_ReturnValue, class UWidget* CallFunc_PopWigdet_ReturnValue);
	void StartTutorialMatchmakingFlow(class UWidget* CallFunc_PopWigdet_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool CallFunc_StartOnboardingMission_ReturnValue);
	void HandleEnterState(enum class EFortUIState PreviousState, enum class EFortUIState LocalPreviousState, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleLobbyDisconnected();
	void HandleMatchmakingStateChange(enum class EMatchmakingState OldState, enum class EMatchmakingState NewState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void HandleMatchmakingComplete(enum class EMatchmakingCompleteResult Result, enum class EMatchmakingCompleteResult MatchmakingResult, int32 CallFunc_Conv_ByteToInt_ReturnValue, class FText CallFunc_GetMatchmakingError_ErrorText, class UWidget* CallFunc_PopWigdet_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Initialize(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class URejoinWindow_C* CallFunc_Create_ReturnValue, class UProgressWidget_C* CallFunc_Create_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class UTutorialWindow_C* CallFunc_Create_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue);
	void DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF(enum class EFortDialogResult Result, class FName ResultName);
	void OnFailure_B419884742513722D11D8AB4D90DE5E2();
	void OnSuccess_B419884742513722D11D8AB4D90DE5E2();
	void OnFailure_C91A02504569664A4B1E259E5F57A79D();
	void OnSuccess_C91A02504569664A4B1E259E5F57A79D();
	void RequestTutorialRetry();
	void ShowSkipTutorial();
	void HandleClientEvent_RejoinStart(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleRequestRejoinRetry();
	void HandleRequestAbandon();
	void HandleClientEvent_OnboardingStartMatchmaking(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void Construct();
	void OnEnterState(enum class EFortUIState PreviousUIState);
	void ExecuteUbergraph_JoinServer(int32 EntryPoint, class UFortPartyContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class UFortTutorialContext* CallFunc_GetContext_ReturnValue1, class UFortPartyContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_ShouldPromptToSkipTutorial_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EFortDialogResult Temp_byte_Variable, class UObject* K2Node_HandleClientEvent_EventSource1, class UObject* K2Node_HandleClientEvent_EventFocus1, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent1, bool K2Node_SwitchEnum_CmpSuccess, class FName Temp_name_Variable, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortAsyncAction_RejoinSession* CallFunc_RejoinSession_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller1, bool K2Node_DynamicCast_bSuccess1, class UFortAsyncAction_AbandonSession* CallFunc_AbandonSession_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue12, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, enum class EFortUIState K2Node_Event_PreviousUIState);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
