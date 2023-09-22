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

// 0x6C (0x8BC - 0x850)
// WidgetBlueprintGeneratedClass ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C
class UItemInspectEvolutionChoiceEntry_C : public UPanelButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x850(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Grow;                                              // 0x858(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              DisabledOverlay;                                   // 0x860(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x868(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x870(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                ItemCard;                                          // 0x878(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnEvolutionChoiceHovered;                          // 0x880(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnEvolutionChoiceUnhovered;                        // 0x890(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnEvolutionChoiceSelected;                         // 0x8A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortItem*                             ItemRepresented;                                   // 0x8B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RecipeIndexRepresented;                            // 0x8B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemInspectEvolutionChoiceEntry_C");
		return Clss;
	}

	void SelectEvolutionChoice();
	void SetItemToRepresent(class UFortItem* Item, int32 RecipeIndex, bool EnabledChoice, class FText DisableReasonText);
	void OnSelected();
	void ExecuteUbergraph_ItemInspectEvolutionChoiceEntry(int32 EntryPoint);
	void OnEvolutionChoiceSelected__DelegateSignature(class UFortItem* Item, int32 RecipeIndex);
	void OnEvolutionChoiceUnhovered__DelegateSignature(class UFortItem* Item);
	void OnEvolutionChoiceHovered__DelegateSignature(class UFortItem* Item, int32 RecipeIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
