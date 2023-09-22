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

// Function MinigameMode_Skirmish.MinigameMode_Skirmish_C.GiveStartingWeapon
struct AMinigameMode_Skirmish_C_GiveStartingWeapon_Params
{
};

// Function MinigameMode_Skirmish.MinigameMode_Skirmish_C.SetSinglePlayerToStart
struct AMinigameMode_Skirmish_C_SetSinglePlayerToStart_Params
{
	class AFortPlayerController*                       Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinigameMode_Skirmish.MinigameMode_Skirmish_C.SetPlayerPositionToStart
struct AMinigameMode_Skirmish_C_SetPlayerPositionToStart_Params
{
};

// Function MinigameMode_Skirmish.MinigameMode_Skirmish_C.UserConstructionScript
struct AMinigameMode_Skirmish_C_UserConstructionScript_Params
{
};

// Function MinigameMode_Skirmish.MinigameMode_Skirmish_C.HandleMinigameWarmup
struct AMinigameMode_Skirmish_C_HandleMinigameWarmup_Params
{
};

// Function MinigameMode_Skirmish.MinigameMode_Skirmish_C.ExecuteUbergraph_MinigameMode_Skirmish
struct AMinigameMode_Skirmish_C_ExecuteUbergraph_MinigameMode_Skirmish_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
