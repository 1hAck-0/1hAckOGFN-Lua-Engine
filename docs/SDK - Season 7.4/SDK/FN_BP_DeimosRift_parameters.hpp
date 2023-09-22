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

// Function BP_DeimosRift.BP_DeimosRift_C.FlashCubeMaterial
struct ABP_DeimosRift_C_FlashCubeMaterial_Params
{
};

// Function BP_DeimosRift.BP_DeimosRift_C.OnRep_DamageState
struct ABP_DeimosRift_C_OnRep_DamageState_Params
{
};

// Function BP_DeimosRift.BP_DeimosRift_C.UserConstructionScript
struct ABP_DeimosRift_C_UserConstructionScript_Params
{
};

// Function BP_DeimosRift.BP_DeimosRift_C.OnDeathPlayEffects
struct ABP_DeimosRift_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DeimosRift.BP_DeimosRift_C.OnDeathServer
struct ABP_DeimosRift_C_OnDeathServer_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_RampUp
struct ABP_DeimosRift_C_BP_Cosmetic_RampUp_Params
{
};

// Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_Intro
struct ABP_DeimosRift_C_BP_Cosmetic_Intro_Params
{
};

// Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_Idle
struct ABP_DeimosRift_C_BP_Cosmetic_Idle_Params
{
};

// Function BP_DeimosRift.BP_DeimosRift_C.OnStartedEncounterSpawn
struct ABP_DeimosRift_C_OnStartedEncounterSpawn_Params
{
	class AFortAIPawn*                                 SpawnedAI;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeimosRift.BP_DeimosRift_C.ReceiveBeginPlay
struct ABP_DeimosRift_C_ReceiveBeginPlay_Params
{
};

// Function BP_DeimosRift.BP_DeimosRift_C.OnDamaged_Bind
struct ABP_DeimosRift_C_OnDamaged_Bind_Params
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

// Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_ShouldDie
struct ABP_DeimosRift_C_BP_Cosmetic_ShouldDie_Params
{
};

// Function BP_DeimosRift.BP_DeimosRift_C.OnBuildingRiftSpawnedAI_Bind
struct ABP_DeimosRift_C_OnBuildingRiftSpawnedAI_Bind_Params
{
};

// Function BP_DeimosRift.BP_DeimosRift_C.TestDynamicRiftSpawn
struct ABP_DeimosRift_C_TestDynamicRiftSpawn_Params
{
};

// Function BP_DeimosRift.BP_DeimosRift_C.SpawnEffects
struct ABP_DeimosRift_C_SpawnEffects_Params
{
};

// Function BP_DeimosRift.BP_DeimosRift_C.ExecuteUbergraph_BP_DeimosRift
struct ABP_DeimosRift_C_ExecuteUbergraph_BP_DeimosRift_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
