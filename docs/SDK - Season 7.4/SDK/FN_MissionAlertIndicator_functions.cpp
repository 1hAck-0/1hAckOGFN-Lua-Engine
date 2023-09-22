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

// Function MissionAlertIndicator.MissionAlertIndicator_C.Get Mission Alert Visual Icon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSlateBrush             OutBrush                       (Parm, OutParm)

void UMissionAlertIndicator_C::Get_Mission_Alert_Visual_Icon(struct FGameplayTagContainer* TagContainer, struct FSlateBrush* OutBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionAlertIndicator.MissionAlertIndicator_C.Get Mission Alert Visual Icon");

	UMissionAlertIndicator_C_Get_Mission_Alert_Visual_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;
	if (OutBrush != nullptr)
		*OutBrush = params.OutBrush;
}


// Function MissionAlertIndicator.MissionAlertIndicator_C.Config
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   AlertVisualTags                (BlueprintVisible, BlueprintReadOnly, Parm)

void UMissionAlertIndicator_C::Config(struct FGameplayTagContainer AlertVisualTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionAlertIndicator.MissionAlertIndicator_C.Config");

	UMissionAlertIndicator_C_Config_Params params;
	params.AlertVisualTags = AlertVisualTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionAlertIndicator.MissionAlertIndicator_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionAlertIndicator_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionAlertIndicator.MissionAlertIndicator_C.Update");

	UMissionAlertIndicator_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionAlertIndicator.MissionAlertIndicator_C.ToggleTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionAlertIndicator_C::ToggleTimer(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionAlertIndicator.MissionAlertIndicator_C.ToggleTimer");

	UMissionAlertIndicator_C_ToggleTimer_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionAlertIndicator.MissionAlertIndicator_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionAlertIndicator_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionAlertIndicator.MissionAlertIndicator_C.Destruct");

	UMissionAlertIndicator_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionAlertIndicator.MissionAlertIndicator_C.ExecuteUbergraph_MissionAlertIndicator
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionAlertIndicator_C::ExecuteUbergraph_MissionAlertIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionAlertIndicator.MissionAlertIndicator_C.ExecuteUbergraph_MissionAlertIndicator");

	UMissionAlertIndicator_C_ExecuteUbergraph_MissionAlertIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
