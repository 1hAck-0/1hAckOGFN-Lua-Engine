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

// Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.GetTournamentDateText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TournamentDate                 (Parm, OutParm)

void UShowdownTournamentPosterBack_C::GetTournamentDateText(struct FText* TournamentDate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.GetTournamentDateText");

	UShowdownTournamentPosterBack_C_GetTournamentDateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TournamentDate != nullptr)
		*TournamentDate = params.TournamentDate;
}


// Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UShowdownTournamentPosterBack_C::RefreshDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.RefreshDataBP");

	UShowdownTournamentPosterBack_C_RefreshDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.EventColorize
// (BlueprintCallable, BlueprintEvent)

void UShowdownTournamentPosterBack_C::EventColorize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.EventColorize");

	UShowdownTournamentPosterBack_C_EventColorize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.EventPopulateEventWindowData
// (BlueprintCallable, BlueprintEvent)

void UShowdownTournamentPosterBack_C::EventPopulateEventWindowData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.EventPopulateEventWindowData");

	UShowdownTournamentPosterBack_C_EventPopulateEventWindowData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.ExecuteUbergraph_ShowdownTournamentPosterBack
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownTournamentPosterBack_C::ExecuteUbergraph_ShowdownTournamentPosterBack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.ExecuteUbergraph_ShowdownTournamentPosterBack");

	UShowdownTournamentPosterBack_C_ExecuteUbergraph_ShowdownTournamentPosterBack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
