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

// Function B_Beam.B_Beam_C.UpdateBeamPosAndRot
struct AB_Beam_C_UpdateBeamPosAndRot_Params
{
	class AActor*                                      AimTarget;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SimulateOffset;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Beam.B_Beam_C.UserConstructionScript
struct AB_Beam_C_UserConstructionScript_Params
{
};

// Function B_Beam.B_Beam_C.Timeline
struct AB_Beam_C_Timeline_Params
{
};

// Function B_Beam.B_Beam_C.ReceiveBeginPlay
struct AB_Beam_C_ReceiveBeginPlay_Params
{
};

// Function B_Beam.B_Beam_C.ReceiveTick
struct AB_Beam_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Beam.B_Beam_C.Update Offset
struct AB_Beam_C_Update_Offset_Params
{
};

// Function B_Beam.B_Beam_C.CE_Trigger
struct AB_Beam_C_CE_Trigger_Params
{
};

// Function B_Beam.B_Beam_C.ExecuteUbergraph_B_Beam
struct AB_Beam_C_ExecuteUbergraph_B_Beam_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
