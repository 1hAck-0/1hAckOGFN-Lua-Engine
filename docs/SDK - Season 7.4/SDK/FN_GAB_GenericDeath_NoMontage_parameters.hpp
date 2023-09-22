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

// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.OnCancelled
struct UGAB_GenericDeath_NoMontage_C_OnCancelled_Params
{
};

// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.OnInterrupted
struct UGAB_GenericDeath_NoMontage_C_OnInterrupted_Params
{
};

// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.OnBlendOut
struct UGAB_GenericDeath_NoMontage_C_OnBlendOut_Params
{
};

// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.OnCompleted
struct UGAB_GenericDeath_NoMontage_C_OnCompleted_Params
{
};

// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.K2_OnEndAbility
struct UGAB_GenericDeath_NoMontage_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.K2_ActivateAbilityFromEvent
struct UGAB_GenericDeath_NoMontage_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.ExecuteUbergraph_GAB_GenericDeath_NoMontage
struct UGAB_GenericDeath_NoMontage_C_ExecuteUbergraph_GAB_GenericDeath_NoMontage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
