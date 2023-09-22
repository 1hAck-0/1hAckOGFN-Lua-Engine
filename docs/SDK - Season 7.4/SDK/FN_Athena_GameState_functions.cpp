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

// Function Athena_GameState.Athena_GameState_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAthena_GameState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_GameState.Athena_GameState_C.UserConstructionScript");

	AAthena_GameState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_GameState.Athena_GameState_C.Timeline
// (BlueprintEvent)

void AAthena_GameState_C::Timeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_GameState.Athena_GameState_C.Timeline");

	AAthena_GameState_C_Timeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_GameState.Athena_GameState_C.OnWinnerAnnounced
// (Event, Public, BlueprintEvent)

void AAthena_GameState_C::OnWinnerAnnounced()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_GameState.Athena_GameState_C.OnWinnerAnnounced");

	AAthena_GameState_C_OnWinnerAnnounced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_GameState.Athena_GameState_C.ExecuteUbergraph_Athena_GameState
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_GameState_C::ExecuteUbergraph_Athena_GameState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_GameState.Athena_GameState_C.ExecuteUbergraph_Athena_GameState");

	AAthena_GameState_C_ExecuteUbergraph_Athena_GameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
