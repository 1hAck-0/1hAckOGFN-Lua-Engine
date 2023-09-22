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


// Function FortReplayTransport.FortReplayTransport_C.ResetFocusToPlayPauseIfNeeded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortReplayTransport_C::ResetFocusToPlayPauseIfNeeded(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "ResetFocusToPlayPauseIfNeeded");

	Params::UFortReplayTransport_C_ResetFocusToPlayPauseIfNeeded_Params Parms;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.SetButtonsAllowedFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bFocusAllowed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FocusAllowed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortReplayTransport_C::SetButtonsAllowedFocus(bool bFocusAllowed, bool* FocusAllowed)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "SetButtonsAllowedFocus");

	Params::UFortReplayTransport_C_SetButtonsAllowedFocus_Params Parms;
	Parms.bFocusAllowed = bFocusAllowed;

	UObject::ProcessEvent(Func, &Parms);

	if (FocusAllowed != nullptr)
		*FocusAllowed = Parms.FocusAllowed;

}


// Function FortReplayTransport.FortReplayTransport_C.FollowedPlayerChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerSpectating*PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerState*            NewFollowedPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

void UFortReplayTransport_C::FollowedPlayerChanged(class AFortPlayerControllerSpectating* PlayerController, class AFortPlayerState* NewFollowedPlayer, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "FollowedPlayerChanged");

	Params::UFortReplayTransport_C_FollowedPlayerChanged_Params Parms;
	Parms.PlayerController = PlayerController;
	Parms.NewFollowedPlayer = NewFollowedPlayer;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.CameraTypeChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerSpectating*PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESpectatorCameraType    CameraType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// class AFortPlayerState*            CallFunc_GetFollowedPlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayTransport_C::CameraTypeChanged(class AFortPlayerControllerSpectating* PlayerController, enum class ESpectatorCameraType CameraType, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class AFortPlayerState* CallFunc_GetFollowedPlayer_ReturnValue)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "CameraTypeChanged");

	Params::UFortReplayTransport_C_CameraTypeChanged_Params Parms;
	Parms.PlayerController = PlayerController;
	Parms.CameraType = CameraType;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetFollowedPlayer_ReturnValue = CallFunc_GetFollowedPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.SetupHUDEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortReplaySpectator*        K2Node_DynamicCast_AsFort_Replay_Spectator                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortReplayTransport_C::SetupHUDEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortReplaySpectator* K2Node_DynamicCast_AsFort_Replay_Spectator, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "SetupHUDEvents");

	Params::UFortReplayTransport_C_SetupHUDEvents_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Replay_Spectator = K2Node_DynamicCast_AsFort_Replay_Spectator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.Focus Menu
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortReplayTransport_C::Focus_Menu()
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "Focus Menu");

	Params::UFortReplayTransport_C_Focus_Menu_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.Unfocus Menu
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortReplayTransport_C::Unfocus_Menu()
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "Unfocus Menu");

	Params::UFortReplayTransport_C_Unfocus_Menu_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.BindingsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetButtonsAllowedFocus_focusAllowed                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortReplayTransport_C::BindingsChanged(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_SetButtonsAllowedFocus_focusAllowed)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "BindingsChanged");

	Params::UFortReplayTransport_C_BindingsChanged_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_SetButtonsAllowedFocus_focusAllowed = CallFunc_SetButtonsAllowedFocus_focusAllowed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.Format Playback Multiplier
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Multiplier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      FormattedText                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UFortReplayTransport_C::Format_Playback_Multiplier(float Multiplier, class FString* FormattedText, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "Format Playback Multiplier");

	Params::UFortReplayTransport_C_Format_Playback_Multiplier_Params Parms;
	Parms.Multiplier = Multiplier;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FormattedText != nullptr)
		*FormattedText = Parms.FormattedText;

}


// Function FortReplayTransport.FortReplayTransport_C.SetReplayContext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortReplayContext*          InReplayContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)

