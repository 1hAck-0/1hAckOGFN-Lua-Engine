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

// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.Completed
struct UGAB_PlayerDBNOResurrect_C_Completed_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.Cancelled
struct UGAB_PlayerDBNOResurrect_C_Cancelled_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.Triggered
struct UGAB_PlayerDBNOResurrect_C_Triggered_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.Targeted
struct UGAB_PlayerDBNOResurrect_C_Targeted_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.K2_ActivateAbilityFromEvent
struct UGAB_PlayerDBNOResurrect_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.K2_OnEndAbility
struct UGAB_PlayerDBNOResurrect_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.ExecuteUbergraph_GAB_PlayerDBNOResurrect
struct UGAB_PlayerDBNOResurrect_C_ExecuteUbergraph_GAB_PlayerDBNOResurrect_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
