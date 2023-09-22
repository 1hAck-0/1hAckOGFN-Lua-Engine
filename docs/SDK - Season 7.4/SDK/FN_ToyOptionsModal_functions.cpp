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

// Function ToyOptionsModal.ToyOptionsModal_C.SetItemInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ItemName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ItemDescription                (BlueprintVisible, BlueprintReadOnly, Parm)

void UToyOptionsModal_C::SetItemInfo(struct FText ItemName, struct FText ItemDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToyOptionsModal.ToyOptionsModal_C.SetItemInfo");

	UToyOptionsModal_C_SetItemInfo_Params params;
	params.ItemName = ItemName;
	params.ItemDescription = ItemDescription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToyOptionsModal.ToyOptionsModal_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UToyOptionsModal_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToyOptionsModal.ToyOptionsModal_C.OnActivated");

	UToyOptionsModal_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToyOptionsModal.ToyOptionsModal_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UToyOptionsModal_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToyOptionsModal.ToyOptionsModal_C.OnInputModeChanged");

	UToyOptionsModal_C_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToyOptionsModal.ToyOptionsModal_C.Close
// (BlueprintCallable, BlueprintEvent)

void UToyOptionsModal_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToyOptionsModal.ToyOptionsModal_C.Close");

	UToyOptionsModal_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToyOptionsModal.ToyOptionsModal_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UToyOptionsModal_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToyOptionsModal.ToyOptionsModal_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent");

	UToyOptionsModal_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToyOptionsModal.ToyOptionsModal_C.HandleCancelClicked
// (Event, Public, BlueprintEvent)

void UToyOptionsModal_C::HandleCancelClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToyOptionsModal.ToyOptionsModal_C.HandleCancelClicked");

	UToyOptionsModal_C_HandleCancelClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToyOptionsModal.ToyOptionsModal_C.InitForOptionsComponent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortActorOptionsComponent* OptionsComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UToyOptionsModal_C::InitForOptionsComponent(class UFortActorOptionsComponent* OptionsComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToyOptionsModal.ToyOptionsModal_C.InitForOptionsComponent");

	UToyOptionsModal_C_InitForOptionsComponent_Params params;
	params.OptionsComponent = OptionsComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToyOptionsModal.ToyOptionsModal_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UToyOptionsModal_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToyOptionsModal.ToyOptionsModal_C.OnDeactivated");

	UToyOptionsModal_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToyOptionsModal.ToyOptionsModal_C.ExecuteUbergraph_ToyOptionsModal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UToyOptionsModal_C::ExecuteUbergraph_ToyOptionsModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToyOptionsModal.ToyOptionsModal_C.ExecuteUbergraph_ToyOptionsModal");

	UToyOptionsModal_C_ExecuteUbergraph_ToyOptionsModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
