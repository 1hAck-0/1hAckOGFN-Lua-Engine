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

// Function GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C.ActivateBASEStacks
struct UGA_Perk_H_FeelTheBASE_DeathListener_C_ActivateBASEStacks_Params
{
	int                                                Stack_Count;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AB_Perk_C_Constructor_BASE_C*                BASEReference;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C.ExecuteGC
struct UGA_Perk_H_FeelTheBASE_DeathListener_C_ExecuteGC_Params
{
	class AB_Perk_C_Constructor_BASE_C*                BASEReference;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Overflow;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C.K2_ActivateAbilityFromEvent
struct UGA_Perk_H_FeelTheBASE_DeathListener_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C.ExecuteUbergraph_GA_Perk_H_FeelTheBASE_DeathListener
struct UGA_Perk_H_FeelTheBASE_DeathListener_C_ExecuteUbergraph_GA_Perk_H_FeelTheBASE_DeathListener_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
