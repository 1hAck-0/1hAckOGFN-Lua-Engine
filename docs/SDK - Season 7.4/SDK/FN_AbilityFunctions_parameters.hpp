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

// Function AbilityFunctions.AbilityFunctions_C.ApplySlowFall
struct UAbilityFunctions_C_ApplySlowFall_Params
{
	float                                              SlowFallDuration;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortGameplayAbility*                        SelfGameplayAbilityReference;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GameplayEffect;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 EffectSpecHandle;                                         // (Parm, OutParm)
};

// Function AbilityFunctions.AbilityFunctions_C.GetDistanceBetweenActors
struct UAbilityFunctions_C_GetDistanceBetweenActors_Params
{
	class AActor*                                      Actor1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AbilityFunctions.AbilityFunctions_C.GetPawnFromPlayerStateZone
struct UAbilityFunctions_C_GetPawnFromPlayerStateZone_Params
{
	class AActor*                                      InActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerPawn*                             OutPawn;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               PawnReturned;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AbilityFunctions.AbilityFunctions_C.EvaluatePerkTierBalanceValue
struct UAbilityFunctions_C_EvaluatePerkTierBalanceValue_Params
{
	struct FScalableFloat                              T01_Balance_Value;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FScalableFloat                              T02_Balance_Value;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Owns_T02;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Should_Override_T01;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FScalableFloat                              Balance_Value;                                            // (Parm, OutParm)
};

// Function AbilityFunctions.AbilityFunctions_C.GetRangeFromGameplayEffectContainer
struct UAbilityFunctions_C_GetRangeFromGameplayEffectContainer_Params
{
	struct FFortGameplayEffectContainer                GE_Container;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Target_Selection_List_Index;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              At_Level;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AbilityFunctions.AbilityFunctions_C.GetTotalGameplayEffectCount
struct UAbilityFunctions_C_GetTotalGameplayEffectCount_Params
{
	TArray<class UClass*>                              EffectsToCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FinalEffectCount;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AbilityFunctions.AbilityFunctions_C.GetAngleBetweenTwoVectors
struct UAbilityFunctions_C_GetAngleBetweenTwoVectors_Params
{
	struct FVector                                     VectorA;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VectorB;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle__Degrees_;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AbilityFunctions.AbilityFunctions_C.GetRangeFromGameplayEffectContainerSpec
struct UAbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec_Params
{
	struct FFortGameplayEffectContainerSpec            GE_Container_Spec;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Target_Selection_List_Index;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              At_Level;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AbilityFunctions.AbilityFunctions_C.GetProjectedTeleportLocation
struct UAbilityFunctions_C_GetProjectedTeleportLocation_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MovementDistance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AbilityFunctions.AbilityFunctions_C.ShouldSwordHitsHealRespondToEvent
struct UAbilityFunctions_C_ShouldSwordHitsHealRespondToEvent_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AbilityFunctions.AbilityFunctions_C.ShouldHammerHitsHealRespondToEvent
struct UAbilityFunctions_C_ShouldHammerHitsHealRespondToEvent_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AbilityFunctions.AbilityFunctions_C.ConvertRangeToTiles
struct UAbilityFunctions_C_ConvertRangeToTiles_Params
{
	float                                              InRange;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutTile;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AbilityFunctions.AbilityFunctions_C.SetArrayOfHitActors
struct UAbilityFunctions_C_SetArrayOfHitActors_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class AActor*>                              ArrayToSet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AbilityFunctions.AbilityFunctions_C.DoNOTUse-BuildArrayOfHitActors
struct UAbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              HitActors;                                                // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
