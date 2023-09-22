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

// Function GA_Perk_H_FrozenCastle_FreezeOnHit.GA_Perk_H_FrozenCastle_FreezeOnHit_C.K2_ShouldAbilityRespondToEvent
struct UGA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Perk_H_FrozenCastle_FreezeOnHit.GA_Perk_H_FrozenCastle_FreezeOnHit_C.K2_ActivateAbilityFromEvent
struct UGA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Perk_H_FrozenCastle_FreezeOnHit.GA_Perk_H_FrozenCastle_FreezeOnHit_C.ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit
struct UGA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
