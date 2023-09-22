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

// Function CareerScreen.CareerScreen_C.ApplyHotfixButtonStates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCareerScreen_C::ApplyHotfixButtonStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function CareerScreen.CareerScreen_C.ApplyHotfixButtonStates");

	UCareerScreen_C_ApplyHotfixButtonStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CareerScreen.CareerScreen_C.GetFirstInteractableWidget
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCareerScreen_C::GetFirstInteractableWidget(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CareerScreen.CareerScreen_C.GetFirstInteractableWidget");

	UCareerScreen_C_GetFirstInteractableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function CareerScreen.CareerScreen_C.SetupButtonStates
// (Public, BlueprintCallable, BlueprintEvent)

void UCareerScreen_C::SetupButtonStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function CareerScreen.CareerScreen_C.SetupButtonStates");

	UCareerScreen_C_SetupButtonStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CareerScreen.CareerScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCareerScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CareerScreen.CareerScreen_C.Construct");

	UCareerScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CareerScreen.CareerScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UCareerScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CareerScreen.CareerScreen_C.OnActivated");

	UCareerScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CareerScreen.CareerScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UCareerScreen_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CareerScreen.CareerScreen_C.OnDeactivated");

	UCareerScreen_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CareerScreen.CareerScreen_C.ShowReplayBrowser
// (BlueprintCallable, BlueprintEvent)

void UCareerScreen_C::ShowReplayBrowser()
{
	static auto fn = UObject::FindObject<UFunction>("Function CareerScreen.CareerScreen_C.ShowReplayBrowser");

	UCareerScreen_C_ShowReplayBrowser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CareerScreen.CareerScreen_C.BndEvt__ProfileStatsBtn_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCareerScreen_C::BndEvt__ProfileStatsBtn_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CareerScreen.CareerScreen_C.BndEvt__ProfileStatsBtn_K2Node_ComponentBoundEvent");

	UCareerScreen_C_BndEvt__ProfileStatsBtn_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CareerScreen.CareerScreen_C.BndEvt__ProfileBtn_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCareerScreen_C::BndEvt__ProfileBtn_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CareerScreen.CareerScreen_C.BndEvt__ProfileBtn_K2Node_ComponentBoundEvent");

	UCareerScreen_C_BndEvt__ProfileBtn_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CareerScreen.CareerScreen_C.BndEvt__LeaderboardsBtn_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCareerScreen_C::BndEvt__LeaderboardsBtn_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CareerScreen.CareerScreen_C.BndEvt__LeaderboardsBtn_K2Node_ComponentBoundEvent");

	UCareerScreen_C_BndEvt__LeaderboardsBtn_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CareerScreen.CareerScreen_C.BndEvt__ReplaysBtn_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCareerScreen_C::BndEvt__ReplaysBtn_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CareerScreen.CareerScreen_C.BndEvt__ReplaysBtn_K2Node_ComponentBoundEvent");

	UCareerScreen_C_BndEvt__ReplaysBtn_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CareerScreen.CareerScreen_C.BndEvt__RecentGamesBtn_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCareerScreen_C::BndEvt__RecentGamesBtn_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CareerScreen.CareerScreen_C.BndEvt__RecentGamesBtn_K2Node_ComponentBoundEvent");

	UCareerScreen_C_BndEvt__RecentGamesBtn_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CareerScreen.CareerScreen_C.ExecuteUbergraph_CareerScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCareerScreen_C::ExecuteUbergraph_CareerScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CareerScreen.CareerScreen_C.ExecuteUbergraph_CareerScreen");

	UCareerScreen_C_ExecuteUbergraph_CareerScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
