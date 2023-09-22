// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RewardsListEntry.RewardsListEntry_C.UpdateReward
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ERewardListEntryType> InRewardType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             InTextColor                    (BlueprintVisible, BlueprintReadOnly, Parm)

void URewardsListEntry_C::UpdateReward(TEnumAsByte<ERewardListEntryType> InRewardType, struct FSlateColor InTextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsListEntry.RewardsListEntry_C.UpdateReward");

	URewardsListEntry_C_UpdateReward_Params params;
	params.InRewardType = InRewardType;
	params.InTextColor = InTextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsListEntry.RewardsListEntry_C.SetReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ERewardListEntryType> InRewardType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               InRewardItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             InTextColor                    (BlueprintVisible, BlueprintReadOnly, Parm)

void URewardsListEntry_C::SetReward(TEnumAsByte<ERewardListEntryType> InRewardType, class UFortItem* InRewardItem, struct FSlateColor InTextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsListEntry.RewardsListEntry_C.SetReward");

	URewardsListEntry_C_SetReward_Params params;
	params.InRewardType = InRewardType;
	params.InRewardItem = InRewardItem;
	params.InTextColor = InTextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsListEntry.RewardsListEntry_C.ConfigForSchematic
// (BlueprintCallable, BlueprintEvent)

void URewardsListEntry_C::ConfigForSchematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsListEntry.RewardsListEntry_C.ConfigForSchematic");

	URewardsListEntry_C_ConfigForSchematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsListEntry.RewardsListEntry_C.ConfigForCommonRewards
// (BlueprintCallable, BlueprintEvent)

void URewardsListEntry_C::ConfigForCommonRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsListEntry.RewardsListEntry_C.ConfigForCommonRewards");

	URewardsListEntry_C_ConfigForCommonRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsListEntry.RewardsListEntry_C.ConfigForTransformKey
// (BlueprintCallable, BlueprintEvent)

void URewardsListEntry_C::ConfigForTransformKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsListEntry.RewardsListEntry_C.ConfigForTransformKey");

	URewardsListEntry_C_ConfigForTransformKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsListEntry.RewardsListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URewardsListEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsListEntry.RewardsListEntry_C.Construct");

	URewardsListEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsListEntry.RewardsListEntry_C.ConfigForPeople
// (BlueprintCallable, BlueprintEvent)

void URewardsListEntry_C::ConfigForPeople()
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsListEntry.RewardsListEntry_C.ConfigForPeople");

	URewardsListEntry_C_ConfigForPeople_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RewardsListEntry.RewardsListEntry_C.ExecuteUbergraph_RewardsListEntry
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URewardsListEntry_C::ExecuteUbergraph_RewardsListEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RewardsListEntry.RewardsListEntry_C.ExecuteUbergraph_RewardsListEntry");

	URewardsListEntry_C_ExecuteUbergraph_RewardsListEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
