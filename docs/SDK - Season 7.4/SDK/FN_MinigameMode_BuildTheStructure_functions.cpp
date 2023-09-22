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

// Function MinigameMode_BuildTheStructure.MinigameMode_BuildTheStructure_C.GiveWood
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameMode_BuildTheStructure_C::GiveWood()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_BuildTheStructure.MinigameMode_BuildTheStructure_C.GiveWood");

	AMinigameMode_BuildTheStructure_C_GiveWood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameMode_BuildTheStructure.MinigameMode_BuildTheStructure_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMinigameMode_BuildTheStructure_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_BuildTheStructure.MinigameMode_BuildTheStructure_C.UserConstructionScript");

	AMinigameMode_BuildTheStructure_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameMode_BuildTheStructure.MinigameMode_BuildTheStructure_C.HandleMinigameWarmup
// (Event, Protected, BlueprintEvent)

void AMinigameMode_BuildTheStructure_C::HandleMinigameWarmup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_BuildTheStructure.MinigameMode_BuildTheStructure_C.HandleMinigameWarmup");

	AMinigameMode_BuildTheStructure_C_HandleMinigameWarmup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameMode_BuildTheStructure.MinigameMode_BuildTheStructure_C.HandleMinigameEnded
// (Event, Protected, BlueprintEvent)

void AMinigameMode_BuildTheStructure_C::HandleMinigameEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_BuildTheStructure.MinigameMode_BuildTheStructure_C.HandleMinigameEnded");

	AMinigameMode_BuildTheStructure_C_HandleMinigameEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinigameMode_BuildTheStructure.MinigameMode_BuildTheStructure_C.ExecuteUbergraph_MinigameMode_BuildTheStructure
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMinigameMode_BuildTheStructure_C::ExecuteUbergraph_MinigameMode_BuildTheStructure(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinigameMode_BuildTheStructure.MinigameMode_BuildTheStructure_C.ExecuteUbergraph_MinigameMode_BuildTheStructure");

	AMinigameMode_BuildTheStructure_C_ExecuteUbergraph_MinigameMode_BuildTheStructure_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