void UFortReplayTransport_C::SetReplayContext(class UFortReplayContext* InReplayContext, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "SetReplayContext");

	Params::UFortReplayTransport_C_SetReplayContext_Params Parms;
	Parms.InReplayContext = InReplayContext;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__Previous_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayTransport_C::BndEvt__Previous_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "BndEvt__Previous_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature");

	Params::UFortReplayTransport_C_BndEvt__Previous_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_118_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayTransport_C::BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_118_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_118_CommonButtonClicked__DelegateSignature");

	Params::UFortReplayTransport_C_BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_118_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_258_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayTransport_C::BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_258_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_258_CommonButtonClicked__DelegateSignature");

	Params::UFortReplayTransport_C_BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_258_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__IconTextButtonReplay_0_K2Node_ComponentBoundEvent_302_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayTransport_C::BndEvt__IconTextButtonReplay_0_K2Node_ComponentBoundEvent_302_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "BndEvt__IconTextButtonReplay_0_K2Node_ComponentBoundEvent_302_CommonButtonClicked__DelegateSignature");

	Params::UFortReplayTransport_C_BndEvt__IconTextButtonReplay_0_K2Node_ComponentBoundEvent_302_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__IconTextButtonReplay_1_K2Node_ComponentBoundEvent_380_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayTransport_C::BndEvt__IconTextButtonReplay_1_K2Node_ComponentBoundEvent_380_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "BndEvt__IconTextButtonReplay_1_K2Node_ComponentBoundEvent_380_CommonButtonClicked__DelegateSignature");

	Params::UFortReplayTransport_C_BndEvt__IconTextButtonReplay_1_K2Node_ComponentBoundEvent_380_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__IconTextButtonReplay_2_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayTransport_C::BndEvt__IconTextButtonReplay_2_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "BndEvt__IconTextButtonReplay_2_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature");

	Params::UFortReplayTransport_C_BndEvt__IconTextButtonReplay_2_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__IconTextButtonReplay_3_K2Node_ComponentBoundEvent_574_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayTransport_C::BndEvt__IconTextButtonReplay_3_K2Node_ComponentBoundEvent_574_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "BndEvt__IconTextButtonReplay_3_K2Node_ComponentBoundEvent_574_CommonButtonClicked__DelegateSignature");

	Params::UFortReplayTransport_C_BndEvt__IconTextButtonReplay_3_K2Node_ComponentBoundEvent_574_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayTransport_C::BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UFortReplayTransport_C_BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.PlaybackMultiplierChangedFromNative
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewMultiplier                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayTransport_C::PlaybackMultiplierChangedFromNative(float NewMultiplier)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "PlaybackMultiplierChangedFromNative");

	Params::UFortReplayTransport_C_PlaybackMultiplierChangedFromNative_Params Parms;
	Parms.NewMultiplier = NewMultiplier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__PreviousPlayerButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayTransport_C::BndEvt__PreviousPlayerButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "BndEvt__PreviousPlayerButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UFortReplayTransport_C_BndEvt__PreviousPlayerButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__NextPlayerButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayTransport_C::BndEvt__NextPlayerButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "BndEvt__NextPlayerButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature");

	Params::UFortReplayTransport_C_BndEvt__NextPlayerButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__CurrentCamera_K2Node_ComponentBoundEvent_283_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayTransport_C::BndEvt__CurrentCamera_K2Node_ComponentBoundEvent_283_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "BndEvt__CurrentCamera_K2Node_ComponentBoundEvent_283_CommonButtonClicked__DelegateSignature");

	Params::UFortReplayTransport_C_BndEvt__CurrentCamera_K2Node_ComponentBoundEvent_283_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortReplayTransport_C::OnActivated()
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "OnActivated");

	Params::UFortReplayTransport_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortReplayTransport_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "OnDeactivated");

	Params::UFortReplayTransport_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.PauseStateChangedFromNative
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewPauseState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortReplayTransport_C::PauseStateChangedFromNative(bool bNewPauseState)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "PauseStateChangedFromNative");

	Params::UFortReplayTransport_C_PauseStateChangedFromNative_Params Parms;
	Parms.bNewPauseState = bNewPauseState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__TimelineFocusMode_K2Node_ComponentBoundEvent_103_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortReplayTransport_C::BndEvt__TimelineFocusMode_K2Node_ComponentBoundEvent_103_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "BndEvt__TimelineFocusMode_K2Node_ComponentBoundEvent_103_CommonButtonClicked__DelegateSignature");

	Params::UFortReplayTransport_C_BndEvt__TimelineFocusMode_K2Node_ComponentBoundEvent_103_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFortReplayTransport_C::Construct()
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "Construct");

	Params::UFortReplayTransport_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayTransport.FortReplayTransport_C.ExecuteUbergraph_FortReplayTransport
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable12                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable123                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue1234                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1234567891011                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12345678910                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123456789                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12345678                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1234567                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123456                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12345                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1234                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable1234                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_NewMultiplier                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Format_Playback_Multiplier_FormattedText                (ZeroConstructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button123                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerSpectating*K2Node_DynamicCast_AsFort_Player_Controller_Spectating           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button12                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerSpectating*K2Node_DynamicCast_AsFort_Player_Controller_Spectating1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerSpectating*K2Node_DynamicCast_AsFort_Player_Controller_Spectating12         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess12                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonGamepadType      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue123                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue12345                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonGamepadType      CallFunc_GetCurrentGamepadType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable12345                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        ()
// bool                               K2Node_CustomEvent_bNewPauseState                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable123456                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue1234                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerSpectating*K2Node_DynamicCast_AsFort_Player_Controller_Spectating123        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess123                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFollowedPlayerInBus_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Select12_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue1                       ()

void UFortReplayTransport_C::ExecuteUbergraph_FortReplayTransport(int32 EntryPoint, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable1, class UFortReplayContext* CallFunc_GetContext_ReturnValue, class UFortReplayContext* CallFunc_GetContext_ReturnValue1, bool Temp_bool_Variable, class USoundBase* Temp_object_Variable12, class USoundBase* Temp_object_Variable123, class UFortReplayContext* CallFunc_GetContext_ReturnValue12, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123, class UCommonInputContext* CallFunc_GetContext_ReturnValue1234, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567891011, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678910, class UCommonButton* K2Node_ComponentBoundEvent_Button123456789, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567, class UCommonButton* K2Node_ComponentBoundEvent_Button123456, class UCommonButton* K2Node_ComponentBoundEvent_Button12345, class UCommonButton* K2Node_ComponentBoundEvent_Button1234, class UTexture2D* Temp_object_Variable1234, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_CustomEvent_NewMultiplier, const class FString& CallFunc_Format_Playback_Multiplier_FormattedText, class UCommonButton* K2Node_ComponentBoundEvent_Button123, class FText CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating, bool K2Node_DynamicCast_bSuccess, class UCommonButton* K2Node_ComponentBoundEvent_Button12, class APlayerController* CallFunc_GetPlayerController_ReturnValue1, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating1, bool K2Node_DynamicCast_bSuccess1, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class APlayerController* CallFunc_GetPlayerController_ReturnValue12, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating12, bool K2Node_DynamicCast_bSuccess12, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, enum class ECommonGamepadType Temp_byte_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue123, class UCommonInputContext* CallFunc_GetContext_ReturnValue12345, enum class ECommonGamepadType CallFunc_GetCurrentGamepadType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UTexture2D* K2Node_Select_Default, class UTexture2D* Temp_object_Variable12345, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, bool K2Node_CustomEvent_bNewPauseState, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UTexture2D* Temp_object_Variable123456, class USoundBase* K2Node_Select1_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue1234, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating123, bool K2Node_DynamicCast_bSuccess123, bool CallFunc_IsFollowedPlayerInBus_ReturnValue, bool Temp_bool_Variable1, class UTexture2D* K2Node_Select12_Default, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue1)
{
	static auto Func = Class->GetFunction("FortReplayTransport_C", "ExecuteUbergraph_FortReplayTransport");

	Params::UFortReplayTransport_C_ExecuteUbergraph_FortReplayTransport_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable12 = Temp_object_Variable12;
	Parms.Temp_object_Variable123 = Temp_object_Variable123;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_GetContext_ReturnValue123 = CallFunc_GetContext_ReturnValue123;
	Parms.CallFunc_GetContext_ReturnValue1234 = CallFunc_GetContext_ReturnValue1234;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button1234567891011 = K2Node_ComponentBoundEvent_Button1234567891011;
	Parms.K2Node_ComponentBoundEvent_Button12345678910 = K2Node_ComponentBoundEvent_Button12345678910;
	Parms.K2Node_ComponentBoundEvent_Button123456789 = K2Node_ComponentBoundEvent_Button123456789;
	Parms.K2Node_ComponentBoundEvent_Button12345678 = K2Node_ComponentBoundEvent_Button12345678;
	Parms.K2Node_ComponentBoundEvent_Button1234567 = K2Node_ComponentBoundEvent_Button1234567;
	Parms.K2Node_ComponentBoundEvent_Button123456 = K2Node_ComponentBoundEvent_Button123456;
	Parms.K2Node_ComponentBoundEvent_Button12345 = K2Node_ComponentBoundEvent_Button12345;
	Parms.K2Node_ComponentBoundEvent_Button1234 = K2Node_ComponentBoundEvent_Button1234;
	Parms.Temp_object_Variable1234 = Temp_object_Variable1234;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_NewMultiplier = K2Node_CustomEvent_NewMultiplier;
	Parms.CallFunc_Format_Playback_Multiplier_FormattedText = CallFunc_Format_Playback_Multiplier_FormattedText;
	Parms.K2Node_ComponentBoundEvent_Button123 = K2Node_ComponentBoundEvent_Button123;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Spectating = K2Node_DynamicCast_AsFort_Player_Controller_Spectating;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Button12 = K2Node_ComponentBoundEvent_Button12;
	Parms.CallFunc_GetPlayerController_ReturnValue1 = CallFunc_GetPlayerController_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Spectating1 = K2Node_DynamicCast_AsFort_Player_Controller_Spectating1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.CallFunc_GetPlayerController_ReturnValue12 = CallFunc_GetPlayerController_ReturnValue12;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Spectating12 = K2Node_DynamicCast_AsFort_Player_Controller_Spectating12;
	Parms.K2Node_DynamicCast_bSuccess12 = K2Node_DynamicCast_bSuccess12;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue123 = CallFunc_GetPlayerController_ReturnValue123;
	Parms.CallFunc_GetContext_ReturnValue12345 = CallFunc_GetContext_ReturnValue12345;
	Parms.CallFunc_GetCurrentGamepadType_ReturnValue = CallFunc_GetCurrentGamepadType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_object_Variable12345 = Temp_object_Variable12345;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.K2Node_CustomEvent_bNewPauseState = K2Node_CustomEvent_bNewPauseState;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_object_Variable123456 = Temp_object_Variable123456;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayerController_ReturnValue1234 = CallFunc_GetPlayerController_ReturnValue1234;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Spectating123 = K2Node_DynamicCast_AsFort_Player_Controller_Spectating123;
	Parms.K2Node_DynamicCast_bSuccess123 = K2Node_DynamicCast_bSuccess123;
	Parms.CallFunc_IsFollowedPlayerInBus_ReturnValue = CallFunc_IsFollowedPlayerInBus_ReturnValue;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue1 = CallFunc_MakeBrushFromTexture_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
