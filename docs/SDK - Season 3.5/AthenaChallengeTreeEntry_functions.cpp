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


// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.GetRewardToShow
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortChallengeBundleInfo*    CallFunc_GetChallengeBundleInfo_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_IsUnlocked_LockedReason                                 ()
// bool                               CallFunc_IsUnlocked_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_GetRewardItem_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UFortItem* UAthenaChallengeTreeEntry_C::GetRewardToShow(class UFortChallengeBundleInfo* CallFunc_GetChallengeBundleInfo_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, class FText CallFunc_IsUnlocked_LockedReason, bool CallFunc_IsUnlocked_ReturnValue, class UFortItem* CallFunc_GetRewardItem_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaChallengeTreeEntry_C", "GetRewardToShow");

	Params::UAthenaChallengeTreeEntry_C_GetRewardToShow_Params Parms;
	Parms.CallFunc_GetChallengeBundleInfo_ReturnValue = CallFunc_GetChallengeBundleInfo_ReturnValue;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;
	Parms.CallFunc_IsUnlocked_LockedReason = CallFunc_IsUnlocked_LockedReason;
	Parms.CallFunc_IsUnlocked_ReturnValue = CallFunc_IsUnlocked_ReturnValue;
	Parms.CallFunc_GetRewardItem_ReturnValue = CallFunc_GetRewardItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.UpdateReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortChallengeBundleInfo*    CallFunc_GetChallengeBundleInfo_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortChallengeBundleInfo*    CallFunc_GetChallengeBundleInfo_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetRewardItem_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRewardThresholdAchieved_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetRewardToShow_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengeTreeEntry_C::UpdateReward(class UFortChallengeBundleInfo* CallFunc_GetChallengeBundleInfo_ReturnValue, class UFortChallengeBundleInfo* CallFunc_GetChallengeBundleInfo_ReturnValue1, class UFortItem* CallFunc_GetRewardItem_ReturnValue, bool CallFunc_IsRewardThresholdAchieved_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, class UFortItem* CallFunc_GetRewardToShow_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaChallengeTreeEntry_C", "UpdateReward");

	Params::UAthenaChallengeTreeEntry_C_UpdateReward_Params Parms;
	Parms.CallFunc_GetChallengeBundleInfo_ReturnValue = CallFunc_GetChallengeBundleInfo_ReturnValue;
	Parms.CallFunc_GetChallengeBundleInfo_ReturnValue1 = CallFunc_GetChallengeBundleInfo_ReturnValue1;
	Parms.CallFunc_GetRewardItem_ReturnValue = CallFunc_GetRewardItem_ReturnValue;
	Parms.CallFunc_IsRewardThresholdAchieved_ReturnValue = CallFunc_IsRewardThresholdAchieved_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_GetRewardToShow_ReturnValue = CallFunc_GetRewardToShow_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.UpdateBundleData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortChallengeBundleInfo*    BundleInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_HasQuestReward_OutRecievedCount                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HasQuestReward_OutTotalCount                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasQuestReward_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortChallengeBundleItemDefinition*CallFunc_GetBundleDefinition_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetShortNameNumber_ReturnValue                          ()
// class FText                        CallFunc_GetShortName_ReturnValue                                ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// int32                              CallFunc_GetAchievedCount_OutTotalAchievedCount                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAchievedCount_OutTotalRequiredCount                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAchievedCount_OutAchievedPercent                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAchievedCount_OutThresholdPercent                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengeTreeEntry_C::UpdateBundleData(class UFortChallengeBundleInfo* BundleInfo, bool Temp_bool_Variable, int32 CallFunc_HasQuestReward_OutRecievedCount, int32 CallFunc_HasQuestReward_OutTotalCount, bool CallFunc_HasQuestReward_ReturnValue, class UFortChallengeBundleItemDefinition* CallFunc_GetBundleDefinition_ReturnValue, class FText CallFunc_GetShortNameNumber_ReturnValue, class FText CallFunc_GetShortName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_TextToUpper_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, int32 CallFunc_GetAchievedCount_OutTotalAchievedCount, int32 CallFunc_GetAchievedCount_OutTotalRequiredCount, float CallFunc_GetAchievedCount_OutAchievedPercent, float CallFunc_GetAchievedCount_OutThresholdPercent, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaChallengeTreeEntry_C", "UpdateBundleData");

	Params::UAthenaChallengeTreeEntry_C_UpdateBundleData_Params Parms;
	Parms.BundleInfo = BundleInfo;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_HasQuestReward_OutRecievedCount = CallFunc_HasQuestReward_OutRecievedCount;
	Parms.CallFunc_HasQuestReward_OutTotalCount = CallFunc_HasQuestReward_OutTotalCount;
	Parms.CallFunc_HasQuestReward_ReturnValue = CallFunc_HasQuestReward_ReturnValue;
	Parms.CallFunc_GetBundleDefinition_ReturnValue = CallFunc_GetBundleDefinition_ReturnValue;
	Parms.CallFunc_GetShortNameNumber_ReturnValue = CallFunc_GetShortNameNumber_ReturnValue;
	Parms.CallFunc_GetShortName_ReturnValue = CallFunc_GetShortName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.CallFunc_GetAchievedCount_OutTotalAchievedCount = CallFunc_GetAchievedCount_OutTotalAchievedCount;
	Parms.CallFunc_GetAchievedCount_OutTotalRequiredCount = CallFunc_GetAchievedCount_OutTotalRequiredCount;
	Parms.CallFunc_GetAchievedCount_OutAchievedPercent = CallFunc_GetAchievedCount_OutAchievedPercent;
	Parms.CallFunc_GetAchievedCount_OutThresholdPercent = CallFunc_GetAchievedCount_OutThresholdPercent;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.UpdateBundleStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortChallengeBundleInfo*    BundleInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_IsUnlocked_LockedReason                                 ()
// bool                               CallFunc_IsUnlocked_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// bool                               CallFunc_IsCompleted_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChallengeTreeEntry_C::UpdateBundleStyle(class UFortChallengeBundleInfo* BundleInfo, class FText CallFunc_IsUnlocked_LockedReason, bool CallFunc_IsUnlocked_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_IsCompleted_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaChallengeTreeEntry_C", "UpdateBundleStyle");

	Params::UAthenaChallengeTreeEntry_C_UpdateBundleStyle_Params Parms;
	Parms.BundleInfo = BundleInfo;
	Parms.CallFunc_IsUnlocked_LockedReason = CallFunc_IsUnlocked_LockedReason;
	Parms.CallFunc_IsUnlocked_ReturnValue = CallFunc_IsUnlocked_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_IsCompleted_ReturnValue = CallFunc_IsCompleted_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.UpdateHeaderCategoryStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortChallengeBundleCategoryInfo*CategoryInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortChallengeBundleInfo*>CallFunc_GetChallengeBundleInfos_ReturnValue                     (ZeroConstructor, ReferenceParm)
// class UFortChallengeBundleInfo*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengeTreeEntry_C::UpdateHeaderCategoryStyle(class UFortChallengeBundleCategoryInfo* CategoryInfo, TArray<class UFortChallengeBundleInfo*>& CallFunc_GetChallengeBundleInfos_ReturnValue, class UFortChallengeBundleInfo* CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("AthenaChallengeTreeEntry_C", "UpdateHeaderCategoryStyle");

	Params::UAthenaChallengeTreeEntry_C_UpdateHeaderCategoryStyle_Params Parms;
	Parms.CategoryInfo = CategoryInfo;
	Parms.CallFunc_GetChallengeBundleInfos_ReturnValue = CallFunc_GetChallengeBundleInfos_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.SetupAsChallengeBundleSchedule
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortChallengeBundleCategoryInfo*Schedule                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengeTreeEntry_C::SetupAsChallengeBundleSchedule(class UFortChallengeBundleCategoryInfo* Schedule)
{
	static auto Func = Class->GetFunction("AthenaChallengeTreeEntry_C", "SetupAsChallengeBundleSchedule");

	Params::UAthenaChallengeTreeEntry_C_SetupAsChallengeBundleSchedule_Params Parms;
	Parms.Schedule = Schedule;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.SetupAsChallengeBundle
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortChallengeBundleInfo*    Bundle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengeTreeEntry_C::SetupAsChallengeBundle(class UFortChallengeBundleInfo* Bundle)
{
	static auto Func = Class->GetFunction("AthenaChallengeTreeEntry_C", "SetupAsChallengeBundle");

	Params::UAthenaChallengeTreeEntry_C_SetupAsChallengeBundle_Params Parms;
	Parms.Bundle = Bundle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.ExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bExpanded                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChallengeTreeEntry_C::ExpansionChanged(bool bExpanded)
{
	static auto Func = Class->GetFunction("AthenaChallengeTreeEntry_C", "ExpansionChanged");

	Params::UAthenaChallengeTreeEntry_C_ExpansionChanged_Params Parms;
	Parms.bExpanded = bExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaChallengeTreeEntry_C::OnHovered()
{
	static auto Func = Class->GetFunction("AthenaChallengeTreeEntry_C", "OnHovered");

	Params::UAthenaChallengeTreeEntry_C_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.ExecuteUbergraph_AthenaChallengeTreeEntry
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetRewardToShow_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bExpanded                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortChallengeBundleInfo*    CallFunc_GetChallengeBundleInfo_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortChallengeBundleInfo*    K2Node_Event_Bundle                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortChallengeBundleCategoryInfo*K2Node_Event_Schedule                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsItemExpanded_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengeTreeEntry_C::ExecuteUbergraph_AthenaChallengeTreeEntry(int32 EntryPoint, class UFortItem* CallFunc_GetRewardToShow_ReturnValue, bool K2Node_Event_bExpanded, int32 CallFunc_Conv_BoolToInt_ReturnValue, class UFortChallengeBundleInfo* CallFunc_GetChallengeBundleInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortChallengeBundleInfo* K2Node_Event_Bundle, class UFortChallengeBundleCategoryInfo* K2Node_Event_Schedule, bool CallFunc_IsItemExpanded_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue1)
{
	static auto Func = Class->GetFunction("AthenaChallengeTreeEntry_C", "ExecuteUbergraph_AthenaChallengeTreeEntry");

	Params::UAthenaChallengeTreeEntry_C_ExecuteUbergraph_AthenaChallengeTreeEntry_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRewardToShow_ReturnValue = CallFunc_GetRewardToShow_ReturnValue;
	Parms.K2Node_Event_bExpanded = K2Node_Event_bExpanded;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_GetChallengeBundleInfo_ReturnValue = CallFunc_GetChallengeBundleInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Event_Bundle = K2Node_Event_Bundle;
	Parms.K2Node_Event_Schedule = K2Node_Event_Schedule;
	Parms.CallFunc_IsItemExpanded_ReturnValue = CallFunc_IsItemExpanded_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue1 = CallFunc_Conv_BoolToInt_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
