// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AbilityFunctions.AbilityFunctions_C.ApplySlowFall
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SlowFallDuration               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortGameplayAbility*    SelfGameplayAbilityReference   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  GameplayEffect                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FActiveGameplayEffectHandle EffectSpecHandle               (Parm, OutParm)

void UAbilityFunctions_C::STATIC_ApplySlowFall(float SlowFallDuration, class UFortGameplayAbility* SelfGameplayAbilityReference, class UClass* GameplayEffect, class UObject* __WorldContext, struct FActiveGameplayEffectHandle* EffectSpecHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.ApplySlowFall");

	UAbilityFunctions_C_ApplySlowFall_Params params;
	params.SlowFallDuration = SlowFallDuration;
	params.SelfGameplayAbilityReference = SelfGameplayAbilityReference;
	params.GameplayEffect = GameplayEffect;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EffectSpecHandle != nullptr)
		*EffectSpecHandle = params.EffectSpecHandle;
}


// Function AbilityFunctions.AbilityFunctions_C.GetDistanceBetweenActors
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor1                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor2                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbilityFunctions_C::STATIC_GetDistanceBetweenActors(class AActor* Actor1, class AActor* Actor2, class UObject* __WorldContext, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.GetDistanceBetweenActors");

	UAbilityFunctions_C_GetDistanceBetweenActors_Params params;
	params.Actor1 = Actor1;
	params.Actor2 = Actor2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function AbilityFunctions.AbilityFunctions_C.GetPawnFromPlayerStateZone
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InActor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortPlayerPawn*         OutPawn                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           PawnReturned                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbilityFunctions_C::STATIC_GetPawnFromPlayerStateZone(class AActor* InActor, class UObject* __WorldContext, class AFortPlayerPawn** OutPawn, bool* PawnReturned)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.GetPawnFromPlayerStateZone");

	UAbilityFunctions_C_GetPawnFromPlayerStateZone_Params params;
	params.InActor = InActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPawn != nullptr)
		*OutPawn = params.OutPawn;
	if (PawnReturned != nullptr)
		*PawnReturned = params.PawnReturned;
}


// Function AbilityFunctions.AbilityFunctions_C.EvaluatePerkTierBalanceValue
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FScalableFloat          T01_Balance_Value              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FScalableFloat          T02_Balance_Value              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Owns_T02                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Should_Override_T01            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FScalableFloat          Balance_Value                  (Parm, OutParm)

void UAbilityFunctions_C::STATIC_EvaluatePerkTierBalanceValue(struct FScalableFloat T01_Balance_Value, struct FScalableFloat T02_Balance_Value, bool Owns_T02, bool Should_Override_T01, class UObject* __WorldContext, struct FScalableFloat* Balance_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.EvaluatePerkTierBalanceValue");

	UAbilityFunctions_C_EvaluatePerkTierBalanceValue_Params params;
	params.T01_Balance_Value = T01_Balance_Value;
	params.T02_Balance_Value = T02_Balance_Value;
	params.Owns_T02 = Owns_T02;
	params.Should_Override_T01 = Should_Override_T01;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Balance_Value != nullptr)
		*Balance_Value = params.Balance_Value;
}


// Function AbilityFunctions.AbilityFunctions_C.GetRangeFromGameplayEffectContainer
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortGameplayEffectContainer GE_Container                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Target_Selection_List_Index    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          At_Level                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Range                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbilityFunctions_C::STATIC_GetRangeFromGameplayEffectContainer(struct FFortGameplayEffectContainer GE_Container, int Target_Selection_List_Index, float At_Level, class UObject* __WorldContext, float* Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.GetRangeFromGameplayEffectContainer");

	UAbilityFunctions_C_GetRangeFromGameplayEffectContainer_Params params;
	params.GE_Container = GE_Container;
	params.Target_Selection_List_Index = Target_Selection_List_Index;
	params.At_Level = At_Level;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Range != nullptr)
		*Range = params.Range;
}


// Function AbilityFunctions.AbilityFunctions_C.GetTotalGameplayEffectCount
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          EffectsToCount                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UAbilitySystemComponent* AbilitySystemComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FinalEffectCount               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbilityFunctions_C::STATIC_GetTotalGameplayEffectCount(class UAbilitySystemComponent* AbilitySystemComponent, class UObject* __WorldContext, TArray<class UClass*>* EffectsToCount, int* FinalEffectCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.GetTotalGameplayEffectCount");

	UAbilityFunctions_C_GetTotalGameplayEffectCount_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EffectsToCount != nullptr)
		*EffectsToCount = params.EffectsToCount;
	if (FinalEffectCount != nullptr)
		*FinalEffectCount = params.FinalEffectCount;
}


