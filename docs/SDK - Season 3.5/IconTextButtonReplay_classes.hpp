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

// 0x129 (0x931 - 0x808)
// WidgetBlueprintGeneratedClass IconTextButtonReplay.IconTextButtonReplay_C
class UIconTextButtonReplay_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x808(0x8)(Transient, DuplicateTransient)
	class UBorder*                               Background;                                        // 0x810(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CenterButtonTextWidget;                            // 0x818(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ContentBorder;                                     // 0x820(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x828(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            RightExtraContentSlot;                             // 0x830(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ButtonText;                                        // 0x838(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                           IconBrush;                                         // 0x850(0x88)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UClass*                                ControllerInputStyle;                              // 0x8D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                MouseKeyboardStyle;                                // 0x8E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ButtonClickAction;                                 // 0x8E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	enum class EHorizontalAlignment              ContentAlignment;                                  // 0x8F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          HoveredColor;                                      // 0x8FC(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DefaultColor;                                      // 0x90C(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                PressedColor;                                      // 0x91C(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SelectedColor;                                     // 0x920(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldHideIcon;                                    // 0x930(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IconTextButtonReplay_C");
		return Clss;
	}

	void ActivateButton();
	void UpdateTextStyle(class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue);
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment);
	void UpdateContentAlignment(class UPanelSlot* CallFunc_GetContentSlot_ReturnValue, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess);
	void SetMouseKeyboardStyle(class UClass* ControllerInputStyle, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateStyle(bool UsingGamepad);
	void UpdateText(bool Temp_bool_Variable, class FText CallFunc_GetDisplayText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default);
	void SetControllerStyle(class UClass* ControllerInputStyle, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateTextAndStyle(bool bUsingGamepad);
	void InitializeButton(class UObject* CallFunc_GetBrushResource_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Set_Icon(const struct FSlateBrush& IconBrush);
	void Set_Text(class FText ButtonText, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void OnCurrentTextStyleChanged();
	void PreConstruct(bool IsDesignTime);
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo);
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction);
	void OnActionProgress(float HeldPercent);
	void OnActionComplete();
	void Construct();
	void OnHovered();
	void OnUnhovered();
	void OnSelected();
	void OnDeselected();
	void ExecuteUbergraph_IconTextButtonReplay(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, class UCommonInputContext* CallFunc_GetContext_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable1, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, bool K2Node_ComponentBoundEvent_bUsingGamepad, const struct FDataTableRowHandle& K2Node_Event_NewTriggeredAction, float K2Node_Event_HeldPercent, bool Temp_bool_Variable1, bool CallFunc_EqualEqual_SlateBrush_ReturnValue, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable123, enum class ESlateVisibility K2Node_Select1_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
