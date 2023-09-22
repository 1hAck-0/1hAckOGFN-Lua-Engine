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


// Function MusicManager.MusicManager_C.ResetMusicBools
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::ResetMusicBools()
{
	static auto Func = Class->GetFunction("MusicManager_C", "ResetMusicBools");

	Params::AMusicManager_C_ResetMusicBools_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerFrontEnd*K2Node_DynamicCast_AsFort_Player_Controller_Front_End            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerControllerFrontEnd*K2Node_DynamicCast_AsFort_Player_Controller_Front_End1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMusicManager_C::UserConstructionScript(class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End1, bool K2Node_DynamicCast_bSuccess1)
{
	static auto Func = Class->GetFunction("MusicManager_C", "UserConstructionScript");

	Params::AMusicManager_C_UserConstructionScript_Params Parms;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Front_End = K2Node_DynamicCast_AsFort_Player_Controller_Front_End;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Front_End1 = K2Node_DynamicCast_AsFort_Player_Controller_Front_End1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Gameplay Music Fader__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AMusicManager_C::Gameplay_Music_Fader__FinishedFunc()
{
	static auto Func = Class->GetFunction("MusicManager_C", "Gameplay Music Fader__FinishedFunc");

	Params::AMusicManager_C_Gameplay_Music_Fader__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Gameplay Music Fader__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AMusicManager_C::Gameplay_Music_Fader__UpdateFunc()
{
	static auto Func = Class->GetFunction("MusicManager_C", "Gameplay Music Fader__UpdateFunc");

	Params::AMusicManager_C_Gameplay_Music_Fader__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.OnDayPhaseChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortDayPhase           CurrentDayPhase                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           PreviousDayPhase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAtCreation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMusicManager_C::OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static auto Func = Class->GetFunction("MusicManager_C", "OnDayPhaseChanged");

	Params::AMusicManager_C_OnDayPhaseChanged_Params Parms;
	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.OnUpdateMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::OnUpdateMusic()
{
	static auto Func = Class->GetFunction("MusicManager_C", "OnUpdateMusic");

	Params::AMusicManager_C_OnUpdateMusic_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.PlayAmbientMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::PlayAmbientMusic()
{
	static auto Func = Class->GetFunction("MusicManager_C", "PlayAmbientMusic");

	Params::AMusicManager_C_PlayAmbientMusic_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMusicManager_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("MusicManager_C", "ReceiveBeginPlay");

	Params::AMusicManager_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.On Music Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::On_Music_Tick()
{
	static auto Func = Class->GetFunction("MusicManager_C", "On Music Tick");

	Params::AMusicManager_C_On_Music_Tick_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.PlayStinger
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMusicAsset*             NewMusicAsset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::PlayStinger(class UFortMusicAsset* NewMusicAsset)
{
	static auto Func = Class->GetFunction("MusicManager_C", "PlayStinger");

	Params::AMusicManager_C_PlayStinger_Params Parms;
	Parms.NewMusicAsset = NewMusicAsset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Music Fade In
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Music_Fade_In(float Time)
{
	static auto Func = Class->GetFunction("MusicManager_C", "Music Fade In");

	Params::AMusicManager_C_Music_Fade_In_Params Parms;
	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Music Fade Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Music_Fade_Out(float Time)
{
	static auto Func = Class->GetFunction("MusicManager_C", "Music Fade Out");

	Params::AMusicManager_C_Music_Fade_Out_Params Parms;
	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.On Stinger Completed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMusicVoice*             Voice                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::On_Stinger_Completed(class UFortMusicVoice* Voice)
{
	static auto Func = Class->GetFunction("MusicManager_C", "On Stinger Completed");

	Params::AMusicManager_C_On_Stinger_Completed_Params Parms;
	Parms.Voice = Voice;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.ExecuteUbergraph_MusicManager
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicManagerBank*       CallFunc_GetMusicBank_ReturnValue                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicAsset*             CallFunc_GetAssetFromCombatIntensity_ReturnValue                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicVoice*             CallFunc_ChangePrimaryMusic_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue123                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue1234                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue12345                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue12                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue123                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue123                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMusicManagerBank*       CallFunc_GetMusicBank_ReturnValue1                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicAsset*             CallFunc_GetAssetFromCombatIntensity_ReturnValue1                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicVoice*             CallFunc_ChangePrimaryMusic_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue123456                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue1234                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue1234                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicManagerBank*       CallFunc_GetMusicBank_ReturnValue12                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicAsset*             CallFunc_GetAssetFromCombatIntensity_ReturnValue12               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicVoice*             CallFunc_ChangePrimaryMusic_ReturnValue12                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue1234567                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue12345678                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue12345                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue123456789               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue12345                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue123456                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue123456                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue123                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue1234                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue12345                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDayPhase           K2Node_Event_CurrentDayPhase                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           K2Node_Event_PreviousDayPhase                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bAtCreation                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEventHeatPercent_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue1234567                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEventHeatPercent_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue123                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue12345678910             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearActiveEncounters_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEventHeatPercent_ReturnValue1234                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue12345678                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEventHeatPercent_ReturnValue12345                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue1234567891011           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue1234567                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue123456789                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue123                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue123                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue123                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue123                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class UFortMusicManagerBank*       CallFunc_GetMusicBank_ReturnValue123                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicManagerBank*       CallFunc_GetMusicBank_ReturnValue1234                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicAsset*             CallFunc_GetAssetFromCombatIntensity_ReturnValue123              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicVoice*             CallFunc_ChangePrimaryMusic_ReturnValue123                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicAsset*             CallFunc_GetAssetFromDayPhase_ReturnValue                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicVoice*             CallFunc_ChangePrimaryMusic_ReturnValue1234                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicAsset*             K2Node_Event_NewMusicAsset                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicVoice*             CallFunc_PlayMusicVoice_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Time1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Time                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicVoice*             K2Node_CustomEvent_Voice                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue123456                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue1234567                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue12345678                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue123                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1234                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue123                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue12345678910               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue1234567891011             (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMusicManager_C::ExecuteUbergraph_MusicManager(int32 EntryPoint, float CallFunc_GetEventHeatPercent_ReturnValue, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue12, bool CallFunc_Greater_FloatFloat_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue123, float CallFunc_GetGameTimeInSeconds_ReturnValue1234, float CallFunc_Subtract_FloatFloat_ReturnValue12, float CallFunc_GetGameTimeInSeconds_ReturnValue12345, bool CallFunc_Greater_FloatFloat_ReturnValue12, float CallFunc_Subtract_FloatFloat_ReturnValue123, bool CallFunc_Greater_FloatFloat_ReturnValue123, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue1, int32 CallFunc_Conv_ByteToInt_ReturnValue1, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue1, int32 CallFunc_MakeLiteralInt_ReturnValue1, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue123456, float CallFunc_Subtract_FloatFloat_ReturnValue1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_FloatFloat_ReturnValue1234, bool CallFunc_NotEqual_IntInt_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, int32 CallFunc_Conv_ByteToInt_ReturnValue12, int32 CallFunc_MakeLiteralInt_ReturnValue12, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue12, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue12, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue12, float CallFunc_GetGameTimeInSeconds_ReturnValue1234567, float CallFunc_GetGameTimeInSeconds_ReturnValue12345678, float CallFunc_Subtract_FloatFloat_ReturnValue12345, float CallFunc_GetGameTimeInSeconds_ReturnValue123456789, bool CallFunc_Greater_FloatFloat_ReturnValue12345, float CallFunc_Subtract_FloatFloat_ReturnValue123456, bool CallFunc_Greater_FloatFloat_ReturnValue123456, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_EqualEqual_NameName_ReturnValue12, bool CallFunc_EqualEqual_NameName_ReturnValue123, bool CallFunc_EqualEqual_NameName_ReturnValue1234, bool CallFunc_EqualEqual_NameName_ReturnValue12345, enum class EFortDayPhase K2Node_Event_CurrentDayPhase, enum class EFortDayPhase K2Node_Event_PreviousDayPhase, bool K2Node_Event_bAtCreation, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetEventHeatPercent_ReturnValue1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1234567, float CallFunc_GetEventHeatPercent_ReturnValue12, float CallFunc_GetEventHeatPercent_ReturnValue123, float CallFunc_GetGameTimeInSeconds_ReturnValue12345678910, bool CallFunc_IsNearActiveEncounters_ReturnValue, float CallFunc_GetEventHeatPercent_ReturnValue1234, bool CallFunc_Not_PreBool_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue12345678, float CallFunc_GetEventHeatPercent_ReturnValue12345, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue1234567891011, float CallFunc_Subtract_FloatFloat_ReturnValue1234567, bool CallFunc_Greater_FloatFloat_ReturnValue123456789, bool CallFunc_NotEqual_IntInt_ReturnValue12, bool CallFunc_NotEqual_IntInt_ReturnValue123, bool CallFunc_Greater_IntInt_ReturnValue12, bool CallFunc_BooleanAND_ReturnValue12, int32 CallFunc_Conv_ByteToInt_ReturnValue123, int32 CallFunc_MakeLiteralInt_ReturnValue123, bool CallFunc_Greater_IntInt_ReturnValue123, bool CallFunc_BooleanAND_ReturnValue123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue123, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue1234, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue123, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue123, class UFortMusicAsset* CallFunc_GetAssetFromDayPhase_ReturnValue, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue1234, class UFortMusicAsset* K2Node_Event_NewMusicAsset, class UFortMusicVoice* CallFunc_PlayMusicVoice_ReturnValue, float K2Node_CustomEvent_Time1, float K2Node_CustomEvent_Time, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, class UFortMusicVoice* K2Node_CustomEvent_Voice, float CallFunc_GetEventHeatPercent_ReturnValue123456, float CallFunc_GetEventHeatPercent_ReturnValue1234567, float CallFunc_GetEventHeatPercent_ReturnValue12345678, float CallFunc_Add_FloatFloat_ReturnValue12, float CallFunc_Add_FloatFloat_ReturnValue123, float CallFunc_Add_FloatFloat_ReturnValue1234, bool CallFunc_Less_FloatFloat_ReturnValue12, bool CallFunc_Less_FloatFloat_ReturnValue123, bool CallFunc_Greater_FloatFloat_ReturnValue12345678910, bool CallFunc_Greater_FloatFloat_ReturnValue1234567891011)
{
	static auto Func = Class->GetFunction("MusicManager_C", "ExecuteUbergraph_MusicManager");

	Params::AMusicManager_C_ExecuteUbergraph_MusicManager_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue = CallFunc_GetEventHeatPercent_ReturnValue;
	Parms.CallFunc_GetMusicBank_ReturnValue = CallFunc_GetMusicBank_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetAssetFromCombatIntensity_ReturnValue = CallFunc_GetAssetFromCombatIntensity_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_ChangePrimaryMusic_ReturnValue = CallFunc_ChangePrimaryMusic_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue1 = CallFunc_GetGameTimeInSeconds_ReturnValue1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue1 = CallFunc_Subtract_FloatFloat_ReturnValue1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue12 = CallFunc_GetGameTimeInSeconds_ReturnValue12;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue1 = CallFunc_Greater_FloatFloat_ReturnValue1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue123 = CallFunc_GetGameTimeInSeconds_ReturnValue123;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue1234 = CallFunc_GetGameTimeInSeconds_ReturnValue1234;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue12 = CallFunc_Subtract_FloatFloat_ReturnValue12;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue12345 = CallFunc_GetGameTimeInSeconds_ReturnValue12345;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue12 = CallFunc_Greater_FloatFloat_ReturnValue12;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue123 = CallFunc_Subtract_FloatFloat_ReturnValue123;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue123 = CallFunc_Greater_FloatFloat_ReturnValue123;
	Parms.CallFunc_GetMusicBank_ReturnValue1 = CallFunc_GetMusicBank_ReturnValue1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue1 = CallFunc_Conv_ByteToInt_ReturnValue1;
	Parms.CallFunc_GetAssetFromCombatIntensity_ReturnValue1 = CallFunc_GetAssetFromCombatIntensity_ReturnValue1;
	Parms.CallFunc_MakeLiteralInt_ReturnValue1 = CallFunc_MakeLiteralInt_ReturnValue1;
	Parms.CallFunc_ChangePrimaryMusic_ReturnValue1 = CallFunc_ChangePrimaryMusic_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue123456 = CallFunc_GetGameTimeInSeconds_ReturnValue123456;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue1234 = CallFunc_Subtract_FloatFloat_ReturnValue1234;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue1234 = CallFunc_Greater_FloatFloat_ReturnValue1234;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue1 = CallFunc_NotEqual_IntInt_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue12 = CallFunc_Conv_ByteToInt_ReturnValue12;
	Parms.CallFunc_MakeLiteralInt_ReturnValue12 = CallFunc_MakeLiteralInt_ReturnValue12;
	Parms.CallFunc_GetMusicBank_ReturnValue12 = CallFunc_GetMusicBank_ReturnValue12;
	Parms.CallFunc_GetAssetFromCombatIntensity_ReturnValue12 = CallFunc_GetAssetFromCombatIntensity_ReturnValue12;
	Parms.CallFunc_ChangePrimaryMusic_ReturnValue12 = CallFunc_ChangePrimaryMusic_ReturnValue12;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue1234567 = CallFunc_GetGameTimeInSeconds_ReturnValue1234567;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue12345678 = CallFunc_GetGameTimeInSeconds_ReturnValue12345678;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue12345 = CallFunc_Subtract_FloatFloat_ReturnValue12345;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue123456789 = CallFunc_GetGameTimeInSeconds_ReturnValue123456789;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue12345 = CallFunc_Greater_FloatFloat_ReturnValue12345;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue123456 = CallFunc_Subtract_FloatFloat_ReturnValue123456;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue123456 = CallFunc_Greater_FloatFloat_ReturnValue123456;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue1 = CallFunc_EqualEqual_NameName_ReturnValue1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue12 = CallFunc_EqualEqual_NameName_ReturnValue12;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue123 = CallFunc_EqualEqual_NameName_ReturnValue123;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue1234 = CallFunc_EqualEqual_NameName_ReturnValue1234;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue12345 = CallFunc_EqualEqual_NameName_ReturnValue12345;
	Parms.K2Node_Event_CurrentDayPhase = K2Node_Event_CurrentDayPhase;
	Parms.K2Node_Event_PreviousDayPhase = K2Node_Event_PreviousDayPhase;
	Parms.K2Node_Event_bAtCreation = K2Node_Event_bAtCreation;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue1 = CallFunc_GetEventHeatPercent_ReturnValue1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue1234567 = CallFunc_Greater_FloatFloat_ReturnValue1234567;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue12 = CallFunc_GetEventHeatPercent_ReturnValue12;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue123 = CallFunc_GetEventHeatPercent_ReturnValue123;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue12345678910 = CallFunc_GetGameTimeInSeconds_ReturnValue12345678910;
	Parms.CallFunc_IsNearActiveEncounters_ReturnValue = CallFunc_IsNearActiveEncounters_ReturnValue;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue1234 = CallFunc_GetEventHeatPercent_ReturnValue1234;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue1 = CallFunc_Less_FloatFloat_ReturnValue1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue12345678 = CallFunc_Greater_FloatFloat_ReturnValue12345678;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue12345 = CallFunc_GetEventHeatPercent_ReturnValue12345;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue1234567891011 = CallFunc_GetGameTimeInSeconds_ReturnValue1234567891011;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue1234567 = CallFunc_Subtract_FloatFloat_ReturnValue1234567;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue123456789 = CallFunc_Greater_FloatFloat_ReturnValue123456789;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue12 = CallFunc_NotEqual_IntInt_ReturnValue12;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue123 = CallFunc_NotEqual_IntInt_ReturnValue123;
	Parms.CallFunc_Greater_IntInt_ReturnValue12 = CallFunc_Greater_IntInt_ReturnValue12;
	Parms.CallFunc_BooleanAND_ReturnValue12 = CallFunc_BooleanAND_ReturnValue12;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue123 = CallFunc_Conv_ByteToInt_ReturnValue123;
	Parms.CallFunc_MakeLiteralInt_ReturnValue123 = CallFunc_MakeLiteralInt_ReturnValue123;
	Parms.CallFunc_Greater_IntInt_ReturnValue123 = CallFunc_Greater_IntInt_ReturnValue123;
	Parms.CallFunc_BooleanAND_ReturnValue123 = CallFunc_BooleanAND_ReturnValue123;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetMusicBank_ReturnValue123 = CallFunc_GetMusicBank_ReturnValue123;
	Parms.CallFunc_GetMusicBank_ReturnValue1234 = CallFunc_GetMusicBank_ReturnValue1234;
	Parms.CallFunc_GetAssetFromCombatIntensity_ReturnValue123 = CallFunc_GetAssetFromCombatIntensity_ReturnValue123;
	Parms.CallFunc_ChangePrimaryMusic_ReturnValue123 = CallFunc_ChangePrimaryMusic_ReturnValue123;
	Parms.CallFunc_GetAssetFromDayPhase_ReturnValue = CallFunc_GetAssetFromDayPhase_ReturnValue;
	Parms.CallFunc_ChangePrimaryMusic_ReturnValue1234 = CallFunc_ChangePrimaryMusic_ReturnValue1234;
	Parms.K2Node_Event_NewMusicAsset = K2Node_Event_NewMusicAsset;
	Parms.CallFunc_PlayMusicVoice_ReturnValue = CallFunc_PlayMusicVoice_ReturnValue;
	Parms.K2Node_CustomEvent_Time1 = K2Node_CustomEvent_Time1;
	Parms.K2Node_CustomEvent_Time = K2Node_CustomEvent_Time;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue1 = CallFunc_Divide_FloatFloat_ReturnValue1;
	Parms.K2Node_CustomEvent_Voice = K2Node_CustomEvent_Voice;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue123456 = CallFunc_GetEventHeatPercent_ReturnValue123456;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue1234567 = CallFunc_GetEventHeatPercent_ReturnValue1234567;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue12345678 = CallFunc_GetEventHeatPercent_ReturnValue12345678;
	Parms.CallFunc_Add_FloatFloat_ReturnValue12 = CallFunc_Add_FloatFloat_ReturnValue12;
	Parms.CallFunc_Add_FloatFloat_ReturnValue123 = CallFunc_Add_FloatFloat_ReturnValue123;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1234 = CallFunc_Add_FloatFloat_ReturnValue1234;
	Parms.CallFunc_Less_FloatFloat_ReturnValue12 = CallFunc_Less_FloatFloat_ReturnValue12;
	Parms.CallFunc_Less_FloatFloat_ReturnValue123 = CallFunc_Less_FloatFloat_ReturnValue123;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue12345678910 = CallFunc_Greater_FloatFloat_ReturnValue12345678910;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue1234567891011 = CallFunc_Greater_FloatFloat_ReturnValue1234567891011;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
