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

// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.InvalidHandle
struct UGA_DanceGrenade_Stun_C_InvalidHandle_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.OnRemoved
struct UGA_DanceGrenade_Stun_C_OnRemoved_Params
{
	struct FGameplayEffectRemovalInfo                  GameplayEffectRemovalInfo;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.K2_ActivateAbility
struct UGA_DanceGrenade_Stun_C_K2_ActivateAbility_Params
{
};

// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.K2_OnEndAbility
struct UGA_DanceGrenade_Stun_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.ExecuteUbergraph_GA_DanceGrenade_Stun
struct UGA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
