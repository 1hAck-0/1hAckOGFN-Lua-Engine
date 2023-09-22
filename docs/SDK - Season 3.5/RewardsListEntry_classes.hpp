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

// 0x98 (0x2B0 - 0x218)
// WidgetBlueprintGeneratedClass RewardsListEntry.RewardsListEntry_C
class URewardsListEntry_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      CommonTextBlock_5;                                 // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                FortItemCard_XXSSchematicItemCard;                 // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_3;                                           // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_4;                                           // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageFoundersReward;                               // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               RewardCount;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RewardIcon;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      RewardName;                                        // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherRewardType;                                // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherSpecialRewardType;                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                             RewardItem;                                        // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                           TextColour;                                        // 0x278(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class ERewardListEntryType              RewardType;                                        // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3418[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   ItemDef;                                           // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RewardsListEntry_C");
		return Clss;
	}

	void ConfigForSchematic();
	void ConfigForCommonRewards();
	void ConfigForTransformKey();
	void Construct();
	void ConfigForPeople();
	void ExecuteUbergraph_RewardsListEntry(int32 EntryPoint, int32 Temp_int_Variable, enum class ERewardListEntryType Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable1234, enum class ESlateVisibility Temp_byte_Variable12345, enum class ESlateVisibility K2Node_Select_Default, enum class EFortItemType CallFunc_GetType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue, const struct FLinearColor& CallFunc_GetRarityColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue1, class FText CallFunc_GetDisplayName_ReturnValue, int32 Temp_int_Variable1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FLinearColor& CallFunc_GetRarityColor_ReturnValue1, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, int32 CallFunc_GetNumInStack_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue12, enum class ESlateVisibility K2Node_Select1_Default, class FText CallFunc_GetEmptyText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText CallFunc_GetPrimaryCategory_ItemCategoryText, bool CallFunc_GetPrimaryCategory_ReturnValue, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue12, int32 Temp_int_Variable12, class FText CallFunc_GetPrimaryCategory_ItemCategoryText1, bool CallFunc_GetPrimaryCategory_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, class FText CallFunc_GetDisplayName_ReturnValue123, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData12, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue1, enum class ERewardListEntryType Temp_byte_Variable123456, int32 K2Node_Select12_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
