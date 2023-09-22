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

// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.OnRep_RemainingFuseTime
struct AB_Prj_Athena_TNT_C_OnRep_RemainingFuseTime_Params
{
};

// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.MakeOrthogonalZ
struct AB_Prj_Athena_TNT_C_MakeOrthogonalZ_Params
{
	struct FRotator                                    InRotation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.Spline Point Locations
struct AB_Prj_Athena_TNT_C_Spline_Point_Locations_Params
{
	TArray<struct FVector>                             Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor)
};

// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.UserConstructionScript
struct AB_Prj_Athena_TNT_C_UserConstructionScript_Params
{
};

// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.FuseEnded
struct AB_Prj_Athena_TNT_C_FuseEnded_Params
{
};

// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.Event_StartFuse
struct AB_Prj_Athena_TNT_C_Event_StartFuse_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.OnExploded
struct AB_Prj_Athena_TNT_C_OnExploded_Params
{
	TArray<class AActor*>                              HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                          HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.OnStop
struct AB_Prj_Athena_TNT_C_OnStop_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.ReceiveBeginPlay
struct AB_Prj_Athena_TNT_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent
struct AB_Prj_Athena_TNT_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.Event_BuildingActorDied
struct AB_Prj_Athena_TNT_C_Event_BuildingActorDied_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.Event_OnVehicleDestroyed
struct AB_Prj_Athena_TNT_C_Event_OnVehicleDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.Lerp
struct AB_Prj_Athena_TNT_C_Lerp_Params
{
};

// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.ReceiveDestroyed
struct AB_Prj_Athena_TNT_C_ReceiveDestroyed_Params
{
};

// Function B_Prj_Athena_TNT.B_Prj_Athena_TNT_C.ExecuteUbergraph_B_Prj_Athena_TNT
struct AB_Prj_Athena_TNT_C_ExecuteUbergraph_B_Prj_Athena_TNT_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
