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

// Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.OnCancelled
// (BlueprintCallable, BlueprintEvent)

void UGA_Rift_Athena_Skydive_NoSound_C::OnCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.OnCancelled");

	UGA_Rift_Athena_Skydive_NoSound_C_OnCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.OnInterrupted
// (BlueprintCallable, BlueprintEvent)

void UGA_Rift_Athena_Skydive_NoSound_C::OnInterrupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.OnInterrupted");

	UGA_Rift_Athena_Skydive_NoSound_C_OnInterrupted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.OnBlendOut
// (BlueprintCallable, BlueprintEvent)

void UGA_Rift_Athena_Skydive_NoSound_C::OnBlendOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.OnBlendOut");

	UGA_Rift_Athena_Skydive_NoSound_C_OnBlendOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.OnCompleted
// (BlueprintCallable, BlueprintEvent)

void UGA_Rift_Athena_Skydive_NoSound_C::OnCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.OnCompleted");

	UGA_Rift_Athena_Skydive_NoSound_C_OnCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.OnChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMovementMode>     NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Rift_Athena_Skydive_NoSound_C::OnChange(TEnumAsByte<EMovementMode> NewMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.OnChange");

	UGA_Rift_Athena_Skydive_NoSound_C_OnChange_Params params;
	params.NewMovementMode = NewMovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Rift_Athena_Skydive_NoSound_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.K2_ActivateAbility");

	UGA_Rift_Athena_Skydive_NoSound_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.SetPlayerToSkydive
// (BlueprintCallable, BlueprintEvent)

void UGA_Rift_Athena_Skydive_NoSound_C::SetPlayerToSkydive()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.SetPlayerToSkydive");

	UGA_Rift_Athena_Skydive_NoSound_C_SetPlayerToSkydive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Rift_Athena_Skydive_NoSound_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.K2_OnEndAbility");

	UGA_Rift_Athena_Skydive_NoSound_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.ExecuteUbergraph_GA_Rift_Athena_Skydive_NoSound
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Rift_Athena_Skydive_NoSound_C::ExecuteUbergraph_GA_Rift_Athena_Skydive_NoSound(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Rift_Athena_Skydive_NoSound.GA_Rift_Athena_Skydive_NoSound_C.ExecuteUbergraph_GA_Rift_Athena_Skydive_NoSound");

	UGA_Rift_Athena_Skydive_NoSound_C_ExecuteUbergraph_GA_Rift_Athena_Skydive_NoSound_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
