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

// Function DailyRewards.DailyRewards_C.IsCurrentlyRunning
struct UDailyRewards_C_IsCurrentlyRunning_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DailyRewards.DailyRewards_C.Handle Collect
struct UDailyRewards_C_Handle_Collect_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DailyRewards.DailyRewards_C.Handle Close
struct UDailyRewards_C_Handle_Close_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DailyRewards.DailyRewards_C.PopPanelWhileInGame
struct UDailyRewards_C_PopPanelWhileInGame_Params
{
};

// Function DailyRewards.DailyRewards_C.Setup Daily Rewards
struct UDailyRewards_C_Setup_Daily_Rewards_Params
{
};

// Function DailyRewards.DailyRewards_C.OnActivated
struct UDailyRewards_C_OnActivated_Params
{
};

// Function DailyRewards.DailyRewards_C.Construct
struct UDailyRewards_C_Construct_Params
{
};

// Function DailyRewards.DailyRewards_C.PreConstruct
struct UDailyRewards_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DailyRewards.DailyRewards_C.OnDeactivated
struct UDailyRewards_C_OnDeactivated_Params
{
};

// Function DailyRewards.DailyRewards_C.Destruct
struct UDailyRewards_C_Destruct_Params
{
};

// Function DailyRewards.DailyRewards_C.BndEvt__Button_Collect_K2Node_ComponentBoundEvent
struct UDailyRewards_C_BndEvt__Button_Collect_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DailyRewards.DailyRewards_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent
struct UDailyRewards_C_BndEvt__Button_Continue_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DailyRewards.DailyRewards_C.ExecuteUbergraph_DailyRewards
struct UDailyRewards_C_ExecuteUbergraph_DailyRewards_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DailyRewards.DailyRewards_C.OnDailyRewardsComplete__DelegateSignature
struct UDailyRewards_C_OnDailyRewardsComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
