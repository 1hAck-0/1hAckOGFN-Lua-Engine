#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function MissionAlertIndicator.MissionAlertIndicator_C.Get Mission Alert Visual Icon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSlateBrush                 OutBrush                                                         (Parm, OutParm)
// class UObject*                     MinibossAlertImage                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     StormAlertImage                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush1                                    ()

void UMissionAlertIndicator_C::Get_Mission_Alert_Visual_Icon(struct FGameplayTagContainer& TagContainer, struct FSlateBrush* OutBrush, class UObject* MinibossAlertImage, class UObject* StormAlertImage, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1)
{
	static auto Func = Class->GetFunction("MissionAlertIndicator_C", "Get Mission Alert Visual Icon");

	Params::UMissionAlertIndicator_C_Get_Mission_Alert_Visual_Icon_Params Parms;
	Parms.TagContainer = TagContainer;
	Parms.MinibossAlertImage = MinibossAlertImage;
	Parms.StormAlertImage = StormAlertImage;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue1 = CallFunc_HasTag_ReturnValue1;
	Parms.K2Node_MakeStruct_SlateBrush1 = K2Node_MakeStruct_SlateBrush1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutBrush != nullptr)
		*OutBrush = Parms.OutBrush;

}


// Function MissionAlertIndicator.MissionAlertIndicator_C.Config
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       AlertVisualTags                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagQuery           CallFunc_MakeGameplayTagQuery_ReturnValue                        ()
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_Get_Mission_Alert_Visual_Icon_OutBrush                  ()
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionAlertIndicator_C::Config(const struct FGameplayTagContainer& AlertVisualTags, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, const struct FSlateBrush& CallFunc_Get_Mission_Alert_Visual_Icon_OutBrush, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static auto Func = Class->GetFunction("MissionAlertIndicator_C", "Config");

	Params::UMissionAlertIndicator_C_Config_Params Parms;
	Parms.AlertVisualTags = AlertVisualTags;
	Parms.CallFunc_MakeGameplayTagQuery_ReturnValue = CallFunc_MakeGameplayTagQuery_ReturnValue;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;
	Parms.CallFunc_Get_Mission_Alert_Visual_Icon_OutBrush = CallFunc_Get_Mission_Alert_Visual_Icon_OutBrush;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionAlertIndicator.MissionAlertIndicator_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionAlertIndicator_C::Update()
{
	static auto Func = Class->GetFunction("MissionAlertIndicator_C", "Update");

	Params::UMissionAlertIndicator_C_Update_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionAlertIndicator.MissionAlertIndicator_C.ToggleTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void UMissionAlertIndicator_C::ToggleTimer(bool IsEnabled, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionAlertIndicator_C", "ToggleTimer");

	Params::UMissionAlertIndicator_C_ToggleTimer_Params Parms;
	Parms.IsEnabled = IsEnabled;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
