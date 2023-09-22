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

// Function CreativePermissionKnobs.CreativePermissionKnobs_C.CustomNavToPermissionsListIfShown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UCreativePermissionKnobs_C::CustomNavToPermissionsListIfShown(EUINavigation Navigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativePermissionKnobs.CreativePermissionKnobs_C.CustomNavToPermissionsListIfShown");

	UCreativePermissionKnobs_C_CustomNavToPermissionsListIfShown_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CreativePermissionKnobs.CreativePermissionKnobs_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCreativePermissionKnobs_C::OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativePermissionKnobs.CreativePermissionKnobs_C.OnFocusReceived");

	UCreativePermissionKnobs_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CreativePermissionKnobs.CreativePermissionKnobs_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCreativePermissionKnobs_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativePermissionKnobs.CreativePermissionKnobs_C.Construct");

	UCreativePermissionKnobs_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativePermissionKnobs.CreativePermissionKnobs_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UCreativePermissionKnobs_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativePermissionKnobs.CreativePermissionKnobs_C.OnActivated");

	UCreativePermissionKnobs_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativePermissionKnobs.CreativePermissionKnobs_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativePermissionKnobs_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativePermissionKnobs.CreativePermissionKnobs_C.OnInputModeChanged");

	UCreativePermissionKnobs_C_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativePermissionKnobs.CreativePermissionKnobs_C.Close
// (BlueprintCallable, BlueprintEvent)

void UCreativePermissionKnobs_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativePermissionKnobs.CreativePermissionKnobs_C.Close");

	UCreativePermissionKnobs_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativePermissionKnobs.CreativePermissionKnobs_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativePermissionKnobs_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativePermissionKnobs.CreativePermissionKnobs_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent");

	UCreativePermissionKnobs_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativePermissionKnobs.CreativePermissionKnobs_C.HandleCancelClicked
// (Event, Public, BlueprintEvent)

void UCreativePermissionKnobs_C::HandleCancelClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativePermissionKnobs.CreativePermissionKnobs_C.HandleCancelClicked");

	UCreativePermissionKnobs_C_HandleCancelClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativePermissionKnobs.CreativePermissionKnobs_C.AnimateIn
// (BlueprintCallable, BlueprintEvent)

void UCreativePermissionKnobs_C::AnimateIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativePermissionKnobs.CreativePermissionKnobs_C.AnimateIn");

	UCreativePermissionKnobs_C_AnimateIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativePermissionKnobs.CreativePermissionKnobs_C.UpdatePermissionSpinner
// (BlueprintCallable, BlueprintEvent)

void UCreativePermissionKnobs_C::UpdatePermissionSpinner()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativePermissionKnobs.CreativePermissionKnobs_C.UpdatePermissionSpinner");

	UCreativePermissionKnobs_C_UpdatePermissionSpinner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativePermissionKnobs.CreativePermissionKnobs_C.OnRotated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativePermissionKnobs_C::OnRotated(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativePermissionKnobs.CreativePermissionKnobs_C.OnRotated");

	UCreativePermissionKnobs_C_OnRotated_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativePermissionKnobs.CreativePermissionKnobs_C.HandleNoOptionsLoaded
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UCreativePermissionKnobs_C::HandleNoOptionsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativePermissionKnobs.CreativePermissionKnobs_C.HandleNoOptionsLoaded");

	UCreativePermissionKnobs_C_HandleNoOptionsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativePermissionKnobs.CreativePermissionKnobs_C.ShowWhitelistLimitError
// (Event, Public, BlueprintEvent)

void UCreativePermissionKnobs_C::ShowWhitelistLimitError()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativePermissionKnobs.CreativePermissionKnobs_C.ShowWhitelistLimitError");

	UCreativePermissionKnobs_C_ShowWhitelistLimitError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativePermissionKnobs.CreativePermissionKnobs_C.CloseDialog
// (Event, Public, BlueprintEvent)

void UCreativePermissionKnobs_C::CloseDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativePermissionKnobs.CreativePermissionKnobs_C.CloseDialog");

	UCreativePermissionKnobs_C_CloseDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativePermissionKnobs.CreativePermissionKnobs_C.ExecuteUbergraph_CreativePermissionKnobs
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativePermissionKnobs_C::ExecuteUbergraph_CreativePermissionKnobs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativePermissionKnobs.CreativePermissionKnobs_C.ExecuteUbergraph_CreativePermissionKnobs");

	UCreativePermissionKnobs_C_ExecuteUbergraph_CreativePermissionKnobs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativePermissionKnobs.CreativePermissionKnobs_C.OnCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCreativePermissionKnobs_C::OnCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativePermissionKnobs.CreativePermissionKnobs_C.OnCancel__DelegateSignature");

	UCreativePermissionKnobs_C_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativePermissionKnobs.CreativePermissionKnobs_C.OnAccept__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCreativePermissionKnobs_C::OnAccept__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativePermissionKnobs.CreativePermissionKnobs_C.OnAccept__DelegateSignature");

	UCreativePermissionKnobs_C_OnAccept__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
