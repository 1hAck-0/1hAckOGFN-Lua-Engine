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

// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetShouldUpdateFromOwner
struct ABP_ProjectileTrajectory_C_SetShouldUpdateFromOwner_Params
{
	bool                                               ShouldUpdate;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Interval;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UpdateFromTrajectoryOwner
struct ABP_ProjectileTrajectory_C_UpdateFromTrajectoryOwner_Params
{
};

// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectorySpline
struct ABP_ProjectileTrajectory_C_SetTrajectorySpline_Params
{
	TArray<struct FVector>                             SplinePoints;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             SplineTangents;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UserConstructionScript
struct ABP_ProjectileTrajectory_C_UserConstructionScript_Params
{
};

// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveBeginPlay
struct ABP_ProjectileTrajectory_C_ReceiveBeginPlay_Params
{
};

// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectoryFromNative
struct ABP_ProjectileTrajectory_C_SetTrajectoryFromNative_Params
{
	TArray<struct FVector>                             SplinePoints;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             SplineTangents;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ExecuteUbergraph_BP_ProjectileTrajectory
struct ABP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
