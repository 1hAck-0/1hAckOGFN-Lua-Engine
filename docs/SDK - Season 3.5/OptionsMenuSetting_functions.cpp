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


// Function OptionsMenuSetting.OptionsMenuSetting_C.DoesItemHaveChildren
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UOptionsMenuSetting_C::DoesItemHaveChildren()
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "DoesItemHaveChildren");

	Params::UOptionsMenuSetting_C_DoesItemHaveChildren_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.GetIndentLevel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UOptionsMenuSetting_C::GetIndentLevel()
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "GetIndentLevel");

	Params::UOptionsMenuSetting_C_GetIndentLevel_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.IsItemExpanded
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UOptionsMenuSetting_C::IsItemExpanded()
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "IsItemExpanded");

	Params::UOptionsMenuSetting_C_IsItemExpanded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.GetData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UOptionsMenuSetting_C::GetData()
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "GetData");

	Params::UOptionsMenuSetting_C_GetData_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.HandlePawnSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bRCPawn                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortRemoteControlledPawnAthena*K2Node_DynamicCast_AsFort_Remote_Controlled_Pawn_Athena          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuSetting_C::HandlePawnSet(bool bRCPawn, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AFortRemoteControlledPawnAthena* K2Node_DynamicCast_AsFort_Remote_Controlled_Pawn_Athena, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "HandlePawnSet");

	Params::UOptionsMenuSetting_C_HandlePawnSet_Params Parms;
	Parms.bRCPawn = bRCPawn;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Remote_Controlled_Pawn_Athena = K2Node_DynamicCast_AsFort_Remote_Controlled_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   LargeSize                                                        (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   SmallSize                                                        (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable1                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBROnly_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBROnly_ReturnValue12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select1_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBROnly_ReturnValue123                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBROnly_ReturnValue1234                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select12_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Select123_Default                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select1234_Default                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSetting_C::UpdateSize(const struct FVector2D& LargeSize, const struct FVector2D& SmallSize, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable1, bool Temp_bool_Variable1, bool Temp_bool_Variable12, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable123, bool CallFunc_IsBROnly_ReturnValue, bool CallFunc_IsBROnly_ReturnValue1, const struct FVector2D& K2Node_Select_Default, float Temp_float_Variable, bool CallFunc_IsBROnly_ReturnValue12, float Temp_float_Variable1, const struct FVector2D& K2Node_Select1_Default, bool CallFunc_IsBROnly_ReturnValue123, bool CallFunc_IsBROnly_ReturnValue1234, int32 K2Node_Select12_Default, bool Temp_bool_Variable1234, const struct FVector2D& K2Node_Select123_Default, float K2Node_Select1234_Default)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "UpdateSize");

	Params::UOptionsMenuSetting_C_UpdateSize_Params Parms;
	Parms.LargeSize = LargeSize;
	Parms.SmallSize = SmallSize;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_bool_Variable123 = Temp_bool_Variable123;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.CallFunc_IsBROnly_ReturnValue1 = CallFunc_IsBROnly_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_IsBROnly_ReturnValue12 = CallFunc_IsBROnly_ReturnValue12;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_IsBROnly_ReturnValue123 = CallFunc_IsBROnly_ReturnValue123;
	Parms.CallFunc_IsBROnly_ReturnValue1234 = CallFunc_IsBROnly_ReturnValue1234;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.Temp_bool_Variable1234 = Temp_bool_Variable1234;
	Parms.K2Node_Select123_Default = K2Node_Select123_Default;
	Parms.K2Node_Select1234_Default = K2Node_Select1234_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.Update Setting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonTextBlock*            Tooltip_Text_Block                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSettingValue_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            ()

void UOptionsMenuSetting_C::Update_Setting(class UCommonTextBlock* Tooltip_Text_Block, class FName CallFunc_MakeLiteralName_ReturnValue, float CallFunc_GetSettingValue_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "Update Setting");

	Params::UOptionsMenuSetting_C_Update_Setting_Params Parms;
	Parms.Tooltip_Text_Block = Tooltip_Text_Block;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetSettingValue_ReturnValue = CallFunc_GetSettingValue_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.Center on Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSetting_C::Center_on_Widget(int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "Center on Widget");

	Params::UOptionsMenuSetting_C_Center_on_Widget_Params Parms;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue1 = CallFunc_GetUINavigationManager_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.OnAcquireFromPool
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOptionsMenuSetting_C::OnAcquireFromPool()
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "OnAcquireFromPool");

	Params::UOptionsMenuSetting_C_OnAcquireFromPool_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.Private_OnExpanderArrowShiftClicked
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenuSetting_C::Private_OnExpanderArrowShiftClicked()
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "Private_OnExpanderArrowShiftClicked");

	Params::UOptionsMenuSetting_C_Private_OnExpanderArrowShiftClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.RegisterOnClicked
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 Callback                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)

