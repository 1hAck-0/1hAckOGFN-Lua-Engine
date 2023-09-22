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

// Function ShowdownTournamentTile.ShowdownTournamentTile_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UShowdownTournamentTile_C::BP_OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentTile.ShowdownTournamentTile_C.BP_OnSelected");

	UShowdownTournamentTile_C_BP_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentTile.ShowdownTournamentTile_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UShowdownTournamentTile_C::BP_OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentTile.ShowdownTournamentTile_C.BP_OnDeselected");

	UShowdownTournamentTile_C_BP_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentTile.ShowdownTournamentTile_C.EventFade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownTournamentTile_C::EventFade(bool FadeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentTile.ShowdownTournamentTile_C.EventFade");

	UShowdownTournamentTile_C_EventFade_Params params;
	params.FadeOut = FadeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentTile.ShowdownTournamentTile_C.ExecuteUbergraph_ShowdownTournamentTile
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownTournamentTile_C::ExecuteUbergraph_ShowdownTournamentTile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentTile.ShowdownTournamentTile_C.ExecuteUbergraph_ShowdownTournamentTile");

	UShowdownTournamentTile_C_ExecuteUbergraph_ShowdownTournamentTile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
