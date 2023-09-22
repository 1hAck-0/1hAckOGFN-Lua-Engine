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

// Function EventLeaderboardScreen.EventLeaderboardScreen_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UEventLeaderboardScreen_C::Init(struct FString EventId)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.Init");

	UEventLeaderboardScreen_C_Init_Params params;
	params.EventId = EventId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__Button_Back2_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEventLeaderboardScreen_C::BndEvt__Button_Back2_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__Button_Back2_K2Node_ComponentBoundEvent");

	UEventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventColorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo TournamentDisplayInfo          (BlueprintVisible, BlueprintReadOnly, Parm)

void UEventLeaderboardScreen_C::EventColorize(struct FFortTournamentDisplayInfo TournamentDisplayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventColorize");

	UEventLeaderboardScreen_C_EventColorize_Params params;
	params.TournamentDisplayInfo = TournamentDisplayInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventIntro
// (BlueprintCallable, BlueprintEvent)

void UEventLeaderboardScreen_C::EventIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventIntro");

	UEventLeaderboardScreen_C_EventIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardEntrySelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortEventLeaderboardEntryData* EntryData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventLeaderboardScreen_C::OnLeaderboardEntrySelected(class UFortEventLeaderboardEntryData* EntryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardEntrySelected");

	UEventLeaderboardScreen_C_OnLeaderboardEntrySelected_Params params;
	params.EntryData = EntryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardPageRequestComplete
// (Event, Protected, BlueprintEvent)

void UEventLeaderboardScreen_C::OnLeaderboardPageRequestComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardPageRequestComplete");

	UEventLeaderboardScreen_C_OnLeaderboardPageRequestComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardPageRequested
// (Event, Protected, BlueprintEvent)

void UEventLeaderboardScreen_C::OnLeaderboardPageRequested()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardPageRequested");

	UEventLeaderboardScreen_C_OnLeaderboardPageRequested_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventLeaderboardScreen_C::Tick(struct FGeometry MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.Tick");

	UEventLeaderboardScreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.ExecuteUbergraph_EventLeaderboardScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventLeaderboardScreen_C::ExecuteUbergraph_EventLeaderboardScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.ExecuteUbergraph_EventLeaderboardScreen");

	UEventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventCloseButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEventLeaderboardScreen_C::EventCloseButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventCloseButton__DelegateSignature");

	UEventLeaderboardScreen_C_EventCloseButton__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
