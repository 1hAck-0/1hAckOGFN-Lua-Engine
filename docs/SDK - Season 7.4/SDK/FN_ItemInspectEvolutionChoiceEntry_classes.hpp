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

// WidgetBlueprintGeneratedClass ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C
// 0x006D (0x0BE5 - 0x0B78)
class UItemInspectEvolutionChoiceEntry_C : public UPanelButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B78(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Grow;                                                     // 0x0B80(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOverlay*                                    DisabledOverlay;                                          // 0x0B88(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Image_1;                                                  // 0x0B90(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Image_2;                                                  // 0x0B98(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortMultiSizeItemCard*                      ItemCard;                                                 // 0x0BA0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0BA8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnEvolutionChoiceHovered
	unsigned char                                      UnknownData01[0x10];                                      // 0x0BB8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnEvolutionChoiceUnhovered
	unsigned char                                      UnknownData02[0x10];                                      // 0x0BC8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C.OnEvolutionChoiceSelected
	class UFortItem*                                   ItemRepresented;                                          // 0x0BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RecipeIndexRepresented;                                   // 0x0BE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsEvolutionEnabled;                                      // 0x0BE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemInspectEvolutionChoiceEntry.ItemInspectEvolutionChoiceEntry_C");
		return ptr;
	}


	void SelectEvolutionChoice();
	void SetItemToRepresent(class UFortItem* Item, int RecipeIndex, bool EnabledChoice);
	void BP_OnSelected();
	void ExecuteUbergraph_ItemInspectEvolutionChoiceEntry(int EntryPoint);
	void OnEvolutionChoiceSelected__DelegateSignature(class UFortItem* Item, int RecipeIndex);
	void OnEvolutionChoiceUnhovered__DelegateSignature(class UFortItem* Item);
	void OnEvolutionChoiceHovered__DelegateSignature(class UFortItem* Item, int RecipeIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
