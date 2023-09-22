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

// Function Frontend.FrontEnd_C.PlaySpeech
struct AFrontEnd_C_PlaySpeech_Params
{
	struct FString                                     Filename;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                SampleRate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundWave*                                  AssetFile;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Frontend.FrontEnd_C.EnableTutorial
struct AFrontEnd_C_EnableTutorial_Params
{
};

// Function Frontend.FrontEnd_C.ReceiveBeginPlay
struct AFrontEnd_C_ReceiveBeginPlay_Params
{
};

// Function Frontend.FrontEnd_C.OnMatchStarted
struct AFrontEnd_C_OnMatchStarted_Params
{
};

// Function Frontend.FrontEnd_C.ExecuteUbergraph_FrontEnd
struct AFrontEnd_C_ExecuteUbergraph_FrontEnd_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
