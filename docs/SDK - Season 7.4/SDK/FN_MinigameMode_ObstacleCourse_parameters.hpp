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

// Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.GetStartQueryForPlayer
struct AMinigameMode_ObstacleCourse_C_GetStartQueryForPlayer_Params
{
	class APlayerState*                                Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagQuery                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.Has Player Completed Objective
struct AMinigameMode_ObstacleCourse_C_Has_Player_Completed_Objective_Params
{
	class AFortPlayerState*                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Complete;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.GiveWood
struct AMinigameMode_ObstacleCourse_C_GiveWood_Params
{
};

// Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.SetPlayerPositionToStart
struct AMinigameMode_ObstacleCourse_C_SetPlayerPositionToStart_Params
{
};

// Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.UserConstructionScript
struct AMinigameMode_ObstacleCourse_C_UserConstructionScript_Params
{
};

// Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.HandleMinigameWarmup
struct AMinigameMode_ObstacleCourse_C_HandleMinigameWarmup_Params
{
};

// Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.On Stat Changed
struct AMinigameMode_ObstacleCourse_C_On_Stat_Changed_Params
{
};

// Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.ReceiveBeginPlay
struct AMinigameMode_ObstacleCourse_C_ReceiveBeginPlay_Params
{
};

// Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.ExecuteUbergraph_MinigameMode_ObstacleCourse
struct AMinigameMode_ObstacleCourse_C_ExecuteUbergraph_MinigameMode_ObstacleCourse_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
