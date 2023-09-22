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


// Function InputReflector.InputReflector_C.OnButtonAdded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UCommonButton*               AddedButton                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCommonInputActionHandlerDataData                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UInputReflector_C::OnButtonAdded(class UCommonButton* AddedButton, struct FCommonInputActionHandlerData& Data)
{
	static auto Func = Class->GetFunction("InputReflector_C", "OnButtonAdded");

	Params::UInputReflector_C_OnButtonAdded_Params Parms;
	Parms.AddedButton = AddedButton;
	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputReflector.InputReflector_C.ExecuteUbergraph_InputReflector
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_Event_AddedButton                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCommonInputActionHandlerDataK2Node_Event_Data                                                (ConstParm, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInputReflector_C::ExecuteUbergraph_InputReflector(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool K2Node_SwitchEnum_CmpSuccess, class UCommonButton* K2Node_Event_AddedButton, const struct FCommonInputActionHandlerData& K2Node_Event_Data, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState1, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason1, bool K2Node_SwitchEnum1_CmpSuccess, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("InputReflector_C", "ExecuteUbergraph_InputReflector");

	Params::UInputReflector_C_ExecuteUbergraph_InputReflector_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_AddedButton = K2Node_Event_AddedButton;
	Parms.K2Node_Event_Data = K2Node_Event_Data;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_GetFeatureState_OutFeatureState1 = CallFunc_GetFeatureState_OutFeatureState1;
	Parms.CallFunc_GetFeatureState_OutReason1 = CallFunc_GetFeatureState_OutReason1;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
