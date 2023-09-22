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

// 0x20 (0x238 - 0x218)
// WidgetBlueprintGeneratedClass MissionAlertIndicator.MissionAlertIndicator_C
class UMissionAlertIndicator_C : public UCommonUserWidget
{
public:
	class UImage*                                ImageOtherIcon;                                    // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageOtherIconShadow;                              // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 Switcher;                                          // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          CycleTimer;                                        // 0x230(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionAlertIndicator_C");
		return Clss;
	}

	void Get_Mission_Alert_Visual_Icon(struct FGameplayTagContainer& TagContainer, struct FSlateBrush* OutBrush, class UObject* MinibossAlertImage, class UObject* StormAlertImage, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1);
	void Config(const struct FGameplayTagContainer& AlertVisualTags, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, const struct FSlateBrush& CallFunc_Get_Mission_Alert_Visual_Icon_OutBrush, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	void Update();
	void ToggleTimer(bool IsEnabled, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
