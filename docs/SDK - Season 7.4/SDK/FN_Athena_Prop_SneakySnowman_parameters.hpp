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

// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.TraceStartAndEnd
struct AAthena_Prop_SneakySnowman_C_TraceStartAndEnd_Params
{
	struct FVector                                     Start;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.ForceSetLocationOnLanding
struct AAthena_Prop_SneakySnowman_C_ForceSetLocationOnLanding_Params
{
};

// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.OnRep_LandedLocation
struct AAthena_Prop_SneakySnowman_C_OnRep_LandedLocation_Params
{
};

// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.OnRep_bSimulationRunning
struct AAthena_Prop_SneakySnowman_C_OnRep_bSimulationRunning_Params
{
};

// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.ResetSimulatedComponents
struct AAthena_Prop_SneakySnowman_C_ResetSimulatedComponents_Params
{
};

// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.UserConstructionScript
struct AAthena_Prop_SneakySnowman_C_UserConstructionScript_Params
{
};

// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent
struct AAthena_Prop_SneakySnowman_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.BuildingActorDied
struct AAthena_Prop_SneakySnowman_C_BuildingActorDied_Params
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

// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.RestartSimulating
struct AAthena_Prop_SneakySnowman_C_RestartSimulating_Params
{
};

// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.ReceiveBeginPlay
struct AAthena_Prop_SneakySnowman_C_ReceiveBeginPlay_Params
{
};

// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.OnDamagePlayEffects
struct AAthena_Prop_SneakySnowman_C_OnDamagePlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.BndEvt__OverlapCheck_K2Node_ComponentBoundEvent
struct AAthena_Prop_SneakySnowman_C_BndEvt__OverlapCheck_K2Node_ComponentBoundEvent_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.PreFinishSpawning
struct AAthena_Prop_SneakySnowman_C_PreFinishSpawning_Params
{
	class AFortVolume*                                 VolumeSpawnedWithin;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.PlaylistLoaded
struct AAthena_Prop_SneakySnowman_C_PlaylistLoaded_Params
{
	struct FName                                       PlaylistName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       PlaylistContextTags;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.WobbleAnims
struct AAthena_Prop_SneakySnowman_C_WobbleAnims_Params
{
};

// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.WorldPropSupportDied
struct AAthena_Prop_SneakySnowman_C_WorldPropSupportDied_Params
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

// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.ResetDistanceCheck
struct AAthena_Prop_SneakySnowman_C_ResetDistanceCheck_Params
{
};

// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.ExecuteUbergraph_Athena_Prop_SneakySnowman
struct AAthena_Prop_SneakySnowman_C_ExecuteUbergraph_Athena_Prop_SneakySnowman_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
