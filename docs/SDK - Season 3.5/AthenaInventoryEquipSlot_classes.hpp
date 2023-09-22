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

// 0x19 (0x839 - 0x820)
// WidgetBlueprintGeneratedClass AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C
class UAthenaInventoryEquipSlot_C : public UAthenaInventoryEquipButtonBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x820(0x8)(Transient, DuplicateTransient)
	class UImage*                                DropTarget;                                        // 0x828(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ItemLocked;                                        // 0x830(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsDragHovered;                                     // 0x838(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaInventoryEquipSlot_C");
		return Clss;
	}

	void IsFocusOfDrop(bool* IsDragHovered, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	bool CanEquipFortItem(class UObject* Object, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, bool CallFunc_EqualEqual_ByteByte_ReturnValue123, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue12);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UAthenaInventoryDragDrop_C* K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanEquipFortItem_ReturnValue);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, class UCommonInputContext* CallFunc_GetContext_ReturnValue, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool IsDraggingEquipableItem(class UDragDropOperation* CallFunc_GetDragDroppingContent_ReturnValue, class UDragDropOperation* CallFunc_GetDragDroppingContent_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanEquipFortItem_ReturnValue);
	void TryAndShowDropTarget(bool CallFunc_IsFocusOfDrop_IsDragHovered, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsDraggingEquipableItem_ReturnValue, bool CallFunc_IsSwapping_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UAthenaInventoryDragDrop_C* CallFunc_CreateDragDropOperation_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaInventoryDragVisual_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UFortItem* K2Node_DynamicCast_AsFort_Item, bool K2Node_DynamicCast_bSuccess, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_DropItemOnQuickBar_ReturnValue);
	void RefreshItem(class UFortItem* LocalItem, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortItem* CallFunc_GetQuickBarSlottedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnQuickbarContentsChanged_Event_0(enum class EFortQuickBars QuickbarIndex, TArray<int32>& ChangedSlots);
	void OnClicked();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnSelected();
	void OnDeselected();
	void OnDoubleClicked();
	void OnInventoryItemSelected_Event_0(class UFortItem* Item);
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void ExecuteUbergraph_AthenaInventoryEquipSlot(int32 EntryPoint, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonInputContext* CallFunc_GetContext_ReturnValue1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UFortInventoryContext* CallFunc_GetContext_ReturnValue12, enum class EFortQuickBars K2Node_CustomEvent_QuickbarIndex, TArray<int32>& K2Node_CustomEvent_ChangedSlots, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FFocusEvent& K2Node_Event_InFocusEvent, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue123, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue1234, class UFortInventoryContext* CallFunc_GetContext_ReturnValue12345, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue123456, class UFortItem* CallFunc_GetSelectedInventoryItem_ReturnValue, class UFortItem* K2Node_CustomEvent_Item, bool CallFunc_IsValid_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1234567, class UFortItem* CallFunc_GetQuickBarSlottedItem_ReturnValue, class UFortItem* CallFunc_GetQuickBarSlottedItem_ReturnValue1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue12345678, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue123456789, const struct FPointerEvent& K2Node_Event_PointerEvent, class UDragDropOperation* K2Node_Event_Operation, class UAthenaInventoryDragDrop_C* K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
