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


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OpenPlayOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin1                                        (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaMatchmakingOptionsDisplay_v2_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_Select_Default                                            (IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlay_C::OpenPlayOptions(class UCommonUIContext* CallFunc_GetContext_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin1, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsBROnly_ReturnValue, class UAthenaMatchmakingOptionsDisplay_v2_C* CallFunc_Create_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, const struct FMargin& K2Node_Select_Default, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "OpenPlayOptions");

	Params::UAthenaMatchmakingPlay_C_OpenPlayOptions_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_MakeStruct_Margin1 = K2Node_MakeStruct_Margin1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.FillChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDirection                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRotator_C*            K2Node_DynamicCast_AsAthena_Rotator                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingPlay_C::FillChange(bool bDirection, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "FillChange");

	Params::UAthenaMatchmakingPlay_C_FillChange_Params Parms;
	Parms.bDirection = bDirection;
	Parms.K2Node_DynamicCast_AsAthena_Rotator = K2Node_DynamicCast_AsAthena_Rotator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDirection                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRotator_C*            K2Node_DynamicCast_AsAthena_Rotator                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingPlay_C::PlaylistChange(bool bDirection, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "PlaylistChange");

	Params::UAthenaMatchmakingPlay_C_PlaylistChange_Params Parms;
	Parms.bDirection = bDirection;
	Parms.K2Node_DynamicCast_AsAthena_Rotator = K2Node_DynamicCast_AsAthena_Rotator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.SetAutoFillOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)

void UAthenaMatchmakingPlay_C::SetAutoFillOptions(TArray<class FText>& K2Node_MakeArray_Array)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "SetAutoFillOptions");

	Params::UAthenaMatchmakingPlay_C_SetAutoFillOptions_Params Parms;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlay_C::BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMatchmakingPlay_C_BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingPlay_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "Construct");

	Params::UAthenaMatchmakingPlay_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlay_C::BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature(int32 Value)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature");

	Params::UAthenaMatchmakingPlay_C_BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlay_C::BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature(int32 Value)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature");

	Params::UAthenaMatchmakingPlay_C_BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__FillSquadButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlay_C::BndEvt__FillSquadButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "BndEvt__FillSquadButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMatchmakingPlay_C_BndEvt__FillSquadButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.NewModeSelected_Display
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingPlay_C::NewModeSelected_Display()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "NewModeSelected_Display");

	Params::UAthenaMatchmakingPlay_C_NewModeSelected_Display_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnAvailablePlaylistsUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingPlay_C::OnAvailablePlaylistsUpdated()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "OnAvailablePlaylistsUpdated");

	Params::UAthenaMatchmakingPlay_C_OnAvailablePlaylistsUpdated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnPlayButtonUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bShowPlayButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingPlay_C::OnPlayButtonUpdated(bool bShowPlayButton)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "OnPlayButtonUpdated");

	Params::UAthenaMatchmakingPlay_C_OnPlayButtonUpdated_Params Parms;
	Parms.bShowPlayButton = bShowPlayButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__TouchButtonChangeGameMode_K2Node_ComponentBoundEvent_95_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlay_C::BndEvt__TouchButtonChangeGameMode_K2Node_ComponentBoundEvent_95_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "BndEvt__TouchButtonChangeGameMode_K2Node_ComponentBoundEvent_95_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMatchmakingPlay_C_BndEvt__TouchButtonChangeGameMode_K2Node_ComponentBoundEvent_95_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlay_C::BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMatchmakingPlay_C_BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnSetPlayButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        PlayButtonText                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaMatchmakingPlay_C::OnSetPlayButtonText(class FText& PlayButtonText)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "OnSetPlayButtonText");

	Params::UAthenaMatchmakingPlay_C_OnSetPlayButtonText_Params Parms;
	Parms.PlayButtonText = PlayButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnSetCancelButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        CancelButtonText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaMatchmakingPlay_C::OnSetCancelButtonText(class FText& CancelButtonText)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "OnSetCancelButtonText");

	Params::UAthenaMatchmakingPlay_C_OnSetCancelButtonText_Params Parms;
	Parms.CancelButtonText = CancelButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.ExecuteUbergraph_AthenaMatchmakingPlay
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_CancelButtonText                                    (ConstParm)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Value1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bShowPlayButton                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBROnly_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRotator_C*            K2Node_DynamicCast_AsAthena_Rotator                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess12                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaRotator_C*            K2Node_DynamicCast_AsAthena_Rotator1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess123                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin1                                        (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBROnly_ReturnValue12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_PlayButtonText                                      (ConstParm)

void UAthenaMatchmakingPlay_C::ExecuteUbergraph_AthenaMatchmakingPlay(int32 EntryPoint, class FText K2Node_Event_CancelButtonText, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsUsingGamepad_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, class UCommonButton* K2Node_ComponentBoundEvent_Button123, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button1, bool K2Node_DynamicCast_bSuccess1, int32 K2Node_ComponentBoundEvent_Value1, int32 K2Node_ComponentBoundEvent_Value, class UCommonButton* K2Node_ComponentBoundEvent_Button12, bool CallFunc_Conv_IntToBool_ReturnValue, bool K2Node_Event_bShowPlayButton, enum class ESlateVisibility Temp_byte_Variable12, bool CallFunc_IsBROnly_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1, enum class ESlateVisibility K2Node_Select_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsBROnly_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable123, bool Temp_bool_Variable1, enum class ESlateVisibility K2Node_Select1_Default, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess12, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator1, bool K2Node_DynamicCast_bSuccess123, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue1, const struct FMargin& K2Node_MakeStruct_Margin1, bool CallFunc_IsBROnly_ReturnValue12, class FText K2Node_Event_PlayButtonText)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "ExecuteUbergraph_AthenaMatchmakingPlay");

	Params::UAthenaMatchmakingPlay_C_ExecuteUbergraph_AthenaMatchmakingPlay_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_CancelButtonText = K2Node_Event_CancelButtonText;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_ComponentBoundEvent_Button123 = K2Node_ComponentBoundEvent_Button123;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button1 = K2Node_DynamicCast_AsIcon_Text_Button1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_ComponentBoundEvent_Value1 = K2Node_ComponentBoundEvent_Value1;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_ComponentBoundEvent_Button12 = K2Node_ComponentBoundEvent_Button12;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.K2Node_Event_bShowPlayButton = K2Node_Event_bShowPlayButton;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_IsBROnly_ReturnValue1 = CallFunc_IsBROnly_ReturnValue1;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_DynamicCast_AsAthena_Rotator = K2Node_DynamicCast_AsAthena_Rotator;
	Parms.K2Node_DynamicCast_bSuccess12 = K2Node_DynamicCast_bSuccess12;
	Parms.K2Node_DynamicCast_AsAthena_Rotator1 = K2Node_DynamicCast_AsAthena_Rotator1;
	Parms.K2Node_DynamicCast_bSuccess123 = K2Node_DynamicCast_bSuccess123;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue = CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue1 = CallFunc_SlotAsVerticalBoxSlot_ReturnValue1;
	Parms.K2Node_MakeStruct_Margin1 = K2Node_MakeStruct_Margin1;
	Parms.CallFunc_IsBROnly_ReturnValue12 = CallFunc_IsBROnly_ReturnValue12;
	Parms.K2Node_Event_PlayButtonText = K2Node_Event_PlayButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistsUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingPlay_C::PlaylistsUpdated__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlay_C", "PlaylistsUpdated__DelegateSignature");

	Params::UAthenaMatchmakingPlay_C_PlaylistsUpdated__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
