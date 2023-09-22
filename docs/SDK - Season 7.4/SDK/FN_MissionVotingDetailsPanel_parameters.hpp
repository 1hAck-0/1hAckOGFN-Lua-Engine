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

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.IsVoteMultiPlayer
struct UMissionVotingDetailsPanel_C_IsVoteMultiPlayer_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.CleanupVoteResultAnimation
struct UMissionVotingDetailsPanel_C_CleanupVoteResultAnimation_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.UpdateVoteCounts
struct UMissionVotingDetailsPanel_C_UpdateVoteCounts_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.UpdateDisplay
struct UMissionVotingDetailsPanel_C_UpdateDisplay_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.CloseDetails
struct UMissionVotingDetailsPanel_C_CloseDetails_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.OpenDetails
struct UMissionVotingDetailsPanel_C_OpenDetails_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.IsVoteRequired
struct UMissionVotingDetailsPanel_C_IsVoteRequired_Params
{
	bool                                               VoteRequired;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.UpdateObjectiveReadyTime
struct UMissionVotingDetailsPanel_C_UpdateObjectiveReadyTime_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.UpdateVoteButton
struct UMissionVotingDetailsPanel_C_UpdateVoteButton_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.UpdateVoteInstigatorInfo
struct UMissionVotingDetailsPanel_C_UpdateVoteInstigatorInfo_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.UpdateRemainingVoteTime
struct UMissionVotingDetailsPanel_C_UpdateRemainingVoteTime_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.RefreshPanel
struct UMissionVotingDetailsPanel_C_RefreshPanel_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.InitializePanel
struct UMissionVotingDetailsPanel_C_InitializePanel_Params
{
	EFortVoteType                                      InVoteType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.Destruct
struct UMissionVotingDetailsPanel_C_Destruct_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.BndEvt__YesVoteButton_K2Node_ComponentBoundEvent
struct UMissionVotingDetailsPanel_C_BndEvt__YesVoteButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.BndEvt__NoVoteButton_K2Node_ComponentBoundEvent
struct UMissionVotingDetailsPanel_C_BndEvt__NoVoteButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.ShowVoteResult
struct UMissionVotingDetailsPanel_C_ShowVoteResult_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.OnActiveVoteChangedBP
struct UMissionVotingDetailsPanel_C_OnActiveVoteChangedBP_Params
{
	EFortVoteType                                      VoteType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsVoteActive;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                VoteResult;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.OnMultiplayerChangedBP
struct UMissionVotingDetailsPanel_C_OnMultiplayerChangedBP_Params
{
	bool                                               bIsMultiplayer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.OnVoteUpdatedBP
struct UMissionVotingDetailsPanel_C_OnVoteUpdatedBP_Params
{
	EFortVoteType                                      VoteType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.HandleShowVoteResultAnimationFinished
struct UMissionVotingDetailsPanel_C_HandleShowVoteResultAnimationFinished_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.HandleHideVoteResultAnimationFinished
struct UMissionVotingDetailsPanel_C_HandleHideVoteResultAnimationFinished_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.PlayHideVoteResultAnimation
struct UMissionVotingDetailsPanel_C_PlayHideVoteResultAnimation_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.Construct
struct UMissionVotingDetailsPanel_C_Construct_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.Tick
struct UMissionVotingDetailsPanel_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.BndEvt__StartVoteButton_K2Node_ComponentBoundEvent
struct UMissionVotingDetailsPanel_C_BndEvt__StartVoteButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.ExecuteUbergraph_MissionVotingDetailsPanel
struct UMissionVotingDetailsPanel_C_ExecuteUbergraph_MissionVotingDetailsPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.OnMissionActivateNoVote__DelegateSignature
struct UMissionVotingDetailsPanel_C_OnMissionActivateNoVote__DelegateSignature_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.OnVoteResultFinished__DelegateSignature
struct UMissionVotingDetailsPanel_C_OnVoteResultFinished__DelegateSignature_Params
{
	EFortVoteType                                      VoteType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.OnVoteLockedOut__DelegateSignature
struct UMissionVotingDetailsPanel_C_OnVoteLockedOut__DelegateSignature_Params
{
};

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.OnRecepientVoted__DelegateSignature
struct UMissionVotingDetailsPanel_C_OnRecepientVoted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
