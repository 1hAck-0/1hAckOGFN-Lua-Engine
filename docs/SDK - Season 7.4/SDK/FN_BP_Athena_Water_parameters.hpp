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

// Function BP_Athena_Water.BP_Athena_Water_C.OnRep_BounceLake
struct ABP_Athena_Water_C_OnRep_BounceLake_Params
{
};

// Function BP_Athena_Water.BP_Athena_Water_C.OnRep_IsBouncy
struct ABP_Athena_Water_C_OnRep_IsBouncy_Params
{
};

// Function BP_Athena_Water.BP_Athena_Water_C.UserConstructionScript
struct ABP_Athena_Water_C_UserConstructionScript_Params
{
};

// Function BP_Athena_Water.BP_Athena_Water_C.ReceiveBeginPlay
struct ABP_Athena_Water_C_ReceiveBeginPlay_Params
{
};

// Function BP_Athena_Water.BP_Athena_Water_C.SetSpreadMaterial
struct ABP_Athena_Water_C_SetSpreadMaterial_Params
{
};

// Function BP_Athena_Water.BP_Athena_Water_C.SetTurnedOnMaterial
struct ABP_Athena_Water_C_SetTurnedOnMaterial_Params
{
};

// Function BP_Athena_Water.BP_Athena_Water_C.SetBouncy
struct ABP_Athena_Water_C_SetBouncy_Params
{
	bool                                               Bouncy;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Athena_Water.BP_Athena_Water_C.BndEvt__Box_K2Node_ComponentBoundEvent
struct ABP_Athena_Water_C_BndEvt__Box_K2Node_ComponentBoundEvent_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Athena_Water.BP_Athena_Water_C.Bouncy
struct ABP_Athena_Water_C_Bouncy_Params
{
};

// Function BP_Athena_Water.BP_Athena_Water_C.PlayBounceGC
struct ABP_Athena_Water_C_PlayBounceGC_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Athena_Water.BP_Athena_Water_C.BounceVehicle
struct ABP_Athena_Water_C_BounceVehicle_Params
{
};

// Function BP_Athena_Water.BP_Athena_Water_C.ClearRecentlyBounced
struct ABP_Athena_Water_C_ClearRecentlyBounced_Params
{
};

// Function BP_Athena_Water.BP_Athena_Water_C.SetDefaultMaterial
struct ABP_Athena_Water_C_SetDefaultMaterial_Params
{
};

// Function BP_Athena_Water.BP_Athena_Water_C.ReplicateGCVehicles
struct ABP_Athena_Water_C_ReplicateGCVehicles_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Athena_Water.BP_Athena_Water_C.BouncePawn
struct ABP_Athena_Water_C_BouncePawn_Params
{
	class APlayerPawn_Athena_C*                        Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Athena_Water.BP_Athena_Water_C.ExecuteUbergraph_BP_Athena_Water
struct ABP_Athena_Water_C_ExecuteUbergraph_BP_Athena_Water_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
