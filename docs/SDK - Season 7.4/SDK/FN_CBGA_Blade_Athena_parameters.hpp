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

// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.BlueprintGetInteractionString
struct ACBGA_Blade_Athena_C_BlueprintGetInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.SetDrawDistance
struct ACBGA_Blade_Athena_C_SetDrawDistance_Params
{
};

// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.BlueprintCanInteract
struct ACBGA_Blade_Athena_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.UserConstructionScript
struct ACBGA_Blade_Athena_C_UserConstructionScript_Params
{
};

// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.ReceiveBeginPlay
struct ACBGA_Blade_Athena_C_ReceiveBeginPlay_Params
{
};

// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.ReceiveEndPlay
struct ACBGA_Blade_Athena_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.OnPullStart
struct ACBGA_Blade_Athena_C_OnPullStart_Params
{
};

// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.OnPullAborted
struct ACBGA_Blade_Athena_C_OnPullAborted_Params
{
};

// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.ExecuteUbergraph_CBGA_Blade_Athena
struct ACBGA_Blade_Athena_C_ExecuteUbergraph_CBGA_Blade_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
