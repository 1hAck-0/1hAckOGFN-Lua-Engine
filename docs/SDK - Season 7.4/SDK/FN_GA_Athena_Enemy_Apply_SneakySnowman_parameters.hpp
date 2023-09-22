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

// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.HasVehicleWeapon?
struct UGA_Athena_Enemy_Apply_SneakySnowman_C_HasVehicleWeapon__Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.Completed
struct UGA_Athena_Enemy_Apply_SneakySnowman_C_Completed_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.Cancelled
struct UGA_Athena_Enemy_Apply_SneakySnowman_C_Cancelled_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.Triggered
struct UGA_Athena_Enemy_Apply_SneakySnowman_C_Triggered_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.EventReceived
struct UGA_Athena_Enemy_Apply_SneakySnowman_C_EventReceived_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.K2_ActivateAbility
struct UGA_Athena_Enemy_Apply_SneakySnowman_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.EndAbility
struct UGA_Athena_Enemy_Apply_SneakySnowman_C_EndAbility_Params
{
};

// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.RestartAbility
struct UGA_Athena_Enemy_Apply_SneakySnowman_C_RestartAbility_Params
{
};

// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.EndAbilitySequence
struct UGA_Athena_Enemy_Apply_SneakySnowman_C_EndAbilitySequence_Params
{
};

// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.K2_OnEndAbility
struct UGA_Athena_Enemy_Apply_SneakySnowman_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.VehicleWeaponCheck
struct UGA_Athena_Enemy_Apply_SneakySnowman_C_VehicleWeaponCheck_Params
{
};

// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.ExecuteUbergraph_GA_Athena_Enemy_Apply_SneakySnowman
struct UGA_Athena_Enemy_Apply_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Enemy_Apply_SneakySnowman_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
