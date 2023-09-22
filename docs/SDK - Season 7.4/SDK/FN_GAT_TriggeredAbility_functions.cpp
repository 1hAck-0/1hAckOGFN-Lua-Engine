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

// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.SetHolsterWeaponWithName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               Target_Fort_Pawn               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldHolster                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayEquipAnim                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowDebugPrintName             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWeaponHolstered              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           OperationSuccessful            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGAT_TriggeredAbility_C::SetHolsterWeaponWithName(class AFortPawn* Target_Fort_Pawn, bool ShouldHolster, bool PlayEquipAnim, bool ShowDebugPrintName, bool* IsWeaponHolstered, bool* OperationSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.SetHolsterWeaponWithName");

	UGAT_TriggeredAbility_C_SetHolsterWeaponWithName_Params params;
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


// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.TriggeredAbilitySetup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemIn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAbilitySystemComponent* AbilitySystemOut               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGAT_TriggeredAbility_C::TriggeredAbilitySetup(class UAbilitySystemComponent* AbilitySystemIn, class UAbilitySystemComponent** AbilitySystemOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.TriggeredAbilitySetup");

	UGAT_TriggeredAbility_C_TriggeredAbilitySetup_Params params;
	params.AbilitySystemIn = AbilitySystemIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AbilitySystemOut != nullptr)
		*AbilitySystemOut = params.AbilitySystemOut;
}


// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAT_TriggeredAbility_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.K2_ActivateAbilityFromEvent");

	UGAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.ExecuteUbergraph_GAT_TriggeredAbility
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_TriggeredAbility_C::ExecuteUbergraph_GAT_TriggeredAbility(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.ExecuteUbergraph_GAT_TriggeredAbility");

	UGAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
