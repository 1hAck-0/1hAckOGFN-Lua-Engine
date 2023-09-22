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

// Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UTournamentEventWindowDetails_C::RefreshDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.RefreshDataBP");

	UTournamentEventWindowDetails_C_RefreshDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.EventColorize
// (BlueprintCallable, BlueprintEvent)

void UTournamentEventWindowDetails_C::EventColorize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.EventColorize");

	UTournamentEventWindowDetails_C_EventColorize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTournamentEventWindowDetails_C::BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent");

	UTournamentEventWindowDetails_C_BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.ExecuteUbergraph_TournamentEventWindowDetails
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTournamentEventWindowDetails_C::ExecuteUbergraph_TournamentEventWindowDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.ExecuteUbergraph_TournamentEventWindowDetails");

	UTournamentEventWindowDetails_C_ExecuteUbergraph_TournamentEventWindowDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.NewEventDispatcher
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTournamentEventWindowDetails_C::NewEventDispatcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.NewEventDispatcher");

	UTournamentEventWindowDetails_C_NewEventDispatcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.ViewLeaderboard__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TournamentId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 EventId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTournamentEventWindowDetails_C::ViewLeaderboard__DelegateSignature(struct FString TournamentId, struct FString EventId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.ViewLeaderboard__DelegateSignature");

	UTournamentEventWindowDetails_C_ViewLeaderboard__DelegateSignature_Params params;
	params.TournamentId = TournamentId;
	params.EventId = EventId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
