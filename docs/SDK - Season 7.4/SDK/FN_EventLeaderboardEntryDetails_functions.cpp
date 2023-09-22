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

// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.ShowDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortEventLeaderboardEntryData* EntryData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventLeaderboardEntryDetails_C::ShowDetails(class UFortEventLeaderboardEntryData* EntryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.ShowDetails");

	UEventLeaderboardEntryDetails_C_ShowDetails_Params params;
	params.EntryData = EntryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEventLeaderboardEntryDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.Construct");

	UEventLeaderboardEntryDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.EventColorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo TournamentDisplayInfo          (BlueprintVisible, BlueprintReadOnly, Parm)

void UEventLeaderboardEntryDetails_C::EventColorize(struct FFortTournamentDisplayInfo TournamentDisplayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.EventColorize");

	UEventLeaderboardEntryDetails_C_EventColorize_Params params;
	params.TournamentDisplayInfo = TournamentDisplayInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.EventIntro
// (BlueprintCallable, BlueprintEvent)

void UEventLeaderboardEntryDetails_C::EventIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.EventIntro");

	UEventLeaderboardEntryDetails_C_EventIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.ExecuteUbergraph_EventLeaderboardEntryDetails
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventLeaderboardEntryDetails_C::ExecuteUbergraph_EventLeaderboardEntryDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardEntryDetails.EventLeaderboardEntryDetails_C.ExecuteUbergraph_EventLeaderboardEntryDetails");

	UEventLeaderboardEntryDetails_C_ExecuteUbergraph_EventLeaderboardEntryDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
