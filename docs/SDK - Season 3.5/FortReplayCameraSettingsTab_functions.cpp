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


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.RefreshHighQualityFXState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortReplayFXState          FX_State                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayCameraSettingsTab_C::RefreshHighQualityFXState(const struct FFortReplayFXState& FX_State, int32 CallFunc_SelectInt_ReturnValue)
{
	static auto Func = Class->GetFunction("FortReplayCameraSettingsTab_C", "RefreshHighQualityFXState");

	Params::UFortReplayCameraSettingsTab_C_RefreshHighQualityFXState_Params Parms;
	Parms.FX_State = FX_State;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.SetTPAutoFollowWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSpectatorCameraComponent*CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSpectatorCamComp_ThirdPerson*K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayCameraSettingsTab_C::SetTPAutoFollowWidget(class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue, class UFortSpectatorCamComp_ThirdPerson* K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue1)
{
	static auto Func = Class->GetFunction("FortReplayCameraSettingsTab_C", "SetTPAutoFollowWidget");

	Params::UFortReplayCameraSettingsTab_C_SetTPAutoFollowWidget_Params Parms;
	Parms.CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue = CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person = K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue1 = CallFunc_SelectInt_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.SetTPDistanceToSubjectWidget
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSpectatorCameraComponent*CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSpectatorCamComp_ThirdPerson*K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// float                              CallFunc_GetNormalizedDistance_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayCameraSettingsTab_C::SetTPDistanceToSubjectWidget(class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue, class UFortSpectatorCamComp_ThirdPerson* K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetText_ReturnValue, float CallFunc_GetNormalizedDistance_ReturnValue)
{
	static auto Func = Class->GetFunction("FortReplayCameraSettingsTab_C", "SetTPDistanceToSubjectWidget");

	Params::UFortReplayCameraSettingsTab_C_SetTPDistanceToSubjectWidget_Params Parms;
	Parms.CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue = CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person = K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetNormalizedDistance_ReturnValue = CallFunc_GetNormalizedDistance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.ResetToDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortReplayCameraSettingsTab_C::ResetToDefault()
{
	static auto Func = Class->GetFunction("FortReplayCameraSettingsTab_C", "ResetToDefault");

	Params::UFortReplayCameraSettingsTab_C_ResetToDefault_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.CenterOnTab
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortReplayCameraSettingsTab_C::CenterOnTab()
{
	static auto Func = Class->GetFunction("FortReplayCameraSettingsTab_C", "CenterOnTab");

	Params::UFortReplayCameraSettingsTab_C_CenterOnTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.OnCameraTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerSpectating*FortPlayerControllerSpectating                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESpectatorCameraType    CameraType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayCameraSettingsTab_C::OnCameraTypeChanged(class AFortPlayerControllerSpectating* FortPlayerControllerSpectating, enum class ESpectatorCameraType CameraType)
{
	static auto Func = Class->GetFunction("FortReplayCameraSettingsTab_C", "OnCameraTypeChanged");

	Params::UFortReplayCameraSettingsTab_C_OnCameraTypeChanged_Params Parms;
	Parms.FortPlayerControllerSpectating = FortPlayerControllerSpectating;
	Parms.CameraType = CameraType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.SetWidgetValues
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortReplayCameraSettingsTab_C::SetWidgetValues()
{
	static auto Func = Class->GetFunction("FortReplayCameraSettingsTab_C", "SetWidgetValues");

	Params::UFortReplayCameraSettingsTab_C_SetWidgetValues_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.InitializeWidgets
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortReplayCameraSettingsTab_C::InitializeWidgets()
{
	static auto Func = Class->GetFunction("FortReplayCameraSettingsTab_C", "InitializeWidgets");

	Params::UFortReplayCameraSettingsTab_C_InitializeWidgets_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__CameraCollision_K2Node_ComponentBoundEvent_0_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayCameraSettingsTab_C::BndEvt__CameraCollision_K2Node_ComponentBoundEvent_0_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("FortReplayCameraSettingsTab_C", "BndEvt__CameraCollision_K2Node_ComponentBoundEvent_0_Selection Changed__DelegateSignature");

	Params::UFortReplayCameraSettingsTab_C_BndEvt__CameraCollision_K2Node_ComponentBoundEvent_0_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__NamePlates_K2Node_ComponentBoundEvent_1_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayCameraSettingsTab_C::BndEvt__NamePlates_K2Node_ComponentBoundEvent_1_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("FortReplayCameraSettingsTab_C", "BndEvt__NamePlates_K2Node_ComponentBoundEvent_1_Selection Changed__DelegateSignature");

	Params::UFortReplayCameraSettingsTab_C_BndEvt__NamePlates_K2Node_ComponentBoundEvent_1_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__PlayerOutlines_K2Node_ComponentBoundEvent_2_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayCameraSettingsTab_C::BndEvt__PlayerOutlines_K2Node_ComponentBoundEvent_2_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("FortReplayCameraSettingsTab_C", "BndEvt__PlayerOutlines_K2Node_ComponentBoundEvent_2_Selection Changed__DelegateSignature");

	Params::UFortReplayCameraSettingsTab_C_BndEvt__PlayerOutlines_K2Node_ComponentBoundEvent_2_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__RelevancyZone_K2Node_ComponentBoundEvent_3_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayCameraSettingsTab_C::BndEvt__RelevancyZone_K2Node_ComponentBoundEvent_3_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("FortReplayCameraSettingsTab_C", "BndEvt__RelevancyZone_K2Node_ComponentBoundEvent_3_Selection Changed__DelegateSignature");

	Params::UFortReplayCameraSettingsTab_C_BndEvt__RelevancyZone_K2Node_ComponentBoundEvent_3_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__TPAutoFollow_K2Node_ComponentBoundEvent_4_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayCameraSettingsTab_C::BndEvt__TPAutoFollow_K2Node_ComponentBoundEvent_4_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("FortReplayCameraSettingsTab_C", "BndEvt__TPAutoFollow_K2Node_ComponentBoundEvent_4_Selection Changed__DelegateSignature");

	Params::UFortReplayCameraSettingsTab_C_BndEvt__TPAutoFollow_K2Node_ComponentBoundEvent_4_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__TPDistanceToSubject_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayCameraSettingsTab_C::BndEvt__TPDistanceToSubject_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto Func = Class->GetFunction("FortReplayCameraSettingsTab_C", "BndEvt__TPDistanceToSubject_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature");

	Params::UFortReplayCameraSettingsTab_C_BndEvt__TPDistanceToSubject_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature_Params Parms;
	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFortReplayCameraSettingsTab_C::Destruct()
{
	static auto Func = Class->GetFunction("FortReplayCameraSettingsTab_C", "Destruct");

	Params::UFortReplayCameraSettingsTab_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__DamageEffects_K2Node_ComponentBoundEvent_29_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayCameraSettingsTab_C::BndEvt__DamageEffects_K2Node_ComponentBoundEvent_29_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("FortReplayCameraSettingsTab_C", "BndEvt__DamageEffects_K2Node_ComponentBoundEvent_29_Selection Changed__DelegateSignature");

	Params::UFortReplayCameraSettingsTab_C_BndEvt__DamageEffects_K2Node_ComponentBoundEvent_29_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__HighQualityFX_K2Node_ComponentBoundEvent_10_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayCameraSettingsTab_C::BndEvt__HighQualityFX_K2Node_ComponentBoundEvent_10_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("FortReplayCameraSettingsTab_C", "BndEvt__HighQualityFX_K2Node_ComponentBoundEvent_10_Selection Changed__DelegateSignature");

	Params::UFortReplayCameraSettingsTab_C_BndEvt__HighQualityFX_K2Node_ComponentBoundEvent_10_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFortReplayCameraSettingsTab_C::Construct()
{
	static auto Func = Class->GetFunction("FortReplayCameraSettingsTab_C", "Construct");

	Params::UFortReplayCameraSettingsTab_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortReplayCameraSettingsTab_C::OnActivated()
{
	static auto Func = Class->GetFunction("FortReplayCameraSettingsTab_C", "OnActivated");

	Params::UFortReplayCameraSettingsTab_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.ExecuteUbergraph_FortReplayCameraSettingsTab
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSpectatorCameraComponent*CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSpectatorCamComp_ThirdPerson*K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSpectatorCameraComponent*CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue1         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerSpectating*K2Node_Event_FortPlayerControllerSpectating                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESpectatorCameraType    K2Node_Event_CameraType                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSpectatorCamComp_ThirdPerson*K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person1       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array12                                         (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array123                                        (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_GetNameplatesEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetOutlinesEnabled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRelevancyZoneVisible_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index123456                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index12345                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index1234                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index123                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue123                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Slider_Value                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue1234                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                K2Node_MakeArray_Array1234                                       (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_GetDamageFXEnabled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue123                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Selected_Index                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue12345                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array12345                                      (ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123                          (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayCameraSettingsTab_C::ExecuteUbergraph_FortReplayCameraSettingsTab(int32 EntryPoint, class UFortReplayContext* CallFunc_GetContext_ReturnValue, class UFortReplayContext* CallFunc_GetContext_ReturnValue1, class UFortReplayContext* CallFunc_GetContext_ReturnValue12, class UFortReplayContext* CallFunc_GetContext_ReturnValue123, bool CallFunc_IsValid_ReturnValue, class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue, class UFortSpectatorCamComp_ThirdPerson* K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person, bool K2Node_DynamicCast_bSuccess, class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue1, class AFortPlayerControllerSpectating* K2Node_Event_FortPlayerControllerSpectating, enum class ESpectatorCameraType K2Node_Event_CameraType, class UFortSpectatorCamComp_ThirdPerson* K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class FText>& K2Node_MakeArray_Array, TArray<class FText>& K2Node_MakeArray_Array1, TArray<class FText>& K2Node_MakeArray_Array12, TArray<class FText>& K2Node_MakeArray_Array123, bool CallFunc_GetNameplatesEnabled_ReturnValue, bool CallFunc_GetOutlinesEnabled_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue1, bool CallFunc_GetRelevancyZoneVisible_ReturnValue, int32 K2Node_ComponentBoundEvent_Selected_Index123456, int32 CallFunc_SelectInt_ReturnValue12, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_ComponentBoundEvent_Selected_Index12345, bool CallFunc_Greater_IntInt_ReturnValue1, int32 K2Node_ComponentBoundEvent_Selected_Index1234, bool CallFunc_Greater_IntInt_ReturnValue12, int32 K2Node_ComponentBoundEvent_Selected_Index123, bool CallFunc_Greater_IntInt_ReturnValue123, int32 K2Node_ComponentBoundEvent_Selected_Index12, float K2Node_ComponentBoundEvent_Slider_Value, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, int32 K2Node_ComponentBoundEvent_Selected_Index1, bool CallFunc_Greater_IntInt_ReturnValue1234, TArray<class FText>& K2Node_MakeArray_Array1234, bool CallFunc_GetDamageFXEnabled_ReturnValue, int32 CallFunc_SelectInt_ReturnValue123, enum class ESlateVisibility Temp_byte_Variable, int32 K2Node_ComponentBoundEvent_Selected_Index, bool CallFunc_Greater_IntInt_ReturnValue12345, enum class ESlateVisibility Temp_byte_Variable1, TArray<class FText>& K2Node_MakeArray_Array12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("FortReplayCameraSettingsTab_C", "ExecuteUbergraph_FortReplayCameraSettingsTab");

	Params::UFortReplayCameraSettingsTab_C_ExecuteUbergraph_FortReplayCameraSettingsTab_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_GetContext_ReturnValue123 = CallFunc_GetContext_ReturnValue123;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue = CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person = K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue1 = CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue1;
	Parms.K2Node_Event_FortPlayerControllerSpectating = K2Node_Event_FortPlayerControllerSpectating;
	Parms.K2Node_Event_CameraType = K2Node_Event_CameraType;
	Parms.K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person1 = K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.K2Node_MakeArray_Array12 = K2Node_MakeArray_Array12;
	Parms.K2Node_MakeArray_Array123 = K2Node_MakeArray_Array123;
	Parms.CallFunc_GetNameplatesEnabled_ReturnValue = CallFunc_GetNameplatesEnabled_ReturnValue;
	Parms.CallFunc_GetOutlinesEnabled_ReturnValue = CallFunc_GetOutlinesEnabled_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue1 = CallFunc_SelectInt_ReturnValue1;
	Parms.CallFunc_GetRelevancyZoneVisible_ReturnValue = CallFunc_GetRelevancyZoneVisible_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Selected_Index123456 = K2Node_ComponentBoundEvent_Selected_Index123456;
	Parms.CallFunc_SelectInt_ReturnValue12 = CallFunc_SelectInt_ReturnValue12;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Selected_Index12345 = K2Node_ComponentBoundEvent_Selected_Index12345;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.K2Node_ComponentBoundEvent_Selected_Index1234 = K2Node_ComponentBoundEvent_Selected_Index1234;
	Parms.CallFunc_Greater_IntInt_ReturnValue12 = CallFunc_Greater_IntInt_ReturnValue12;
	Parms.K2Node_ComponentBoundEvent_Selected_Index123 = K2Node_ComponentBoundEvent_Selected_Index123;
	Parms.CallFunc_Greater_IntInt_ReturnValue123 = CallFunc_Greater_IntInt_ReturnValue123;
	Parms.K2Node_ComponentBoundEvent_Selected_Index12 = K2Node_ComponentBoundEvent_Selected_Index12;
	Parms.K2Node_ComponentBoundEvent_Slider_Value = K2Node_ComponentBoundEvent_Slider_Value;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_ComponentBoundEvent_Selected_Index1 = K2Node_ComponentBoundEvent_Selected_Index1;
	Parms.CallFunc_Greater_IntInt_ReturnValue1234 = CallFunc_Greater_IntInt_ReturnValue1234;
	Parms.K2Node_MakeArray_Array1234 = K2Node_MakeArray_Array1234;
	Parms.CallFunc_GetDamageFXEnabled_ReturnValue = CallFunc_GetDamageFXEnabled_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue123 = CallFunc_SelectInt_ReturnValue123;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_ComponentBoundEvent_Selected_Index = K2Node_ComponentBoundEvent_Selected_Index;
	Parms.CallFunc_Greater_IntInt_ReturnValue12345 = CallFunc_Greater_IntInt_ReturnValue12345;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_MakeArray_Array12345 = K2Node_MakeArray_Array12345;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
