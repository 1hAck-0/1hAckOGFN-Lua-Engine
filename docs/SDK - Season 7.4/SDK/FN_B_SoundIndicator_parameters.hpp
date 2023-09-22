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

// Function B_SoundIndicator.B_SoundIndicator.CalculateFiringAngle
struct AB_SoundIndicator_CalculateFiringAngle_Params
{
	float                                              DotResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_SoundIndicator.B_SoundIndicator.GetWeaponCurve
struct AB_SoundIndicator_GetWeaponCurve_Params
{
	struct FRuntimeFloatCurve                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function B_SoundIndicator.B_SoundIndicator.UpdateEmitterStates
struct AB_SoundIndicator_UpdateEmitterStates_Params
{
};

// Function B_SoundIndicator.B_SoundIndicator.UserConstructionScript
struct AB_SoundIndicator_UserConstructionScript_Params
{
};

// Function B_SoundIndicator.B_SoundIndicator.ReceiveBeginPlay
struct AB_SoundIndicator_ReceiveBeginPlay_Params
{
};

// Function B_SoundIndicator.B_SoundIndicator.OnEffectActivated
struct AB_SoundIndicator_OnEffectActivated_Params
{
};

// Function B_SoundIndicator.B_SoundIndicator.ExecuteUbergraph_B_SoundIndicator
struct AB_SoundIndicator_ExecuteUbergraph_B_SoundIndicator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
