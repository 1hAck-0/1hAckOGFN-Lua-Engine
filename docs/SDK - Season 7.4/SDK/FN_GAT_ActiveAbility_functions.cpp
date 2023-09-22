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

// Function GAT_ActiveAbility.GAT_ActiveAbility_C.SendHeroAbilityActivationEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGAT_ActiveAbility_C::SendHeroAbilityActivationEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_ActiveAbility.GAT_ActiveAbility_C.SendHeroAbilityActivationEvent");

	UGAT_ActiveAbility_C_SendHeroAbilityActivationEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetHolsterWeaponWithName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               Target_Fort_Pawn               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldHolster                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayEquipAnim                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowDebugPrintName             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWeaponHolstered              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           OperationSuccessful            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGAT_ActiveAbility_C::SetHolsterWeaponWithName(class AFortPawn* Target_Fort_Pawn, bool ShouldHolster, bool PlayEquipAnim, bool ShowDebugPrintName, bool* IsWeaponHolstered, bool* OperationSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetHolsterWeaponWithName");

	UGAT_ActiveAbility_C_SetHolsterWeaponWithName_Params params;
	params.Target_Fort_Pawn = Target_Fort_Pawn;
	params.ShouldHolster = ShouldHolster;
	params.PlayEquipAnim = PlayEquipAnim;
	params.ShowDebugPrintName = ShowDebugPrintName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsWeaponHolstered != nullptr)
		*IsWeaponHolstered = params.IsWeaponHolstered;
	if (OperationSuccessful != nullptr)
		*OperationSuccessful = params.OperationSuccessful;
}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGAT_ActiveAbility_C::K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ShouldAbilityRespondToEvent");

	UGAT_ActiveAbility_C_K2_ShouldAbilityRespondToEvent_Params params;
	params.ActorInfo = ActorInfo;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.ActiveAbilitySetup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemIn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAbilitySystemComponent* AbilitySystemOut               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGAT_ActiveAbility_C::ActiveAbilitySetup(class UAbilitySystemComponent* AbilitySystemIn, class UAbilitySystemComponent** AbilitySystemOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_ActiveAbility.GAT_ActiveAbility_C.ActiveAbilitySetup");

	UGAT_ActiveAbility_C_ActiveAbilitySetup_Params params;
	params.AbilitySystemIn = AbilitySystemIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AbilitySystemOut != nullptr)
		*AbilitySystemOut = params.AbilitySystemOut;
}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetKnockbackImmunity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ImmunityOn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_ActiveAbility_C::SetKnockbackImmunity(bool ImmunityOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetKnockbackImmunity");

	UGAT_ActiveAbility_C_SetKnockbackImmunity_Params params;
	params.ImmunityOn = ImmunityOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetPawnCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               FortPawn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CollisionOn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_ActiveAbility_C::SetPawnCollision(class AFortPawn* FortPawn, bool CollisionOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetPawnCollision");

	UGAT_ActiveAbility_C_SetPawnCollision_Params params;
	params.FortPawn = FortPawn;
	params.CollisionOn = CollisionOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAT_ActiveAbility_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ActivateAbility");

	UGAT_ActiveAbility_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.ExecuteUbergraph_GAT_ActiveAbility
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_ActiveAbility_C::ExecuteUbergraph_GAT_ActiveAbility(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_ActiveAbility.GAT_ActiveAbility_C.ExecuteUbergraph_GAT_ActiveAbility");

	UGAT_ActiveAbility_C_ExecuteUbergraph_GAT_ActiveAbility_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
