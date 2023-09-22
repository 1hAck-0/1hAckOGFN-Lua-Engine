#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x908 - 0x820)
// WidgetBlueprintGeneratedClass AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C
class UAthenaChallengeTreeEntry_C : public UFortChallengeBundleTreeItemWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x820(0x8)(Transient, DuplicateTransient)
	class UOverlay*                              BattleStars;                                       // 0x828(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BattleStarsCheck;                                  // 0x830(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       BattleStarSwitcher;                                // 0x838(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BattleStarTracker;                                 // 0x840(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BundleNumber;                                      // 0x848(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              BundleSB;                                          // 0x850(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BundleType;                                        // 0x858(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChallengeBundleCategoryHeader_C*      ChallengeBundleCategoryHeader;                     // 0x860(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChallengeProgressWidget_C*            ChallengeProgressWidget;                           // 0x868(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                ChaseRewardCard;                                   // 0x870(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ExpansionIndicator;                                // 0x878(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         FillCB;                                            // 0x880(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Glow;                                              // 0x888(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         GradCB;                                            // 0x890(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HeaderHB;                                          // 0x898(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ItemCardOverlay;                                   // 0x8A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                         ItemIcon;                                          // 0x8A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       LockCheckSwitcher;                                 // 0x8B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LockedText;                                        // 0x8B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       MainEntryTypeSwitcher;                             // 0x8C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       MiddleSectionSwitcher;                             // 0x8C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MidSectionCompleteVB;                              // 0x8D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MidSectionLockedVB;                                // 0x8D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                  NormalBangWrapper;                                 // 0x8E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         OutlineCB;                                         // 0x8E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         RewardBoxCB;                                       // 0x8F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RewardSpacingLine;                                 // 0x8F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortTokenType*                        MysteryItem;                                       // 0x900(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaChallengeTreeEntry_C");
		return Clss;
	}

	class UFortItem* GetRewardToShow(class UFortChallengeBundleInfo* CallFunc_GetChallengeBundleInfo_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, class FText CallFunc_IsUnlocked_LockedReason, bool CallFunc_IsUnlocked_ReturnValue, class UFortItem* CallFunc_GetRewardItem_ReturnValue);
	void UpdateReward(class UFortChallengeBundleInfo* CallFunc_GetChallengeBundleInfo_ReturnValue, class UFortChallengeBundleInfo* CallFunc_GetChallengeBundleInfo_ReturnValue1, class UFortItem* CallFunc_GetRewardItem_ReturnValue, bool CallFunc_IsRewardThresholdAchieved_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, class UFortItem* CallFunc_GetRewardToShow_ReturnValue);
	void UpdateBundleData(class UFortChallengeBundleInfo* BundleInfo, bool Temp_bool_Variable, int32 CallFunc_HasQuestReward_OutRecievedCount, int32 CallFunc_HasQuestReward_OutTotalCount, bool CallFunc_HasQuestReward_ReturnValue, class UFortChallengeBundleItemDefinition* CallFunc_GetBundleDefinition_ReturnValue, class FText CallFunc_GetShortNameNumber_ReturnValue, class FText CallFunc_GetShortName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_TextToUpper_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, int32 CallFunc_GetAchievedCount_OutTotalAchievedCount, int32 CallFunc_GetAchievedCount_OutTotalRequiredCount, float CallFunc_GetAchievedCount_OutAchievedPercent, float CallFunc_GetAchievedCount_OutThresholdPercent, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateBundleStyle(class UFortChallengeBundleInfo* BundleInfo, class FText CallFunc_IsUnlocked_LockedReason, bool CallFunc_IsUnlocked_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_IsCompleted_ReturnValue);
	void UpdateHeaderCategoryStyle(class UFortChallengeBundleCategoryInfo* CategoryInfo, TArray<class UFortChallengeBundleInfo*>& CallFunc_GetChallengeBundleInfos_ReturnValue, class UFortChallengeBundleInfo* CallFunc_Array_Get_Item);
	void SetupAsChallengeBundleSchedule(class UFortChallengeBundleCategoryInfo* Schedule);
	void SetupAsChallengeBundle(class UFortChallengeBundleInfo* Bundle);
	void ExpansionChanged(bool bExpanded);
	void OnHovered();
	void ExecuteUbergraph_AthenaChallengeTreeEntry(int32 EntryPoint, class UFortItem* CallFunc_GetRewardToShow_ReturnValue, bool K2Node_Event_bExpanded, int32 CallFunc_Conv_BoolToInt_ReturnValue, class UFortChallengeBundleInfo* CallFunc_GetChallengeBundleInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortChallengeBundleInfo* K2Node_Event_Bundle, class UFortChallengeBundleCategoryInfo* K2Node_Event_Schedule, bool CallFunc_IsItemExpanded_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
