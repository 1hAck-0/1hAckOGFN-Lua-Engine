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

// Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.GetTournamentDateText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TournamentDate                 (Parm, OutParm)

void UShowdownTournamentPosterFront_C::GetTournamentDateText(struct FText* TournamentDate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.GetTournamentDateText");

	UShowdownTournamentPosterFront_C_GetTournamentDateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TournamentDate != nullptr)
		*TournamentDate = params.TournamentDate;
}


// Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.BndEvt__Image_PosterFront_K2Node_ComponentBoundEvent
// (BlueprintEvent)

void UShowdownTournamentPosterFront_C::BndEvt__Image_PosterFront_K2Node_ComponentBoundEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.BndEvt__Image_PosterFront_K2Node_ComponentBoundEvent");

	UShowdownTournamentPosterFront_C_BndEvt__Image_PosterFront_K2Node_ComponentBoundEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShowdownTournamentPosterFront_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.Construct");

	UShowdownTournamentPosterFront_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownTournamentPosterFront_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.PreConstruct");

	UShowdownTournamentPosterFront_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UShowdownTournamentPosterFront_C::RefreshDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.RefreshDataBP");

	UShowdownTournamentPosterFront_C_RefreshDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.ExecuteUbergraph_ShowdownTournamentPosterFront
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownTournamentPosterFront_C::ExecuteUbergraph_ShowdownTournamentPosterFront(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.ExecuteUbergraph_ShowdownTournamentPosterFront");

	UShowdownTournamentPosterFront_C_ExecuteUbergraph_ShowdownTournamentPosterFront_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
