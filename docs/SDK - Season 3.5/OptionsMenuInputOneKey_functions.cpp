#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.DoesItemHaveChildren
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UOptionsMenuInputOneKey_C::DoesItemHaveChildren()
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "DoesItemHaveChildren");

	Params::UOptionsMenuInputOneKey_C_DoesItemHaveChildren_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.GetIndentLevel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UOptionsMenuInputOneKey_C::GetIndentLevel()
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "GetIndentLevel");

	Params::UOptionsMenuInputOneKey_C_GetIndentLevel_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.IsItemExpanded
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UOptionsMenuInputOneKey_C::IsItemExpanded()
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "IsItemExpanded");

	Params::UOptionsMenuInputOneKey_C_IsItemExpanded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.GetData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UOptionsMenuInputOneKey_C::GetData()
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "GetData");

	Params::UOptionsMenuInputOneKey_C_GetData_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.SetClearButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuInputOneKey_C::SetClearButtonVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "SetClearButtonVisibility");

	Params::UOptionsMenuInputOneKey_C_SetClearButtonVisibility_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply UOptionsMenuInputOneKey_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "OnFocusReceived");

	Params::UOptionsMenuInputOneKey_C_OnFocusReceived_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.Center on Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuInputOneKey_C::Center_on_Widget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "Center on Widget");

	Params::UOptionsMenuInputOneKey_C_Center_on_Widget_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.SetExpanded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bExpanded                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuInputOneKey_C::SetExpanded(bool bExpanded)
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "SetExpanded");

	Params::UOptionsMenuInputOneKey_C_SetExpanded_Params Parms;
	Parms.bExpanded = bExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.SetIndexInList
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InIndexInList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuInputOneKey_C::SetIndexInList(int32 InIndexInList)
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "SetIndexInList");

	Params::UOptionsMenuInputOneKey_C_SetIndexInList_Params Parms;
	Parms.InIndexInList = InIndexInList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuInputOneKey_C::SetSelected(bool bSelected)
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "SetSelected");

	Params::UOptionsMenuInputOneKey_C_SetSelected_Params Parms;
	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.ToggleExpansion
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenuInputOneKey_C::ToggleExpansion()
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "ToggleExpansion");

	Params::UOptionsMenuInputOneKey_C_ToggleExpansion_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.Reset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenuInputOneKey_C::Reset()
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "Reset");

	Params::UOptionsMenuInputOneKey_C_Reset_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InData                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             OwningList                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuInputOneKey_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "SetData");

	Params::UOptionsMenuInputOneKey_C_SetData_Params Parms;
	Parms.InData = InData;
	Parms.OwningList = OwningList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuInputOneKey_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "OnMouseLeave");

	Params::UOptionsMenuInputOneKey_C_OnMouseLeave_Params Parms;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuInputOneKey_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "OnMouseEnter");

	Params::UOptionsMenuInputOneKey_C_OnMouseEnter_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_226_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuInputOneKey_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_226_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_226_CommonButtonClicked__DelegateSignature");

	Params::UOptionsMenuInputOneKey_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_226_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.BndEvt__GamepadKeyButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuInputOneKey_C::BndEvt__GamepadKeyButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "BndEvt__GamepadKeyButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature");

	Params::UOptionsMenuInputOneKey_C_BndEvt__GamepadKeyButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.RegisterOnClicked
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 Callback                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)

void UOptionsMenuInputOneKey_C::RegisterOnClicked(UDelegateProperty_& Callback)
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "RegisterOnClicked");

	Params::UOptionsMenuInputOneKey_C_RegisterOnClicked_Params Parms;
	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.Private_OnExpanderArrowShiftClicked
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenuInputOneKey_C::Private_OnExpanderArrowShiftClicked()
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "Private_OnExpanderArrowShiftClicked");

	Params::UOptionsMenuInputOneKey_C_Private_OnExpanderArrowShiftClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnReleaseToPool
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOptionsMenuInputOneKey_C::OnReleaseToPool()
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "OnReleaseToPool");

	Params::UOptionsMenuInputOneKey_C_OnReleaseToPool_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnAcquireFromPool
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOptionsMenuInputOneKey_C::OnAcquireFromPool()
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "OnAcquireFromPool");

	Params::UOptionsMenuInputOneKey_C_OnAcquireFromPool_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.ExecuteUbergraph_OptionsMenuInputOneKey
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_InData                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             K2Node_Event_OwningList                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortOptionsMenuInputData*   K2Node_DynamicCast_AsFort_Options_Menu_Input_Data                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               K2Node_Event_bSelected                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// int32                              K2Node_Event_InIndexInList                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bExpanded                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent1                                         (ConstParm)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_Event_Callback                                            (ConstParm, ZeroConstructor, NoDestructor)

void UOptionsMenuInputOneKey_C::ExecuteUbergraph_OptionsMenuInputOneKey(int32 EntryPoint, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList, class UFortOptionsMenuInputData* K2Node_DynamicCast_AsFort_Options_Menu_Input_Data, bool K2Node_DynamicCast_bSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool K2Node_Event_bSelected, class FText CallFunc_Format_ReturnValue, int32 K2Node_Event_InIndexInList, bool K2Node_Event_bExpanded, const struct FPointerEvent& K2Node_Event_MouseEvent1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, UDelegateProperty_ K2Node_Event_Callback)
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "ExecuteUbergraph_OptionsMenuInputOneKey");

	Params::UOptionsMenuInputOneKey_C_ExecuteUbergraph_OptionsMenuInputOneKey_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InData = K2Node_Event_InData;
	Parms.K2Node_Event_OwningList = K2Node_Event_OwningList;
	Parms.K2Node_DynamicCast_AsFort_Options_Menu_Input_Data = K2Node_DynamicCast_AsFort_Options_Menu_Input_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Event_bSelected = K2Node_Event_bSelected;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Event_InIndexInList = K2Node_Event_InIndexInList;
	Parms.K2Node_Event_bExpanded = K2Node_Event_bExpanded;
	Parms.K2Node_Event_MouseEvent1 = K2Node_Event_MouseEvent1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_Callback = K2Node_Event_Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.UnbindClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number_in_List                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsMenuInputOneKey_C*   Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuInputOneKey_C::UnbindClicked__DelegateSignature(int32 Number_in_List, class UOptionsMenuInputOneKey_C* Widget)
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "UnbindClicked__DelegateSignature");

	Params::UOptionsMenuInputOneKey_C_UnbindClicked__DelegateSignature_Params Parms;
	Parms.Number_in_List = Number_in_List;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.Input Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number_in_List                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Primary_Button                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuInputOneKey_C::Input_Clicked__DelegateSignature(int32 Number_in_List, bool Is_Primary_Button)
{
	static auto Func = Class->GetFunction("OptionsMenuInputOneKey_C", "Input Clicked__DelegateSignature");

	Params::UOptionsMenuInputOneKey_C_Input_Clicked__DelegateSignature_Params Parms;
	Parms.Number_in_List = Number_in_List;
	Parms.Is_Primary_Button = Is_Primary_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
