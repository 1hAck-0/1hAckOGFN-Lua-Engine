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

// Function GA_GM_OnDmgDealt_SelfHeal.GA_GM_OnDmgDealt_SelfHeal_C.K2_ShouldAbilityRespondToEvent
struct UGA_GM_OnDmgDealt_SelfHeal_C_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_GM_OnDmgDealt_SelfHeal.GA_GM_OnDmgDealt_SelfHeal_C.CalculateHealMagnitude
struct UGA_GM_OnDmgDealt_SelfHeal_C_CalculateHealMagnitude_Params
{
	float                                              BaseMagnitude;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PawnLevel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FinalMagnitude;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_GM_OnDmgDealt_SelfHeal.GA_GM_OnDmgDealt_SelfHeal_C.DoOnDmgDealtBehavior
struct UGA_GM_OnDmgDealt_SelfHeal_C_DoOnDmgDealtBehavior_Params
{
	struct FGameplayEventData                          EventData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_GM_OnDmgDealt_SelfHeal.GA_GM_OnDmgDealt_SelfHeal_C.ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal
struct UGA_GM_OnDmgDealt_SelfHeal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_SelfHeal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
