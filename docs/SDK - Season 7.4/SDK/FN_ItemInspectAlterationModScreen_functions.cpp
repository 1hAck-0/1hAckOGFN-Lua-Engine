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

// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.HasOptions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemInspectAlterationModScreen_C::HasOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.HasOptions");

	UItemInspectAlterationModScreen_C_HasOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdatePurchaseIngredients
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemQuantityPair> Ingredients                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemInspectAlterationModScreen_C::UpdatePurchaseIngredients(TArray<struct FFortItemQuantityPair>* Ingredients)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdatePurchaseIngredients");

	UItemInspectAlterationModScreen_C_UpdatePurchaseIngredients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ingredients != nullptr)
		*Ingredients = params.Ingredients;
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdateShowPurchaseOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectAlterationModScreen_C::UpdateShowPurchaseOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdateShowPurchaseOptions");

	UItemInspectAlterationModScreen_C_UpdateShowPurchaseOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdatePurchaseDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SelectedSlot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectAlterationModScreen_C::UpdatePurchaseDetails(bool SelectedSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdatePurchaseDetails");

	UItemInspectAlterationModScreen_C_UpdatePurchaseDetails_Params params;
	params.SelectedSlot = SelectedSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdatePurchaseButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectAlterationModScreen_C::UpdatePurchaseButtons(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdatePurchaseButtons");

	UItemInspectAlterationModScreen_C_UpdatePurchaseButtons_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdateColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemInspectAlterationModScreen_C::UpdateColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdateColors");

	UItemInspectAlterationModScreen_C_UpdateColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.SetupTriangles
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectAlterationModScreen_C::SetupTriangles()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.SetupTriangles");

	UItemInspectAlterationModScreen_C_SetupTriangles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.SetupHeaderColors
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectAlterationModScreen_C::SetupHeaderColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.SetupHeaderColors");

	UItemInspectAlterationModScreen_C_SetupHeaderColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.DialogResult_AB7FE45A4C61900417D8EAB93574F424
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectAlterationModScreen_C::DialogResult_AB7FE45A4C61900417D8EAB93574F424(EFortDialogResult Result, struct FName ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.DialogResult_AB7FE45A4C61900417D8EAB93574F424");

	UItemInspectAlterationModScreen_C_DialogResult_AB7FE45A4C61900417D8EAB93574F424_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnAlterationModificationCompleted
// (Event, Protected, BlueprintEvent)

void UItemInspectAlterationModScreen_C::OnAlterationModificationCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnAlterationModificationCompleted");

	UItemInspectAlterationModScreen_C_OnAlterationModificationCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.RefreshItemAndAlterationsBP
// (Event, Protected, BlueprintEvent)

void UItemInspectAlterationModScreen_C::RefreshItemAndAlterationsBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.RefreshItemAndAlterationsBP");

	UItemInspectAlterationModScreen_C_RefreshItemAndAlterationsBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UItemInspectAlterationModScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnActivated");

	UItemInspectAlterationModScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.BndEvt__DetailsButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemInspectAlterationModScreen_C::BndEvt__DetailsButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.BndEvt__DetailsButton_K2Node_ComponentBoundEvent");

	UItemInspectAlterationModScreen_C_BndEvt__DetailsButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemInspectAlterationModScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.Construct");

	UItemInspectAlterationModScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemInspectAlterationModScreen_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent");

	UItemInspectAlterationModScreen_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemInspectAlterationModScreen_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent");

	UItemInspectAlterationModScreen_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnItemSlotChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           SelectedSlot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectAlterationModScreen_C::OnItemSlotChanged(bool SelectedSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnItemSlotChanged");

	UItemInspectAlterationModScreen_C_OnItemSlotChanged_Params params;
	params.SelectedSlot = SelectedSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnAlterationOptionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortAlterationOption*   CurrentAlterationOption        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemInspectAlterationModScreen_C::OnAlterationOptionChanged(class UFortAlterationOption* CurrentAlterationOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnAlterationOptionChanged");

	UItemInspectAlterationModScreen_C_OnAlterationOptionChanged_Params params;
	params.CurrentAlterationOption = CurrentAlterationOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.ExecuteUbergraph_ItemInspectAlterationModScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectAlterationModScreen_C::ExecuteUbergraph_ItemInspectAlterationModScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.ExecuteUbergraph_ItemInspectAlterationModScreen");

	UItemInspectAlterationModScreen_C_ExecuteUbergraph_ItemInspectAlterationModScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
