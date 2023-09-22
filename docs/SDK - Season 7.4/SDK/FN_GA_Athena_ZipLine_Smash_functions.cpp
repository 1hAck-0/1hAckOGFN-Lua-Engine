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

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.CheckForQuestProgress
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_ZipLine_Smash_C::CheckForQuestProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.CheckForQuestProgress");

	UGA_Athena_ZipLine_Smash_C_CheckForQuestProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.CheckMotor
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_ZipLine_Smash_C::CheckMotor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.CheckMotor");

	UGA_Athena_ZipLine_Smash_C_CheckMotor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.SpawnMotor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_ZipLine_Smash_C::SpawnMotor(class AActor* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.SpawnMotor");

	UGA_Athena_ZipLine_Smash_C_SpawnMotor_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.BreakNearbyStructures
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_ZipLine_Smash_C::BreakNearbyStructures(class AFortPlayerPawn* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.BreakNearbyStructures");

	UGA_Athena_ZipLine_Smash_C_BreakNearbyStructures_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_ZipLine_Smash_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.K2_ActivateAbilityFromEvent");

	UGA_Athena_ZipLine_Smash_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.HandleMovementModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     PrevMovementMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  PreviousCustomMode             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_ZipLine_Smash_C::HandleMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.HandleMovementModeChanged");

	UGA_Athena_ZipLine_Smash_C_HandleMovementModeChanged_Params params;
	params.Character = Character;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.SurroundingsCheck
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_ZipLine_Smash_C::SurroundingsCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.SurroundingsCheck");

	UGA_Athena_ZipLine_Smash_C_SurroundingsCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.RemoveFallDamageImmunity
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGA_Athena_ZipLine_Smash_C::RemoveFallDamageImmunity(struct FHitResult Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.RemoveFallDamageImmunity");

	UGA_Athena_ZipLine_Smash_C_RemoveFallDamageImmunity_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.HandleZiplineStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsZiplining                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_ZipLine_Smash_C::HandleZiplineStateChanged(bool bIsZiplining)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.HandleZiplineStateChanged");

	UGA_Athena_ZipLine_Smash_C_HandleZiplineStateChanged_Params params;
	params.bIsZiplining = bIsZiplining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.ExecuteUbergraph_GA_Athena_ZipLine_Smash
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_ZipLine_Smash_C::ExecuteUbergraph_GA_Athena_ZipLine_Smash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.ExecuteUbergraph_GA_Athena_ZipLine_Smash");

	UGA_Athena_ZipLine_Smash_C_ExecuteUbergraph_GA_Athena_ZipLine_Smash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
