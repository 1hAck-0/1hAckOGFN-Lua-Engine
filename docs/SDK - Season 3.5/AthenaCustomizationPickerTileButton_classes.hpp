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

// 0x21 (0x861 - 0x840)
// WidgetBlueprintGeneratedClass AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C
class UAthenaCustomizationPickerTileButton_C : public UAthenaCustomizationPickerTileButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x840(0x8)(Transient, DuplicateTransient)
	class UNormalBangWrapper_C*                  Bang;                                              // 0x848(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              NullItemOverlay;                                   // 0x850(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       RootWidgetSwitcher;                                // 0x858(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsSlottedSomewhere;                                // 0x860(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaCustomizationPickerTileButton_C");
		return Clss;
	}

	void MarkCosmeticAsSeen(class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess);
	void UpdateBangState(class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void OnSelected();
	void Construct();
	void ExecuteUbergraph_AthenaCustomizationPickerTileButton(int32 EntryPoint, bool Temp_bool_Variable, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList, bool CallFunc_IsValid_ReturnValue, class UWidget* K2Node_Select_Default, bool CallFunc_IsMobileGame_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
