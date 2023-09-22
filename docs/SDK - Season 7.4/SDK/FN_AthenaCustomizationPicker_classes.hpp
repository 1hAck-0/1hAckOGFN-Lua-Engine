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

// WidgetBlueprintGeneratedClass AthenaCustomizationPicker.AthenaCustomizationPicker_C
// 0x0040 (0x03E0 - 0x03A0)
class UAthenaCustomizationPicker_C : public UAthenaCustomizationPicker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                            Text_FilterName;                                          // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class URichTextBlock*                              TextBlock_NoItemAvailable;                                // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                             WidgetSwitcher_DisplayItemAvailability;                   // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x03C0(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnDisableSaveButton
	unsigned char                                      UnknownData01[0x10];                                      // 0x03D0(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnEnableSaveButton

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaCustomizationPicker.AthenaCustomizationPicker_C");
		return ptr;
	}


	void HandleDifferentFilterSetBP();
	void OnNoItemsAvailableInFilter(struct FText EmptyDisplayText);
	void OnItemsAvailableInFilter();
	void ExecuteUbergraph_AthenaCustomizationPicker(int EntryPoint);
	void OnEnableSaveButton__DelegateSignature();
	void OnDisableSaveButton__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
