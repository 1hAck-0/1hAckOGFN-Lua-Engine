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

// Function GA_SiphonEffect_OnKillGrant.GA_SiphonEffect_OnKillGrant_C.K2_ShouldAbilityRespondToEvent
struct UGA_SiphonEffect_OnKillGrant_C_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_SiphonEffect_OnKillGrant.GA_SiphonEffect_OnKillGrant_C.K2_ActivateAbilityFromEvent
struct UGA_SiphonEffect_OnKillGrant_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_SiphonEffect_OnKillGrant.GA_SiphonEffect_OnKillGrant_C.ExecuteUbergraph_GA_SiphonEffect_OnKillGrant
struct UGA_SiphonEffect_OnKillGrant_C_ExecuteUbergraph_GA_SiphonEffect_OnKillGrant_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
