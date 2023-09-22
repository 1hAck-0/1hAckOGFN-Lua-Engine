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

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Completed
struct UGAB_AthenaDBNORevive_C_Completed_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Cancelled
struct UGAB_AthenaDBNORevive_C_Cancelled_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Triggered
struct UGAB_AthenaDBNORevive_C_Triggered_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Targeted
struct UGAB_AthenaDBNORevive_C_Targeted_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.K2_ActivateAbilityFromEvent
struct UGAB_AthenaDBNORevive_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.K2_OnEndAbility
struct UGAB_AthenaDBNORevive_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.ExecuteUbergraph_GAB_AthenaDBNORevive
struct UGAB_AthenaDBNORevive_C_ExecuteUbergraph_GAB_AthenaDBNORevive_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
