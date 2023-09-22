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

// 0x60 (0x2B0 - 0x250)
// WidgetBlueprintGeneratedClass PlayerEmblemAndXp.PlayerEmblemAndXp_C
class UPlayerEmblemAndXp_C : public UFortAccountWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(Transient, DuplicateTransient)
	class UAthenaBattlePassTrackerWidget_C*      AthenaBattlePassTrackerWidget;                     // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaPlayerLevel_C*                  AthenaPlayerLevel;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MiniReward1CountTB;                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        MiniReward1HB;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MiniReward1Image;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MiniReward1LevelTB;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MiniReward2CountTB;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        MiniReward2HB;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MiniReward2Image;                                  // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MiniReward2LevelTB;                                // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SeasonNameLabel;                                   // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerEmblemAndXp_C");
		return Clss;
	}

	void SetupReward(class UWidget* Container, class UTextBlock* RewardText, class UFortMultiSizeItemCard* RewardItemCard, class UImage* RewardImageWidget, class UCommonTextBlock* RewardCountTextBlock, bool HasReward, const struct FFortItemInstanceQuantityPair& RewardItem, int32 LevelRewarded, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_IntToText_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_IsValid_ReturnValue123, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void Refresh(struct FFortPublicAccountInfo& FortPublicAccountInfo, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue1, int32 CallFunc_GetCurrentSeasonNumber_ReturnValue, class FText CallFunc_GetCurrentSeasonName_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, const struct FFortItemInstanceQuantityPair& CallFunc_GetNextSeasonReward_Reward, int32 CallFunc_GetNextSeasonReward_RewardLevel, bool CallFunc_GetNextSeasonReward_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFortItemInstanceQuantityPair& CallFunc_GetNextSeasonChaseReward_Reward, int32 CallFunc_GetNextSeasonChaseReward_RewardLevel, bool CallFunc_GetNextSeasonChaseReward_ReturnValue);
	void Construct();
	void OnAccountInfoChanged(struct FFortPublicAccountInfo& Result);
	void ExecuteUbergraph_PlayerEmblemAndXp(int32 EntryPoint, const struct FFortPublicAccountInfo& K2Node_Event_Result);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
