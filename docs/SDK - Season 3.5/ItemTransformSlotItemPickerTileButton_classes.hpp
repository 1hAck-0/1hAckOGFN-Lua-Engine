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

// 0x28 (0x860 - 0x838)
// WidgetBlueprintGeneratedClass ItemTransformSlotItemPickerTileButton.ItemTransformSlotItemPickerTileButton_C
class UItemTransformSlotItemPickerTileButton_C : public UFortTransformSlotItemPickerTileButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x838(0x8)(Transient, DuplicateTransient)
	class UVerticalBox*                          BottomBarBox;                                      // 0x840(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ItemWidgetSwitcher;                                // 0x848(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         NullItemBorder;                                    // 0x850(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               SacrificePointText;                                // 0x858(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemTransformSlotItemPickerTileButton_C");
		return Clss;
	}

	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void ExecuteUbergraph_ItemTransformSlotItemPickerTileButton(int32 EntryPoint, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, const struct FTransmogSacrifice& CallFunc_GetTransmogSacrificeDataFromItemDefintion_OutTransmogData, bool CallFunc_GetTransmogSacrificeDataFromItemDefintion_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class UWidget* K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
