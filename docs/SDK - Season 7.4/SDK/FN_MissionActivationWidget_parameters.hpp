#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionActivationWidget.MissionActivationWidget_C.HandleCloseDetailsPanelAnimFinished
struct UMissionActivationWidget_C_HandleCloseDetailsPanelAnimFinished_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.GetMissionObjectiveRemainingTime
struct UMissionActivationWidget_C_GetMissionObjectiveRemainingTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.UpdateButton
struct UMissionActivationWidget_C_UpdateButton_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLockedOut;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.StartNextState
struct UMissionActivationWidget_C_StartNextState_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.UnbindEvents
struct UMissionActivationWidget_C_UnbindEvents_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.BindEvents
struct UMissionActivationWidget_C_BindEvents_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.UpdateObjectiveReadyTime
struct UMissionActivationWidget_C_UpdateObjectiveReadyTime_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.SetBluGloRequirementHint
struct UMissionActivationWidget_C_SetBluGloRequirementHint_Params
{
	int                                                BlugloRequirement;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.UpdatePanelButtonInteractability
struct UMissionActivationWidget_C_UpdatePanelButtonInteractability_Params
{
	bool                                               ButtonsEnabled;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateLockoutDisplay;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceUpdateFocus;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TryFocusIncreaseDifficulty;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.OnStateUpdated
struct UMissionActivationWidget_C_OnStateUpdated_Params
{
	EFortMissionActivationWidgetState                  ActiveState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortMissionActivationWidgetState                  PreviousState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.OnVoteLockoutChangedBP
struct UMissionActivationWidget_C_OnVoteLockoutChangedBP_Params
{
	EFortVoteType                                      VoteType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLocked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.Construct
struct UMissionActivationWidget_C_Construct_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent
struct UMissionActivationWidget_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent
struct UMissionActivationWidget_C_BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent
struct UMissionActivationWidget_C_BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.Destruct
struct UMissionActivationWidget_C_Destruct_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.OnActivated
struct UMissionActivationWidget_C_OnActivated_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.PreConstruct
struct UMissionActivationWidget_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.HandleOnRecepientVoted
struct UMissionActivationWidget_C_HandleOnRecepientVoted_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.HandleVoteResultFinished
struct UMissionActivationWidget_C_HandleVoteResultFinished_Params
{
	EFortVoteType                                      VoteType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.OnBeginIntro
struct UMissionActivationWidget_C_OnBeginIntro_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.OnBeginOutro
struct UMissionActivationWidget_C_OnBeginOutro_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.OnActiveVoteChangedBP
struct UMissionActivationWidget_C_OnActiveVoteChangedBP_Params
{
	EFortVoteType                                      VoteType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsVoteActive;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                VoteResult;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.HandleSomeoneStartedOtherVote
struct UMissionActivationWidget_C_HandleSomeoneStartedOtherVote_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.HandleMissionActivatedNoVote
struct UMissionActivationWidget_C_HandleMissionActivatedNoVote_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.InitFromObject
struct UMissionActivationWidget_C_InitFromObject_Params
{
	class UObject*                                     InitObject;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.ExecuteUbergraph_MissionActivationWidget
struct UMissionActivationWidget_C_ExecuteUbergraph_MissionActivationWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
