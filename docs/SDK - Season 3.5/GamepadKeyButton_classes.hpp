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

// 0xD1 (0x8D9 - 0x808)
// WidgetBlueprintGeneratedClass GamepadKeyButton.GamepadKeyButton_C
class UGamepadKeyButton_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x808(0x8)(Transient, DuplicateTransient)
	class UKeybindWidget_C*                      BoundKey;                                          // 0x810(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ContentBorder;                                     // 0x818(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ButtonText;                                        // 0x820(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                           IconBrush;                                         // 0x838(0x88)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UClass*                                ControllerInputStyle;                              // 0x8C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ButtonClickAction;                                 // 0x8C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	enum class EHorizontalAlignment              ContentAlignment;                                  // 0x8D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GamepadKeyButton_C");
		return Clss;
	}

	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment);
	void UpdateContentAlignment(class UPanelSlot* CallFunc_GetContentSlot_ReturnValue, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess);
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo);
	void PreConstruct(bool IsDesignTime);
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction);
	void BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_24_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void ExecuteUbergraph_GamepadKeyButton(int32 EntryPoint, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, bool K2Node_Event_IsDesignTime, const struct FDataTableRowHandle& K2Node_Event_NewTriggeredAction, bool K2Node_ComponentBoundEvent_bUsingGamepad);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
