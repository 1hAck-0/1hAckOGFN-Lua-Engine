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

// Function GAB_FiendMelee.GAB_FiendMelee_C.Completed
struct UGAB_FiendMelee_C_Completed_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_FiendMelee.GAB_FiendMelee_C.Cancelled
struct UGAB_FiendMelee_C_Cancelled_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_FiendMelee.GAB_FiendMelee_C.Triggered
struct UGAB_FiendMelee_C_Triggered_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_FiendMelee.GAB_FiendMelee_C.OnMoveFinished
struct UGAB_FiendMelee_C_OnMoveFinished_Params
{
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAIController*                               AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_FiendMelee.GAB_FiendMelee_C.OnRequestFailed
struct UGAB_FiendMelee_C_OnRequestFailed_Params
{
};

// Function GAB_FiendMelee.GAB_FiendMelee_C.OnCancelled
struct UGAB_FiendMelee_C_OnCancelled_Params
{
};

// Function GAB_FiendMelee.GAB_FiendMelee_C.OnInterrupted
struct UGAB_FiendMelee_C_OnInterrupted_Params
{
};

// Function GAB_FiendMelee.GAB_FiendMelee_C.OnComplete
struct UGAB_FiendMelee_C_OnComplete_Params
{
};

// Function GAB_FiendMelee.GAB_FiendMelee_C.K2_ActivateAbility
struct UGAB_FiendMelee_C_K2_ActivateAbility_Params
{
};

// Function GAB_FiendMelee.GAB_FiendMelee_C.K2_OnEndAbility
struct UGAB_FiendMelee_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_FiendMelee.GAB_FiendMelee_C.ContinuousMoveTowardsTarget
struct UGAB_FiendMelee_C_ContinuousMoveTowardsTarget_Params
{
};

// Function GAB_FiendMelee.GAB_FiendMelee_C.GameplayEffectContainerApplied
struct UGAB_FiendMelee_C_GameplayEffectContainerApplied_Params
{
	struct FGameplayAbilityTargetDataHandle            Target_Data;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_FiendMelee.GAB_FiendMelee_C.ExecuteUbergraph_GAB_FiendMelee
struct UGAB_FiendMelee_C_ExecuteUbergraph_GAB_FiendMelee_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
