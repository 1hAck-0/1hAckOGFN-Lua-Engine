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

// Function LiveStreamVoice.LiveStreamVoiceSubsystem.SetVoiceSettings
struct ULiveStreamVoiceSubsystem_SetVoiceSettings_Params
{
	struct FVoiceSettings                              InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function LiveStreamVoice.LiveStreamVoiceSubsystem.EnableLocalVoiceProcessing
struct ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LiveStreamVoice.LiveStreamVoiceSubsystem.ClearVoiceSettings
struct ULiveStreamVoiceSubsystem_ClearVoiceSettings_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
