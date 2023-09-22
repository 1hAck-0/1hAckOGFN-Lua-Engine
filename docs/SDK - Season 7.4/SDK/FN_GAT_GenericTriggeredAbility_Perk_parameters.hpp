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

// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.CalcStreakBreakerThreshold
struct UGAT_GenericTriggeredAbility_Perk_C_CalcStreakBreakerThreshold_Params
{
	float                                              PROC_Chance__0_1_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Streak_Breaker_Threshold;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.GrantRegenItemToOwner
struct UGAT_GenericTriggeredAbility_Perk_C_GrantRegenItemToOwner_Params
{
	class AFortPlayerPawn*                             FortPlayerPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWorldItemDefinition*                    ItemToGive;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumberToGive;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NotifyPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.SetDamageElement
struct UGAT_GenericTriggeredAbility_Perk_C_SetDamageElement_Params
{
	struct FGameplayTagContainer                       InstegatorTags;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UClass*                                      DefaultEffect;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ElementEffectOut;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               EffectWasChanged;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.GetCorrectBalanceValue
struct UGAT_GenericTriggeredAbility_Perk_C_GetCorrectBalanceValue_Params
{
	struct FScalableFloat                              Lookup_Base;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FScalableFloat                              Lookup_Commander;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTag                                Commander_Tag;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.GrantFragmentCharge
struct UGAT_GenericTriggeredAbility_Perk_C_GrantFragmentCharge_Params
{
	int                                                Grant_Amount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.CheckStreak
struct UGAT_GenericTriggeredAbility_Perk_C_CheckStreak_Params
{
	int                                                CountPerTrigger;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxStreak;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StreakCount;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               StreakMaxed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.K2_ActivateAbilityFromEvent
struct UGAT_GenericTriggeredAbility_Perk_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk
struct UGAT_GenericTriggeredAbility_Perk_C_ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
