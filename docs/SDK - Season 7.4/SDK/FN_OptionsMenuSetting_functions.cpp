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

// Function OptionsMenuSetting.OptionsMenuSetting_C.GetListItemObject
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UOptionsMenuSetting_C::GetListItemObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.GetListItemObject");

	UOptionsMenuSetting_C_GetListItemObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsMenuSetting_C::UpdateVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateVisuals");

	UOptionsMenuSetting_C_UpdateVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.ConvertSettingsValueToSliderValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          SettingsValue                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SliderValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuSetting_C::ConvertSettingsValueToSliderValue(float SettingsValue, float* SliderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.ConvertSettingsValueToSliderValue");

	UOptionsMenuSetting_C_ConvertSettingsValueToSliderValue_Params params;
	params.SettingsValue = SettingsValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SliderValue != nullptr)
		*SliderValue = params.SliderValue;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateSliderTexture
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuSetting_C::UpdateSliderTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateSliderTexture");

	UOptionsMenuSetting_C_UpdateSliderTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.ConvertSliderValueToSettingsValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          SliderValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SettingsValue                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuSetting_C::ConvertSliderValueToSettingsValue(float SliderValue, float* SettingsValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.ConvertSliderValueToSettingsValue");

	UOptionsMenuSetting_C_ConvertSliderValueToSettingsValue_Params params;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SettingsValue != nullptr)
		*SettingsValue = params.SettingsValue;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.SetDarkTabStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuSetting_C::SetDarkTabStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.SetDarkTabStyle");

	UOptionsMenuSetting_C_SetDarkTabStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.SetSliderTextRenderScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale_Normalized               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuSetting_C::SetSliderTextRenderScale(float Scale_Normalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.SetSliderTextRenderScale");

	UOptionsMenuSetting_C_SetSliderTextRenderScale_Params params;
	params.Scale_Normalized = Scale_Normalized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.Hide Tooltip
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuSetting_C::Hide_Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.Hide Tooltip");

	UOptionsMenuSetting_C_Hide_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.Show Tooltip
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuSetting_C::Show_Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.Show Tooltip");

	UOptionsMenuSetting_C_Show_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.OnGetMenuContent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UOptionsMenuSetting_C::OnGetMenuContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.OnGetMenuContent");

	UOptionsMenuSetting_C_OnGetMenuContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.HandlePawnSet
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuSetting_C::HandlePawnSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.HandlePawnSet");

	UOptionsMenuSetting_C_HandlePawnSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateSize
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuSetting_C::UpdateSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateSize");

	UOptionsMenuSetting_C_UpdateSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UOptionsMenuSetting_C::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.BP_OnEntryReleased");

	UOptionsMenuSetting_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuSetting_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.BP_OnItemExpansionChanged");

	UOptionsMenuSetting_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuSetting_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.BP_OnItemSelectionChanged");

	UOptionsMenuSetting_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsMenuSetting_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.Construct");

	UOptionsMenuSetting_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuSetting_C::OnMouseLeave(struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.OnMouseLeave");

	UOptionsMenuSetting_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuSetting_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.OnMouseEnter");

	UOptionsMenuSetting_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuSetting_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent");

	UOptionsMenuSetting_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuSetting_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.OnListItemObjectSet");

	UOptionsMenuSetting_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuAnchorSettingDescription_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuSetting_C::BndEvt__MenuAnchorSettingDescription_K2Node_ComponentBoundEvent(bool bIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuAnchorSettingDescription_K2Node_ComponentBoundEvent");

	UOptionsMenuSetting_C_BndEvt__MenuAnchorSettingDescription_K2Node_ComponentBoundEvent_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenuSetting_C::BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent");

	UOptionsMenuSetting_C_BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateSetting
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonTextBlock*        TooltipTextBlock               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenuSetting_C::UpdateSetting(class UCommonTextBlock* TooltipTextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateSetting");

	UOptionsMenuSetting_C_UpdateSetting_Params params;
	params.TooltipTextBlock = TooltipTextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.CenterOnWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuSetting_C::CenterOnWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.CenterOnWidget");

	UOptionsMenuSetting_C_CenterOnWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UOptionsMenuSetting_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.Refresh");

	UOptionsMenuSetting_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuSetting.OptionsMenuSetting_C.ExecuteUbergraph_OptionsMenuSetting
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuSetting_C::ExecuteUbergraph_OptionsMenuSetting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuSetting.OptionsMenuSetting_C.ExecuteUbergraph_OptionsMenuSetting");

	UOptionsMenuSetting_C_ExecuteUbergraph_OptionsMenuSetting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
