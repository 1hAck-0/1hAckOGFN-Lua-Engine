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

// Function TournamentDateEntry.TournamentDateEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTournamentDateEntry_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDateEntry.TournamentDateEntry_C.PreConstruct");

	UTournamentDateEntry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDateEntry.TournamentDateEntry_C.EventColor
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo showdownData                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTournamentDateEntry_C::EventColor(struct FFortTournamentDisplayInfo showdownData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDateEntry.TournamentDateEntry_C.EventColor");

	UTournamentDateEntry_C_EventColor_Params params;
	params.showdownData = showdownData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDateEntry.TournamentDateEntry_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UTournamentDateEntry_C::RefreshDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDateEntry.TournamentDateEntry_C.RefreshDataBP");

	UTournamentDateEntry_C_RefreshDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDateEntry.TournamentDateEntry_C.ExecuteUbergraph_TournamentDateEntry
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTournamentDateEntry_C::ExecuteUbergraph_TournamentDateEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDateEntry.TournamentDateEntry_C.ExecuteUbergraph_TournamentDateEntry");

	UTournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
