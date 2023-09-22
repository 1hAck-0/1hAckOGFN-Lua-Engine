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


// Function TabAudioOptions.TabAudioOptions_C.FindVoiceChatDeviceIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FoundDeviceIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetVoiceChatInputDevice_ReturnValue                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabAudioOptions_C::FindVoiceChatDeviceIndex(int32* FoundDeviceIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetVoiceChatInputDevice_ReturnValue, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static auto Func = Class->GetFunction("TabAudioOptions_C", "FindVoiceChatDeviceIndex");

	Params::UTabAudioOptions_C_FindVoiceChatDeviceIndex_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetVoiceChatInputDevice_ReturnValue = CallFunc_GetVoiceChatInputDevice_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FoundDeviceIndex != nullptr)
		*FoundDeviceIndex = Parms.FoundDeviceIndex;

}


// Function TabAudioOptions.TabAudioOptions_C.GatherVoiceChatDevices
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Temp_text_Variable                                               (ConstParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetAvailableVoiceChatInputDevices_ReturnValue           (ZeroConstructor, ReferenceParm)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::GatherVoiceChatDevices(class FText Temp_text_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class FString>& CallFunc_GetAvailableVoiceChatInputDevices_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1)
{
	static auto Func = Class->GetFunction("TabAudioOptions_C", "GatherVoiceChatDevices");

	Params::UTabAudioOptions_C_GatherVoiceChatDevices_Params Parms;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetAvailableVoiceChatInputDevices_ReturnValue = CallFunc_GetAvailableVoiceChatInputDevices_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.UpdateVoiceOptionsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable12345                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                Temp_byte_Variable123456                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPS4Platform_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsXboxPlatform_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::UpdateVoiceOptionsVisibility(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable12, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable123, enum class ESlateVisibility Temp_byte_Variable1234, enum class ESlateVisibility Temp_byte_Variable12345, enum class ESubGame Temp_byte_Variable123456, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsPS4Platform_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue1, bool CallFunc_IsXboxPlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue1, enum class ESlateVisibility K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("TabAudioOptions_C", "UpdateVoiceOptionsVisibility");

	Params::UTabAudioOptions_C_UpdateVoiceOptionsVisibility_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.Temp_byte_Variable1234 = Temp_byte_Variable1234;
	Parms.Temp_byte_Variable12345 = Temp_byte_Variable12345;
	Parms.Temp_byte_Variable123456 = Temp_byte_Variable123456;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_IsPS4Platform_ReturnValue = CallFunc_IsPS4Platform_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue1 = CallFunc_GetSubGame_ReturnValue1;
	Parms.CallFunc_IsXboxPlatform_ReturnValue = CallFunc_IsXboxPlatform_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.InitializeData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue1                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue12                           ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue123                          ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue1234                         ()
// TArray<class FText>                K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue12345                        ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue123456                       ()
// TArray<class FText>                K2Node_MakeArray_Array12                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue1234567                      ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue12345678                     ()
// TArray<class FText>                K2Node_MakeArray_Array123                                        (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue123456789                    ()
// bool                               CallFunc_ShowChatVolume_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShowQuality_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShowAllowGameVolumeWhenMinimized_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue12345678910                  ()
// TArray<class FText>                K2Node_MakeArray_Array1234                                       (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue1234567891011                ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue123456789101112              ()
// TArray<class FText>                K2Node_MakeArray_Array12345                                      (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue12345678910111213            ()

void UTabAudioOptions_C::InitializeData(class FText CallFunc_MakeLiteralText_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText CallFunc_MakeLiteralText_ReturnValue12, class FText CallFunc_MakeLiteralText_ReturnValue123, class FText CallFunc_MakeLiteralText_ReturnValue1234, TArray<class FText>& K2Node_MakeArray_Array1, class FText CallFunc_MakeLiteralText_ReturnValue12345, class FText CallFunc_MakeLiteralText_ReturnValue123456, TArray<class FText>& K2Node_MakeArray_Array12, class FText CallFunc_MakeLiteralText_ReturnValue1234567, class FText CallFunc_MakeLiteralText_ReturnValue12345678, TArray<class FText>& K2Node_MakeArray_Array123, class FText CallFunc_MakeLiteralText_ReturnValue123456789, bool CallFunc_ShowChatVolume_ReturnValue, bool CallFunc_ShowQuality_ReturnValue, bool CallFunc_ShowAllowGameVolumeWhenMinimized_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue12345678910, TArray<class FText>& K2Node_MakeArray_Array1234, class FText CallFunc_MakeLiteralText_ReturnValue1234567891011, class FText CallFunc_MakeLiteralText_ReturnValue123456789101112, TArray<class FText>& K2Node_MakeArray_Array12345, class FText CallFunc_MakeLiteralText_ReturnValue12345678910111213)
{
	static auto Func = Class->GetFunction("TabAudioOptions_C", "InitializeData");

	Params::UTabAudioOptions_C_InitializeData_Params Parms;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeLiteralText_ReturnValue1 = CallFunc_MakeLiteralText_ReturnValue1;
	Parms.CallFunc_MakeLiteralText_ReturnValue12 = CallFunc_MakeLiteralText_ReturnValue12;
	Parms.CallFunc_MakeLiteralText_ReturnValue123 = CallFunc_MakeLiteralText_ReturnValue123;
	Parms.CallFunc_MakeLiteralText_ReturnValue1234 = CallFunc_MakeLiteralText_ReturnValue1234;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_MakeLiteralText_ReturnValue12345 = CallFunc_MakeLiteralText_ReturnValue12345;
	Parms.CallFunc_MakeLiteralText_ReturnValue123456 = CallFunc_MakeLiteralText_ReturnValue123456;
	Parms.K2Node_MakeArray_Array12 = K2Node_MakeArray_Array12;
	Parms.CallFunc_MakeLiteralText_ReturnValue1234567 = CallFunc_MakeLiteralText_ReturnValue1234567;
	Parms.CallFunc_MakeLiteralText_ReturnValue12345678 = CallFunc_MakeLiteralText_ReturnValue12345678;
	Parms.K2Node_MakeArray_Array123 = K2Node_MakeArray_Array123;
	Parms.CallFunc_MakeLiteralText_ReturnValue123456789 = CallFunc_MakeLiteralText_ReturnValue123456789;
	Parms.CallFunc_ShowChatVolume_ReturnValue = CallFunc_ShowChatVolume_ReturnValue;
	Parms.CallFunc_ShowQuality_ReturnValue = CallFunc_ShowQuality_ReturnValue;
	Parms.CallFunc_ShowAllowGameVolumeWhenMinimized_ReturnValue = CallFunc_ShowAllowGameVolumeWhenMinimized_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue12345678910 = CallFunc_MakeLiteralText_ReturnValue12345678910;
	Parms.K2Node_MakeArray_Array1234 = K2Node_MakeArray_Array1234;
	Parms.CallFunc_MakeLiteralText_ReturnValue1234567891011 = CallFunc_MakeLiteralText_ReturnValue1234567891011;
	Parms.CallFunc_MakeLiteralText_ReturnValue123456789101112 = CallFunc_MakeLiteralText_ReturnValue123456789101112;
	Parms.K2Node_MakeArray_Array12345 = K2Node_MakeArray_Array12345;
	Parms.CallFunc_MakeLiteralText_ReturnValue12345678910111213 = CallFunc_MakeLiteralText_ReturnValue12345678910111213;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.Update Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable12                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable123                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable1234                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable12345                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable123456                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1234567                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// bool                               CallFunc_GetAllowGameVolumeWhenMinimized_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCinematicsVolume_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue1                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue12                           ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue123                          ()
// bool                               CallFunc_IsConsolePlatform_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FindVoiceChatDeviceIndex_FoundDeviceIndex               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// bool                               CallFunc_GetVoiceChat3DEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetVoiceChatPTTEnabled_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select12_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVoiceChatEnabled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select123_Default                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuality_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue1234                         ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue12345                        ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue123456                       ()
// bool                               Temp_bool_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSubtitlesEnabled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select1234_Default                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChatVolumeValue_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDialogVolumeValue_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSoundFXVolumeValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMusicVolumeValue_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue1234567                      ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue12345678                     ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue123456789                    ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue12345678910                  ()

void UTabAudioOptions_C::Update_Data(int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable, bool Temp_bool_Variable1, int32 Temp_int_Variable12, int32 Temp_int_Variable123, bool Temp_bool_Variable12, int32 Temp_int_Variable1234, int32 Temp_int_Variable12345, bool Temp_bool_Variable123, int32 Temp_int_Variable123456, int32 Temp_int_Variable1234567, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_GetAllowGameVolumeWhenMinimized_ReturnValue, float CallFunc_GetCinematicsVolume_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText CallFunc_MakeLiteralText_ReturnValue12, class FText CallFunc_MakeLiteralText_ReturnValue123, bool CallFunc_IsConsolePlatform_ReturnValue, int32 CallFunc_FindVoiceChatDeviceIndex_FoundDeviceIndex, class FText K2Node_Select_Default, bool CallFunc_GetVoiceChat3DEnabled_ReturnValue, bool CallFunc_GetVoiceChatPTTEnabled_ReturnValue, int32 K2Node_Select1_Default, int32 K2Node_Select12_Default, bool CallFunc_GetVoiceChatEnabled_ReturnValue, int32 K2Node_Select123_Default, int32 CallFunc_GetQuality_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1234, class FText CallFunc_MakeLiteralText_ReturnValue12345, class FText CallFunc_MakeLiteralText_ReturnValue123456, bool Temp_bool_Variable1234, bool CallFunc_GetSubtitlesEnabled_ReturnValue, int32 K2Node_Select1234_Default, int32 CallFunc_Conv_BoolToInt_ReturnValue, float CallFunc_GetChatVolumeValue_ReturnValue, float CallFunc_GetDialogVolumeValue_ReturnValue, float CallFunc_GetSoundFXVolumeValue_ReturnValue, float CallFunc_GetMusicVolumeValue_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1234567, class FText CallFunc_MakeLiteralText_ReturnValue12345678, class FText CallFunc_MakeLiteralText_ReturnValue123456789, class FText CallFunc_MakeLiteralText_ReturnValue12345678910)
{
	static auto Func = Class->GetFunction("TabAudioOptions_C", "Update Data");

	Params::UTabAudioOptions_C_Update_Data_Params Parms;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_int_Variable12 = Temp_int_Variable12;
	Parms.Temp_int_Variable123 = Temp_int_Variable123;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.Temp_int_Variable1234 = Temp_int_Variable1234;
	Parms.Temp_int_Variable12345 = Temp_int_Variable12345;
	Parms.Temp_bool_Variable123 = Temp_bool_Variable123;
	Parms.Temp_int_Variable123456 = Temp_int_Variable123456;
	Parms.Temp_int_Variable1234567 = Temp_int_Variable1234567;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetAllowGameVolumeWhenMinimized_ReturnValue = CallFunc_GetAllowGameVolumeWhenMinimized_ReturnValue;
	Parms.CallFunc_GetCinematicsVolume_ReturnValue = CallFunc_GetCinematicsVolume_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue1 = CallFunc_MakeLiteralText_ReturnValue1;
	Parms.CallFunc_MakeLiteralText_ReturnValue12 = CallFunc_MakeLiteralText_ReturnValue12;
	Parms.CallFunc_MakeLiteralText_ReturnValue123 = CallFunc_MakeLiteralText_ReturnValue123;
	Parms.CallFunc_IsConsolePlatform_ReturnValue = CallFunc_IsConsolePlatform_ReturnValue;
	Parms.CallFunc_FindVoiceChatDeviceIndex_FoundDeviceIndex = CallFunc_FindVoiceChatDeviceIndex_FoundDeviceIndex;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetVoiceChat3DEnabled_ReturnValue = CallFunc_GetVoiceChat3DEnabled_ReturnValue;
	Parms.CallFunc_GetVoiceChatPTTEnabled_ReturnValue = CallFunc_GetVoiceChatPTTEnabled_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.CallFunc_GetVoiceChatEnabled_ReturnValue = CallFunc_GetVoiceChatEnabled_ReturnValue;
	Parms.K2Node_Select123_Default = K2Node_Select123_Default;
	Parms.CallFunc_GetQuality_ReturnValue = CallFunc_GetQuality_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue1234 = CallFunc_MakeLiteralText_ReturnValue1234;
	Parms.CallFunc_MakeLiteralText_ReturnValue12345 = CallFunc_MakeLiteralText_ReturnValue12345;
	Parms.CallFunc_MakeLiteralText_ReturnValue123456 = CallFunc_MakeLiteralText_ReturnValue123456;
	Parms.Temp_bool_Variable1234 = Temp_bool_Variable1234;
	Parms.CallFunc_GetSubtitlesEnabled_ReturnValue = CallFunc_GetSubtitlesEnabled_ReturnValue;
	Parms.K2Node_Select1234_Default = K2Node_Select1234_Default;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_GetChatVolumeValue_ReturnValue = CallFunc_GetChatVolumeValue_ReturnValue;
	Parms.CallFunc_GetDialogVolumeValue_ReturnValue = CallFunc_GetDialogVolumeValue_ReturnValue;
	Parms.CallFunc_GetSoundFXVolumeValue_ReturnValue = CallFunc_GetSoundFXVolumeValue_ReturnValue;
	Parms.CallFunc_GetMusicVolumeValue_ReturnValue = CallFunc_GetMusicVolumeValue_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue1234567 = CallFunc_MakeLiteralText_ReturnValue1234567;
	Parms.CallFunc_MakeLiteralText_ReturnValue12345678 = CallFunc_MakeLiteralText_ReturnValue12345678;
	Parms.CallFunc_MakeLiteralText_ReturnValue123456789 = CallFunc_MakeLiteralText_ReturnValue123456789;
	Parms.CallFunc_MakeLiteralText_ReturnValue12345678910 = CallFunc_MakeLiteralText_ReturnValue12345678910;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTabAudioOptions_C::Construct()
{
	static auto Func = Class->GetFunction("TabAudioOptions_C", "Construct");

	Params::UTabAudioOptions_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabAudioOptions_C::UpdateOptionsTab()
{
	static auto Func = Class->GetFunction("TabAudioOptions_C", "UpdateOptionsTab");

	Params::UTabAudioOptions_C_UpdateOptionsTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.BndEvt__SoundFXVolume_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::BndEvt__SoundFXVolume_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto Func = Class->GetFunction("TabAudioOptions_C", "BndEvt__SoundFXVolume_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature");

	Params::UTabAudioOptions_C_BndEvt__SoundFXVolume_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature_Params Parms;
	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.BndEvt__MusicVolume_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::BndEvt__MusicVolume_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto Func = Class->GetFunction("TabAudioOptions_C", "BndEvt__MusicVolume_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature");

	Params::UTabAudioOptions_C_BndEvt__MusicVolume_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature_Params Parms;
	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.BndEvt__DialogVolume_K2Node_ComponentBoundEvent_11_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::BndEvt__DialogVolume_K2Node_ComponentBoundEvent_11_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto Func = Class->GetFunction("TabAudioOptions_C", "BndEvt__DialogVolume_K2Node_ComponentBoundEvent_11_SliderChanged__DelegateSignature");

	Params::UTabAudioOptions_C_BndEvt__DialogVolume_K2Node_ComponentBoundEvent_11_SliderChanged__DelegateSignature_Params Parms;
	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.BndEvt__ChatVolume_K2Node_ComponentBoundEvent_15_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::BndEvt__ChatVolume_K2Node_ComponentBoundEvent_15_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto Func = Class->GetFunction("TabAudioOptions_C", "BndEvt__ChatVolume_K2Node_ComponentBoundEvent_15_SliderChanged__DelegateSignature");

	Params::UTabAudioOptions_C_BndEvt__ChatVolume_K2Node_ComponentBoundEvent_15_SliderChanged__DelegateSignature_Params Parms;
	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabAudioOptions_C::CenterOnTab()
{
	static auto Func = Class->GetFunction("TabAudioOptions_C", "CenterOnTab");

	Params::UTabAudioOptions_C_CenterOnTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.BndEvt__Subtitles_K2Node_ComponentBoundEvent_45_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::BndEvt__Subtitles_K2Node_ComponentBoundEvent_45_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabAudioOptions_C", "BndEvt__Subtitles_K2Node_ComponentBoundEvent_45_Selection Changed__DelegateSignature");

	Params::UTabAudioOptions_C_BndEvt__Subtitles_K2Node_ComponentBoundEvent_45_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.BndEvt__Quality_K2Node_ComponentBoundEvent_43_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::BndEvt__Quality_K2Node_ComponentBoundEvent_43_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabAudioOptions_C", "BndEvt__Quality_K2Node_ComponentBoundEvent_43_Selection Changed__DelegateSignature");

	Params::UTabAudioOptions_C_BndEvt__Quality_K2Node_ComponentBoundEvent_43_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.BndEvt__VoiceChatEnable_K2Node_ComponentBoundEvent_18_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::BndEvt__VoiceChatEnable_K2Node_ComponentBoundEvent_18_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabAudioOptions_C", "BndEvt__VoiceChatEnable_K2Node_ComponentBoundEvent_18_Selection Changed__DelegateSignature");

	Params::UTabAudioOptions_C_BndEvt__VoiceChatEnable_K2Node_ComponentBoundEvent_18_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.BndEvt__VoiceChatPushToTalk_K2Node_ComponentBoundEvent_36_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::BndEvt__VoiceChatPushToTalk_K2Node_ComponentBoundEvent_36_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabAudioOptions_C", "BndEvt__VoiceChatPushToTalk_K2Node_ComponentBoundEvent_36_Selection Changed__DelegateSignature");

	Params::UTabAudioOptions_C_BndEvt__VoiceChatPushToTalk_K2Node_ComponentBoundEvent_36_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.BndEvt__VoiceChat3DEnable_K2Node_ComponentBoundEvent_22_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::BndEvt__VoiceChat3DEnable_K2Node_ComponentBoundEvent_22_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabAudioOptions_C", "BndEvt__VoiceChat3DEnable_K2Node_ComponentBoundEvent_22_Selection Changed__DelegateSignature");

	Params::UTabAudioOptions_C_BndEvt__VoiceChat3DEnable_K2Node_ComponentBoundEvent_22_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.BndEvt__VoiceChatDevice_K2Node_ComponentBoundEvent_175_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::BndEvt__VoiceChatDevice_K2Node_ComponentBoundEvent_175_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabAudioOptions_C", "BndEvt__VoiceChatDevice_K2Node_ComponentBoundEvent_175_Selection Changed__DelegateSignature");

	Params::UTabAudioOptions_C_BndEvt__VoiceChatDevice_K2Node_ComponentBoundEvent_175_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.BndEvt__CinematicsVolume_K2Node_ComponentBoundEvent_42_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::BndEvt__CinematicsVolume_K2Node_ComponentBoundEvent_42_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto Func = Class->GetFunction("TabAudioOptions_C", "BndEvt__CinematicsVolume_K2Node_ComponentBoundEvent_42_SliderChanged__DelegateSignature");

	Params::UTabAudioOptions_C_BndEvt__CinematicsVolume_K2Node_ComponentBoundEvent_42_SliderChanged__DelegateSignature_Params Parms;
	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.BndEvt__AllowGameVolumeWhenMinimized_K2Node_ComponentBoundEvent_30_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::BndEvt__AllowGameVolumeWhenMinimized_K2Node_ComponentBoundEvent_30_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabAudioOptions_C", "BndEvt__AllowGameVolumeWhenMinimized_K2Node_ComponentBoundEvent_30_Selection Changed__DelegateSignature");

	Params::UTabAudioOptions_C_BndEvt__AllowGameVolumeWhenMinimized_K2Node_ComponentBoundEvent_30_Selection_Changed__DelegateSignature_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAudioOptions.TabAudioOptions_C.ExecuteUbergraph_TabAudioOptions
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Selected_Index                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_Slider_Value1234                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Slider_Value123                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Slider_Value12                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Slider_Value1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Selected_Index123456                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index12345                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Selected_Index1234                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index123                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue123                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue1234                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Slider_Value                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAudioOptions_C::ExecuteUbergraph_TabAudioOptions(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_Selected_Index, bool CallFunc_Conv_IntToBool_ReturnValue, float K2Node_ComponentBoundEvent_Slider_Value1234, float K2Node_ComponentBoundEvent_Slider_Value123, float K2Node_ComponentBoundEvent_Slider_Value12, float K2Node_ComponentBoundEvent_Slider_Value1, int32 K2Node_ComponentBoundEvent_Selected_Index123456, bool CallFunc_Conv_IntToBool_ReturnValue1, int32 K2Node_ComponentBoundEvent_Selected_Index12345, int32 K2Node_ComponentBoundEvent_Selected_Index1234, bool CallFunc_Conv_IntToBool_ReturnValue12, int32 K2Node_ComponentBoundEvent_Selected_Index123, bool CallFunc_Conv_IntToBool_ReturnValue123, int32 K2Node_ComponentBoundEvent_Selected_Index12, bool CallFunc_Conv_IntToBool_ReturnValue1234, int32 K2Node_ComponentBoundEvent_Selected_Index1, class FText CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_TextToString_ReturnValue, float K2Node_ComponentBoundEvent_Slider_Value)
{
	static auto Func = Class->GetFunction("TabAudioOptions_C", "ExecuteUbergraph_TabAudioOptions");

	Params::UTabAudioOptions_C_ExecuteUbergraph_TabAudioOptions_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Selected_Index = K2Node_ComponentBoundEvent_Selected_Index;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Slider_Value1234 = K2Node_ComponentBoundEvent_Slider_Value1234;
	Parms.K2Node_ComponentBoundEvent_Slider_Value123 = K2Node_ComponentBoundEvent_Slider_Value123;
	Parms.K2Node_ComponentBoundEvent_Slider_Value12 = K2Node_ComponentBoundEvent_Slider_Value12;
	Parms.K2Node_ComponentBoundEvent_Slider_Value1 = K2Node_ComponentBoundEvent_Slider_Value1;
	Parms.K2Node_ComponentBoundEvent_Selected_Index123456 = K2Node_ComponentBoundEvent_Selected_Index123456;
	Parms.CallFunc_Conv_IntToBool_ReturnValue1 = CallFunc_Conv_IntToBool_ReturnValue1;
	Parms.K2Node_ComponentBoundEvent_Selected_Index12345 = K2Node_ComponentBoundEvent_Selected_Index12345;
	Parms.K2Node_ComponentBoundEvent_Selected_Index1234 = K2Node_ComponentBoundEvent_Selected_Index1234;
	Parms.CallFunc_Conv_IntToBool_ReturnValue12 = CallFunc_Conv_IntToBool_ReturnValue12;
	Parms.K2Node_ComponentBoundEvent_Selected_Index123 = K2Node_ComponentBoundEvent_Selected_Index123;
	Parms.CallFunc_Conv_IntToBool_ReturnValue123 = CallFunc_Conv_IntToBool_ReturnValue123;
	Parms.K2Node_ComponentBoundEvent_Selected_Index12 = K2Node_ComponentBoundEvent_Selected_Index12;
	Parms.CallFunc_Conv_IntToBool_ReturnValue1234 = CallFunc_Conv_IntToBool_ReturnValue1234;
	Parms.K2Node_ComponentBoundEvent_Selected_Index1 = K2Node_ComponentBoundEvent_Selected_Index1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Slider_Value = K2Node_ComponentBoundEvent_Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
