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

// 0x50 (0x570 - 0x520)
// WidgetBlueprintGeneratedClass HeroSquadManagementScreen.HeroSquadManagementScreen_C
class UHeroSquadManagementScreen_C : public UFortHeroSquadManagementScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x520(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      AniShowSlotInfo;                                   // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      HidePicker;                                        // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      AniHideSlotInfo;                                   // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowPicker;                                        // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderSlotInfo;                                    // 0x548(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextSlotBody;                                      // 0x550(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextSlotHeader;                                    // 0x558(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   InputBackAction;                                   // 0x560(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HeroSquadManagementScreen_C");
		return Clss;
	}

	void HandlePickerHideAni();
	void HandleHideSlotInfoAni();
	void HandlePickerShowAni();
	void HandleShowSlotInfoAni();
	void UpdateSquadSlotInfoPanel(int32 SquadSlotIndex, int32 Temp_int_Variable, int32 Temp_int_Variable1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText CallFunc_MakeLiteralText_ReturnValue12, class FText CallFunc_MakeLiteralText_ReturnValue123, class FText CallFunc_MakeLiteralText_ReturnValue1234, class FText K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue12345, class FText CallFunc_MakeLiteralText_ReturnValue123456, class FText CallFunc_MakeLiteralText_ReturnValue1234567, class FText K2Node_Select1_Default);
	void Update_Hero_Squad_Bonus_Highlight_State(class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus, bool K2Node_DynamicCast_bSuccess, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus1, bool K2Node_DynamicCast_bSuccess1, class UHeroSquadSlotsView_C* K2Node_DynamicCast_AsHero_Squad_Slots_View, bool K2Node_DynamicCast_bSuccess12, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus12, bool K2Node_DynamicCast_bSuccess123, bool K2Node_SwitchInteger_CmpSuccess, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus123, bool K2Node_DynamicCast_bSuccess1234, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus1234, bool K2Node_DynamicCast_bSuccess12345, class UHeroSquadBonus_C* K2Node_DynamicCast_AsHero_Squad_Bonus12345, bool K2Node_DynamicCast_bSuccess123456);
	void Update_Hero_Squad_Bonus_Tiles_SubIcon_Glow_State(class UHeroSquadSlotsView_C* K2Node_DynamicCast_AsHero_Squad_Slots_View, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPerkUnlocked_ReturnValue, bool CallFunc_IsPerkEmpty_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class USimpleSquadSlotButton_C* K2Node_DynamicCast_AsSimple_Squad_Slot_Button, bool K2Node_DynamicCast_bSuccess1, class UWidget* CallFunc_GetChildAt_ReturnValue1, class USimpleSquadSlotButton_C* K2Node_DynamicCast_AsSimple_Squad_Slot_Button1, bool K2Node_DynamicCast_bSuccess12, bool CallFunc_IsPerkEmpty_ReturnValue1, bool CallFunc_IsPerkUnlocked_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1);
	void HideSlotInfo();
	void ShowSlotInfo(class FText HeaderText, class FText BodyText, class FText LocalItemType, class FText LocalDisplayName, class FText LocalHeaderText);
	void HandleClosePicker(bool* bPassThrough, class UHeroSquadSlotsView_C* K2Node_DynamicCast_AsHero_Squad_Slots_View, bool K2Node_DynamicCast_bSuccess);
	enum class ESlateVisibility GetInZoneVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void OnActivated();
	void Construct();
	void SetDefaultScroll();
	void OnDeactivated();
	void HandleSquadSlotPickerShown();
	void HandleSquadSlotPickerHidden();
	void BndEvt__SquadSlotsView_K2Node_ComponentBoundEvent_2_OnDifferentSquadSlotSelected__DelegateSignature(int32 SquadSlotIndex);
	void ExecuteUbergraph_HeroSquadManagementScreen(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USquadStatsWidget_C* K2Node_DynamicCast_AsSquad_Stats_Widget, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetIndexOfSelectedSquadSlot_ReturnValue, class USquadStatsWidget_C* K2Node_DynamicCast_AsSquad_Stats_Widget1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_Not_PreBool_ReturnValue, class USquadSlotDetailsPanel_C* K2Node_DynamicCast_AsSquad_Slot_Details_Panel, bool K2Node_DynamicCast_bSuccess12, int32 K2Node_ComponentBoundEvent_SquadSlotIndex, class UHeroSquadBonuses_C* K2Node_DynamicCast_AsHero_Squad_Bonuses, bool K2Node_DynamicCast_bSuccess123, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class USquadStatsWidget_C* K2Node_DynamicCast_AsSquad_Stats_Widget12, bool K2Node_DynamicCast_bSuccess1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
