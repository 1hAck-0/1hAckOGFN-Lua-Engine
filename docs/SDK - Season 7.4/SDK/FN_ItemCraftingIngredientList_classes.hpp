#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemCraftingIngredientList.ItemCraftingIngredientList_C
// 0x0020 (0x02D8 - 0x02B8)
class UItemCraftingIngredientList_C : public UFortItemQuantityListBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                IngredientsList;                                          // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortItem*                                   ItemRepresented;                                          // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        IconSize;                                                 // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D1(0x0003) MISSED OFFSET
	int                                                Quantity;                                                 // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemCraftingIngredientList.ItemCraftingIngredientList_C");
		return ptr;
	}


	void SetItemQuantity(int ItemQuantity);
	void Bind_Delegates();
	void UnbindDelegates();
	void HandleCraftItemFailed(EFortCraftFailCause FailCause);
	void GetIngredients(class UObject* Item, TArray<struct FFortItemQuantityPair>* ReturnIngredients);
	void SetItemToCompare(class UFortItem* ItemToCompare);
	void ItemNeedsInventoryTracking(class UFortItem* Item, bool* NeedsTracking);
	void HandleItemChanged(bool ItemChanged, bool AmmoChanged, bool IngredientsChanged);
	void RefreshInventoryTracking();
	void HandleWorldItemListChanged(TArray<class UFortWorldItem*>* ItemsAdded, TArray<class UFortWorldItem*>* ItemsRemoved);
	void Refresh();
	void SetItemToRepresent(class UFortItem* Item, int ItemQuantity);
	void AddListEntry(class UFortItemQuantityListEntryBase* ListEntry);
	void Destruct();
	void Construct();
	void ExecuteUbergraph_ItemCraftingIngredientList(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