// Function AbilityFunctions.AbilityFunctions_C.GetAngleBetweenTwoVectors
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 VectorA                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VectorB                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle__Degrees_                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbilityFunctions_C::STATIC_GetAngleBetweenTwoVectors(struct FVector VectorA, struct FVector VectorB, class UObject* __WorldContext, float* Angle__Degrees_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.GetAngleBetweenTwoVectors");

	UAbilityFunctions_C_GetAngleBetweenTwoVectors_Params params;
	params.VectorA = VectorA;
	params.VectorB = VectorB;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle__Degrees_ != nullptr)
		*Angle__Degrees_ = params.Angle__Degrees_;
}


// Function AbilityFunctions.AbilityFunctions_C.GetRangeFromGameplayEffectContainerSpec
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortGameplayEffectContainerSpec GE_Container_Spec              (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Target_Selection_List_Index    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          At_Level                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Range                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbilityFunctions_C::STATIC_GetRangeFromGameplayEffectContainerSpec(struct FFortGameplayEffectContainerSpec GE_Container_Spec, int Target_Selection_List_Index, float At_Level, class UObject* __WorldContext, float* Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.GetRangeFromGameplayEffectContainerSpec");

	UAbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec_Params params;
	params.GE_Container_Spec = GE_Container_Spec;
	params.Target_Selection_List_Index = Target_Selection_List_Index;
	params.At_Level = At_Level;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Range != nullptr)
		*Range = params.Range;
}


// Function AbilityFunctions.AbilityFunctions_C.GetProjectedTeleportLocation
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MovementDistance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbilityFunctions_C::STATIC_GetProjectedTeleportLocation(class AActor* Actor, float MovementDistance, class UObject* __WorldContext, struct FVector* TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.GetProjectedTeleportLocation");

	UAbilityFunctions_C_GetProjectedTeleportLocation_Params params;
	params.Actor = Actor;
	params.MovementDistance = MovementDistance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
}


// Function AbilityFunctions.AbilityFunctions_C.ShouldSwordHitsHealRespondToEvent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilityFunctions_C::STATIC_ShouldSwordHitsHealRespondToEvent(struct FGameplayEventData Payload, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.ShouldSwordHitsHealRespondToEvent");

	UAbilityFunctions_C_ShouldSwordHitsHealRespondToEvent_Params params;
	params.Payload = Payload;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AbilityFunctions.AbilityFunctions_C.ShouldHammerHitsHealRespondToEvent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilityFunctions_C::STATIC_ShouldHammerHitsHealRespondToEvent(struct FGameplayEventData Payload, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.ShouldHammerHitsHealRespondToEvent");

	UAbilityFunctions_C_ShouldHammerHitsHealRespondToEvent_Params params;
	params.Payload = Payload;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AbilityFunctions.AbilityFunctions_C.ConvertRangeToTiles
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InRange                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutTile                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbilityFunctions_C::STATIC_ConvertRangeToTiles(float InRange, class UObject* __WorldContext, float* OutTile)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.ConvertRangeToTiles");

	UAbilityFunctions_C_ConvertRangeToTiles_Params params;
	params.InRange = InRange;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTile != nullptr)
		*OutTile = params.OutTile;
}


// Function AbilityFunctions.AbilityFunctions_C.SetArrayOfHitActors
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class AActor*>          ArrayToSet                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbilityFunctions_C::STATIC_SetArrayOfHitActors(struct FGameplayAbilityTargetDataHandle TargetData, class UObject* __WorldContext, TArray<class AActor*>* ArrayToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.SetArrayOfHitActors");

	UAbilityFunctions_C_SetArrayOfHitActors_Params params;
	params.TargetData = TargetData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArrayToSet != nullptr)
		*ArrayToSet = params.ArrayToSet;
}


// Function AbilityFunctions.AbilityFunctions_C.DoNOTUse-BuildArrayOfHitActors
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          HitActors                      (Parm, OutParm, ZeroConstructor)

void UAbilityFunctions_C::STATIC_DoNOTUse_BuildArrayOfHitActors(struct FGameplayAbilityTargetDataHandle TargetData, class UObject* __WorldContext, TArray<class AActor*>* HitActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityFunctions.AbilityFunctions_C.DoNOTUse-BuildArrayOfHitActors");

	UAbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors_Params params;
	params.TargetData = TargetData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitActors != nullptr)
		*HitActors = params.HitActors;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
