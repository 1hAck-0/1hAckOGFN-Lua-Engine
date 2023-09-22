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

// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.PlayerCapsuleSizes
struct UGA_SpookyMist_Travel_C_PlayerCapsuleSizes_Params
{
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.SetDashStartEndAndDirection
struct UGA_SpookyMist_Travel_C_SetDashStartEndAndDirection_Params
{
	struct FVector                                     StartPoint;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndPoint;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.HandlePawnDetachRC
struct UGA_SpookyMist_Travel_C_HandlePawnDetachRC_Params
{
};

// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.OnFinish
struct UGA_SpookyMist_Travel_C_OnFinish_Params
{
};

// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.Completed_BA1318F5441CE862ADFAB5BA78450BAF
struct UGA_SpookyMist_Travel_C_Completed_BA1318F5441CE862ADFAB5BA78450BAF_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.Cancelled_BA1318F5441CE862ADFAB5BA78450BAF
struct UGA_SpookyMist_Travel_C_Cancelled_BA1318F5441CE862ADFAB5BA78450BAF_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.Triggered_BA1318F5441CE862ADFAB5BA78450BAF
struct UGA_SpookyMist_Travel_C_Triggered_BA1318F5441CE862ADFAB5BA78450BAF_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.EventReceived
struct UGA_SpookyMist_Travel_C_EventReceived_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.K2_ActivateAbilityFromEvent
struct UGA_SpookyMist_Travel_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.K2_OnEndAbility
struct UGA_SpookyMist_Travel_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.CheckIfStillColliding
struct UGA_SpookyMist_Travel_C_CheckIfStillColliding_Params
{
};

// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.On DBNO
struct UGA_SpookyMist_Travel_C_On_DBNO_Params
{
};

// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.DestroyObjects
struct UGA_SpookyMist_Travel_C_DestroyObjects_Params
{
};

// Function GA_SpookyMist_Travel.GA_SpookyMist_Travel_C.ExecuteUbergraph_GA_SpookyMist_Travel
struct UGA_SpookyMist_Travel_C_ExecuteUbergraph_GA_SpookyMist_Travel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
