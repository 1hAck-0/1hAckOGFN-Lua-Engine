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

// Function SimplePipButton.SimplePipButton_C.UpdateInputActionLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USimplePipButton_C::UpdateInputActionLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimplePipButton.SimplePipButton_C.UpdateInputActionLayout");

	USimplePipButton_C_UpdateInputActionLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimplePipButton.SimplePipButton_C.UpdateStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USimplePipButton_C::UpdateStyle(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimplePipButton.SimplePipButton_C.UpdateStyle");

	USimplePipButton_C_UpdateStyle_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimplePipButton.SimplePipButton_C.InitializeButton
// (Public, BlueprintCallable, BlueprintEvent)

void USimplePipButton_C::InitializeButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimplePipButton.SimplePipButton_C.InitializeButton");

	USimplePipButton_C_InitializeButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimplePipButton.SimplePipButton_C.UpdateTextAndStyle
// (Public, BlueprintCallable, BlueprintEvent)

void USimplePipButton_C::UpdateTextAndStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimplePipButton.SimplePipButton_C.UpdateTextAndStyle");

	USimplePipButton_C_UpdateTextAndStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimplePipButton.SimplePipButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USimplePipButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimplePipButton.SimplePipButton_C.PreConstruct");

	USimplePipButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimplePipButton.SimplePipButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USimplePipButton_C::BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimplePipButton.SimplePipButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent");

	USimplePipButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimplePipButton.SimplePipButton_C.OnTriggeredInputActionChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     NewTriggeredAction             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USimplePipButton_C::OnTriggeredInputActionChanged(struct FDataTableRowHandle NewTriggeredAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimplePipButton.SimplePipButton_C.OnTriggeredInputActionChanged");

	USimplePipButton_C_OnTriggeredInputActionChanged_Params params;
	params.NewTriggeredAction = NewTriggeredAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimplePipButton.SimplePipButton_C.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          HeldPercent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USimplePipButton_C::OnActionProgress(float HeldPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimplePipButton.SimplePipButton_C.OnActionProgress");

	USimplePipButton_C_OnActionProgress_Params params;
	params.HeldPercent = HeldPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimplePipButton.SimplePipButton_C.OnActionComplete
// (Event, Protected, BlueprintEvent)

void USimplePipButton_C::OnActionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimplePipButton.SimplePipButton_C.OnActionComplete");

	USimplePipButton_C_OnActionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimplePipButton.SimplePipButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USimplePipButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimplePipButton.SimplePipButton_C.Construct");

	USimplePipButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimplePipButton.SimplePipButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void USimplePipButton_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimplePipButton.SimplePipButton_C.BP_OnHovered");

	USimplePipButton_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimplePipButton.SimplePipButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void USimplePipButton_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimplePipButton.SimplePipButton_C.BP_OnUnhovered");

	USimplePipButton_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimplePipButton.SimplePipButton_C.ExecuteUbergraph_SimplePipButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USimplePipButton_C::ExecuteUbergraph_SimplePipButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimplePipButton.SimplePipButton_C.ExecuteUbergraph_SimplePipButton");

	USimplePipButton_C_ExecuteUbergraph_SimplePipButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
