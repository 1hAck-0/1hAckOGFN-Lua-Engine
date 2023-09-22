#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AbilityFunctions.AbilityFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UAbilityFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AbilityFunctions.AbilityFunctions_C");
		return ptr;
	}


	void STATIC_ApplySlowFall(float SlowFallDuration, class UFortGameplayAbility* SelfGameplayAbilityReference, class UClass* GameplayEffect, class UObject* __WorldContext, struct FActiveGameplayEffectHandle* EffectSpecHandle);
	void STATIC_GetDistanceBetweenActors(class AActor* Actor1, class AActor* Actor2, class UObject* __WorldContext, float* Distance);
	void STATIC_GetPawnFromPlayerStateZone(class AActor* InActor, class UObject* __WorldContext, class AFortPlayerPawn** OutPawn, bool* PawnReturned);
	void STATIC_EvaluatePerkTierBalanceValue(struct FScalableFloat T01_Balance_Value, struct FScalableFloat T02_Balance_Value, bool Owns_T02, bool Should_Override_T01, class UObject* __WorldContext, struct FScalableFloat* Balance_Value);
	void STATIC_GetRangeFromGameplayEffectContainer(struct FFortGameplayEffectContainer GE_Container, int Target_Selection_List_Index, float At_Level, class UObject* __WorldContext, float* Range);
	void STATIC_GetTotalGameplayEffectCount(class UAbilitySystemComponent* AbilitySystemComponent, class UObject* __WorldContext, TArray<class UClass*>* EffectsToCount, int* FinalEffectCount);
	void STATIC_GetAngleBetweenTwoVectors(struct FVector VectorA, struct FVector VectorB, class UObject* __WorldContext, float* Angle__Degrees_);
	void STATIC_GetRangeFromGameplayEffectContainerSpec(struct FFortGameplayEffectContainerSpec GE_Container_Spec, int Target_Selection_List_Index, float At_Level, class UObject* __WorldContext, float* Range);
	void STATIC_GetProjectedTeleportLocation(class AActor* Actor, float MovementDistance, class UObject* __WorldContext, struct FVector* TargetLocation);
	bool STATIC_ShouldSwordHitsHealRespondToEvent(struct FGameplayEventData Payload, class UObject* __WorldContext);
	bool STATIC_ShouldHammerHitsHealRespondToEvent(struct FGameplayEventData Payload, class UObject* __WorldContext);
	void STATIC_ConvertRangeToTiles(float InRange, class UObject* __WorldContext, float* OutTile);
	void STATIC_SetArrayOfHitActors(struct FGameplayAbilityTargetDataHandle TargetData, class UObject* __WorldContext, TArray<class AActor*>* ArrayToSet);
	void STATIC_DoNOTUse_BuildArrayOfHitActors(struct FGameplayAbilityTargetDataHandle TargetData, class UObject* __WorldContext, TArray<class AActor*>* HitActors);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
