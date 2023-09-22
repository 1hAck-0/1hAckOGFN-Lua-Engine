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

// WidgetBlueprintGeneratedClass GamepadKeyTextButton.GamepadKeyTextButton_C
// 0x0150 (0x0C88 - 0x0B38)
class UGamepadKeyTextButton_C : public UFortGamepadCustomListItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B38(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UKeybindWidget_C*                            BoundKey;                                                 // 0x0B40(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     ContentBorder;                                            // 0x0B48(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortRichTextBlock*                          FortRichTextBlock_Desc;                                   // 0x0B50(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortRichTextBlock*                          FortRichTextBlock_NoKey;                                  // 0x0B58(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBox_Nokey;                                            // 0x0B60(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       ButtonText;                                               // 0x0B68(0x0018) (Edit, BlueprintVisible)
	struct FSlateBrush                                 IconBrush;                                                // 0x0B80(0x0088) (Edit, BlueprintVisible)
	class UClass*                                      ControllerInputStyle;                                     // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDataTableRowHandle                         ButtonClickAction;                                        // 0x0C10(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<EHorizontalAlignment>                  ContentAlignment;                                         // 0x0C20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C21(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0C21(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GamepadKeyTextButton.GamepadKeyTextButton_C.ChangeTheBinding_Button
	struct FName                                       ActionNameData;                                           // 0x0C38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKey                                        KeyData;                                                  // 0x0C40(0x0018) (Edit, BlueprintVisible)
	struct FText                                       TextData;                                                 // 0x0C58(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        KeyNone;                                                  // 0x0C70(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GamepadKeyTextButton.GamepadKeyTextButton_C");
		return ptr;
	}


	void SetNonInteractableStyle();
	void SetContentAlignment(TEnumAsByte<EHorizontalAlignment> ContentAlignment);
	void UpdateContentAlignment();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void SetData(struct FKey Key, struct FText DescText, struct FName ActionName);
	void PreConstruct(bool IsDesignTime);
	void SetDataAndUpdateButton(struct FKey Key, struct FText DescText, struct FName ActionName);
	void UpdateButton(class UGamepadKeyTextButton_C* Button);
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo TabLabelInfo);
	void ExecuteUbergraph_GamepadKeyTextButton(int EntryPoint);
	void ChangeTheBinding_Button__DelegateSignature(struct FName ActionName, struct FKey Key);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
