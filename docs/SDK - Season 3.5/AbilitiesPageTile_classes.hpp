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

// 0x134 (0x93C - 0x808)
// WidgetBlueprintGeneratedClass AbilitiesPageTile.AbilitiesPageTile_C
class UAbilitiesPageTile_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x808(0x8)(Transient, DuplicateTransient)
	class UFortSZAwareImage*                     AbilityImage;                                      // 0x810(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      AbilityName;                                       // 0x818(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindAbilityKeybind;                             // 0x820(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindGamepadAbility1;                            // 0x828(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindGamepadAbility2;                            // 0x830(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxAbilityKeybind;                             // 0x838(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherAbilityBindingSwitcher;                    // 0x840(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        QuickBarSlot;                                      // 0x848(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BE6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAbilityKit*                       AbilityKit;                                        // 0x850(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGadgetItemDefinition*             GadgetItemDef;                                     // 0x858(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             AbilityItem;                                       // 0x860(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AbilityLocked;                                     // 0x868(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortUIPerk                           AbilityUIPerk;                                     // 0x870(0x98)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                          LockedColor;                                       // 0x908(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          UnlockedColor;                                     // 0x918(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBrushSize                    AbilityIconBrushSize;                              // 0x928(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BE8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          LockedAbilityIconColor;                            // 0x92C(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilitiesPageTile_C");
		return Clss;
	}

	void SetAbilityPerkInfo(const struct FFortUIPerk& AbilityPerk, TArray<class UFortGadgetItemDefinition*>& CallFunc_BP_GetGadgets_GadgetItemDefinitions, class UFortGadgetItemDefinition* CallFunc_Array_Get_Item, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateBrush& CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue, class UFortAbilityKit* CallFunc_GetGrantedAbilityKit_ReturnValue);
	void UpdateKeyBinding(class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue12);
	void SetAbilityItemInfo(class UFortItem* SlottedAbilityItem, class FText CallFunc_GetDisplayName_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortGadgetItemDefinition* K2Node_DynamicCast_AsFort_Gadget_Item_Definition, bool K2Node_DynamicCast_bSuccess, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue);
	void Construct();
	void HandleInputMethodChanged(bool bUsingGamepad);
	void ExecuteUbergraph_AbilitiesPageTile(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool K2Node_CustomEvent_bUsingGamepad);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
