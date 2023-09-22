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


// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.SimplifiedAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaGamePhaseChangeWidget_C::SimplifiedAnimationFinished()
{
	static auto Func = Class->GetFunction("AthenaGamePhaseChangeWidget_C", "SimplifiedAnimationFinished");

	Params::UAthenaGamePhaseChangeWidget_C_SimplifiedAnimationFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.PlayIntroAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaGamePhaseStep    Step                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaGamePhaseChangeWidget_C::PlayIntroAnimation(enum class EAthenaGamePhaseStep Step, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetEndTime_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UWidgetAnimation* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaGamePhaseChangeWidget_C", "PlayIntroAnimation");

	Params::UAthenaGamePhaseChangeWidget_C_PlayIntroAnimation_Params Parms;
	Parms.Step = Step;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.PlayGamePhaseAlertSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaGamePhaseStep    Step                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaGamePhaseStep    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable12                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable123                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable1234                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable12345                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable123456                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable1234567                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable12345678                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable123456789                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable12345678910                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaGamePhaseChangeWidget_C::PlayGamePhaseAlertSound(enum class EAthenaGamePhaseStep Step, enum class EAthenaGamePhaseStep Temp_byte_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable1, class USoundBase* Temp_object_Variable12, class USoundBase* Temp_object_Variable123, class USoundBase* Temp_object_Variable1234, class USoundBase* Temp_object_Variable12345, class USoundBase* Temp_object_Variable123456, class USoundBase* Temp_object_Variable1234567, class USoundBase* Temp_object_Variable12345678, class USoundBase* Temp_object_Variable123456789, class USoundBase* Temp_object_Variable12345678910, class USoundBase* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaGamePhaseChangeWidget_C", "PlayGamePhaseAlertSound");

	Params::UAthenaGamePhaseChangeWidget_C_PlayGamePhaseAlertSound_Params Parms;
	Parms.Step = Step;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable12 = Temp_object_Variable12;
	Parms.Temp_object_Variable123 = Temp_object_Variable123;
	Parms.Temp_object_Variable1234 = Temp_object_Variable1234;
	Parms.Temp_object_Variable12345 = Temp_object_Variable12345;
	Parms.Temp_object_Variable123456 = Temp_object_Variable123456;
	Parms.Temp_object_Variable1234567 = Temp_object_Variable1234567;
	Parms.Temp_object_Variable12345678 = Temp_object_Variable12345678;
	Parms.Temp_object_Variable123456789 = Temp_object_Variable123456789;
	Parms.Temp_object_Variable12345678910 = Temp_object_Variable12345678910;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.UpdateMessaging
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// enum class EAthenaGamePhaseStep    Step                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        MESSAGE                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        TimeText                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaGamePhaseChangeWidget_C::UpdateMessaging(enum class EAthenaGamePhaseStep Step, class FText& MESSAGE, class FText& TimeText)
{
	static auto Func = Class->GetFunction("AthenaGamePhaseChangeWidget_C", "UpdateMessaging");

	Params::UAthenaGamePhaseChangeWidget_C_UpdateMessaging_Params Parms;
	Parms.Step = Step;
	Parms.MESSAGE = MESSAGE;
	Parms.TimeText = TimeText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaGamePhaseChangeWidget_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto Func = Class->GetFunction("AthenaGamePhaseChangeWidget_C", "OnAnimationFinished");

	Params::UAthenaGamePhaseChangeWidget_C_OnAnimationFinished_Params Parms;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.GamePhaseStepChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EAthenaGamePhaseStep    Step                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaGamePhaseChangeWidget_C::GamePhaseStepChanged(enum class EAthenaGamePhaseStep Step)
{
	static auto Func = Class->GetFunction("AthenaGamePhaseChangeWidget_C", "GamePhaseStepChanged");

	Params::UAthenaGamePhaseChangeWidget_C_GamePhaseStepChanged_Params Parms;
	Parms.Step = Step;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaGamePhaseChangeWidget_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaGamePhaseChangeWidget_C", "Construct");

	Params::UAthenaGamePhaseChangeWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.ExecuteUbergraph_AthenaGamePhaseChangeWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable12                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable123                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable1234                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable12345                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable123456                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable1234567                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable12345678                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAthenaGamePhaseStep    K2Node_Event_Step1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Message                                             (ConstParm)
// class FText                        K2Node_Event_TimeText                                            (ConstParm)
// class UWidgetAnimation*            K2Node_Event_Animation                                           (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaGamePhaseStep    K2Node_Event_Step                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable123456789                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable12345678910                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaGamePhaseStep    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaGamePhaseChangeWidget_C::ExecuteUbergraph_AthenaGamePhaseChangeWidget(int32 EntryPoint, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable1, class UMaterialInterface* Temp_object_Variable12, class UMaterialInterface* Temp_object_Variable123, class UMaterialInterface* Temp_object_Variable1234, class UMaterialInterface* Temp_object_Variable12345, class UMaterialInterface* Temp_object_Variable123456, class UMaterialInterface* Temp_object_Variable1234567, class UMaterialInterface* Temp_object_Variable12345678, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool K2Node_SwitchEnum_CmpSuccess, enum class EAthenaGamePhaseStep K2Node_Event_Step1, class FText K2Node_Event_Message, class FText K2Node_Event_TimeText, class UWidgetAnimation* K2Node_Event_Animation, enum class EAthenaGamePhaseStep K2Node_Event_Step, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_SwitchEnum1_CmpSuccess, class UMaterialInterface* Temp_object_Variable123456789, class UMaterialInterface* Temp_object_Variable12345678910, enum class EAthenaGamePhaseStep Temp_byte_Variable, class UMaterialInterface* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaGamePhaseChangeWidget_C", "ExecuteUbergraph_AthenaGamePhaseChangeWidget");

	Params::UAthenaGamePhaseChangeWidget_C_ExecuteUbergraph_AthenaGamePhaseChangeWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable12 = Temp_object_Variable12;
	Parms.Temp_object_Variable123 = Temp_object_Variable123;
	Parms.Temp_object_Variable1234 = Temp_object_Variable1234;
	Parms.Temp_object_Variable12345 = Temp_object_Variable12345;
	Parms.Temp_object_Variable123456 = Temp_object_Variable123456;
	Parms.Temp_object_Variable1234567 = Temp_object_Variable1234567;
	Parms.Temp_object_Variable12345678 = Temp_object_Variable12345678;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_Step1 = K2Node_Event_Step1;
	Parms.K2Node_Event_Message = K2Node_Event_Message;
	Parms.K2Node_Event_TimeText = K2Node_Event_TimeText;
	Parms.K2Node_Event_Animation = K2Node_Event_Animation;
	Parms.K2Node_Event_Step = K2Node_Event_Step;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.Temp_object_Variable123456789 = Temp_object_Variable123456789;
	Parms.Temp_object_Variable12345678910 = Temp_object_Variable12345678910;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
