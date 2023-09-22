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

// Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.UnBlockAbilityTags
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_SpookyMist_PassiveSetup_C::UnBlockAbilityTags()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.UnBlockAbilityTags");

	UGA_SpookyMist_PassiveSetup_C_UnBlockAbilityTags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.SetBlockAbilityTags
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_SpookyMist_PassiveSetup_C::SetBlockAbilityTags()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.SetBlockAbilityTags");

	UGA_SpookyMist_PassiveSetup_C_SetBlockAbilityTags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.EventReceived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SpookyMist_PassiveSetup_C::EventReceived(struct FGameplayEventData Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.EventReceived");

	UGA_SpookyMist_PassiveSetup_C_EventReceived_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_SpookyMist_PassiveSetup_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.K2_ActivateAbility");

	UGA_SpookyMist_PassiveSetup_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.WhenDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     FHitComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_SpookyMist_PassiveSetup_C::WhenDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, struct FVector HitLocation, class UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.WhenDamaged");

	UGA_SpookyMist_PassiveSetup_C_WhenDamaged_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.On DBNO
// (BlueprintCallable, BlueprintEvent)

void UGA_SpookyMist_PassiveSetup_C::On_DBNO()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.On DBNO");

	UGA_SpookyMist_PassiveSetup_C_On_DBNO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_SpookyMist_PassiveSetup_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.K2_OnEndAbility");

	UGA_SpookyMist_PassiveSetup_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.ExecuteUbergraph_GA_SpookyMist_PassiveSetup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_SpookyMist_PassiveSetup_C::ExecuteUbergraph_GA_SpookyMist_PassiveSetup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C.ExecuteUbergraph_GA_SpookyMist_PassiveSetup");

	UGA_SpookyMist_PassiveSetup_C_ExecuteUbergraph_GA_SpookyMist_PassiveSetup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
