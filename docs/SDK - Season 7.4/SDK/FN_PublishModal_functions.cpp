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

// Function PublishModal.PublishModal_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPublishModal_C::OnMouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PublishModal.PublishModal_C.OnMouseButtonDown_1");

	UPublishModal_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PublishModal.PublishModal_C.OnTextChanged_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPublishModal_C::OnTextChanged_Event_1(struct FText Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function PublishModal.PublishModal_C.OnTextChanged_Event_1");

	UPublishModal_C_OnTextChanged_Event_1_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PublishModal.PublishModal_C.BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPublishModal_C::BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PublishModal.PublishModal_C.BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent");

	UPublishModal_C_BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PublishModal.PublishModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPublishModal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PublishModal.PublishModal_C.Construct");

	UPublishModal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PublishModal.PublishModal_C.BndEvt__BackButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPublishModal_C::BndEvt__BackButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PublishModal.PublishModal_C.BndEvt__BackButton_K2Node_ComponentBoundEvent");

	UPublishModal_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PublishModal.PublishModal_C.CustomEvent_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPublishModal_C::CustomEvent_1(struct FText Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function PublishModal.PublishModal_C.CustomEvent_1");

	UPublishModal_C_CustomEvent_1_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PublishModal.PublishModal_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPublishModal_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PublishModal.PublishModal_C.OnActivated");

	UPublishModal_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PublishModal.PublishModal_C.OnValidCheckComplete
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPublishModal_C::OnValidCheckComplete(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function PublishModal.PublishModal_C.OnValidCheckComplete");

	UPublishModal_C_OnValidCheckComplete_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PublishModal.PublishModal_C.OnPublishError
// (Event, Protected, BlueprintEvent)

void UPublishModal_C::OnPublishError()
{
	static auto fn = UObject::FindObject<UFunction>("Function PublishModal.PublishModal_C.OnPublishError");

	UPublishModal_C_OnPublishError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PublishModal.PublishModal_C.BndEvt__Button_Submit_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPublishModal_C::BndEvt__Button_Submit_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PublishModal.PublishModal_C.BndEvt__Button_Submit_K2Node_ComponentBoundEvent");

	UPublishModal_C_BndEvt__Button_Submit_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PublishModal.PublishModal_C.BndEvt__Button_CopyCode_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPublishModal_C::BndEvt__Button_CopyCode_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PublishModal.PublishModal_C.BndEvt__Button_CopyCode_K2Node_ComponentBoundEvent");

	UPublishModal_C_BndEvt__Button_CopyCode_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PublishModal.PublishModal_C.OnPublishBegin
// (Event, Protected, BlueprintEvent)

void UPublishModal_C::OnPublishBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PublishModal.PublishModal_C.OnPublishBegin");

	UPublishModal_C_OnPublishBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PublishModal.PublishModal_C.OnCodeConfirmation
// (Event, Protected, BlueprintEvent)

void UPublishModal_C::OnCodeConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PublishModal.PublishModal_C.OnCodeConfirmation");

	UPublishModal_C_OnCodeConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PublishModal.PublishModal_C.ExecuteUbergraph_PublishModal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPublishModal_C::ExecuteUbergraph_PublishModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PublishModal.PublishModal_C.ExecuteUbergraph_PublishModal");

	UPublishModal_C_ExecuteUbergraph_PublishModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
