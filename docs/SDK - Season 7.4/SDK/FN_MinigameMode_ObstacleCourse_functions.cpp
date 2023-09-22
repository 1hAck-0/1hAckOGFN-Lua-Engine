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

// Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.GetStartQueryForPlayer
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagQuery       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagQuery AMinigameMode_ObstacleCourse_C::GetStartQueryForPlayer(class APlayerState* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.GetStartQueryForPlayer");

	AMinigameMode_ObstacleCourse_C_GetStartQueryForPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.Has Player Completed Objective
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerState*        Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Complete                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMinigameMode_ObstacleCourse_C::Has_Player_Completed_Objective(class AFortPlayerState* Player, bool* Complete)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.Has Player Completed Objective");

	AMinigameMode_ObstacleCourse_C_Has_Player_Completed_Objective_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Complete != nullptr)
		*Complete = params.Complete;
}


// Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.GiveWood
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameMode_ObstacleCourse_C::GiveWood()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.GiveWood");

	AMinigameMode_ObstacleCourse_C_GiveWood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.SetPlayerPositionToStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMinigameMode_ObstacleCourse_C::SetPlayerPositionToStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.SetPlayerPositionToStart");

	AMinigameMode_ObstacleCourse_C_SetPlayerPositionToStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMinigameMode_ObstacleCourse_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.UserConstructionScript");

	AMinigameMode_ObstacleCourse_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.HandleMinigameWarmup
// (Event, Protected, BlueprintEvent)

void AMinigameMode_ObstacleCourse_C::HandleMinigameWarmup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.HandleMinigameWarmup");

	AMinigameMode_ObstacleCourse_C_HandleMinigameWarmup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.On Stat Changed
// (BlueprintCallable, BlueprintEvent)

void AMinigameMode_ObstacleCourse_C::On_Stat_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.On Stat Changed");

	AMinigameMode_ObstacleCourse_C_On_Stat_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMinigameMode_ObstacleCourse_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.ReceiveBeginPlay");

	AMinigameMode_ObstacleCourse_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.ExecuteUbergraph_MinigameMode_ObstacleCourse
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMinigameMode_ObstacleCourse_C::ExecuteUbergraph_MinigameMode_ObstacleCourse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C.ExecuteUbergraph_MinigameMode_ObstacleCourse");

	AMinigameMode_ObstacleCourse_C_ExecuteUbergraph_MinigameMode_ObstacleCourse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
