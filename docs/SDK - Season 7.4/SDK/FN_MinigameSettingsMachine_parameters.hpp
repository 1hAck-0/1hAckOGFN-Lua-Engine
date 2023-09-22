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

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateJoinInProgress
struct AMinigameSettingsMachine_C_UpdateJoinInProgress_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.TryAddEndCondition_CollectItems
struct AMinigameSettingsMachine_C_TryAddEndCondition_CollectItems_Params
{
	TArray<struct FFortMinigameStatQuery>              EndConditions;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.TryAddEndCondition_Kills
struct AMinigameSettingsMachine_C_TryAddEndCondition_Kills_Params
{
	TArray<struct FFortMinigameStatQuery>              EndConditions;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateAutoStart
struct AMinigameSettingsMachine_C_UpdateAutoStart_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateEndConditions
struct AMinigameSettingsMachine_C_UpdateEndConditions_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTeamToMoveToWhenOutOfSpawns
struct AMinigameSettingsMachine_C_UpdateTeamToMoveToWhenOutOfSpawns_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateAutoEndTeamThreshold
struct AMinigameSettingsMachine_C_UpdateAutoEndTeamThreshold_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdatePlayerLives
struct AMinigameSettingsMachine_C_UpdatePlayerLives_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdatePostGameSpawnLocationSetting
struct AMinigameSettingsMachine_C_UpdatePostGameSpawnLocationSetting_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintGetFailedInteractionString
struct AMinigameSettingsMachine_C_BlueprintGetFailedInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTeamSetting
struct AMinigameSettingsMachine_C_UpdateTeamSetting_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateSpawnLocationSetting
struct AMinigameSettingsMachine_C_UpdateSpawnLocationSetting_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetCurrentMinigame
struct AMinigameSettingsMachine_C_GetCurrentMinigame_Params
{
	class AFortMinigame*                               Minigame;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTimeLimit
struct AMinigameSettingsMachine_C_UpdateTimeLimit_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateGameMode
struct AMinigameSettingsMachine_C_UpdateGameMode_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.HasMinigameStarted
struct AMinigameSettingsMachine_C_HasMinigameStarted_Params
{
	bool                                               bHasStarted;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.IsValidGame
struct AMinigameSettingsMachine_C_IsValidGame_Params
{
	bool                                               bCanStartGame;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetPickupSpawnLocation
struct AMinigameSettingsMachine_C_GetPickupSpawnLocation_Params
{
	struct FVector                                     SpawnLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintOnLocalInteract
struct AMinigameSettingsMachine_C_BlueprintOnLocalInteract_Params
{
	class AFortPlayerPawn*                             InteractingPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintGetInteractionString
struct AMinigameSettingsMachine_C_BlueprintGetInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintCanInteract
struct AMinigameSettingsMachine_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UserConstructionScript
struct AMinigameSettingsMachine_C_UserConstructionScript_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintOnInteract
struct AMinigameSettingsMachine_C_BlueprintOnInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.ReceiveBeginPlay
struct AMinigameSettingsMachine_C_ReceiveBeginPlay_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.OnGameSettingsUpdated
struct AMinigameSettingsMachine_C_OnGameSettingsUpdated_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.StartMinigameHelper
struct AMinigameSettingsMachine_C_StartMinigameHelper_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.AbandonMinigameHelper
struct AMinigameSettingsMachine_C_AbandonMinigameHelper_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.ExecuteUbergraph_MinigameSettingsMachine
struct AMinigameSettingsMachine_C_ExecuteUbergraph_MinigameSettingsMachine_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
