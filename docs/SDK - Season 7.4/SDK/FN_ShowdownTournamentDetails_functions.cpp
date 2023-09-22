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

// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.Handle_Back
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShowdownTournamentDetails_C::Handle_Back(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.Handle_Back");

	UShowdownTournamentDetails_C_Handle_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.RefreshDetailsPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UShowdownTournamentDetails_C::RefreshDetailsPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.RefreshDetailsPanel");

	UShowdownTournamentDetails_C_RefreshDetailsPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.RefreshOverviewPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UShowdownTournamentDetails_C::RefreshOverviewPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.RefreshOverviewPanel");

	UShowdownTournamentDetails_C_RefreshOverviewPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.RefreshScoringRules
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UShowdownTournamentDetails_C::RefreshScoringRules()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.RefreshScoringRules");

	UShowdownTournamentDetails_C_RefreshScoringRules_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.RefreshEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UShowdownTournamentDetails_C::RefreshEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.RefreshEvents");

	UShowdownTournamentDetails_C_RefreshEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UShowdownTournamentDetails_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.Refresh");

	UShowdownTournamentDetails_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UShowdownTournamentDetails_C::RefreshDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.RefreshDataBP");

	UShowdownTournamentDetails_C_RefreshDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventShowWindowDetails
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShowdownTournamentDetails_C::EventShowWindowDetails(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventShowWindowDetails");

	UShowdownTournamentDetails_C_EventShowWindowDetails_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownTournamentDetails_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.PreConstruct");

	UShowdownTournamentDetails_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.AnimTransition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidgetAnimation*        Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PlaySpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownTournamentDetails_C::AnimTransition(bool In, class UWidgetAnimation* Animation, float PlaySpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.AnimTransition");

	UShowdownTournamentDetails_C_AnimTransition_Params params;
	params.In = In;
	params.Animation = Animation;
	params.PlaySpeed = PlaySpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShowdownTournamentDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.Construct");

	UShowdownTournamentDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.CloseTournamentDetails
// (BlueprintCallable, BlueprintEvent)

void UShowdownTournamentDetails_C::CloseTournamentDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.CloseTournamentDetails");

	UShowdownTournamentDetails_C_CloseTournamentDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.CloseEventWindowDetails
// (BlueprintCallable, BlueprintEvent)

void UShowdownTournamentDetails_C::CloseEventWindowDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.CloseEventWindowDetails");

	UShowdownTournamentDetails_C_CloseEventWindowDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventDeselectWindows
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 SelectedWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShowdownTournamentDetails_C::EventDeselectWindows(class UWidget* SelectedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventDeselectWindows");

	UShowdownTournamentDetails_C_EventDeselectWindows_Params params;
	params.SelectedWidget = SelectedWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventCenterEventWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShowdownTournamentDetails_C::EventCenterEventWindow(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventCenterEventWindow");

	UShowdownTournamentDetails_C_EventCenterEventWindow_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownTournamentDetails_C::Tick(struct FGeometry MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.Tick");

	UShowdownTournamentDetails_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventStartCentering
// (BlueprintCallable, BlueprintEvent)

void UShowdownTournamentDetails_C::EventStartCentering()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventStartCentering");

	UShowdownTournamentDetails_C_EventStartCentering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventStopCentering
// (BlueprintCallable, BlueprintEvent)

void UShowdownTournamentDetails_C::EventStopCentering()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventStopCentering");

	UShowdownTournamentDetails_C_EventStopCentering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.BndEvt__BackButton2_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShowdownTournamentDetails_C::BndEvt__BackButton2_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.BndEvt__BackButton2_K2Node_ComponentBoundEvent");

	UShowdownTournamentDetails_C_BndEvt__BackButton2_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShowdownTournamentDetails_C::BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent");

	UShowdownTournamentDetails_C_BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShowdownTournamentDetails_C::BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent");

	UShowdownTournamentDetails_C_BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.BndEvt__Button_ViewLeaderboard_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShowdownTournamentDetails_C::BndEvt__Button_ViewLeaderboard_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.BndEvt__Button_ViewLeaderboard_K2Node_ComponentBoundEvent");

	UShowdownTournamentDetails_C_BndEvt__Button_ViewLeaderboard_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventViewFullLeaderboard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TournamentId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 EventId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UShowdownTournamentDetails_C::EventViewFullLeaderboard(struct FString TournamentId, struct FString EventId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventViewFullLeaderboard");

	UShowdownTournamentDetails_C_EventViewFullLeaderboard_Params params;
	params.TournamentId = TournamentId;
	params.EventId = EventId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventToggleFullScreenContent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownTournamentDetails_C::EventToggleFullScreenContent(bool In)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventToggleFullScreenContent");

	UShowdownTournamentDetails_C_EventToggleFullScreenContent_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventCloseLeaderboard
// (BlueprintCallable, BlueprintEvent)

void UShowdownTournamentDetails_C::EventCloseLeaderboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.EventCloseLeaderboard");

	UShowdownTournamentDetails_C_EventCloseLeaderboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.ExecuteUbergraph_ShowdownTournamentDetails
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownTournamentDetails_C::ExecuteUbergraph_ShowdownTournamentDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.ExecuteUbergraph_ShowdownTournamentDetails");

	UShowdownTournamentDetails_C_ExecuteUbergraph_ShowdownTournamentDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.BackActionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UShowdownTournamentDetails_C::BackActionSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownTournamentDetails.ShowdownTournamentDetails_C.BackActionSelected__DelegateSignature");

	UShowdownTournamentDetails_C_BackActionSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
