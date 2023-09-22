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

// 0x23 (0x23B - 0x218)
// WidgetBlueprintGeneratedClass ItemManagementInventoryLimitStatusIndicator.ItemManagementInventoryLimitStatusIndicator_C
class UItemManagementInventoryLimitStatusIndicator_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      InventoryLabel;                                    // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ItemStorageCountLabel;                             // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ItemStorageLimitLabel;                             // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortInventoryType                InventoryTypeTracked;                              // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDeployableBase;                                  // 0x239(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseTypeSpecificLabel;                              // 0x23A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemManagementInventoryLimitStatusIndicator_C");
		return Clss;
	}

	void RefreshStorageInventoryStatus(int32 MaxCount, int32 CurrentCount, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData12, bool Temp_bool_Variable1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array12, const struct FLinearColor& Temp_struct_Variable, class FText CallFunc_Format_ReturnValue12, bool Temp_bool_Variable12, bool Temp_bool_Variable123, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, int32 CallFunc_GetDeployableBaseItemCounts_ItemsCount, int32 CallFunc_GetDeployableBaseItemCounts_MaxItemsCount, int32 CallFunc_GetDeployableBaseItemCounts_OverflowItemsCount, int32 CallFunc_GetDeployableBaseItemCounts_ItemsCount1, int32 CallFunc_GetDeployableBaseItemCounts_MaxItemsCount1, int32 CallFunc_GetDeployableBaseItemCounts_OverflowItemsCount1, int32 CallFunc_GetStorageNumItems_ReturnValue, int32 CallFunc_GetStorageCapacity_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_HasUnavailableItemsInStorage_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText K2Node_Select_Default, const struct FLinearColor& CallFunc_Get_Theme_Color_Theme_Color, const struct FLinearColor& K2Node_Select1_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, int32 K2Node_Select12_Default, int32 K2Node_Select123_Default);
	void TrackStorageInventory(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class AFortDeployableBaseManager* CallFunc_GetCurrent_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1);
	void RefreshWorldInventoryStatus(const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, const struct FLinearColor& CallFunc_Get_Theme_Color_Theme_Color, int32 CallFunc_GetBackpackItemCounts_ItemsCount, int32 CallFunc_GetBackpackItemCounts_MaxItemsCount, int32 CallFunc_GetBackpackItemCounts_OverflowItemsCount, const struct FLinearColor& CallFunc_Get_Theme_Color_Theme_Color1, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue1, bool Temp_bool_Variable1, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void TrackAccountInventory(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortInventoryContext* CallFunc_GetContext_ReturnValue);
	void TrackWorldInventory(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1);
	void HandleVaultItemLimitStateChanged(const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, enum class EVaultItemLimitStatus CallFunc_GetVaultItemLimitStatus_ReturnValue, int32 CallFunc_GetCountOfVaultLimitedItems_ReturnValue, int32 CallFunc_GetVaultItemLimit_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue1, const struct FLinearColor& Temp_struct_Variable12, enum class EVaultItemLimitStatus Temp_byte_Variable, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void Construct();
	void Destruct();
	void HandleWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved);
	void HandleOutpostItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved);
	void HandleDeployableBaseInventoryChanged(class ADeployableBasePlot* Plot);
	void HandleMcpWorldItemsChanged();
	void HandleMcpOutpostItemsChanged();
	void ExecuteUbergraph_ItemManagementInventoryLimitStatusIndicator(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsAdded1, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsRemoved1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsAdded, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsRemoved, bool K2Node_SwitchEnum_CmpSuccess, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, bool K2Node_SwitchEnum1_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UFortInventoryContext* CallFunc_GetContext_ReturnValue12, class ADeployableBasePlot* K2Node_CustomEvent_Plot, class UFortInventoryContext* CallFunc_GetContext_ReturnValue123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
