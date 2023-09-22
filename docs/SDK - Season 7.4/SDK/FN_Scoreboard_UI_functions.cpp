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

// Function Scoreboard_UI.Scoreboard_UI_C.UpdateScrollBasedOnTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ScrollLength                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboard_UI_C::UpdateScrollBasedOnTime(float Delta, float ScrollLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard_UI.Scoreboard_UI_C.UpdateScrollBasedOnTime");

	UScoreboard_UI_C_UpdateScrollBasedOnTime_Params params;
	params.Delta = Delta;
	params.ScrollLength = ScrollLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard_UI.Scoreboard_UI_C.GetScoreboardStateNames
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FText>           OutNames                       (Parm, OutParm, ZeroConstructor)

void UScoreboard_UI_C::GetScoreboardStateNames(TArray<struct FText>* OutNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard_UI.Scoreboard_UI_C.GetScoreboardStateNames");

	UScoreboard_UI_C_GetScoreboardStateNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNames != nullptr)
		*OutNames = params.OutNames;
}


// Function Scoreboard_UI.Scoreboard_UI_C.UpdateStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UScoreboard_UI_C::UpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard_UI.Scoreboard_UI_C.UpdateStats");

	UScoreboard_UI_C_UpdateStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard_UI.Scoreboard_UI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScoreboard_UI_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard_UI.Scoreboard_UI_C.Construct");

	UScoreboard_UI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard_UI.Scoreboard_UI_C.OnDisplayMinigameEndUI
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bDisplay                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboard_UI_C::OnDisplayMinigameEndUI(bool bDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard_UI.Scoreboard_UI_C.OnDisplayMinigameEndUI");

	UScoreboard_UI_C_OnDisplayMinigameEndUI_Params params;
	params.bDisplay = bDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard_UI.Scoreboard_UI_C.OnDisplayMinigameStartUI
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bDisplay                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboard_UI_C::OnDisplayMinigameStartUI(bool bDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard_UI.Scoreboard_UI_C.OnDisplayMinigameStartUI");

	UScoreboard_UI_C_OnDisplayMinigameStartUI_Params params;
	params.bDisplay = bDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard_UI.Scoreboard_UI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboard_UI_C::Tick(struct FGeometry MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard_UI.Scoreboard_UI_C.Tick");

	UScoreboard_UI_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard_UI.Scoreboard_UI_C.ShowMinigameEndUI
// (BlueprintCallable, BlueprintEvent)

void UScoreboard_UI_C::ShowMinigameEndUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard_UI.Scoreboard_UI_C.ShowMinigameEndUI");

	UScoreboard_UI_C_ShowMinigameEndUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard_UI.Scoreboard_UI_C.HideMinigameEndUI
// (BlueprintCallable, BlueprintEvent)

void UScoreboard_UI_C::HideMinigameEndUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard_UI.Scoreboard_UI_C.HideMinigameEndUI");

	UScoreboard_UI_C_HideMinigameEndUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scoreboard_UI.Scoreboard_UI_C.ExecuteUbergraph_Scoreboard_UI
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboard_UI_C::ExecuteUbergraph_Scoreboard_UI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard_UI.Scoreboard_UI_C.ExecuteUbergraph_Scoreboard_UI");

	UScoreboard_UI_C_ExecuteUbergraph_Scoreboard_UI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
