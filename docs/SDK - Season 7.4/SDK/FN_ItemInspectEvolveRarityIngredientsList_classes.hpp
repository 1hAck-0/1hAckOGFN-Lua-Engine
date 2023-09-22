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

// WidgetBlueprintGeneratedClass ItemInspectEvolveRarityIngredientsList.ItemInspectEvolveRarityIngredientsList_C
// 0x0070 (0x02A0 - 0x0230)
class UItemInspectEvolveRarityIngredientsList_C : public UUserWidget
{
public:
	class UVerticalBox*                                IngredientsListBox;                                       // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FFortItemQuantityPair>               IngredientsList;                                          // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FSlateColor                                 HaveColor;                                                // 0x0248(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 NotHaveColor;                                             // 0x0270(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                HaveQuantity;                                             // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NeedQuantity;                                             // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemInspectEvolveRarityIngredientsList.ItemInspectEvolveRarityIngredientsList_C");
		return ptr;
	}


	void Add_XP_Cost_to_Upgrade(class UFortItem* Target);
	void ClearIngredients();
	void SetIngredients(class UFortItem* Item, TArray<struct FFortItemQuantityPair>* InIngredients);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
