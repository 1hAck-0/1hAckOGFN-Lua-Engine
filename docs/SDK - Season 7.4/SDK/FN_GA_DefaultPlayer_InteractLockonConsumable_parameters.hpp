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

// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.StopCameraShakes
struct UGA_DefaultPlayer_InteractLockonConsumable_C_StopCameraShakes_Params
{
};

// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.InitializePawnAndControllerRot
struct UGA_DefaultPlayer_InteractLockonConsumable_C_InitializePawnAndControllerRot_Params
{
	class AFortPlayerPawn*                             PawnAthena;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInitialized;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.StartPullAnimation
struct UGA_DefaultPlayer_InteractLockonConsumable_C_StartPullAnimation_Params
{
};

// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.EndInteractSearch
struct UGA_DefaultPlayer_InteractLockonConsumable_C_EndInteractSearch_Params
{
};

// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.StartInteractSearch
struct UGA_DefaultPlayer_InteractLockonConsumable_C_StartInteractSearch_Params
{
};

// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.K2_OnEndAbility
struct UGA_DefaultPlayer_InteractLockonConsumable_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.Completed
struct UGA_DefaultPlayer_InteractLockonConsumable_C_Completed_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.Cancelled
struct UGA_DefaultPlayer_InteractLockonConsumable_C_Cancelled_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.Triggered
struct UGA_DefaultPlayer_InteractLockonConsumable_C_Triggered_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.InterpolateToPosition
struct UGA_DefaultPlayer_InteractLockonConsumable_C_InterpolateToPosition_Params
{
};

// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.StartCameraTransition
struct UGA_DefaultPlayer_InteractLockonConsumable_C_StartCameraTransition_Params
{
};

// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.TimeoutAndDie
struct UGA_DefaultPlayer_InteractLockonConsumable_C_TimeoutAndDie_Params
{
};

// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.K2_ActivateAbility
struct UGA_DefaultPlayer_InteractLockonConsumable_C_K2_ActivateAbility_Params
{
};

// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.ForceNetUpdate
struct UGA_DefaultPlayer_InteractLockonConsumable_C_ForceNetUpdate_Params
{
};

// Function GA_DefaultPlayer_InteractLockonConsumable.GA_DefaultPlayer_InteractLockonConsumable_C.ExecuteUbergraph_GA_DefaultPlayer_InteractLockonConsumable
struct UGA_DefaultPlayer_InteractLockonConsumable_C_ExecuteUbergraph_GA_DefaultPlayer_InteractLockonConsumable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
