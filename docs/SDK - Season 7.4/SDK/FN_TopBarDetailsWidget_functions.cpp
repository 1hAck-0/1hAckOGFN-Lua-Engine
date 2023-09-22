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

// Function TopBarDetailsWidget.TopBarDetailsWidget_C.GetAccountToolTipWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UTopBarDetailsWidget_C::GetAccountToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.GetAccountToolTipWidget");

	UTopBarDetailsWidget_C_GetAccountToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.UpdateCommanderLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTopBarDetailsWidget_C::UpdateCommanderLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.UpdateCommanderLevel");

	UTopBarDetailsWidget_C_UpdateCommanderLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.HandleItemCountChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*     Definition                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopBarDetailsWidget_C::HandleItemCountChanged(class UFortItemDefinition* Definition, int Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.HandleItemCountChanged");

	UTopBarDetailsWidget_C_HandleItemCountChanged_Params params;
	params.Definition = Definition;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.HandleLocalAccountInfoChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPrivateAccountInfo NewInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UTopBarDetailsWidget_C::HandleLocalAccountInfoChanged(struct FFortPrivateAccountInfo NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.HandleLocalAccountInfoChanged");

	UTopBarDetailsWidget_C_HandleLocalAccountInfoChanged_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.GetMissionRewardBadgeTooltipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UTopBarDetailsWidget_C::GetMissionRewardBadgeTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.GetMissionRewardBadgeTooltipWidget");

	UTopBarDetailsWidget_C_GetMissionRewardBadgeTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.Has Mission Reward Boost
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTopBarDetailsWidget_C::Has_Mission_Reward_Boost(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.Has Mission Reward Boost");

	UTopBarDetailsWidget_C_Has_Mission_Reward_Boost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.GetFounderBadgetTooltipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UTopBarDetailsWidget_C::GetFounderBadgetTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.GetFounderBadgetTooltipWidget");

	UTopBarDetailsWidget_C_GetFounderBadgetTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.GetMonthlyVIPBadgetTooltipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UTopBarDetailsWidget_C::GetMonthlyVIPBadgetTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.GetMonthlyVIPBadgetTooltipWidget");

	UTopBarDetailsWidget_C_GetMonthlyVIPBadgetTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.Has VIP Badge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTopBarDetailsWidget_C::Has_VIP_Badge(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.Has VIP Badge");

	UTopBarDetailsWidget_C_Has_VIP_Badge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.Has Founder Badge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTopBarDetailsWidget_C::Has_Founder_Badge(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.Has Founder Badge");

	UTopBarDetailsWidget_C_Has_Founder_Badge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.HandleRemotePlayerRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RemovedIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopBarDetailsWidget_C::HandleRemotePlayerRemoved(int RemovedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.HandleRemotePlayerRemoved");

	UTopBarDetailsWidget_C_HandleRemotePlayerRemoved_Params params;
	params.RemovedIndex = RemovedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.HandleOnTeamMemberStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     NewMemberState                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UTopBarDetailsWidget_C::HandleOnTeamMemberStateChanged(struct FFortTeamMemberInfo NewMemberState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.HandleOnTeamMemberStateChanged");

	UTopBarDetailsWidget_C_HandleOnTeamMemberStateChanged_Params params;
	params.NewMemberState = NewMemberState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.Unbind Party Delegates
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBarDetailsWidget_C::Unbind_Party_Delegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.Unbind Party Delegates");

	UTopBarDetailsWidget_C_Unbind_Party_Delegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.Bind Party Delegates
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBarDetailsWidget_C::Bind_Party_Delegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.Bind Party Delegates");

	UTopBarDetailsWidget_C_Bind_Party_Delegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.BoostExperiencePercentOfLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTopBarDetailsWidget_C::BoostExperiencePercentOfLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.BoostExperiencePercentOfLevel");

	UTopBarDetailsWidget_C_BoostExperiencePercentOfLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.RestExperencePercentOfLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTopBarDetailsWidget_C::RestExperencePercentOfLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.RestExperencePercentOfLevel");

	UTopBarDetailsWidget_C_RestExperencePercentOfLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.GetBonusExperienceDescription
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Result                         (Parm, OutParm)

void UTopBarDetailsWidget_C::GetBonusExperienceDescription(struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.GetBonusExperienceDescription");

	UTopBarDetailsWidget_C_GetBonusExperienceDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.GetSkillPointsTooltipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UTopBarDetailsWidget_C::GetSkillPointsTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.GetSkillPointsTooltipWidget");

	UTopBarDetailsWidget_C_GetSkillPointsTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.GetBonusExperienceTooltipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UTopBarDetailsWidget_C::GetBonusExperienceTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.GetBonusExperienceTooltipWidget");

	UTopBarDetailsWidget_C_GetBonusExperienceTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.Update Boosts
// (Public, BlueprintCallable, BlueprintEvent)

void UTopBarDetailsWidget_C::Update_Boosts()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.Update Boosts");

	UTopBarDetailsWidget_C_Update_Boosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.UpdateAccountInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo  Info                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTopBarDetailsWidget_C::UpdateAccountInfo(struct FFortPublicAccountInfo Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.UpdateAccountInfo");

	UTopBarDetailsWidget_C_UpdateAccountInfo_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTopBarDetailsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.Construct");

	UTopBarDetailsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.Xp Boost Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BoostAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopBarDetailsWidget_C::Xp_Boost_Changed(int BoostAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.Xp Boost Changed");

	UTopBarDetailsWidget_C_Xp_Boost_Changed_Params params;
	params.BoostAmount = BoostAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.On Party Left
// (BlueprintCallable, BlueprintEvent)

void UTopBarDetailsWidget_C::On_Party_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.On Party Left");

	UTopBarDetailsWidget_C_On_Party_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.On Party Joined
// (BlueprintCallable, BlueprintEvent)

void UTopBarDetailsWidget_C::On_Party_Joined()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.On Party Joined");

	UTopBarDetailsWidget_C_On_Party_Joined_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.Founder Changed
// (BlueprintCallable, BlueprintEvent)

void UTopBarDetailsWidget_C::Founder_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.Founder Changed");

	UTopBarDetailsWidget_C_Founder_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTopBarDetailsWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.Destruct");

	UTopBarDetailsWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopBarDetailsWidget.TopBarDetailsWidget_C.ExecuteUbergraph_TopBarDetailsWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopBarDetailsWidget_C::ExecuteUbergraph_TopBarDetailsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopBarDetailsWidget.TopBarDetailsWidget_C.ExecuteUbergraph_TopBarDetailsWidget");

	UTopBarDetailsWidget_C_ExecuteUbergraph_TopBarDetailsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
