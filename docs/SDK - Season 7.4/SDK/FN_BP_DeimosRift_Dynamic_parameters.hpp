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

// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.OnRep_ServerSpawnTime
struct ABP_DeimosRift_Dynamic_C_OnRep_ServerSpawnTime_Params
{
};

// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.UserConstructionScript
struct ABP_DeimosRift_Dynamic_C_UserConstructionScript_Params
{
};

// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.ReceiveBeginPlay
struct ABP_DeimosRift_Dynamic_C_ReceiveBeginPlay_Params
{
};

// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.OnDamageServer
struct ABP_DeimosRift_Dynamic_C_OnDamageServer_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.SetLifeTimeTimer
struct ABP_DeimosRift_Dynamic_C_SetLifeTimeTimer_Params
{
};

// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.LifeTimeExpired
struct ABP_DeimosRift_Dynamic_C_LifeTimeExpired_Params
{
};

// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_Intro
struct ABP_DeimosRift_Dynamic_C_BP_Cosmetic_Intro_Params
{
};

// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_Idle
struct ABP_DeimosRift_Dynamic_C_BP_Cosmetic_Idle_Params
{
};

// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_RampUp
struct ABP_DeimosRift_Dynamic_C_BP_Cosmetic_RampUp_Params
{
};

// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_ShouldDie
struct ABP_DeimosRift_Dynamic_C_BP_Cosmetic_ShouldDie_Params
{
};

// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.ExecuteUbergraph_BP_DeimosRift_Dynamic
struct ABP_DeimosRift_Dynamic_C_ExecuteUbergraph_BP_DeimosRift_Dynamic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
