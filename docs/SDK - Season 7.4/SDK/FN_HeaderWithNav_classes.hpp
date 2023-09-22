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

// WidgetBlueprintGeneratedClass HeaderWithNav.HeaderWithNav_C
// 0x00C0 (0x02F8 - 0x0238)
class UHeaderWithNav_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                               Border_ChangeFilter;                                      // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           Button_Back;                                              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UNamedSlot*                                  NavigationTabsCenterContentSlot;                          // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UPanelButton_C*                              PageLeftBtn;                                              // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UPanelButton_C*                              PageRightBtn;                                             // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBox_Back;                                             // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            Text_Header;                                              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               NeverShowNavigation;                                      // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0279(0x0007) MISSED OFFSET
	struct FText                                       HeaderText;                                               // 0x0280(0x0018) (Edit, BlueprintVisible)
	class UClass*                                      TextStyle;                                                // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MouseNavIsSupported;                                      // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02A1(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x02A1(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty HeaderWithNav.HeaderWithNav_C.BackButtonPressed
	bool                                               ShowTabs;                                                 // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x02B9(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData04[0x10];                                      // 0x02B9(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty HeaderWithNav.HeaderWithNav_C.ButtonPressed
	int                                                Index;                                                    // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData06[0x10];                                      // 0x02D4(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty HeaderWithNav.HeaderWithNav_C.CycleLeftPressed
	unsigned char                                      UnknownData07[0x10];                                      // 0x02E8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty HeaderWithNav.HeaderWithNav_C.CycleRightPressed

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HeaderWithNav.HeaderWithNav_C");
		return ptr;
	}


	void SetArrowButtonState(bool EnableLeftArrow, bool EnableRightArrow, bool HideInsteadOfEnable);
	void IncludeDefenders(bool* IncludeDefenders);
	void UpdateIndex(bool Increment);
	void SetIndex(int InIndex);
	void SetTextAndUpdate(struct FText Text);
	void Update(bool IsUsingGamepad);
	void Construct();
	void HandleInputMethodChanged(bool bUsingGamepad);
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void BndEvt__PageRightBtn_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void ExecuteUbergraph_HeaderWithNav(int EntryPoint);
	void CycleRightPressed__DelegateSignature();
	void CycleLeftPressed__DelegateSignature();
	void ButtonPressed__DelegateSignature(int InIndex);
	void BackButtonPressed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
