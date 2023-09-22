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

// Function EventLeaderboardSummary.EventLeaderboardSummary_C.BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEventLeaderboardSummary_C::BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardSummary.EventLeaderboardSummary_C.BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent");

	UEventLeaderboardSummary_C_BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardSummary.EventLeaderboardSummary_C.EventColorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo TournamentDisplayInfo          (BlueprintVisible, BlueprintReadOnly, Parm)

void UEventLeaderboardSummary_C::EventColorize(struct FFortTournamentDisplayInfo TournamentDisplayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardSummary.EventLeaderboardSummary_C.EventColorize");

	UEventLeaderboardSummary_C_EventColorize_Params params;
	params.TournamentDisplayInfo = TournamentDisplayInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardSummary.EventLeaderboardSummary_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UEventLeaderboardSummary_C::RefreshDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardSummary.EventLeaderboardSummary_C.RefreshDataBP");

	UEventLeaderboardSummary_C_RefreshDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardSummary.EventLeaderboardSummary_C.ExecuteUbergraph_EventLeaderboardSummary
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventLeaderboardSummary_C::ExecuteUbergraph_EventLeaderboardSummary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardSummary.EventLeaderboardSummary_C.ExecuteUbergraph_EventLeaderboardSummary");

	UEventLeaderboardSummary_C_ExecuteUbergraph_EventLeaderboardSummary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardSummary.EventLeaderboardSummary_C.EventViewFullLeaderboard__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TournamentId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 EventId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UEventLeaderboardSummary_C::EventViewFullLeaderboard__DelegateSignature(struct FString TournamentId, struct FString EventId)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardSummary.EventLeaderboardSummary_C.EventViewFullLeaderboard__DelegateSignature");

	UEventLeaderboardSummary_C_EventViewFullLeaderboard__DelegateSignature_Params params;
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
