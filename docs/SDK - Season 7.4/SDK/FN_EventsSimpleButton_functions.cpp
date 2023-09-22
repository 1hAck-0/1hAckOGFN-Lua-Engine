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

// Function EventsSimpleButton.EventsSimpleButton_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UEventsSimpleButton_C::OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventsSimpleButton.EventsSimpleButton_C.OnMouseButtonUp");

	UEventsSimpleButton_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EventsSimpleButton.EventsSimpleButton_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UEventsSimpleButton_C::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventsSimpleButton.EventsSimpleButton_C.OnMouseButtonDown");

	UEventsSimpleButton_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EventsSimpleButton.EventsSimpleButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEventsSimpleButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventsSimpleButton.EventsSimpleButton_C.Construct");

	UEventsSimpleButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventsSimpleButton.EventsSimpleButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UEventsSimpleButton_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventsSimpleButton.EventsSimpleButton_C.BP_OnHovered");

	UEventsSimpleButton_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventsSimpleButton.EventsSimpleButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UEventsSimpleButton_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventsSimpleButton.EventsSimpleButton_C.BP_OnUnhovered");

	UEventsSimpleButton_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventsSimpleButton.EventsSimpleButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UEventsSimpleButton_C::BP_OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventsSimpleButton.EventsSimpleButton_C.BP_OnClicked");

	UEventsSimpleButton_C_BP_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventsSimpleButton.EventsSimpleButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventsSimpleButton_C::BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventsSimpleButton.EventsSimpleButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent");

	UEventsSimpleButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventsSimpleButton.EventsSimpleButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventsSimpleButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventsSimpleButton.EventsSimpleButton_C.PreConstruct");

	UEventsSimpleButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventsSimpleButton.EventsSimpleButton_C.InputTypeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventsSimpleButton_C::InputTypeChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventsSimpleButton.EventsSimpleButton_C.InputTypeChanged");

	UEventsSimpleButton_C_InputTypeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventsSimpleButton.EventsSimpleButton_C.ExecuteUbergraph_EventsSimpleButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventsSimpleButton_C::ExecuteUbergraph_EventsSimpleButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventsSimpleButton.EventsSimpleButton_C.ExecuteUbergraph_EventsSimpleButton");

	UEventsSimpleButton_C_ExecuteUbergraph_EventsSimpleButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
