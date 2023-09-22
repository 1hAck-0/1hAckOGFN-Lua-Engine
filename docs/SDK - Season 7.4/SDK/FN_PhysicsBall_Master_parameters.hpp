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

// Function PhysicsBall_Master.PhysicsBall_Master_C.ImpactFX
struct APhysicsBall_Master_C_ImpactFX_Params
{
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Overlap_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.MakeBallDormant
struct APhysicsBall_Master_C_MakeBallDormant_Params
{
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.SetBallVelocityAndStartTicking
struct APhysicsBall_Master_C_SetBallVelocityAndStartTicking_Params
{
	struct FVector                                     NewVelocity;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.OnRep_PlotTrajectory
struct APhysicsBall_Master_C_OnRep_PlotTrajectory_Params
{
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.GetHitScale
struct APhysicsBall_Master_C_GetHitScale_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitVelocity;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.SetTickingEnabled
struct APhysicsBall_Master_C_SetTickingEnabled_Params
{
	bool                                               ShouldTick;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.ApplyImpulseToBall
struct APhysicsBall_Master_C_ApplyImpulseToBall_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitVelocity;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HitMagnitude;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.UpdateDirectionAndRotationRate
struct APhysicsBall_Master_C_UpdateDirectionAndRotationRate_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.UserConstructionScript
struct APhysicsBall_Master_C_UserConstructionScript_Params
{
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.ReceiveTick
struct APhysicsBall_Master_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.ReceiveBeginPlay
struct APhysicsBall_Master_C_ReceiveBeginPlay_Params
{
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.ProjectileStop
struct APhysicsBall_Master_C_ProjectileStop_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.ReceiveHit
struct APhysicsBall_Master_C_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.OnReplicatedVelocityStartOrStop
struct APhysicsBall_Master_C_OnReplicatedVelocityStartOrStop_Params
{
	bool                                               bStart;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.DrawDebugTrajectory
struct APhysicsBall_Master_C_DrawDebugTrajectory_Params
{
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent
struct APhysicsBall_Master_C_BndEvt__SphereCollision_K2Node_ComponentBoundEvent_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.OnPawnTouchedMe
struct APhysicsBall_Master_C_OnPawnTouchedMe_Params
{
	class APawn*                                       TouchingPawn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PhysicsBall_Master.PhysicsBall_Master_C.ExecuteUbergraph_PhysicsBall_Master
struct APhysicsBall_Master_C_ExecuteUbergraph_PhysicsBall_Master_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
