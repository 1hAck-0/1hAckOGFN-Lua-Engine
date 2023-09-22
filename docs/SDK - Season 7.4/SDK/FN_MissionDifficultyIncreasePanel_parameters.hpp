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

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.GetIsGroupMission
struct UMissionDifficultyIncreasePanel_C_GetIsGroupMission_Params
{
	bool                                               IsGroupMission;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.UnbindDelegates
struct UMissionDifficultyIncreasePanel_C_UnbindDelegates_Params
{
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.BindDelegates
struct UMissionDifficultyIncreasePanel_C_BindDelegates_Params
{
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.HideLockoutState
struct UMissionDifficultyIncreasePanel_C_HideLockoutState_Params
{
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.DifficultyVoteUpdated
struct UMissionDifficultyIncreasePanel_C_DifficultyVoteUpdated_Params
{
	EFortVoteStatus                                    VoteStatus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVoter>                              Voters;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.UpdateLockoutTimer
struct UMissionDifficultyIncreasePanel_C_UpdateLockoutTimer_Params
{
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.ShowLockoutState
struct UMissionDifficultyIncreasePanel_C_ShowLockoutState_Params
{
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.Reward-IntroReset
struct UMissionDifficultyIncreasePanel_C_Reward_IntroReset_Params
{
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.Rewad-IntroRewind
struct UMissionDifficultyIncreasePanel_C_Rewad_IntroRewind_Params
{
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.Reward-ListAnim
struct UMissionDifficultyIncreasePanel_C_Reward_ListAnim_Params
{
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.Leave-Anim
struct UMissionDifficultyIncreasePanel_C_Leave_Anim_Params
{
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.Hover-Anim
struct UMissionDifficultyIncreasePanel_C_Hover_Anim_Params
{
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.UpdateDifficultyRating
struct UMissionDifficultyIncreasePanel_C_UpdateDifficultyRating_Params
{
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.UpdateRewards
struct UMissionDifficultyIncreasePanel_C_UpdateRewards_Params
{
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.ShowPanel
struct UMissionDifficultyIncreasePanel_C_ShowPanel_Params
{
	bool                                               ForceFinalState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.HidePanel
struct UMissionDifficultyIncreasePanel_C_HidePanel_Params
{
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.InfoObjectUpdated
struct UMissionDifficultyIncreasePanel_C_InfoObjectUpdated_Params
{
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.Construct
struct UMissionDifficultyIncreasePanel_C_Construct_Params
{
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.Destruct
struct UMissionDifficultyIncreasePanel_C_Destruct_Params
{
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.RewardAnimTrigger
struct UMissionDifficultyIncreasePanel_C_RewardAnimTrigger_Params
{
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.HandleHidePanelFinished
struct UMissionDifficultyIncreasePanel_C_HandleHidePanelFinished_Params
{
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.OnActiveVoteChangedBP
struct UMissionDifficultyIncreasePanel_C_OnActiveVoteChangedBP_Params
{
	EFortVoteType                                      VoteType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsVoteActive;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                VoteResult;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.ExecuteUbergraph_MissionDifficultyIncreasePanel
struct UMissionDifficultyIncreasePanel_C_ExecuteUbergraph_MissionDifficultyIncreasePanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.HidePanelAnimFinished__DelegateSignature
struct UMissionDifficultyIncreasePanel_C_HidePanelAnimFinished__DelegateSignature_Params
{
};

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.LockoutEndedAnimFinished__DelegateSignature
struct UMissionDifficultyIncreasePanel_C_LockoutEndedAnimFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
