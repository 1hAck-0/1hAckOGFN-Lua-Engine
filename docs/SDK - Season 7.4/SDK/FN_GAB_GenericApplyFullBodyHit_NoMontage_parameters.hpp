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

// Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.K2_CanActivateAbility
struct UGAB_GenericApplyFullBodyHit_NoMontage_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.OnCancelled_A0357285499905489D05F7AAD5DC6FEC
struct UGAB_GenericApplyFullBodyHit_NoMontage_C_OnCancelled_A0357285499905489D05F7AAD5DC6FEC_Params
{
};

// Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.OnInterrupted_A0357285499905489D05F7AAD5DC6FEC
struct UGAB_GenericApplyFullBodyHit_NoMontage_C_OnInterrupted_A0357285499905489D05F7AAD5DC6FEC_Params
{
};

// Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.OnBlendOut_A0357285499905489D05F7AAD5DC6FEC
struct UGAB_GenericApplyFullBodyHit_NoMontage_C_OnBlendOut_A0357285499905489D05F7AAD5DC6FEC_Params
{
};

// Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.OnCompleted_A0357285499905489D05F7AAD5DC6FEC
struct UGAB_GenericApplyFullBodyHit_NoMontage_C_OnCompleted_A0357285499905489D05F7AAD5DC6FEC_Params
{
};

// Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.K2_OnEndAbility
struct UGAB_GenericApplyFullBodyHit_NoMontage_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.OnHitPawn
struct UGAB_GenericApplyFullBodyHit_NoMontage_C_OnHitPawn_Params
{
	class AActor*                                      SelfActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.K2_ActivateAbilityFromEvent
struct UGAB_GenericApplyFullBodyHit_NoMontage_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAB_GenericApplyFullBodyHit_NoMontage.GAB_GenericApplyFullBodyHit_NoMontage_C.ExecuteUbergraph_GAB_GenericApplyFullBodyHit_NoMontage
struct UGAB_GenericApplyFullBodyHit_NoMontage_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit_NoMontage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
