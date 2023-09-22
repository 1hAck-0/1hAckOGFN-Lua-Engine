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

// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.HandleInputModeChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ActiveMenu                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeIslandDescriptionPanel_C::HandleInputModeChange(bool UsingGamepad, bool ActiveMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.HandleInputModeChange");

	UCreativeIslandDescriptionPanel_C_HandleInputModeChange_Params params;
	params.UsingGamepad = UsingGamepad;
	params.ActiveMenu = ActiveMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.ToggleAddBulletDisplays
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeIslandDescriptionPanel_C::ToggleAddBulletDisplays(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.ToggleAddBulletDisplays");

	UCreativeIslandDescriptionPanel_C_ToggleAddBulletDisplays_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.AddDescriptionBox
// (Public, BlueprintCallable, BlueprintEvent)

void UCreativeIslandDescriptionPanel_C::AddDescriptionBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.AddDescriptionBox");

	UCreativeIslandDescriptionPanel_C_AddDescriptionBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.DoCustomNavigation_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UCreativeIslandDescriptionPanel_C::DoCustomNavigation_1(EUINavigation Navigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.DoCustomNavigation_1");

	UCreativeIslandDescriptionPanel_C_DoCustomNavigation_1_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCreativeIslandDescriptionPanel_C::OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.OnFocusReceived");

	UCreativeIslandDescriptionPanel_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeIslandDescriptionPanel_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent");

	UCreativeIslandDescriptionPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.BndEvt__IconTextButton_C
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeIslandDescriptionPanel_C::BndEvt__IconTextButton_C(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.BndEvt__IconTextButton_C");

	UCreativeIslandDescriptionPanel_C_BndEvt__IconTextButton_C_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCreativeIslandDescriptionPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.Construct");

	UCreativeIslandDescriptionPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.OnAccept
// (Event, Protected, BlueprintEvent)

void UCreativeIslandDescriptionPanel_C::OnAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.OnAccept");

	UCreativeIslandDescriptionPanel_C_OnAccept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.Close
// (BlueprintCallable, BlueprintEvent)

void UCreativeIslandDescriptionPanel_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.Close");

	UCreativeIslandDescriptionPanel_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeIslandDescriptionPanel_C::BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent");

	UCreativeIslandDescriptionPanel_C_BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.ShowSpinner
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeIslandDescriptionPanel_C::ShowSpinner(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.ShowSpinner");

	UCreativeIslandDescriptionPanel_C_ShowSpinner_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.ShowError
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString                 Error                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCreativeIslandDescriptionPanel_C::ShowError(struct FString Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.ShowError");

	UCreativeIslandDescriptionPanel_C_ShowError_Params params;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.OnSaveCallBack
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeIslandDescriptionPanel_C::OnSaveCallBack(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.OnSaveCallBack");

	UCreativeIslandDescriptionPanel_C_OnSaveCallBack_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeIslandDescriptionPanel_C::BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent");

	UCreativeIslandDescriptionPanel_C_BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.BndEvt__UserActionMenuInputButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeIslandDescriptionPanel_C::BndEvt__UserActionMenuInputButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.BndEvt__UserActionMenuInputButton_K2Node_ComponentBoundEvent");

	UCreativeIslandDescriptionPanel_C_BndEvt__UserActionMenuInputButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.ExecuteUbergraph_CreativeIslandDescriptionPanel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeIslandDescriptionPanel_C::ExecuteUbergraph_CreativeIslandDescriptionPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.ExecuteUbergraph_CreativeIslandDescriptionPanel");

	UCreativeIslandDescriptionPanel_C_ExecuteUbergraph_CreativeIslandDescriptionPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.OnPreviewDisplay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCreativeIslandDescriptionPanel_C::OnPreviewDisplay__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.OnPreviewDisplay__DelegateSignature");

	UCreativeIslandDescriptionPanel_C_OnPreviewDisplay__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCreativeIslandDescriptionPanel_C::OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.OnClose__DelegateSignature");

	UCreativeIslandDescriptionPanel_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
