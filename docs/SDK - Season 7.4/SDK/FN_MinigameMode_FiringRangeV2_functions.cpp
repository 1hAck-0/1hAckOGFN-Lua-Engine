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

// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.GiftWeapons
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameMode_FiringRangeV2_C::GiftWeapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.GiftWeapons");

	AMinigameMode_FiringRangeV2_C_GiftWeapons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMinigameMode_FiringRangeV2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.UserConstructionScript");

	AMinigameMode_FiringRangeV2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.HandleMinigameStarted
// (Event, Protected, BlueprintEvent)

void AMinigameMode_FiringRangeV2_C::HandleMinigameStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.HandleMinigameStarted");

	AMinigameMode_FiringRangeV2_C_HandleMinigameStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.ExecuteUbergraph_MinigameMode_FiringRangeV2
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMinigameMode_FiringRangeV2_C::ExecuteUbergraph_MinigameMode_FiringRangeV2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.ExecuteUbergraph_MinigameMode_FiringRangeV2");

	AMinigameMode_FiringRangeV2_C_ExecuteUbergraph_MinigameMode_FiringRangeV2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
