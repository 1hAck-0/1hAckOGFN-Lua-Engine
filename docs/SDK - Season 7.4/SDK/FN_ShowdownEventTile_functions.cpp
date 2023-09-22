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

// Function ShowdownEventTile.ShowdownEventTile_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TournamentInfo                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 EventInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UShowdownEventTile_C::SetData(struct FString TournamentInfo, struct FString EventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTile.ShowdownEventTile_C.SetData");

	UShowdownEventTile_C_SetData_Params params;
	params.TournamentInfo = TournamentInfo;
	params.EventInfo = EventInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTile.ShowdownEventTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShowdownEventTile_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTile.ShowdownEventTile_C.Construct");

	UShowdownEventTile_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTile.ShowdownEventTile_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UShowdownEventTile_C::BP_OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTile.ShowdownEventTile_C.BP_OnClicked");

	UShowdownEventTile_C_BP_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTile.ShowdownEventTile_C.EventIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownEventTile_C::EventIntro(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTile.ShowdownEventTile_C.EventIntro");

	UShowdownEventTile_C_EventIntro_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTile.ShowdownEventTile_C.EventResize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownEventTile_C::EventResize(bool Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTile.ShowdownEventTile_C.EventResize");

	UShowdownEventTile_C_EventResize_Params params;
	params.Out = Out;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTile.ShowdownEventTile_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UShowdownEventTile_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTile.ShowdownEventTile_C.BP_OnHovered");

	UShowdownEventTile_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTile.ShowdownEventTile_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UShowdownEventTile_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTile.ShowdownEventTile_C.BP_OnUnhovered");

	UShowdownEventTile_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTile.ShowdownEventTile_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UShowdownEventTile_C::BP_OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTile.ShowdownEventTile_C.BP_OnSelected");

	UShowdownEventTile_C_BP_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTile.ShowdownEventTile_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UShowdownEventTile_C::BP_OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTile.ShowdownEventTile_C.BP_OnDeselected");

	UShowdownEventTile_C_BP_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTile.ShowdownEventTile_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UShowdownEventTile_C::OnAddedToFocusPath(struct FFocusEvent InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTile.ShowdownEventTile_C.OnAddedToFocusPath");

	UShowdownEventTile_C_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTile.ShowdownEventTile_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UShowdownEventTile_C::OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTile.ShowdownEventTile_C.OnRemovedFromFocusPath");

	UShowdownEventTile_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTile.ShowdownEventTile_C.EventSetState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortShowdownEventState        EventState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownEventTile_C::EventSetState(EFortShowdownEventState EventState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTile.ShowdownEventTile_C.EventSetState");

	UShowdownEventTile_C_EventSetState_Params params;
	params.EventState = EventState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTile.ShowdownEventTile_C.EventColorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo DisplayInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UShowdownEventTile_C::EventColorize(struct FFortTournamentDisplayInfo DisplayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTile.ShowdownEventTile_C.EventColorize");

	UShowdownEventTile_C_EventColorize_Params params;
	params.DisplayInfo = DisplayInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTile.ShowdownEventTile_C.EventColorizeDispatch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo DisplayInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UShowdownEventTile_C::EventColorizeDispatch(struct FFortTournamentDisplayInfo DisplayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTile.ShowdownEventTile_C.EventColorizeDispatch");

	UShowdownEventTile_C_EventColorizeDispatch_Params params;
	params.DisplayInfo = DisplayInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTile.ShowdownEventTile_C.EventMultiRoundStyle
// (BlueprintCallable, BlueprintEvent)

void UShowdownEventTile_C::EventMultiRoundStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTile.ShowdownEventTile_C.EventMultiRoundStyle");

	UShowdownEventTile_C_EventMultiRoundStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTile.ShowdownEventTile_C.ExecuteUbergraph_ShowdownEventTile
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShowdownEventTile_C::ExecuteUbergraph_ShowdownEventTile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTile.ShowdownEventTile_C.ExecuteUbergraph_ShowdownEventTile");

	UShowdownEventTile_C_ExecuteUbergraph_ShowdownEventTile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShowdownEventTile.ShowdownEventTile_C.OnWindowSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UShowdownEventTile_C::OnWindowSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShowdownEventTile.ShowdownEventTile_C.OnWindowSelected__DelegateSignature");

	UShowdownEventTile_C_OnWindowSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
