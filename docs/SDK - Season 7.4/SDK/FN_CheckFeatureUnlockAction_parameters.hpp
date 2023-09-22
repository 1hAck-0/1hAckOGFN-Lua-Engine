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

// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.HandleFeatureUnlockClosed
struct ACheckFeatureUnlockAction_C_HandleFeatureUnlockClosed_Params
{
};

// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.IsFeatureUnlockRunning
struct ACheckFeatureUnlockAction_C_IsFeatureUnlockRunning_Params
{
	bool                                               bRunning;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.IsFrontendDailyRewardsRunning
struct ACheckFeatureUnlockAction_C_IsFrontendDailyRewardsRunning_Params
{
	bool                                               IsRunning;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.ShowFeatureUnlock
struct ACheckFeatureUnlockAction_C_ShowFeatureUnlock_Params
{
};

// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.IsFeatureUnlockAvailable
struct ACheckFeatureUnlockAction_C_IsFeatureUnlockAvailable_Params
{
	bool                                               Feature_Unlock_Available;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.IsFrontEndRewardsRunning
struct ACheckFeatureUnlockAction_C_IsFrontEndRewardsRunning_Params
{
	bool                                               bRunning;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.UserConstructionScript
struct ACheckFeatureUnlockAction_C_UserConstructionScript_Params
{
};

// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.Execute
struct ACheckFeatureUnlockAction_C_Execute_Params
{
	struct FFortScriptedActionParams                   Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.ExecuteUbergraph_CheckFeatureUnlockAction
struct ACheckFeatureUnlockAction_C_ExecuteUbergraph_CheckFeatureUnlockAction_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
