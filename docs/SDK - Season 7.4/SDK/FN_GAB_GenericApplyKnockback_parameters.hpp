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

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.DoesUseInstagorInsteadOfImpulseDirection
struct UGAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     OptionalObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.GetPawnFromInstigator
struct UGAB_GenericApplyKnockback_C_GetPawnFromInstigator_Params
{
	class AActor*                                      InActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerPawn*                             OutPawn;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.CalculateImpulseDirection
struct UGAB_GenericApplyKnockback_C_CalculateImpulseDirection_Params
{
	class AFortPlayerPawn*                             InPawn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_D744890E4C485F1C80B3E7864AE506FF
struct UGAB_GenericApplyKnockback_C_OnCancelled_D744890E4C485F1C80B3E7864AE506FF_Params
{
};

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_D744890E4C485F1C80B3E7864AE506FF
struct UGAB_GenericApplyKnockback_C_OnInterrupted_D744890E4C485F1C80B3E7864AE506FF_Params
{
};

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_D744890E4C485F1C80B3E7864AE506FF
struct UGAB_GenericApplyKnockback_C_OnBlendOut_D744890E4C485F1C80B3E7864AE506FF_Params
{
};

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_D744890E4C485F1C80B3E7864AE506FF
struct UGAB_GenericApplyKnockback_C_OnCompleted_D744890E4C485F1C80B3E7864AE506FF_Params
{
};

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled
struct UGAB_GenericApplyKnockback_C_OnCancelled_Params
{
};

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted
struct UGAB_GenericApplyKnockback_C_OnInterrupted_Params
{
};

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut
struct UGAB_GenericApplyKnockback_C_OnBlendOut_Params
{
};

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted
struct UGAB_GenericApplyKnockback_C_OnCompleted_Params
{
};

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_BA9188C34C234A4C47306FA73AAF0583
struct UGAB_GenericApplyKnockback_C_OnCancelled_BA9188C34C234A4C47306FA73AAF0583_Params
{
};

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_BA9188C34C234A4C47306FA73AAF0583
struct UGAB_GenericApplyKnockback_C_OnInterrupted_BA9188C34C234A4C47306FA73AAF0583_Params
{
};

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_BA9188C34C234A4C47306FA73AAF0583
struct UGAB_GenericApplyKnockback_C_OnBlendOut_BA9188C34C234A4C47306FA73AAF0583_Params
{
};

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_BA9188C34C234A4C47306FA73AAF0583
struct UGAB_GenericApplyKnockback_C_OnCompleted_BA9188C34C234A4C47306FA73AAF0583_Params
{
};

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnReachedJumpApex
struct UGAB_GenericApplyKnockback_C_OnReachedJumpApex_Params
{
};

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.SetupMontageSectionsAndOrientDirection
struct UGAB_GenericApplyKnockback_C_SetupMontageSectionsAndOrientDirection_Params
{
};

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnPawnLanded
struct UGAB_GenericApplyKnockback_C_OnPawnLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnHitPawn
struct UGAB_GenericApplyKnockback_C_OnHitPawn_Params
{
	class AActor*                                      SelfActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.K2_ActivateAbilityFromEvent
struct UGAB_GenericApplyKnockback_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.K2_OnEndAbility
struct UGAB_GenericApplyKnockback_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.DebugLine
struct UGAB_GenericApplyKnockback_C_DebugLine_Params
{
};

// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.ExecuteUbergraph_GAB_GenericApplyKnockback
struct UGAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
