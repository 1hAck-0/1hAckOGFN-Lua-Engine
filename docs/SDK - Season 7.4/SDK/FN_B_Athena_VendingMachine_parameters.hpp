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

// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.GetOverrideRarity
struct AB_Athena_VendingMachine_C_GetOverrideRarity_Params
{
	EFortRarity                                        Rarity;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.SetRarityColors
struct AB_Athena_VendingMachine_C_SetRarityColors_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.BlueprintGetInteractionString
struct AB_Athena_VendingMachine_C_BlueprintGetInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.UserConstructionScript
struct AB_Athena_VendingMachine_C_UserConstructionScript_Params
{
};

// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.SwitchHitch__FinishedFunc
struct AB_Athena_VendingMachine_C_SwitchHitch__FinishedFunc_Params
{
};

// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.SwitchHitch__UpdateFunc
struct AB_Athena_VendingMachine_C_SwitchHitch__UpdateFunc_Params
{
};

// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.VendWobble__FinishedFunc
struct AB_Athena_VendingMachine_C_VendWobble__FinishedFunc_Params
{
};

// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.VendWobble__UpdateFunc
struct AB_Athena_VendingMachine_C_VendWobble__UpdateFunc_Params
{
};

// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.VendWobble__Start FF Time__EventFunc
struct AB_Athena_VendingMachine_C_VendWobble__Start_FF_Time__EventFunc_Params
{
};

// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.BlueprintOnInteract
struct AB_Athena_VendingMachine_C_BlueprintOnInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.BlueprintOnBeginInteract
struct AB_Athena_VendingMachine_C_BlueprintOnBeginInteract_Params
{
};

// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.PlayVendFX
struct AB_Athena_VendingMachine_C_PlayVendFX_Params
{
};

// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.UpdateCollectorsActiveItem
struct AB_Athena_VendingMachine_C_UpdateCollectorsActiveItem_Params
{
	int                                                StartingSeedValue;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWorldItemDefinition*                    InputItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    InputTexture;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentGoal;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentCollectedAmount;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentCaptureCount;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    OutputTexture;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.PlayVendFailFX
struct AB_Athena_VendingMachine_C_PlayVendFailFX_Params
{
};

// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.OnForcedCycle
struct AB_Athena_VendingMachine_C_OnForcedCycle_Params
{
};

// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.ReceiveBeginPlay
struct AB_Athena_VendingMachine_C_ReceiveBeginPlay_Params
{
};

// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.ExecuteUbergraph_B_Athena_VendingMachine
struct AB_Athena_VendingMachine_C_ExecuteUbergraph_B_Athena_VendingMachine_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
