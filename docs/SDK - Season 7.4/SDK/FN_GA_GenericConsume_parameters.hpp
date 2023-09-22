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

// Function GA_GenericConsume.GA_GenericConsume_C.OnGenericNotifyFromAnimation
struct UGA_GenericConsume_C_OnGenericNotifyFromAnimation_Params
{
	struct FGameplayTag                                NotifyTag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_GenericConsume.GA_GenericConsume_C.Completed
struct UGA_GenericConsume_C_Completed_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_GenericConsume.GA_GenericConsume_C.Cancelled
struct UGA_GenericConsume_C_Cancelled_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_GenericConsume.GA_GenericConsume_C.Triggered
struct UGA_GenericConsume_C_Triggered_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_GenericConsume.GA_GenericConsume_C.K2_ActivateAbility
struct UGA_GenericConsume_C_K2_ActivateAbility_Params
{
};

// Function GA_GenericConsume.GA_GenericConsume_C.ExecuteUbergraph_GA_GenericConsume
struct UGA_GenericConsume_C_ExecuteUbergraph_GA_GenericConsume_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
