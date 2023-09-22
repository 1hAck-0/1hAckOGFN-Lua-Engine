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

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.Play Audio Based on Storm Distance
struct AGCNL_OutOfStWStorm_C_Play_Audio_Based_on_Storm_Distance_Params
{
};

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.SetCameraEffects
struct AGCNL_OutOfStWStorm_C_SetCameraEffects_Params
{
};

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.GetLocationInCircleXY
struct AGCNL_OutOfStWStorm_C_GetLocationInCircleXY_Params
{
	struct FVector                                     LocationLocalSpace;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.OnRemove
struct AGCNL_OutOfStWStorm_C_OnRemove_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.OnExecute
struct AGCNL_OutOfStWStorm_C_OnExecute_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.OnActive
struct AGCNL_OutOfStWStorm_C_OnActive_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.UserConstructionScript
struct AGCNL_OutOfStWStorm_C_UserConstructionScript_Params
{
};

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.LightningTimeline__FinishedFunc
struct AGCNL_OutOfStWStorm_C_LightningTimeline__FinishedFunc_Params
{
};

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.LightningTimeline__UpdateFunc
struct AGCNL_OutOfStWStorm_C_LightningTimeline__UpdateFunc_Params
{
};

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.Timeline
struct AGCNL_OutOfStWStorm_C_Timeline_Params
{
};

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.K2_OnReset
struct AGCNL_OutOfStWStorm_C_K2_OnReset_Params
{
};

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.OnActivated
struct AGCNL_OutOfStWStorm_C_OnActivated_Params
{
	class AFortPlayerPawn*                             InStormPawn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EffectCount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.StartRandomLighningStrikes
struct AGCNL_OutOfStWStorm_C_StartRandomLighningStrikes_Params
{
};

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.Play Lightning Flash Audio
struct AGCNL_OutOfStWStorm_C_Play_Lightning_Flash_Audio_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.OnRemoved
struct AGCNL_OutOfStWStorm_C_OnRemoved_Params
{
};

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.RandomLightningFlashesRepeat
struct AGCNL_OutOfStWStorm_C_RandomLightningFlashesRepeat_Params
{
};

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.On Storm Audio
struct AGCNL_OutOfStWStorm_C_On_Storm_Audio_Params
{
};

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.Add Storm Audio
struct AGCNL_OutOfStWStorm_C_Add_Storm_Audio_Params
{
};

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.Remove Storm Audio
struct AGCNL_OutOfStWStorm_C_Remove_Storm_Audio_Params
{
};

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.Start Storm Audio Fader
struct AGCNL_OutOfStWStorm_C_Start_Storm_Audio_Fader_Params
{
};

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.ZapFX
struct AGCNL_OutOfStWStorm_C_ZapFX_Params
{
	int                                                ZapCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.Bind On Storm Audio
struct AGCNL_OutOfStWStorm_C_Bind_On_Storm_Audio_Params
{
};

// Function GCNL_OutOfStWStorm.GCNL_OutOfStWStorm_C.ExecuteUbergraph_GCNL_OutOfStWStorm
struct AGCNL_OutOfStWStorm_C_ExecuteUbergraph_GCNL_OutOfStWStorm_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
