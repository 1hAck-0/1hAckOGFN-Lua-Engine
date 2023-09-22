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

// Function Athena_Prop_Prop_Bear.Athena_Prop_Prop_Bear_C.UserConstructionScript
struct AAthena_Prop_Prop_Bear_C_UserConstructionScript_Params
{
};

// Function Athena_Prop_Prop_Bear.Athena_Prop_Prop_Bear_C.ReceiveBeginPlay
struct AAthena_Prop_Prop_Bear_C_ReceiveBeginPlay_Params
{
};

// Function Athena_Prop_Prop_Bear.Athena_Prop_Prop_Bear_C.OnDeathServer
struct AAthena_Prop_Prop_Bear_C_OnDeathServer_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Athena_Prop_Prop_Bear.Athena_Prop_Prop_Bear_C.ExecuteUbergraph_Athena_Prop_Prop_Bear
struct AAthena_Prop_Prop_Bear_C_ExecuteUbergraph_Athena_Prop_Prop_Bear_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
