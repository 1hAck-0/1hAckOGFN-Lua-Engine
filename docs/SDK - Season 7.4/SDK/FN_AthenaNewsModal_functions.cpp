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

// Function AthenaNewsModal.AthenaNewsModal_C.ShouldShowSTWUpdates
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldShow                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaNewsModal_C::ShouldShowSTWUpdates(bool* ShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNewsModal.AthenaNewsModal_C.ShouldShowSTWUpdates");

	UAthenaNewsModal_C_ShouldShowSTWUpdates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldShow != nullptr)
		*ShouldShow = params.ShouldShow;
}


// Function AthenaNewsModal.AthenaNewsModal_C.ShouldShowSTWUpsellInBR
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldShow                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaNewsModal_C::ShouldShowSTWUpsellInBR(bool* ShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNewsModal.AthenaNewsModal_C.ShouldShowSTWUpsellInBR");

	UAthenaNewsModal_C_ShouldShowSTWUpsellInBR_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldShow != nullptr)
		*ShouldShow = params.ShouldShow;
}


// Function AthenaNewsModal.AthenaNewsModal_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaNewsModal_C::OnMouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNewsModal.AthenaNewsModal_C.OnMouseButtonDown_1");

	UAthenaNewsModal_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function AthenaNewsModal.AthenaNewsModal_C.DialogResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaNewsModal_C::DialogResult(EFortDialogResult Result, struct FName ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNewsModal.AthenaNewsModal_C.DialogResult");

	UAthenaNewsModal_C_DialogResult_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaNewsModal.AthenaNewsModal_C.ForceNewsClosed
// (BlueprintCallable, BlueprintEvent)

void UAthenaNewsModal_C::ForceNewsClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNewsModal.AthenaNewsModal_C.ForceNewsClosed");

	UAthenaNewsModal_C_ForceNewsClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaNewsModal.AthenaNewsModal_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaNewsModal_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNewsModal.AthenaNewsModal_C.OnActivated");

	UAthenaNewsModal_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__IconTextButton_C
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaNewsModal_C::BndEvt__IconTextButton_C(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__IconTextButton_C");

	UAthenaNewsModal_C_BndEvt__IconTextButton_C_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaNewsModal_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent");

	UAthenaNewsModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaNewsModal.AthenaNewsModal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaNewsModal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNewsModal.AthenaNewsModal_C.Construct");

	UAthenaNewsModal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__STW_CloseButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaNewsModal_C::BndEvt__STW_CloseButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__STW_CloseButton_K2Node_ComponentBoundEvent");

	UAthenaNewsModal_C_BndEvt__STW_CloseButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__AthenaNews_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// EAthenaNewsStyle               NewStyle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaNewsModal_C::BndEvt__AthenaNews_K2Node_ComponentBoundEvent(EAthenaNewsStyle NewStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__AthenaNews_K2Node_ComponentBoundEvent");

	UAthenaNewsModal_C_BndEvt__AthenaNews_K2Node_ComponentBoundEvent_Params params;
	params.NewStyle = NewStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__STWFounderPackButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaNewsModal_C::BndEvt__STWFounderPackButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__STWFounderPackButton_K2Node_ComponentBoundEvent");

	UAthenaNewsModal_C_BndEvt__STWFounderPackButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__STWUpdateButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaNewsModal_C::BndEvt__STWUpdateButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNewsModal.AthenaNewsModal_C.BndEvt__STWUpdateButton_K2Node_ComponentBoundEvent");

	UAthenaNewsModal_C_BndEvt__STWUpdateButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaNewsModal.AthenaNewsModal_C.ExecuteUbergraph_AthenaNewsModal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaNewsModal_C::ExecuteUbergraph_AthenaNewsModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNewsModal.AthenaNewsModal_C.ExecuteUbergraph_AthenaNewsModal");

	UAthenaNewsModal_C_ExecuteUbergraph_AthenaNewsModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
