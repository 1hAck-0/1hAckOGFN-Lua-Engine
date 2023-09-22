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

// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.GetRandomlyOrderedParticipatingPlayers
struct AMinigame_PlayerCreated_C_GetRandomlyOrderedParticipatingPlayers_Params
{
	TArray<class AFortPlayerState*>                    RandomizedPlayers;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.IsVolumeEventRelevant
struct AMinigame_PlayerCreated_C_IsVolumeEventRelevant_Params
{
	class APlayerState*                                PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortVolume*                                 EventVolume;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.UnbindVolumeDelegates
struct AMinigame_PlayerCreated_C_UnbindVolumeDelegates_Params
{
};

// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.BindVolumeDelegates
struct AMinigame_PlayerCreated_C_BindVolumeDelegates_Params
{
};

// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.ShouldShowScoreboard
struct AMinigame_PlayerCreated_C_ShouldShowScoreboard_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.AssignTeams
struct AMinigame_PlayerCreated_C_AssignTeams_Params
{
};

// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.UserConstructionScript
struct AMinigame_PlayerCreated_C_UserConstructionScript_Params
{
};

// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.OnComplete_D9496DB6400ADA561B9C749CD6D8B5BC
struct AMinigame_PlayerCreated_C_OnComplete_D9496DB6400ADA561B9C749CD6D8B5BC_Params
{
	class UUserWidget*                                 UserWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.HandleMinigameWarmup
struct AMinigame_PlayerCreated_C_HandleMinigameWarmup_Params
{
};

// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.ShowScoreboardPanel
struct AMinigame_PlayerCreated_C_ShowScoreboardPanel_Params
{
};

// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.HideScoreboardPanel
struct AMinigame_PlayerCreated_C_HideScoreboardPanel_Params
{
};

// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.HandleStateChanged
struct AMinigame_PlayerCreated_C_HandleStateChanged_Params
{
	EFortMinigameState                                 MinigameState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.ReceiveBeginPlay
struct AMinigame_PlayerCreated_C_ReceiveBeginPlay_Params
{
};

// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.OnClientEnterVolume
struct AMinigame_PlayerCreated_C_OnClientEnterVolume_Params
{
	class APlayerState*                                PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortVolume*                                 Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.OnClientExitVolume
struct AMinigame_PlayerCreated_C_OnClientExitVolume_Params
{
	class APlayerState*                                PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortVolume*                                 Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.ReceiveEndPlay
struct AMinigame_PlayerCreated_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Minigame_PlayerCreated.Minigame_PlayerCreated_C.ExecuteUbergraph_Minigame_PlayerCreated
struct AMinigame_PlayerCreated_C_ExecuteUbergraph_Minigame_PlayerCreated_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
