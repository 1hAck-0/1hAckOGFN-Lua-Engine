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

// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Handle Leaving Banner Editor
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LocalPlayerProfileModal_C::Handle_Leaving_Banner_Editor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Handle Leaving Banner Editor");

	UBP_LocalPlayerProfileModal_C_Handle_Leaving_Banner_Editor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.HandleNextAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocalPlayerProfileModal_C::HandleNextAction(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.HandleNextAction");

	UBP_LocalPlayerProfileModal_C_HandleNextAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.HandlePreviousAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocalPlayerProfileModal_C::HandlePreviousAction(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.HandlePreviousAction");

	UBP_LocalPlayerProfileModal_C_HandlePreviousAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Setup Input Action Handlers
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LocalPlayerProfileModal_C::Setup_Input_Action_Handlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Setup Input Action Handlers");

	UBP_LocalPlayerProfileModal_C_Setup_Input_Action_Handlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.HandleCloseAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LocalPlayerProfileModal_C::HandleCloseAction(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.HandleCloseAction");

	UBP_LocalPlayerProfileModal_C_HandleCloseAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Activate Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocalPlayerProfileModal_C::Activate_Widget(int Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Activate Widget");

	UBP_LocalPlayerProfileModal_C_Activate_Widget_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocalPlayerProfileModal_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.PreConstruct");

	UBP_LocalPlayerProfileModal_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent
// (BlueprintEvent)

void UBP_LocalPlayerProfileModal_C::BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent");

	UBP_LocalPlayerProfileModal_C_BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.BndEvt__CommonWidgetSwitcher
// (BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ActiveWidgetIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocalPlayerProfileModal_C::BndEvt__CommonWidgetSwitcher(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.BndEvt__CommonWidgetSwitcher");

	UBP_LocalPlayerProfileModal_C_BndEvt__CommonWidgetSwitcher_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UBP_LocalPlayerProfileModal_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.OnActivated");

	UBP_LocalPlayerProfileModal_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_LocalPlayerProfileModal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.Construct");

	UBP_LocalPlayerProfileModal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// struct FName                   IconId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ColorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocalPlayerProfileModal_C::BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent(struct FName IconId, struct FName ColorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent");

	UBP_LocalPlayerProfileModal_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_Params params;
	params.IconId = IconId;
	params.ColorId = ColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UBP_LocalPlayerProfileModal_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.OnDeactivated");

	UBP_LocalPlayerProfileModal_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocalPlayerProfileModal_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.OnInputModeChanged");

	UBP_LocalPlayerProfileModal_C_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.ExecuteUbergraph_BP_LocalPlayerProfileModal
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LocalPlayerProfileModal_C::ExecuteUbergraph_BP_LocalPlayerProfileModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalPlayerProfileModal.BP_LocalPlayerProfileModal_C.ExecuteUbergraph_BP_LocalPlayerProfileModal");

	UBP_LocalPlayerProfileModal_C_ExecuteUbergraph_BP_LocalPlayerProfileModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
