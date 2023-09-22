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

// 0x7F (0x36F - 0x2F0)
// WidgetBlueprintGeneratedClass QuickbarSlot.QuickbarSlot_C
class UQuickbarSlot_C : public UFortQuickBarSlotBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Selected;                                          // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimMaximize;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimMinimize;                                      // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              _SizeBox__Item;                                    // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ItemLocked;                                        // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindTopCombo1;                                  // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindTopCombo2;                                  // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      QuickBarSlotInvalidationBox;                       // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Selection;                                         // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxBottomKeybind;                              // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxTopKeybind;                                 // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EItemDisplayStyle                 ItemDisplayStyle;                                  // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemCooldownType>     CooldownTypesSupported;                            // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	float                                        AnimatedBoxScaleFactor;                            // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemCardSize                 MinimumCardSize;                                   // 0x36C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemCardSize                 MaximumCardSize;                                   // 0x36D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldCollapseItemWidgetBorder;                    // 0x36E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuickbarSlot_C");
		return Clss;
	}

	void InitializeInvalidation(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateItemBoxSize(enum class EFortItemType Item_Type_To_Show, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, enum class EFortItemType CallFunc_GetType_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool CallFunc_ShouldUseNewItemCards_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, enum class EFortItemType K2Node_Select_Default, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue12, float CallFunc_Add_FloatFloat_ReturnValue123, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue1, enum class EFortItemType K2Node_Select1_Default, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue1234, float CallFunc_BreakVector2D_X1, float CallFunc_BreakVector2D_Y1, float CallFunc_Add_FloatFloat_ReturnValue12345, float CallFunc_Add_FloatFloat_ReturnValue123456, float CallFunc_Add_FloatFloat_ReturnValue1234567, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue1);
	void OnCooldownStopped(enum class EFortItemCooldownType CooldownType, bool K2Node_SwitchEnum_CmpSuccess);
	void OnCooldownStarted(enum class EFortItemCooldownType CooldownType, bool K2Node_SwitchEnum_CmpSuccess);
	void InitializeCooldowns(class UQuickbarSlotCooldown_C* K2Node_DynamicCast_AsQuickbar_Slot_Cooldown, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
	void Maximize(bool ShouldSkipAnimation, class UQuickbarSlotCooldown_C* K2Node_DynamicCast_AsQuickbar_Slot_Cooldown, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAnimationPlaying_ReturnValue);
	void Minimize(bool ShouldSkipAnimation, class UQuickbarSlotCooldown_C* K2Node_DynamicCast_AsQuickbar_Slot_Cooldown, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAnimationPlaying_ReturnValue);
	void SetSelected(bool Selected, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable1234, enum class ESlateVisibility Temp_byte_Variable12345, bool Temp_bool_Variable12, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, enum class ESlateVisibility K2Node_Select1_Default, enum class ESlateVisibility K2Node_Select12_Default, float CallFunc_GetEndTime_ReturnValue);
	void HandleMaximizeStarted();
	void HandleMinimizeFinished();
	void HandleMaximizeFinished();
	void HandleMinimizeStarted();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetAnimatedBoxScaleFactor(float AnimatedBoxScaleFactor);
	void ExecuteUbergraph_QuickbarSlot(int32 EntryPoint, class UTexture2D* Temp_object_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UTexture2D* Temp_object_Variable1, class UTexture2D* Temp_object_Variable12, class UTexture2D* Temp_object_Variable123, class UTexture2D* Temp_object_Variable1234, class UTexture2D* Temp_object_Variable12345, class UTexture2D* Temp_object_Variable123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class EItemDisplayStyle Temp_byte_Variable, class UTexture2D* K2Node_Select_Default, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_AnimatedBoxScaleFactor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
