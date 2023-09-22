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

// Function EventLeaderboardEntry.EventLeaderboardEntry_C.SetTeamDisplayNames
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortEventLeaderboardEntryData* Entry_Data                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventLeaderboardEntry_C::SetTeamDisplayNames(class UFortEventLeaderboardEntryData* Entry_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardEntry.EventLeaderboardEntry_C.SetTeamDisplayNames");

	UEventLeaderboardEntry_C_SetTeamDisplayNames_Params params;
	params.Entry_Data = Entry_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardEntry.EventLeaderboardEntry_C.SetEntryDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortEventLeaderboardEntryData* EntryData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventLeaderboardEntry_C::SetEntryDetails(class UFortEventLeaderboardEntryData* EntryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardEntry.EventLeaderboardEntry_C.SetEntryDetails");

	UEventLeaderboardEntry_C_SetEntryDetails_Params params;
	params.EntryData = EntryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardEntry.EventLeaderboardEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventLeaderboardEntry_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardEntry.EventLeaderboardEntry_C.PreConstruct");

	UEventLeaderboardEntry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardEntry.EventLeaderboardEntry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventLeaderboardEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardEntry.EventLeaderboardEntry_C.OnListItemObjectSet");

	UEventLeaderboardEntry_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardEntry.EventLeaderboardEntry_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UEventLeaderboardEntry_C::BP_OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardEntry.EventLeaderboardEntry_C.BP_OnSelected");

	UEventLeaderboardEntry_C_BP_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardEntry.EventLeaderboardEntry_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UEventLeaderboardEntry_C::BP_OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardEntry.EventLeaderboardEntry_C.BP_OnDeselected");

	UEventLeaderboardEntry_C_BP_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardEntry.EventLeaderboardEntry_C.EventStyleEntry
// (BlueprintCallable, BlueprintEvent)

void UEventLeaderboardEntry_C::EventStyleEntry()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardEntry.EventLeaderboardEntry_C.EventStyleEntry");

	UEventLeaderboardEntry_C_EventStyleEntry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardEntry.EventLeaderboardEntry_C.EventColorize
// (BlueprintCallable, BlueprintEvent)

void UEventLeaderboardEntry_C::EventColorize()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardEntry.EventLeaderboardEntry_C.EventColorize");

	UEventLeaderboardEntry_C_EventColorize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardEntry.EventLeaderboardEntry_C.OnTeammateDisplayNameAdded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortEventLeaderboardEntryData* LeaderboardEntryData           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventLeaderboardEntry_C::OnTeammateDisplayNameAdded(class UFortEventLeaderboardEntryData* LeaderboardEntryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardEntry.EventLeaderboardEntry_C.OnTeammateDisplayNameAdded");

	UEventLeaderboardEntry_C_OnTeammateDisplayNameAdded_Params params;
	params.LeaderboardEntryData = LeaderboardEntryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardEntry.EventLeaderboardEntry_C.ExecuteUbergraph_EventLeaderboardEntry
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventLeaderboardEntry_C::ExecuteUbergraph_EventLeaderboardEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardEntry.EventLeaderboardEntry_C.ExecuteUbergraph_EventLeaderboardEntry");

	UEventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
