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

// Function GAB_Hunting.GAB_Hunting_C.UpdatePositionData
struct UGAB_Hunting_C_UpdatePositionData_Params
{
	TArray<struct FVector>                             PosArray;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     NewPosition;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HasValidData;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_Hunting.GAB_Hunting_C.UpdateDistanceData
struct UGAB_Hunting_C_UpdateDistanceData_Params
{
	TArray<float>                                      DistArray;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              NewDistance;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HasValidData;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_Hunting.GAB_Hunting_C.OnMoveFinished
struct UGAB_Hunting_C_OnMoveFinished_Params
{
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAIController*                               AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_Hunting.GAB_Hunting_C.OnRequestFailed
struct UGAB_Hunting_C_OnRequestFailed_Params
{
};

// Function GAB_Hunting.GAB_Hunting_C.OnCancelled
struct UGAB_Hunting_C_OnCancelled_Params
{
};

// Function GAB_Hunting.GAB_Hunting_C.OnInterrupted
struct UGAB_Hunting_C_OnInterrupted_Params
{
};

// Function GAB_Hunting.GAB_Hunting_C.OnComplete
struct UGAB_Hunting_C_OnComplete_Params
{
};

// Function GAB_Hunting.GAB_Hunting_C.K2_ActivateAbility
struct UGAB_Hunting_C_K2_ActivateAbility_Params
{
};

// Function GAB_Hunting.GAB_Hunting_C.K2_OnEndAbility
struct UGAB_Hunting_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_Hunting.GAB_Hunting_C.OnHuntingQueryFinished
struct UGAB_Hunting_C_OnHuntingQueryFinished_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_Hunting.GAB_Hunting_C.OnTargetPerceptionUpdated_Event_1
struct UGAB_Hunting_C_OnTargetPerceptionUpdated_Event_1_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIStimulus                                 Stimulus;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_Hunting.GAB_Hunting_C.StartQuery
struct UGAB_Hunting_C_StartQuery_Params
{
};

// Function GAB_Hunting.GAB_Hunting_C.Restart Hunting
struct UGAB_Hunting_C_Restart_Hunting_Params
{
};

// Function GAB_Hunting.GAB_Hunting_C.StoreGoalDistance
struct UGAB_Hunting_C_StoreGoalDistance_Params
{
};

// Function GAB_Hunting.GAB_Hunting_C.ExecuteUbergraph_GAB_Hunting
struct UGAB_Hunting_C_ExecuteUbergraph_GAB_Hunting_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
