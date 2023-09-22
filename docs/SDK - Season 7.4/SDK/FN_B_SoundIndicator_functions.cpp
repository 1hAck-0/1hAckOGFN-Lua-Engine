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

// Function B_SoundIndicator.B_SoundIndicator.CalculateFiringAngle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DotResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_SoundIndicator::CalculateFiringAngle(float* DotResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SoundIndicator.B_SoundIndicator.CalculateFiringAngle");

	AB_SoundIndicator_CalculateFiringAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DotResult != nullptr)
		*DotResult = params.DotResult;
}


// Function B_SoundIndicator.B_SoundIndicator.GetWeaponCurve
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRuntimeFloatCurve      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRuntimeFloatCurve AB_SoundIndicator::GetWeaponCurve()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SoundIndicator.B_SoundIndicator.GetWeaponCurve");

	AB_SoundIndicator_GetWeaponCurve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_SoundIndicator.B_SoundIndicator.UpdateEmitterStates
// (Public, BlueprintCallable, BlueprintEvent)

void AB_SoundIndicator::UpdateEmitterStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SoundIndicator.B_SoundIndicator.UpdateEmitterStates");

	AB_SoundIndicator_UpdateEmitterStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SoundIndicator.B_SoundIndicator.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_SoundIndicator::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SoundIndicator.B_SoundIndicator.UserConstructionScript");

	AB_SoundIndicator_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SoundIndicator.B_SoundIndicator.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_SoundIndicator::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SoundIndicator.B_SoundIndicator.ReceiveBeginPlay");

	AB_SoundIndicator_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SoundIndicator.B_SoundIndicator.OnEffectActivated
// (Event, Public, BlueprintEvent)

void AB_SoundIndicator::OnEffectActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SoundIndicator.B_SoundIndicator.OnEffectActivated");

	AB_SoundIndicator_OnEffectActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SoundIndicator.B_SoundIndicator.ExecuteUbergraph_B_SoundIndicator
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_SoundIndicator::ExecuteUbergraph_B_SoundIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SoundIndicator.B_SoundIndicator.ExecuteUbergraph_B_SoundIndicator");

	AB_SoundIndicator_ExecuteUbergraph_B_SoundIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
