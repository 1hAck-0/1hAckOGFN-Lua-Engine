// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionActivationWidget.MissionActivationWidget_C.HandleCloseDetailsPanelAnimFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::HandleCloseDetailsPanelAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.HandleCloseDetailsPanelAnimFinished");

	UMissionActivationWidget_C_HandleCloseDetailsPanelAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.GetMissionObjectiveRemainingTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMissionActivationWidget_C::GetMissionObjectiveRemainingTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.GetMissionObjectiveRemainingTime");

	UMissionActivationWidget_C_GetMissionObjectiveRemainingTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionActivationWidget.MissionActivationWidget_C.UpdateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLockedOut                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionActivationWidget_C::UpdateButton(class UCommonButton* Button, bool bEnabled, bool bLockedOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.UpdateButton");

	UMissionActivationWidget_C_UpdateButton_Params params;
	params.Button = Button;
	params.bEnabled = bEnabled;
	params.bLockedOut = bLockedOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.StartNextState
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::StartNextState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.StartNextState");

	UMissionActivationWidget_C_StartNextState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.UnbindEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::UnbindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.UnbindEvents");

	UMissionActivationWidget_C_UnbindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.BindEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::BindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.BindEvents");

	UMissionActivationWidget_C_BindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.UpdateObjectiveReadyTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::UpdateObjectiveReadyTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.UpdateObjectiveReadyTime");

	UMissionActivationWidget_C_UpdateObjectiveReadyTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.SetBluGloRequirementHint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BlugloRequirement              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionActivationWidget_C::SetBluGloRequirementHint(int BlugloRequirement)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.SetBluGloRequirementHint");

	UMissionActivationWidget_C_SetBluGloRequirementHint_Params params;
	params.BlugloRequirement = BlugloRequirement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.UpdatePanelButtonInteractability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ButtonsEnabled                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UpdateLockoutDisplay           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceUpdateFocus               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TryFocusIncreaseDifficulty     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionActivationWidget_C::UpdatePanelButtonInteractability(bool ButtonsEnabled, bool UpdateLockoutDisplay, bool ForceUpdateFocus, bool TryFocusIncreaseDifficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.UpdatePanelButtonInteractability");

	UMissionActivationWidget_C_UpdatePanelButtonInteractability_Params params;
	params.ButtonsEnabled = ButtonsEnabled;
	params.UpdateLockoutDisplay = UpdateLockoutDisplay;
	params.ForceUpdateFocus = ForceUpdateFocus;
	params.TryFocusIncreaseDifficulty = TryFocusIncreaseDifficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.OnStateUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// EFortMissionActivationWidgetState ActiveState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortMissionActivationWidgetState PreviousState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionActivationWidget_C::OnStateUpdated(EFortMissionActivationWidgetState ActiveState, EFortMissionActivationWidgetState PreviousState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.OnStateUpdated");

	UMissionActivationWidget_C_OnStateUpdated_Params params;
	params.ActiveState = ActiveState;
	params.PreviousState = PreviousState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.OnVoteLockoutChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// EFortVoteType                  VoteType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsLocked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionActivationWidget_C::OnVoteLockoutChangedBP(EFortVoteType VoteType, bool bIsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.OnVoteLockoutChangedBP");

	UMissionActivationWidget_C_OnVoteLockoutChangedBP_Params params;
	params.VoteType = VoteType;
	params.bIsLocked = bIsLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionActivationWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.Construct");

	UMissionActivationWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMissionActivationWidget_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent");

	UMissionActivationWidget_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMissionActivationWidget_C::BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent");

	UMissionActivationWidget_C_BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMissionActivationWidget_C::BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent");

	UMissionActivationWidget_C_BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionActivationWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.Destruct");

	UMissionActivationWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UMissionActivationWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.OnActivated");

	UMissionActivationWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionActivationWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.PreConstruct");

	UMissionActivationWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.HandleOnRecepientVoted
// (BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::HandleOnRecepientVoted()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.HandleOnRecepientVoted");

	UMissionActivationWidget_C_HandleOnRecepientVoted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.HandleVoteResultFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortVoteType                  VoteType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionActivationWidget_C::HandleVoteResultFinished(EFortVoteType VoteType, bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.HandleVoteResultFinished");

	UMissionActivationWidget_C_HandleVoteResultFinished_Params params;
	params.VoteType = VoteType;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.OnBeginIntro
// (Event, Public, BlueprintEvent)

void UMissionActivationWidget_C::OnBeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.OnBeginIntro");

	UMissionActivationWidget_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.OnBeginOutro
// (Event, Public, BlueprintEvent)

void UMissionActivationWidget_C::OnBeginOutro()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.OnBeginOutro");

	UMissionActivationWidget_C_OnBeginOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.OnActiveVoteChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// EFortVoteType                  VoteType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsVoteActive                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            VoteResult                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionActivationWidget_C::OnActiveVoteChangedBP(EFortVoteType VoteType, bool bIsVoteActive, int VoteResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.OnActiveVoteChangedBP");

	UMissionActivationWidget_C_OnActiveVoteChangedBP_Params params;
	params.VoteType = VoteType;
	params.bIsVoteActive = bIsVoteActive;
	params.VoteResult = VoteResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.HandleSomeoneStartedOtherVote
// (BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::HandleSomeoneStartedOtherVote()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.HandleSomeoneStartedOtherVote");

	UMissionActivationWidget_C_HandleSomeoneStartedOtherVote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.HandleMissionActivatedNoVote
// (BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::HandleMissionActivatedNoVote()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.HandleMissionActivatedNoVote");

	UMissionActivationWidget_C_HandleMissionActivatedNoVote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.InitFromObject
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 InitObject                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionActivationWidget_C::InitFromObject(class UObject* InitObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.InitFromObject");

	UMissionActivationWidget_C_InitFromObject_Params params;
	params.InitObject = InitObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.ExecuteUbergraph_MissionActivationWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionActivationWidget_C::ExecuteUbergraph_MissionActivationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.ExecuteUbergraph_MissionActivationWidget");

	UMissionActivationWidget_C_ExecuteUbergraph_MissionActivationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
