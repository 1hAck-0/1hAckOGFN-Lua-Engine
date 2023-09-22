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

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateJoinInProgress
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::UpdateJoinInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateJoinInProgress");

	AMinigameSettingsMachine_C_UpdateJoinInProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.TryAddEndCondition_CollectItems
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortMinigameStatQuery> EndConditions                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMinigameSettingsMachine_C::TryAddEndCondition_CollectItems(TArray<struct FFortMinigameStatQuery>* EndConditions, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.TryAddEndCondition_CollectItems");

	AMinigameSettingsMachine_C_TryAddEndCondition_CollectItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EndConditions != nullptr)
		*EndConditions = params.EndConditions;
	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.TryAddEndCondition_Kills
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortMinigameStatQuery> EndConditions                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMinigameSettingsMachine_C::TryAddEndCondition_Kills(TArray<struct FFortMinigameStatQuery>* EndConditions, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.TryAddEndCondition_Kills");

	AMinigameSettingsMachine_C_TryAddEndCondition_Kills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EndConditions != nullptr)
		*EndConditions = params.EndConditions;
	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateAutoStart
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::UpdateAutoStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateAutoStart");

	AMinigameSettingsMachine_C_UpdateAutoStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateEndConditions
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::UpdateEndConditions()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateEndConditions");

	AMinigameSettingsMachine_C_UpdateEndConditions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTeamToMoveToWhenOutOfSpawns
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::UpdateTeamToMoveToWhenOutOfSpawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTeamToMoveToWhenOutOfSpawns");

	AMinigameSettingsMachine_C_UpdateTeamToMoveToWhenOutOfSpawns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateAutoEndTeamThreshold
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::UpdateAutoEndTeamThreshold()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateAutoEndTeamThreshold");

	AMinigameSettingsMachine_C_UpdateAutoEndTeamThreshold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdatePlayerLives
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::UpdatePlayerLives()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdatePlayerLives");

	AMinigameSettingsMachine_C_UpdatePlayerLives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdatePostGameSpawnLocationSetting
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::UpdatePostGameSpawnLocationSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdatePostGameSpawnLocationSetting");

	AMinigameSettingsMachine_C_UpdatePostGameSpawnLocationSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintGetFailedInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AMinigameSettingsMachine_C::BlueprintGetFailedInteractionString(class AFortPawn* InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintGetFailedInteractionString");

	AMinigameSettingsMachine_C_BlueprintGetFailedInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTeamSetting
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::UpdateTeamSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTeamSetting");

	AMinigameSettingsMachine_C_UpdateTeamSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateSpawnLocationSetting
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::UpdateSpawnLocationSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateSpawnLocationSetting");

	AMinigameSettingsMachine_C_UpdateSpawnLocationSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetCurrentMinigame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortMinigame*           Minigame                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMinigameSettingsMachine_C::GetCurrentMinigame(class AFortMinigame** Minigame)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetCurrentMinigame");

	AMinigameSettingsMachine_C_GetCurrentMinigame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Minigame != nullptr)
		*Minigame = params.Minigame;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTimeLimit
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::UpdateTimeLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTimeLimit");

	AMinigameSettingsMachine_C_UpdateTimeLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateGameMode
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::UpdateGameMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateGameMode");

	AMinigameSettingsMachine_C_UpdateGameMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.HasMinigameStarted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bHasStarted                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMinigameSettingsMachine_C::HasMinigameStarted(bool* bHasStarted)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.HasMinigameStarted");

	AMinigameSettingsMachine_C_HasMinigameStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasStarted != nullptr)
		*bHasStarted = params.bHasStarted;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.IsValidGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bCanStartGame                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMinigameSettingsMachine_C::IsValidGame(bool* bCanStartGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.IsValidGame");

	AMinigameSettingsMachine_C_IsValidGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanStartGame != nullptr)
		*bCanStartGame = params.bCanStartGame;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetPickupSpawnLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 SpawnLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMinigameSettingsMachine_C::GetPickupSpawnLocation(struct FVector* SpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetPickupSpawnLocation");

	AMinigameSettingsMachine_C_GetPickupSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnLocation != nullptr)
		*SpawnLocation = params.SpawnLocation;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintOnLocalInteract
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         InteractingPawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMinigameSettingsMachine_C::BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintOnLocalInteract");

	AMinigameSettingsMachine_C_BlueprintOnLocalInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AMinigameSettingsMachine_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintGetInteractionString");

	AMinigameSettingsMachine_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMinigameSettingsMachine_C::BlueprintCanInteract(class AFortPawn* InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintCanInteract");

	AMinigameSettingsMachine_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.UserConstructionScript");

	AMinigameSettingsMachine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMinigameSettingsMachine_C::BlueprintOnInteract(class AFortPawn* InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintOnInteract");

	AMinigameSettingsMachine_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMinigameSettingsMachine_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.ReceiveBeginPlay");

	AMinigameSettingsMachine_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.OnGameSettingsUpdated
// (BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::OnGameSettingsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.OnGameSettingsUpdated");

	AMinigameSettingsMachine_C_OnGameSettingsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.StartMinigameHelper
// (BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::StartMinigameHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.StartMinigameHelper");

	AMinigameSettingsMachine_C_StartMinigameHelper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.AbandonMinigameHelper
// (BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::AbandonMinigameHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.AbandonMinigameHelper");

	AMinigameSettingsMachine_C_AbandonMinigameHelper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.ExecuteUbergraph_MinigameSettingsMachine
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMinigameSettingsMachine_C::ExecuteUbergraph_MinigameSettingsMachine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameSettingsMachine.MinigameSettingsMachine_C.ExecuteUbergraph_MinigameSettingsMachine");

	AMinigameSettingsMachine_C_ExecuteUbergraph_MinigameSettingsMachine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
