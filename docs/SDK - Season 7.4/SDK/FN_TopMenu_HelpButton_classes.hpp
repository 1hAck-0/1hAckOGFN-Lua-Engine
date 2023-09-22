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

// WidgetBlueprintGeneratedClass TopMenu_HelpButton.TopMenu_HelpButton_C
// 0x0071 (0x02A9 - 0x0238)
class UTopMenu_HelpButton_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                           HelpButtonInner;                                          // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBoxContainer;                                         // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0250(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty TopMenu_HelpButton.TopMenu_HelpButton_C.OnClicked
	unsigned char                                      UnknownData01[0x10];                                      // 0x0260(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty TopMenu_HelpButton.TopMenu_HelpButton_C.OnUpdateVisibility
	unsigned char                                      UnknownData02[0x10];                                      // 0x0270(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty TopMenu_HelpButton.TopMenu_HelpButton_C.OnButtonHovered
	unsigned char                                      UnknownData03[0x28];                                      // 0x0280(0x0028) UNKNOWN PROPERTY: SoftObjectProperty TopMenu_HelpButton.TopMenu_HelpButton_C.HelpContextSoftObject
	bool                                               bLoading;                                                 // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TopMenu_HelpButton.TopMenu_HelpButton_C");
		return ptr;
	}


	ESlateVisibility GetButtonVisibility();
	void OnLoaded_A64379784E473AB391B349B478F10865(class UObject* Loaded);
	void BndEvt__Leave_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent);
	void BndEvt__HelpButtonInner_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_TopMenu_HelpButton(int EntryPoint);
	void OnButtonHovered__DelegateSignature(class UCommonButton* Button);
	void OnUpdateVisibility__DelegateSignature(bool Visibility);
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