void UOptionsMenuSetting_C::RegisterOnClicked(UDelegateProperty_& Callback)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "RegisterOnClicked");

	Params::UOptionsMenuSetting_C_RegisterOnClicked_Params Parms;
	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.SetExpanded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bExpanded                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuSetting_C::SetExpanded(bool bExpanded)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "SetExpanded");

	Params::UOptionsMenuSetting_C_SetExpanded_Params Parms;
	Parms.bExpanded = bExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.SetIndexInList
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InIndexInList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSetting_C::SetIndexInList(int32 InIndexInList)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "SetIndexInList");

	Params::UOptionsMenuSetting_C_SetIndexInList_Params Parms;
	Parms.InIndexInList = InIndexInList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuSetting_C::SetSelected(bool bSelected)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "SetSelected");

	Params::UOptionsMenuSetting_C_SetSelected_Params Parms;
	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.ToggleExpansion
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenuSetting_C::ToggleExpansion()
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "ToggleExpansion");

	Params::UOptionsMenuSetting_C_ToggleExpansion_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.Reset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenuSetting_C::Reset()
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "Reset");

	Params::UOptionsMenuSetting_C_Reset_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UOptionsMenuSetting_C::Construct()
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "Construct");

	Params::UOptionsMenuSetting_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuSetting_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "OnMouseLeave");

	Params::UOptionsMenuSetting_C_OnMouseLeave_Params Parms;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuSetting_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "OnMouseEnter");

	Params::UOptionsMenuSetting_C_OnMouseEnter_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenuSetting_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature");

	Params::UOptionsMenuSetting_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenuSetting_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature");

	Params::UOptionsMenuSetting_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSetting_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature");

	Params::UOptionsMenuSetting_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSetting_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature");

	Params::UOptionsMenuSetting_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_20_OnRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSetting_C::BndEvt__TextRotator_K2Node_ComponentBoundEvent_20_OnRotated__DelegateSignature(int32 Value)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "BndEvt__TextRotator_K2Node_ComponentBoundEvent_20_OnRotated__DelegateSignature");

	Params::UOptionsMenuSetting_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_20_OnRotated__DelegateSignature_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InData                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             OwningList                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSetting_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "SetData");

	Params::UOptionsMenuSetting_C_SetData_Params Parms;
	Parms.InData = InData;
	Parms.OwningList = OwningList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.OnReleaseToPool
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOptionsMenuSetting_C::OnReleaseToPool()
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "OnReleaseToPool");

	Params::UOptionsMenuSetting_C_OnReleaseToPool_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSetting_C::BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UOptionsMenuSetting_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSetting_C::BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature");

	Params::UOptionsMenuSetting_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.ExecuteUbergraph_OptionsMenuSetting
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable12                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable123                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable1234                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable12345                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable123                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_Event_Callback                                            (ConstParm, ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bExpanded                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_InIndexInList                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelected                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_MouseEvent1                                         (ConstParm)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// float                              K2Node_ComponentBoundEvent_Value12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor1                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_InData                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*             K2Node_Event_OwningList                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSettingInfo*            K2Node_DynamicCast_AsFort_Setting_Info                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select12_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select123_Default                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_GetSettingDisplayNames_ReturnValue                      (ZeroConstructor, ReferenceParm)
// bool                               Temp_bool_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select1234_Default                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12345                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select12345_Default                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            ()

void UOptionsMenuSetting_C::ExecuteUbergraph_OptionsMenuSetting(int32 EntryPoint, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable1, int32 Temp_int_Variable12, int32 Temp_int_Variable123, bool Temp_bool_Variable12, int32 Temp_int_Variable1234, int32 Temp_int_Variable12345, bool Temp_bool_Variable123, float Temp_float_Variable12, float Temp_float_Variable123, UDelegateProperty_ K2Node_Event_Callback, bool K2Node_Event_bExpanded, int32 K2Node_Event_InIndexInList, bool K2Node_Event_bSelected, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FPointerEvent& K2Node_Event_MouseEvent1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, float K2Node_ComponentBoundEvent_Value12, float K2Node_ComponentBoundEvent_Value1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor1, float CallFunc_GetValue_ReturnValue, float CallFunc_GetValue_ReturnValue1, float CallFunc_GetValue_ReturnValue12, bool CallFunc_Less_FloatFloat_ReturnValue, int32 K2Node_ComponentBoundEvent_Value, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList, float CallFunc_Conv_IntToFloat_ReturnValue, class UFortSettingInfo* K2Node_DynamicCast_AsFort_Setting_Info, bool K2Node_DynamicCast_bSuccess, int32 K2Node_Select_Default, int32 K2Node_Select1_Default, int32 K2Node_Select12_Default, float K2Node_Select123_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, int32 CallFunc_Conv_ByteToInt_ReturnValue, TArray<class FText>& CallFunc_GetSettingDisplayNames_ReturnValue, bool Temp_bool_Variable1234, float K2Node_Select1234_Default, bool Temp_bool_Variable12345, float K2Node_Select12345_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button1, float CallFunc_Multiply_FloatFloat_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "ExecuteUbergraph_OptionsMenuSetting");

	Params::UOptionsMenuSetting_C_ExecuteUbergraph_OptionsMenuSetting_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_int_Variable12 = Temp_int_Variable12;
	Parms.Temp_int_Variable123 = Temp_int_Variable123;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.Temp_int_Variable1234 = Temp_int_Variable1234;
	Parms.Temp_int_Variable12345 = Temp_int_Variable12345;
	Parms.Temp_bool_Variable123 = Temp_bool_Variable123;
	Parms.Temp_float_Variable12 = Temp_float_Variable12;
	Parms.Temp_float_Variable123 = Temp_float_Variable123;
	Parms.K2Node_Event_Callback = K2Node_Event_Callback;
	Parms.K2Node_Event_bExpanded = K2Node_Event_bExpanded;
	Parms.K2Node_Event_InIndexInList = K2Node_Event_InIndexInList;
	Parms.K2Node_Event_bSelected = K2Node_Event_bSelected;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.K2Node_Event_MouseEvent1 = K2Node_Event_MouseEvent1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_ComponentBoundEvent_Value12 = K2Node_ComponentBoundEvent_Value12;
	Parms.K2Node_ComponentBoundEvent_Value1 = K2Node_ComponentBoundEvent_Value1;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_LinearColor1 = K2Node_MakeStruct_LinearColor1;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue1 = CallFunc_GetValue_ReturnValue1;
	Parms.CallFunc_GetValue_ReturnValue12 = CallFunc_GetValue_ReturnValue12;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_Event_InData = K2Node_Event_InData;
	Parms.K2Node_Event_OwningList = K2Node_Event_OwningList;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Setting_Info = K2Node_DynamicCast_AsFort_Setting_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.K2Node_Select123_Default = K2Node_Select123_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetSettingDisplayNames_ReturnValue = CallFunc_GetSettingDisplayNames_ReturnValue;
	Parms.Temp_bool_Variable1234 = Temp_bool_Variable1234;
	Parms.K2Node_Select1234_Default = K2Node_Select1234_Default;
	Parms.Temp_bool_Variable12345 = Temp_bool_Variable12345;
	Parms.K2Node_Select12345_Default = K2Node_Select12345_Default;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuSetting.OptionsMenuSetting_C.SettingValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSetting_C::SettingValueChanged__DelegateSignature(float Slider_Value)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "SettingValueChanged__DelegateSignature");

	Params::UOptionsMenuSetting_C_SettingValueChanged__DelegateSignature_Params Parms;
	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
