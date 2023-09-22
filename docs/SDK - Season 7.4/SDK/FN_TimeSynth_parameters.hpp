#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroupWithFadeOverride
struct UTimeSynthComponent_StopSoundsOnVolumeGroupWithFadeOverride_Params
{
	class UTimeSynthVolumeGroup*                       InVolumeGroup;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	ETimeSynthEventClipQuantization                    EventQuantization;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimeSynthTimeDef                           FadeTime;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroup
struct UTimeSynthComponent_StopSoundsOnVolumeGroup_Params
{
	class UTimeSynthVolumeGroup*                       InVolumeGroup;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	ETimeSynthEventClipQuantization                    EventQuantization;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TimeSynth.TimeSynthComponent.StopClipWithFadeOverride
struct UTimeSynthComponent_StopClipWithFadeOverride_Params
{
	struct FTimeSynthClipHandle                        InClipHandle;                                             // (Parm)
	ETimeSynthEventClipQuantization                    EventQuantization;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimeSynthTimeDef                           FadeTime;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function TimeSynth.TimeSynthComponent.StopClip
struct UTimeSynthComponent_StopClip_Params
{
	struct FTimeSynthClipHandle                        InClipHandle;                                             // (Parm)
	ETimeSynthEventClipQuantization                    EventQuantization;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TimeSynth.TimeSynthComponent.SetVolumeGroup
struct UTimeSynthComponent_SetVolumeGroup_Params
{
	class UTimeSynthVolumeGroup*                       InVolumeGroup;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeDb;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTimeSec;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TimeSynth.TimeSynthComponent.SetSeed
struct UTimeSynthComponent_SetSeed_Params
{
	int                                                InSeed;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TimeSynth.TimeSynthComponent.SetQuantizationSettings
struct UTimeSynthComponent_SetQuantizationSettings_Params
{
	struct FTimeSynthQuantizationSettings              InQuantizationSettings;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function TimeSynth.TimeSynthComponent.SetFilterSettings
struct UTimeSynthComponent_SetFilterSettings_Params
{
	ETimeSynthFilter                                   Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimeSynthFilterSettings                    InSettings;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TimeSynth.TimeSynthComponent.SetFilterEnabled
struct UTimeSynthComponent_SetFilterEnabled_Params
{
	ETimeSynthFilter                                   Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TimeSynth.TimeSynthComponent.SetFFTSize
struct UTimeSynthComponent_SetFFTSize_Params
{
	ETimeSynthFFTSize                                  InFFTSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerSettings
struct UTimeSynthComponent_SetEnvelopeFollowerSettings_Params
{
	struct FTimeSynthEnvelopeFollowerSettings          InSettings;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerEnabled
struct UTimeSynthComponent_SetEnvelopeFollowerEnabled_Params
{
	bool                                               bInIsEnabled;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TimeSynth.TimeSynthComponent.SetBPM
struct UTimeSynthComponent_SetBPM_Params
{
	float                                              BeatsPerMinute;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TimeSynth.TimeSynthComponent.ResetSeed
struct UTimeSynthComponent_ResetSeed_Params
{
};

// Function TimeSynth.TimeSynthComponent.PlayClip
struct UTimeSynthComponent_PlayClip_Params
{
	class UTimeSynthClip*                              InClip;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UTimeSynthVolumeGroup*                       InVolumeGroup;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimeSynthClipHandle                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TimeSynth.TimeSynthComponent.GetSpectralData
struct UTimeSynthComponent_GetSpectralData_Params
{
	TArray<struct FTimeSynthSpectralData>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function TimeSynth.TimeSynthComponent.GetEnvelopeFollowerValue
struct UTimeSynthComponent_GetEnvelopeFollowerValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TimeSynth.TimeSynthComponent.GetBPM
struct UTimeSynthComponent_GetBPM_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TimeSynth.TimeSynthComponent.AddQuantizationEventDelegate
struct UTimeSynthComponent_AddQuantizationEventDelegate_Params
{
	ETimeSynthEventQuantization                        QuantizationType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
