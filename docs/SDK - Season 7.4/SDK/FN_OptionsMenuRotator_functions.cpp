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

// Function OptionsMenuRotator.OptionsMenuRotator_C.GetListItemObject
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UOptionsMenuRotator_C::GetListItemObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRotator.OptionsMenuRotator_C.GetListItemObject");

	UOptionsMenuRotator_C_GetListItemObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuRotator.OptionsMenuRotator_C.Update Display Names
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuRotator_C::Update_Display_Names()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRotator.OptionsMenuRotator_C.Update Display Names");

	UOptionsMenuRotator_C_Update_Display_Names_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRotator.OptionsMenuRotator_C.Hide Tooltip
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuRotator_C::Hide_Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRotator.OptionsMenuRotator_C.Hide Tooltip");

	UOptionsMenuRotator_C_Hide_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRotator.OptionsMenuRotator_C.Show Tooltip
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuRotator_C::Show_Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRotator.OptionsMenuRotator_C.Show Tooltip");

	UOptionsMenuRotator_C_Show_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRotator.OptionsMenuRotator_C.OnGetMenuContent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UOptionsMenuRotator_C::OnGetMenuContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRotator.OptionsMenuRotator_C.OnGetMenuContent");

	UOptionsMenuRotator_C_OnGetMenuContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuRotator.OptionsMenuRotator_C.HandlePawnSet
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuRotator_C::HandlePawnSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRotator.OptionsMenuRotator_C.HandlePawnSet");

	UOptionsMenuRotator_C_HandlePawnSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRotator.OptionsMenuRotator_C.UpdateSize
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuRotator_C::UpdateSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRotator.OptionsMenuRotator_C.UpdateSize");

	UOptionsMenuRotator_C_UpdateSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRotator.OptionsMenuRotator_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UOptionsMenuRotator_C::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRotator.OptionsMenuRotator_C.BP_OnEntryReleased");

	UOptionsMenuRotator_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRotator.OptionsMenuRotator_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuRotator_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRotator.OptionsMenuRotator_C.BP_OnItemExpansionChanged");

	UOptionsMenuRotator_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRotator.OptionsMenuRotator_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuRotator_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRotator.OptionsMenuRotator_C.BP_OnItemSelectionChanged");

	UOptionsMenuRotator_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRotator.OptionsMenuRotator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsMenuRotator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRotator.OptionsMenuRotator_C.Construct");

	UOptionsMenuRotator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRotator.OptionsMenuRotator_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuRotator_C::OnMouseLeave(struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRotator.OptionsMenuRotator_C.OnMouseLeave");

	UOptionsMenuRotator_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRotator.OptionsMenuRotator_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuRotator_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRotator.OptionsMenuRotator_C.OnMouseEnter");

	UOptionsMenuRotator_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRotator.OptionsMenuRotator_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuRotator_C::BndEvt__TextRotator_K2Node_ComponentBoundEvent(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRotator.OptionsMenuRotator_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent");

	UOptionsMenuRotator_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRotator.OptionsMenuRotator_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuRotator_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRotator.OptionsMenuRotator_C.OnListItemObjectSet");

	UOptionsMenuRotator_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRotator.OptionsMenuRotator_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenuRotator_C::BndEvt__ButtonLeft_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRotator.OptionsMenuRotator_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent");

	UOptionsMenuRotator_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRotator.OptionsMenuRotator_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenuRotator_C::BndEvt__ButtonRight_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRotator.OptionsMenuRotator_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent");

	UOptionsMenuRotator_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRotator.OptionsMenuRotator_C.BndEvt__MenuAnchorSettingDescription_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuRotator_C::BndEvt__MenuAnchorSettingDescription_K2Node_ComponentBoundEvent(bool bIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRotator.OptionsMenuRotator_C.BndEvt__MenuAnchorSettingDescription_K2Node_ComponentBoundEvent");

	UOptionsMenuRotator_C_BndEvt__MenuAnchorSettingDescription_K2Node_ComponentBoundEvent_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRotator.OptionsMenuRotator_C.BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenuRotator_C::BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRotator.OptionsMenuRotator_C.BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent");

	UOptionsMenuRotator_C_BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRotator.OptionsMenuRotator_C.UpdateSetting
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonTextBlock*        TooltipTextBlock               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenuRotator_C::UpdateSetting(class UCommonTextBlock* TooltipTextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRotator.OptionsMenuRotator_C.UpdateSetting");

	UOptionsMenuRotator_C_UpdateSetting_Params params;
	params.TooltipTextBlock = TooltipTextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRotator.OptionsMenuRotator_C.CenterOnWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuRotator_C::CenterOnWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRotator.OptionsMenuRotator_C.CenterOnWidget");

	UOptionsMenuRotator_C_CenterOnWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRotator.OptionsMenuRotator_C.ExecuteUbergraph_OptionsMenuRotator
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuRotator_C::ExecuteUbergraph_OptionsMenuRotator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRotator.OptionsMenuRotator_C.ExecuteUbergraph_OptionsMenuRotator");

	UOptionsMenuRotator_C_ExecuteUbergraph_OptionsMenuRotator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
