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

// WidgetBlueprintGeneratedClass InputReflectorButton.InputReflectorButton_C
// 0x00F8 (0x0C38 - 0x0B40)
class UInputReflectorButton_C : public UCommonPopupButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B40(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                            CenterButtonTextWidget;                                   // 0x0B48(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     ContentBorder;                                            // 0x0B50(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      LeftSideImage;                                            // 0x0B58(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UNamedSlot*                                  RightExtraContentSlot;                                    // 0x0B60(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       ButtonText;                                               // 0x0B68(0x0018) (Edit, BlueprintVisible)
	struct FSlateBrush                                 IconBrush;                                                // 0x0B80(0x0088) (Edit, BlueprintVisible)
	class UClass*                                      ControllerInputStyle;                                     // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MouseKeyboardStyle;                                       // 0x0C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  ContentAlignment;                                         // 0x0C18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMouseKeyboardStyleSet;                                   // 0x0C19(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0C1A(0x0006) MISSED OFFSET
	struct FText                                       OverrideButtonText;                                       // 0x0C20(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InputReflectorButton.InputReflectorButton_C");
		return ptr;
	}


	void ShowIcon(bool bShouldShow);
	void SetTextInternal(struct FText InButtonText);
	void SetInitialMouseKeyboardStyle();
	void UpdateTextStyle();
	void SetContentAlignment(TEnumAsByte<EHorizontalAlignment> ContentAlignment);
	void UpdateContentAlignment();
	void SetMouseKeyboardStyle(class UClass* ControllerInputStyle);
	void UpdateStyle(bool UsingGamepad);
	void UpdateText();
	void SetControllerStyle(class UClass* ControllerInputStyle);
	void UpdateTextAndStyle(bool bUsingGamepad);
	void InitializeButton();
	void Set_Icon(struct FSlateBrush IconBrush);
	void Set_Text(struct FText ButtonText);
	void OnCurrentTextStyleChanged();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent(bool bUsingGamepad);
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle NewTriggeredAction);
	void OnActionProgress(float HeldPercent);
	void OnActionComplete();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_InputReflectorButton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
