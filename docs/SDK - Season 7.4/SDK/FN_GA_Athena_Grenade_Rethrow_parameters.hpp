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

// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.DetachProjectile
struct UGA_Athena_Grenade_Rethrow_C_DetachProjectile_Params
{
};

// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.AttachProjectile
struct UGA_Athena_Grenade_Rethrow_C_AttachProjectile_Params
{
};

// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Completed
struct UGA_Athena_Grenade_Rethrow_C_Completed_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Cancelled
struct UGA_Athena_Grenade_Rethrow_C_Cancelled_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Triggered
struct UGA_Athena_Grenade_Rethrow_C_Triggered_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.OnFinish_B295E6694DBD8B2B2478A38EA60F5624
struct UGA_Athena_Grenade_Rethrow_C_OnFinish_B295E6694DBD8B2B2478A38EA60F5624_Params
{
};

// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.K2_ActivateAbility
struct UGA_Athena_Grenade_Rethrow_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.TossGrenade
struct UGA_Athena_Grenade_Rethrow_C_TossGrenade_Params
{
};

// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.Server_SpawnProjectile
struct UGA_Athena_Grenade_Rethrow_C_Server_SpawnProjectile_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.K2_OnEndAbility
struct UGA_Athena_Grenade_Rethrow_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C.ExecuteUbergraph_GA_Athena_Grenade_Rethrow
struct UGA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
