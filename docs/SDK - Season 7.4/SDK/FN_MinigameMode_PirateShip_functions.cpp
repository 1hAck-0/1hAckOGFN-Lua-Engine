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

// Function MinigameMode_PirateShip.MinigameMode_PirateShip_C.GetStartQueryForPlayer
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagQuery       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagQuery AMinigameMode_PirateShip_C::GetStartQueryForPlayer(class APlayerState* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_PirateShip.MinigameMode_PirateShip_C.GetStartQueryForPlayer");

	AMinigameMode_PirateShip_C_GetStartQueryForPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinigameMode_PirateShip.MinigameMode_PirateShip_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMinigameMode_PirateShip_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_PirateShip.MinigameMode_PirateShip_C.UserConstructionScript");

	AMinigameMode_PirateShip_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameMode_PirateShip.MinigameMode_PirateShip_C.GiveStartingWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameMode_PirateShip_C::GiveStartingWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_PirateShip.MinigameMode_PirateShip_C.GiveStartingWeapon");

	AMinigameMode_PirateShip_C_GiveStartingWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameMode_PirateShip.MinigameMode_PirateShip_C.ExecuteUbergraph_MinigameMode_PirateShip
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMinigameMode_PirateShip_C::ExecuteUbergraph_MinigameMode_PirateShip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_PirateShip.MinigameMode_PirateShip_C.ExecuteUbergraph_MinigameMode_PirateShip");

	AMinigameMode_PirateShip_C_ExecuteUbergraph_MinigameMode_PirateShip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
