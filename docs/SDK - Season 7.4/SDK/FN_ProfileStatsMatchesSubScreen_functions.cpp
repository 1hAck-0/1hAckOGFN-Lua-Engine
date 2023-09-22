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

// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.SetMatches
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>         InDataProvider                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UProfileStatsMatchesSubScreen_C::SetMatches(TArray<class UObject*> InDataProvider)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.SetMatches");

	UProfileStatsMatchesSubScreen_C_SetMatches_Params params;
	params.InDataProvider = InDataProvider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProfileStatsMatchesSubScreen_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.HandleBack");

	UProfileStatsMatchesSubScreen_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProfileStatsMatchesSubScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.Construct");

	UProfileStatsMatchesSubScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.HandleStatViewChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaBaseStatView*     StatView                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProfileStatsMatchesSubScreen_C::HandleStatViewChanged(class UAthenaBaseStatView* StatView)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.HandleStatViewChanged");

	UProfileStatsMatchesSubScreen_C_HandleStatViewChanged_Params params;
	params.StatView = StatView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UProfileStatsMatchesSubScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.OnActivated");

	UProfileStatsMatchesSubScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.BndEvt__MatchList_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsHovered                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProfileStatsMatchesSubScreen_C::BndEvt__MatchList_K2Node_ComponentBoundEvent(class UObject* Item, bool bIsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.BndEvt__MatchList_K2Node_ComponentBoundEvent");

	UProfileStatsMatchesSubScreen_C_BndEvt__MatchList_K2Node_ComponentBoundEvent_Params params;
	params.Item = Item;
	params.bIsHovered = bIsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.ExecuteUbergraph_ProfileStatsMatchesSubScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProfileStatsMatchesSubScreen_C::ExecuteUbergraph_ProfileStatsMatchesSubScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.ExecuteUbergraph_ProfileStatsMatchesSubScreen");

	UProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
