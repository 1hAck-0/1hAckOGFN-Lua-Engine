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

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.GetListItemObject
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UOptionsMenuRowSelector_C::GetListItemObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.GetListItemObject");

	UOptionsMenuRowSelector_C_GetListItemObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Hide Tooltip
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuRowSelector_C::Hide_Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Hide Tooltip");

	UOptionsMenuRowSelector_C_Hide_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Set Selection Required
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selection_Required             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuRowSelector_C::Set_Selection_Required(bool Selection_Required)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Set Selection Required");

	UOptionsMenuRowSelector_C_Set_Selection_Required_Params params;
	params.Selection_Required = Selection_Required;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.On Get Menu Content
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UOptionsMenuRowSelector_C::On_Get_Menu_Content()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.On Get Menu Content");

	UOptionsMenuRowSelector_C_On_Get_Menu_Content_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Show Tooltip
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuRowSelector_C::Show_Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Show Tooltip");

	UOptionsMenuRowSelector_C_Show_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.DisableOption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OptionIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuRowSelector_C::DisableOption(int OptionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.DisableOption");

	UOptionsMenuRowSelector_C_DisableOption_Params params;
	params.OptionIndex = OptionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Button Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button_Hovered                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenuRowSelector_C::Button_Hovered(class UCommonButton* Button_Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Button Hovered");

	UOptionsMenuRowSelector_C_Button_Hovered_Params params;
	params.Button_Hovered = Button_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Deselect All Rows
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuRowSelector_C::Deselect_All_Rows()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Deselect All Rows");

	UOptionsMenuRowSelector_C_Deselect_All_Rows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Update Row Selector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Tab_Number                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuRowSelector_C::Update_Row_Selector(int Tab_Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Update Row Selector");

	UOptionsMenuRowSelector_C_Update_Row_Selector_Params params;
	params.Tab_Number = Tab_Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Initialize Row Selector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Row_Text                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FText>           Buttons                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FText>           Hover_Texts                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Require_Selection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonTextBlock*        Tab_Tooltip                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenuRowSelector_C::Initialize_Row_Selector(struct FText Row_Text, bool Require_Selection, class UCommonTextBlock* Tab_Tooltip, TArray<struct FText>* Buttons, TArray<struct FText>* Hover_Texts)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Initialize Row Selector");

	UOptionsMenuRowSelector_C_Initialize_Row_Selector_Params params;
	params.Row_Text = Row_Text;
	params.Require_Selection = Require_Selection;
	params.Tab_Tooltip = Tab_Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Buttons != nullptr)
		*Buttons = params.Buttons;
	if (Hover_Texts != nullptr)
		*Hover_Texts = params.Hover_Texts;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UOptionsMenuRowSelector_C::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.BP_OnEntryReleased");

	UOptionsMenuRowSelector_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuRowSelector_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.BP_OnItemExpansionChanged");

	UOptionsMenuRowSelector_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuRowSelector_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.BP_OnItemSelectionChanged");

	UOptionsMenuRowSelector_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsMenuRowSelector_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Construct");

	UOptionsMenuRowSelector_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuRowSelector_C::OnMouseLeave(struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnMouseLeave");

	UOptionsMenuRowSelector_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsMenuRowSelector_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Destruct");

	UOptionsMenuRowSelector_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuRowSelector_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.PreConstruct");

	UOptionsMenuRowSelector_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuRowSelector_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnListItemObjectSet");

	UOptionsMenuRowSelector_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuRowSelector_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnMouseEnter");

	UOptionsMenuRowSelector_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.UpdateSetting
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonTextBlock*        TooltipTextBlock               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenuRowSelector_C::UpdateSetting(class UCommonTextBlock* TooltipTextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.UpdateSetting");

	UOptionsMenuRowSelector_C_UpdateSetting_Params params;
	params.TooltipTextBlock = TooltipTextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.CenterOnWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuRowSelector_C::CenterOnWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.CenterOnWidget");

	UOptionsMenuRowSelector_C_CenterOnWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnSelectedButtonChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           AssociatedButton               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuRowSelector_C::OnSelectedButtonChanged_Event_1(class UCommonButton* AssociatedButton, int ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnSelectedButtonChanged_Event_1");

	UOptionsMenuRowSelector_C_OnSelectedButtonChanged_Event_1_Params params;
	params.AssociatedButton = AssociatedButton;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenuRowSelector_C::BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent");

	UOptionsMenuRowSelector_C_BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.ExecuteUbergraph_OptionsMenuRowSelector
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuRowSelector_C::ExecuteUbergraph_OptionsMenuRowSelector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.ExecuteUbergraph_OptionsMenuRowSelector");

	UOptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Selector Button Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Tab_Id                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuRowSelector_C::Selector_Button_Selected__DelegateSignature(int Tab_Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Selector Button Selected__DelegateSignature");

	UOptionsMenuRowSelector_C_Selector_Button_Selected__DelegateSignature_Params params;
	params.Tab_Id = Tab_Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
