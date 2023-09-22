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

// Function MinigameMode_Skirmish.MinigameMode_Skirmish_C.GiveStartingWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameMode_Skirmish_C::GiveStartingWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_Skirmish.MinigameMode_Skirmish_C.GiveStartingWeapon");

	AMinigameMode_Skirmish_C_GiveStartingWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameMode_Skirmish.MinigameMode_Skirmish_C.SetSinglePlayerToStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMinigameMode_Skirmish_C::SetSinglePlayerToStart(class AFortPlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_Skirmish.MinigameMode_Skirmish_C.SetSinglePlayerToStart");

	AMinigameMode_Skirmish_C_SetSinglePlayerToStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameMode_Skirmish.MinigameMode_Skirmish_C.SetPlayerPositionToStart
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameMode_Skirmish_C::SetPlayerPositionToStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_Skirmish.MinigameMode_Skirmish_C.SetPlayerPositionToStart");

	AMinigameMode_Skirmish_C_SetPlayerPositionToStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameMode_Skirmish.MinigameMode_Skirmish_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMinigameMode_Skirmish_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_Skirmish.MinigameMode_Skirmish_C.UserConstructionScript");

	AMinigameMode_Skirmish_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameMode_Skirmish.MinigameMode_Skirmish_C.HandleMinigameWarmup
// (Event, Protected, BlueprintEvent)

void AMinigameMode_Skirmish_C::HandleMinigameWarmup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_Skirmish.MinigameMode_Skirmish_C.HandleMinigameWarmup");

	AMinigameMode_Skirmish_C_HandleMinigameWarmup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameMode_Skirmish.MinigameMode_Skirmish_C.ExecuteUbergraph_MinigameMode_Skirmish
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMinigameMode_Skirmish_C::ExecuteUbergraph_MinigameMode_Skirmish(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_Skirmish.MinigameMode_Skirmish_C.ExecuteUbergraph_MinigameMode_Skirmish");

	AMinigameMode_Skirmish_C_ExecuteUbergraph_MinigameMode_Skirmish_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
