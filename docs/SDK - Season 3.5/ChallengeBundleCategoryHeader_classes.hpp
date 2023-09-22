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

// 0x41 (0x411 - 0x3D0)
// WidgetBlueprintGeneratedClass ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C
class UChallengeBundleCategoryHeader_C : public UFortChallengeBundleWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(Transient, DuplicateTransient)
	class UImage*                                BattlePassImage;                                   // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               BoundBreakSpacer;                                  // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BundleCategoryBorderCB;                            // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BundleCategoryName;                                // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               IconSpacer;                                        // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LockedIcon;                                        // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              VerticalSizeSB;                                    // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IconBreakBounds;                                   // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChallengeBundleCategoryHeader_C");
		return Clss;
	}

	void UpdateBundle(class UFortMcpContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue, bool CallFunc_HasPurchasedSeasonBook_ReturnValue, class UFortChallengeBundleInfo* CallFunc_GetChallengeBundleInfo_ReturnValue, class UFortChallengeBundleItemDefinition* CallFunc_GetBundleDefinition_ReturnValue, enum class EChallengeBundleVisualStyle CallFunc_GetVisualStyle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortChallengeBundleCategoryInfo* CallFunc_GetOwningBundleCategoryInfo_ReturnValue, class UFortChallengeBundleScheduleDefinition* CallFunc_GetFirstScheduleDefinition_ReturnValue, class FText CallFunc_GetCategoryName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool Temp_bool_Variable, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1, enum class ESlateVisibility K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void OnBundleUpdated();
	void ExecuteUbergraph_ChallengeBundleCategoryHeader(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
