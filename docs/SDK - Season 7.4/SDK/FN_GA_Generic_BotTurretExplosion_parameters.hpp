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

// Function GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C.Cancelled
struct UGA_Generic_BotTurretExplosion_C_Cancelled_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C.Targeted
struct UGA_Generic_BotTurretExplosion_C_Targeted_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C.K2_ActivateAbilityFromEvent
struct UGA_Generic_BotTurretExplosion_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C.ExecuteUbergraph_GA_Generic_BotTurretExplosion
struct UGA_Generic_BotTurretExplosion_C_ExecuteUbergraph_GA_Generic_BotTurretExplosion_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
