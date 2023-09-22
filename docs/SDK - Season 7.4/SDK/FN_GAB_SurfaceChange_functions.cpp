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

// Function GAB_SurfaceChange.GAB_SurfaceChange_C.HotfixableGEApplication
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScalableFloat          Input                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UClass*                  GameplayEffectAppliedOnTrue    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  GameplayEffectAppliedOnFalse   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SurfaceChange_C::HotfixableGEApplication(struct FScalableFloat Input, class UClass* GameplayEffectAppliedOnTrue, class UClass* GameplayEffectAppliedOnFalse)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurfaceChange.GAB_SurfaceChange_C.HotfixableGEApplication");

	UGAB_SurfaceChange_C_HotfixableGEApplication_Params params;
	params.Input = Input;
	params.GameplayEffectAppliedOnTrue = GameplayEffectAppliedOnTrue;
	params.GameplayEffectAppliedOnFalse = GameplayEffectAppliedOnFalse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurfaceChange.GAB_SurfaceChange_C.RemoveGameplayEffects
// (Public, BlueprintCallable, BlueprintEvent)

void UGAB_SurfaceChange_C::RemoveGameplayEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurfaceChange.GAB_SurfaceChange_C.RemoveGameplayEffects");

	UGAB_SurfaceChange_C_RemoveGameplayEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurfaceChange.GAB_SurfaceChange_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_SurfaceChange_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurfaceChange.GAB_SurfaceChange_C.K2_ActivateAbilityFromEvent");

	UGAB_SurfaceChange_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurfaceChange.GAB_SurfaceChange_C.ExecuteUbergraph_GAB_SurfaceChange
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SurfaceChange_C::ExecuteUbergraph_GAB_SurfaceChange(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurfaceChange.GAB_SurfaceChange_C.ExecuteUbergraph_GAB_SurfaceChange");

	UGAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
