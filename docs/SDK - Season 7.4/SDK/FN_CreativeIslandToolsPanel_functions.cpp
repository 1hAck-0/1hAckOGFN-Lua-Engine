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

// Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.NewFunction_1
// (Public, BlueprintCallable, BlueprintEvent)

void UCreativeIslandToolsPanel_C::NewFunction_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.NewFunction_1");

	UCreativeIslandToolsPanel_C_NewFunction_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCreativeIslandToolsPanel_C::OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.OnFocusReceived");

	UCreativeIslandToolsPanel_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.DialogResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeIslandToolsPanel_C::DialogResult(EFortDialogResult Result, struct FName ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.DialogResult");

	UCreativeIslandToolsPanel_C_DialogResult_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCreativeIslandToolsPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.Construct");

	UCreativeIslandToolsPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.BndEvt__Button
// (BlueprintEvent)

void UCreativeIslandToolsPanel_C::BndEvt__Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.BndEvt__Button");

	UCreativeIslandToolsPanel_C_BndEvt__Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.UpdatePermissionSpinner
// (BlueprintCallable, BlueprintEvent)

void UCreativeIslandToolsPanel_C::UpdatePermissionSpinner()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.UpdatePermissionSpinner");

	UCreativeIslandToolsPanel_C_UpdatePermissionSpinner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.BndEvt__IconTextButton_C
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeIslandToolsPanel_C::BndEvt__IconTextButton_C(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.BndEvt__IconTextButton_C");

	UCreativeIslandToolsPanel_C_BndEvt__IconTextButton_C_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeIslandToolsPanel_C::BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent");

	UCreativeIslandToolsPanel_C_BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.Click
// (BlueprintCallable, BlueprintEvent)

void UCreativeIslandToolsPanel_C::Click()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.Click");

	UCreativeIslandToolsPanel_C_Click_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.OnPermissionsUpdated
// (BlueprintCallable, BlueprintEvent)

void UCreativeIslandToolsPanel_C::OnPermissionsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.OnPermissionsUpdated");

	UCreativeIslandToolsPanel_C_OnPermissionsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.OnRotated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeIslandToolsPanel_C::OnRotated(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.OnRotated");

	UCreativeIslandToolsPanel_C_OnRotated_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeIslandToolsPanel_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.OnInputModeChanged");

	UCreativeIslandToolsPanel_C_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeIslandToolsPanel_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent");

	UCreativeIslandToolsPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.OnSaveStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeIslandToolsPanel_C::OnSaveStateChanged(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.OnSaveStateChanged");

	UCreativeIslandToolsPanel_C_OnSaveStateChanged_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.BndEvt__Button_Backup_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeIslandToolsPanel_C::BndEvt__Button_Backup_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.BndEvt__Button_Backup_K2Node_ComponentBoundEvent");

	UCreativeIslandToolsPanel_C_BndEvt__Button_Backup_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.OnRestoreStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bReady                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeIslandToolsPanel_C::OnRestoreStateChanged(bool bReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.OnRestoreStateChanged");

	UCreativeIslandToolsPanel_C_OnRestoreStateChanged_Params params;
	params.bReady = bReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.ExecuteUbergraph_CreativeIslandToolsPanel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeIslandToolsPanel_C::ExecuteUbergraph_CreativeIslandToolsPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.ExecuteUbergraph_CreativeIslandToolsPanel");

	UCreativeIslandToolsPanel_C_ExecuteUbergraph_CreativeIslandToolsPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCreativeIslandToolsPanel_C::OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandToolsPanel.CreativeIslandToolsPanel_C.OnClose__DelegateSignature");

	UCreativeIslandToolsPanel_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
