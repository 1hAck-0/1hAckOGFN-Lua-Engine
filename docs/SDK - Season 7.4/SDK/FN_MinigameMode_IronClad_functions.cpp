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

// Function MinigameMode_IronClad.MinigameMode_IronClad_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMinigameMode_IronClad_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_IronClad.MinigameMode_IronClad_C.UserConstructionScript");

	AMinigameMode_IronClad_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameMode_IronClad.MinigameMode_IronClad_C.GiveStartingWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameMode_IronClad_C::GiveStartingWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_IronClad.MinigameMode_IronClad_C.GiveStartingWeapon");

	AMinigameMode_IronClad_C_GiveStartingWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameMode_IronClad.MinigameMode_IronClad_C.ExecuteUbergraph_MinigameMode_IronClad
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMinigameMode_IronClad_C::ExecuteUbergraph_MinigameMode_IronClad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_IronClad.MinigameMode_IronClad_C.ExecuteUbergraph_MinigameMode_IronClad");

	AMinigameMode_IronClad_C_ExecuteUbergraph_MinigameMode_IronClad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
