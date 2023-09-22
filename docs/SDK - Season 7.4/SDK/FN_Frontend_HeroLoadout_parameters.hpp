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

// Function Frontend_HeroLoadout.Frontend_HeroLoadout_C.ReceiveBeginPlay
struct AFrontend_HeroLoadout_C_ReceiveBeginPlay_Params
{
};

// Function Frontend_HeroLoadout.Frontend_HeroLoadout_C.HeroLoadout - Transfrom
struct AFrontend_HeroLoadout_C_HeroLoadout___Transfrom_Params
{
};

// Function Frontend_HeroLoadout.Frontend_HeroLoadout_C.Command - Transform
struct AFrontend_HeroLoadout_C_Command___Transform_Params
{
};

// Function Frontend_HeroLoadout.Frontend_HeroLoadout_C.HandleFrontendCameraChanged
struct AFrontend_HeroLoadout_C_HandleFrontendCameraChanged_Params
{
	EFrontEndCamera                                    NewCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFrontEndCamera                                    OldCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Frontend_HeroLoadout.Frontend_HeroLoadout_C.ExecuteUbergraph_Frontend_HeroLoadout
struct AFrontend_HeroLoadout_C_ExecuteUbergraph_Frontend_HeroLoadout_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
