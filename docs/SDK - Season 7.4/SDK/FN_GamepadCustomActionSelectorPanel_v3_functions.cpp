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

// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.HandleClear
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGamepadCustomActionSelectorPanel_v3_C::HandleClear(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.HandleClear");

	UGamepadCustomActionSelectorPanel_v3_C_HandleClear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CreateCustomListItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortInputActionGroup          InputActionGroup               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGamepadKeyTextButton_C* ReturnItem                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGamepadCustomActionSelectorPanel_v3_C::CreateCustomListItem(struct FName ActionName, EFortInputActionGroup InputActionGroup, class UGamepadKeyTextButton_C** ReturnItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CreateCustomListItem");

	UGamepadCustomActionSelectorPanel_v3_C_CreateCustomListItem_Params params;
	params.ActionName = ActionName;
	params.InputActionGroup = InputActionGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnItem != nullptr)
		*ReturnItem = params.ReturnItem;
}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGamepadCustomActionSelectorPanel_v3_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.HandleBack");

	UGamepadCustomActionSelectorPanel_v3_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGamepadCustomActionSelectorPanel_v3_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.Construct");

	UGamepadCustomActionSelectorPanel_v3_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.UpdatePanel
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortOptionsMenuInputData*> InputData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGamepadCustomActionSelectorPanel_v3_C::UpdatePanel(TArray<class UFortOptionsMenuInputData*> InputData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.UpdatePanel");

	UGamepadCustomActionSelectorPanel_v3_C_UpdatePanel_Params params;
	params.InputData = InputData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.BP_OnItemClicked_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadCustomActionSelectorPanel_v3_C::BP_OnItemClicked_Bind(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.BP_OnItemClicked_Bind");

	UGamepadCustomActionSelectorPanel_v3_C_BP_OnItemClicked_Bind_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UGamepadCustomActionSelectorPanel_v3_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.OnActivated");

	UGamepadCustomActionSelectorPanel_v3_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UGamepadCustomActionSelectorPanel_v3_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.OnDeactivated");

	UGamepadCustomActionSelectorPanel_v3_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.BndEvt__Button_Clear_K2Node_ComponentBoundEvent
// (BlueprintEvent)

void UGamepadCustomActionSelectorPanel_v3_C::BndEvt__Button_Clear_K2Node_ComponentBoundEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.BndEvt__Button_Clear_K2Node_ComponentBoundEvent");

	UGamepadCustomActionSelectorPanel_v3_C_BndEvt__Button_Clear_K2Node_ComponentBoundEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadCustomActionSelectorPanel_v3_C::ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3");

	UGamepadCustomActionSelectorPanel_v3_C_ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomClearButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGamepadCustomActionSelectorPanel_v3_C::CustomClearButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomClearButton__DelegateSignature");

	UGamepadCustomActionSelectorPanel_v3_C_CustomClearButton__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomClosedUsingBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGamepadCustomActionSelectorPanel_v3_C::CustomClosedUsingBack__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomClosedUsingBack__DelegateSignature");

	UGamepadCustomActionSelectorPanel_v3_C_CustomClosedUsingBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomActionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadCustomActionSelectorPanel_v3_C::CustomActionSelected__DelegateSignature(int SelectedIndex, struct FName ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomActionSelected__DelegateSignature");

	UGamepadCustomActionSelectorPanel_v3_C_CustomActionSelected__DelegateSignature_Params params;
	params.SelectedIndex = SelectedIndex;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
