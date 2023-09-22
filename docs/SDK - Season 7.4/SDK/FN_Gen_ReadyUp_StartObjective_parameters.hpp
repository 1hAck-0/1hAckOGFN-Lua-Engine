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

// Function Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C.SetParams
struct UGen_ReadyUp_StartObjective_C_SetParams_Params
{
	float                                              ReadyUpTimerLength;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          InteractSpawnLocation;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText                                       InteractText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                BluGloMissionActivationQty;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFightTheStorm;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGen_ReadyUp_StartObjective_C*               ThisObject;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C.BreakParams
struct UGen_ReadyUp_StartObjective_C_BreakParams_Params
{
	float                                              ReadyUpTimerLength;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          InteractSpawnLocation;                                    // (Parm, OutParm, ZeroConstructor)
	struct FText                                       InteractText;                                             // (Parm, OutParm)
	int                                                BluGloMissionActivationQty;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFightTheStorm;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
