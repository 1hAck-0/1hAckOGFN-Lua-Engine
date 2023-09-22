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

// WidgetBlueprintGeneratedClass OptionsMenuRowSelector.OptionsMenuRowSelector_C
// 0x0094 (0x02FC - 0x0268)
class UOptionsMenuRowSelector_C : public UFortOptionsMenuSetting
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                           ButtonTouchTooltip;                                       // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMenuAnchor*                                 MenuAnchorSettingDescription;                             // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            RowSelectorText;                                          // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              SelectorButtonsBox;                                       // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBoxLabel;                                             // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0298(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty OptionsMenuRowSelector.OptionsMenuRowSelector_C.Selector Button Selected
	TArray<struct FText>                               Hover_Texts;                                              // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCommonButtonGroup*                          Selector_Buttons;                                         // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Common_Button_Group_Type;                                 // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCommonTextBlock*                            Tab_Tooltip_Text;                                         // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UClass*                                      ButtonStyle;                                              // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                Tooltip_Timer;                                            // 0x02D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Hover_Text;                                               // 0x02E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                PreviousValue;                                            // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionsMenuRowSelector.OptionsMenuRowSelector_C");
		return ptr;
	}


	class UObject* GetListItemObject();
	void Hide_Tooltip();
	void Set_Selection_Required(bool Selection_Required);
	class UWidget* On_Get_Menu_Content();
	void Show_Tooltip();
	void DisableOption(int OptionIndex);
	void Button_Hovered(class UCommonButton* Button_Hovered);
	void Deselect_All_Rows();
	void Update_Row_Selector(int Tab_Number);
	void Initialize_Row_Selector(struct FText Row_Text, bool Require_Selection, class UCommonTextBlock* Tab_Tooltip, TArray<struct FText>* Buttons, TArray<struct FText>* Hover_Texts);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void Construct();
	void OnMouseLeave(struct FPointerEvent MouseEvent);
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent);
	void UpdateSetting(class UCommonTextBlock* TooltipTextBlock);
	void CenterOnWidget();
	void OnSelectedButtonChanged_Event_1(class UCommonButton* AssociatedButton, int ButtonIndex);
	void BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void ExecuteUbergraph_OptionsMenuRowSelector(int EntryPoint);
	void Selector_Button_Selected__DelegateSignature(int Tab_Id);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
