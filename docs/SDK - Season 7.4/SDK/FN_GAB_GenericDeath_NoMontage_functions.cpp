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

// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.OnCancelled
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericDeath_NoMontage_C::OnCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.OnCancelled");

	UGAB_GenericDeath_NoMontage_C_OnCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.OnInterrupted
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericDeath_NoMontage_C::OnInterrupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.OnInterrupted");

	UGAB_GenericDeath_NoMontage_C_OnInterrupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.OnBlendOut
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericDeath_NoMontage_C::OnBlendOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.OnBlendOut");

	UGAB_GenericDeath_NoMontage_C_OnBlendOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.OnCompleted
// (BlueprintCallable, BlueprintEvent)

void UGAB_GenericDeath_NoMontage_C::OnCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.OnCompleted");

	UGAB_GenericDeath_NoMontage_C_OnCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_GenericDeath_NoMontage_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.K2_OnEndAbility");

	UGAB_GenericDeath_NoMontage_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_GenericDeath_NoMontage_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.K2_ActivateAbilityFromEvent");

	UGAB_GenericDeath_NoMontage_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.ExecuteUbergraph_GAB_GenericDeath_NoMontage
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_GenericDeath_NoMontage_C::ExecuteUbergraph_GAB_GenericDeath_NoMontage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.ExecuteUbergraph_GAB_GenericDeath_NoMontage");

	UGAB_GenericDeath_NoMontage_C_ExecuteUbergraph_GAB_GenericDeath_NoMontage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
