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

// Function OptionsMenuHeader.OptionsMenuHeader_C.GetListItemObject
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UOptionsMenuHeader_C::GetListItemObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHeader.OptionsMenuHeader_C.GetListItemObject");

	UOptionsMenuHeader_C_GetListItemObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuHeader.OptionsMenuHeader_C.HandlePawnSet
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuHeader_C::HandlePawnSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHeader.OptionsMenuHeader_C.HandlePawnSet");

	UOptionsMenuHeader_C_HandlePawnSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHeader.OptionsMenuHeader_C.UpdateSize
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuHeader_C::UpdateSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHeader.OptionsMenuHeader_C.UpdateSize");

	UOptionsMenuHeader_C_UpdateSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHeader.OptionsMenuHeader_C.Center on Widget
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuHeader_C::Center_on_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHeader.OptionsMenuHeader_C.Center on Widget");

	UOptionsMenuHeader_C_Center_on_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHeader.OptionsMenuHeader_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuHeader_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHeader.OptionsMenuHeader_C.BP_OnItemExpansionChanged");

	UOptionsMenuHeader_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHeader.OptionsMenuHeader_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuHeader_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHeader.OptionsMenuHeader_C.BP_OnItemSelectionChanged");

	UOptionsMenuHeader_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHeader.OptionsMenuHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsMenuHeader_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHeader.OptionsMenuHeader_C.Construct");

	UOptionsMenuHeader_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHeader.OptionsMenuHeader_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuHeader_C::OnMouseLeave(struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHeader.OptionsMenuHeader_C.OnMouseLeave");

	UOptionsMenuHeader_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHeader.OptionsMenuHeader_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuHeader_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHeader.OptionsMenuHeader_C.OnMouseEnter");

	UOptionsMenuHeader_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHeader.OptionsMenuHeader_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuHeader_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHeader.OptionsMenuHeader_C.OnListItemObjectSet");

	UOptionsMenuHeader_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHeader.OptionsMenuHeader_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UOptionsMenuHeader_C::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHeader.OptionsMenuHeader_C.BP_OnEntryReleased");

	UOptionsMenuHeader_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHeader.OptionsMenuHeader_C.CenterOnWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuHeader_C::CenterOnWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHeader.OptionsMenuHeader_C.CenterOnWidget");

	UOptionsMenuHeader_C_CenterOnWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHeader.OptionsMenuHeader_C.ExecuteUbergraph_OptionsMenuHeader
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuHeader_C::ExecuteUbergraph_OptionsMenuHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHeader.OptionsMenuHeader_C.ExecuteUbergraph_OptionsMenuHeader");

	UOptionsMenuHeader_C_ExecuteUbergraph_OptionsMenuHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
