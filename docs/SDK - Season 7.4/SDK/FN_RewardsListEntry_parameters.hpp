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

// Function RewardsListEntry.RewardsListEntry_C.UpdateReward
struct URewardsListEntry_C_UpdateReward_Params
{
	TEnumAsByte<ERewardListEntryType>                  InRewardType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 InTextColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RewardsListEntry.RewardsListEntry_C.SetReward
struct URewardsListEntry_C_SetReward_Params
{
	TEnumAsByte<ERewardListEntryType>                  InRewardType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   InRewardItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 InTextColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RewardsListEntry.RewardsListEntry_C.ConfigForSchematic
struct URewardsListEntry_C_ConfigForSchematic_Params
{
};

// Function RewardsListEntry.RewardsListEntry_C.ConfigForCommonRewards
struct URewardsListEntry_C_ConfigForCommonRewards_Params
{
};

// Function RewardsListEntry.RewardsListEntry_C.ConfigForTransformKey
struct URewardsListEntry_C_ConfigForTransformKey_Params
{
};

// Function RewardsListEntry.RewardsListEntry_C.Construct
struct URewardsListEntry_C_Construct_Params
{
};

// Function RewardsListEntry.RewardsListEntry_C.ConfigForPeople
struct URewardsListEntry_C_ConfigForPeople_Params
{
};

// Function RewardsListEntry.RewardsListEntry_C.ExecuteUbergraph_RewardsListEntry
struct URewardsListEntry_C_ExecuteUbergraph_RewardsListEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
