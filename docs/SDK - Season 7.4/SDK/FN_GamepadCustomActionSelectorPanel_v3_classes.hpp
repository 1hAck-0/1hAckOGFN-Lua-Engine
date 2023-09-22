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

// WidgetBlueprintGeneratedClass GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C
// 0x00B8 (0x0400 - 0x0348)
class UGamepadCustomActionSelectorPanel_v3_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     Button_Clear;                                             // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               CommonBorder_Clear;                                       // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonListView*                             CommonListView_GamepadActions;                            // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortRichTextBlock*                          FortRichTextBlock_Clear1;                                 // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortRichTextBlock*                          FortRichTextBlock_Clear2;                                 // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UKeybindWidget_C*                            KeybindWidget_Clear;                                      // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOptionsMenuHeader_C*                        OptionsMenuHeader;                                        // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         Back;                                                     // 0x0388(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0398(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomActionSelected
	TArray<class UFortOptionsMenuInputData*>           CurrentInputData;                                         // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03B8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomClosedUsingBack
	unsigned char                                      UnknownData02[0x10];                                      // 0x03C8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomClearButton
	struct FKey                                        KeyNone;                                                  // 0x03D8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         Clear;                                                    // 0x03F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C");
		return ptr;
	}


	void HandleClear(bool* PassThrough);
	void CreateCustomListItem(struct FName ActionName, EFortInputActionGroup InputActionGroup, class UGamepadKeyTextButton_C** ReturnItem);
	void HandleBack(bool* PassThrough);
	void Construct();
	void UpdatePanel(TArray<class UFortOptionsMenuInputData*> InputData);
	void BP_OnItemClicked_Bind(class UObject* Item);
	void OnActivated();
	void OnDeactivated();
	void BndEvt__Button_Clear_K2Node_ComponentBoundEvent();
	void ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3(int EntryPoint);
	void CustomClearButton__DelegateSignature();
	void CustomClosedUsingBack__DelegateSignature();
	void CustomActionSelected__DelegateSignature(int SelectedIndex, struct FName ActionName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
