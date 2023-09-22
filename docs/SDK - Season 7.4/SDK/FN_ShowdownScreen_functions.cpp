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

// Function ShowdownScreen.ShowdownScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownScreen_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.PreConstruct");

	UShowdownScreen_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShowdownScreen_C::BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent");

	UShowdownScreen_C_BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShowdownScreen_C::BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent");

	UShowdownScreen_C_BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.BndEvt__ScrollBox_TournamentList_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// float                          CurrentOffset                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownScreen_C::BndEvt__ScrollBox_TournamentList_K2Node_ComponentBoundEvent(float CurrentOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.BndEvt__ScrollBox_TournamentList_K2Node_ComponentBoundEvent");

	UShowdownScreen_C_BndEvt__ScrollBox_TournamentList_K2Node_ComponentBoundEvent_Params params;
	params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.ShowTournamentDetails
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString                 SelectedTournament             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UShowdownScreen_C::ShowTournamentDetails(struct FString SelectedTournament)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.ShowTournamentDetails");

	UShowdownScreen_C_ShowTournamentDetails_Params params;
	params.SelectedTournament = SelectedTournament;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShowdownScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.Construct");

	UShowdownScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UShowdownScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.OnActivated");

	UShowdownScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent
// (BlueprintEvent)

void UShowdownScreen_C::BndEvt__SwipePanel_K2Node_ComponentBoundEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent");

	UShowdownScreen_C_BndEvt__SwipePanel_K2Node_ComponentBoundEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownScreen_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.OnInputModeChanged");

	UShowdownScreen_C_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.TournamentListSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 CurrentWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShowdownScreen_C::TournamentListSelect(class UWidget* CurrentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.TournamentListSelect");

	UShowdownScreen_C_TournamentListSelect_Params params;
	params.CurrentWidget = CurrentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownScreen_C::Tick(struct FGeometry MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.Tick");

	UShowdownScreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.SelectedFrontTournament
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bFrontIsSelected               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownScreen_C::SelectedFrontTournament(bool bFrontIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.SelectedFrontTournament");

	UShowdownScreen_C_SelectedFrontTournament_Params params;
	params.bFrontIsSelected = bFrontIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.SelectedEndTournament
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bEndIsSelected                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownScreen_C::SelectedEndTournament(bool bEndIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.SelectedEndTournament");

	UShowdownScreen_C_SelectedEndTournament_Params params;
	params.bEndIsSelected = bEndIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownScreen.ShowdownScreen_C.ExecuteUbergraph_ShowdownScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownScreen_C::ExecuteUbergraph_ShowdownScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownScreen.ShowdownScreen_C.ExecuteUbergraph_ShowdownScreen");

	UShowdownScreen_C_ExecuteUbergraph_ShowdownScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
