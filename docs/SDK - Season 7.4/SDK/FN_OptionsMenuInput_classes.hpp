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

// WidgetBlueprintGeneratedClass OptionsMenuInput.OptionsMenuInput_C
// 0x0070 (0x02A8 - 0x0238)
class UOptionsMenuInput_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                           ClearButton;                                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            InputText;                                                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScrollingTextButton_C*                      PrimaryInput;                                             // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScrollingTextButton_C*                      SecondaryInput;                                           // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                Number_in_List;                                           // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0264(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty OptionsMenuInput.OptionsMenuInput_C.Input Clicked
	class UCommonTextBlock*                            Tab_Tooltip_Text;                                         // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FText                                       Hover_Text;                                               // 0x0280(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0298(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty OptionsMenuInput.OptionsMenuInput_C.UnbindClicked

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionsMenuInput.OptionsMenuInput_C");
		return ptr;
	}


	class UObject* GetListItemObject();
	void SetClearButtonVisibility();
	void Change_Key(bool Primary_Key, struct FText Key_To_Sets);
	void Center_on_Widget();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OnMouseLeave(struct FPointerEvent MouseEvent);
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void BndEvt__SecondaryInput_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void BndEvt__PrimaryInput_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
	void ExecuteUbergraph_OptionsMenuInput(int EntryPoint);
	void UnbindClicked__DelegateSignature(int Number_in_List, class UOptionsMenuInput_C* Widget);
	void Input_Clicked__DelegateSignature(int Number_in_List, bool Is_Primary_Button);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
