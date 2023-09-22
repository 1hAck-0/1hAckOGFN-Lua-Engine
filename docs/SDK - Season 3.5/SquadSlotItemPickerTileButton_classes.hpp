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

// 0x41 (0x891 - 0x850)
// WidgetBlueprintGeneratedClass SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C
class USquadSlotItemPickerTileButton_C : public UFortSquadSlotItemPickerTileButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x850(0x8)(Transient, DuplicateTransient)
	class UBorder*                               CurrentlySlottedIndicatorLayer;                    // 0x858(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         NullItemBorder;                                    // 0x860(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       OverlayTypeSwitcher;                               // 0x868(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       RootWidgetSwitcher;                                // 0x870(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USquadIcon_C*                          SlottedSquadIcon;                                  // 0x878(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SlottingRestrictedIndicator;                       // 0x880(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               SlottingRestrictedIndicatorLayer;                  // 0x888(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsSlottedSomewhere;                                // 0x890(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SquadSlotItemPickerTileButton_C");
		return Clss;
	}

	void UpdateOverlays(TArray<enum class EFortSquadSlottingRestrictionReason>& CallFunc_GetSlottingRestrictionReasons_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void HandleItemSlottedToDifferentSquad(struct FHomebaseSquadSlotId& SquadSlotId);
	void HandleSlottingRestrictionReasonsChanged();
	void ExecuteUbergraph_SquadSlotItemPickerTileButton(int32 EntryPoint, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList, bool CallFunc_IsValid_ReturnValue, const struct FHomebaseSquadSlotId& K2Node_Event_SquadSlotId, bool Temp_bool_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, class UWidget* K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
