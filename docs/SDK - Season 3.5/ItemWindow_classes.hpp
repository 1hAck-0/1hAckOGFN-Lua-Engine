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

// 0xBC (0x4AC - 0x3F0)
// WidgetBlueprintGeneratedClass ItemWindow.ItemWindow_C
class UItemWindow_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     CloseButton;                                       // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                         EntryIcon;                                         // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      EntryText;                                         // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                FortItemCard_M_0;                                  // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                FortItemCard_XXSSchematicItemCard;                 // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ItemButtonBox;                                     // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_1;                                         // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxDetails;                                    // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher;                                          // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherRewardType;                                // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButtonGroup*                    Item_Buttons;                                      // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Common_Button_Group_Type;                          // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItemDefinition*>           Item_Definitions;                                  // 0x468(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FMargin                               ItemEntryPadding;                                  // 0x478(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UFortItem*                             CurrentItemDef;                                    // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   ItemDef;                                           // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             InfoItemDef;                                       // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemEntry_C*                          LastEntry;                                         // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LastIndex;                                         // 0x4A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemWindow_C");
		return Clss;
	}

	void Set_Description_Text(class UFortItemDefinition* Item_Definition, class UCommonTextBlock* Text_Box_to_Set, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue);
	void InternalToExternalRarity(enum class EFortRarity InRarity, class FText* ExternalRarity, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleButton(class UWidget* Content, int32 Index, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize);
	void Initialize(class UCommonButtonGroup* CallFunc_SpawnObject_ReturnValue);
	void AddInfo(TArray<class UFortItemDefinition*>& Info_Items, class FText Title, int32 CallFunc_Array_Length_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue1, class UItemEntry_C* CallFunc_Create_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFortItemDefinition* CallFunc_Array_Get_Item, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class FText CallFunc_GetPrimaryCategory_ItemCategoryText, bool CallFunc_GetPrimaryCategory_ReturnValue, class FText CallFunc_InternalToExternalRarity_ExternalRarity, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData12, class FText CallFunc_GetDisplayName_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData123, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue1, class FText CallFunc_GetDisplayName_ReturnValue12, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1234, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array12, class FText CallFunc_Format_ReturnValue12, int32 Temp_int_Variable, class FText CallFunc_GetDisplayName_ReturnValue123, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData12345, int32 Temp_int_Variable1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array123, class FText CallFunc_Format_ReturnValue123, bool Temp_bool_Variable1, int32 K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select1_Default);
	void OnSelectedButtonChanged_Event_0(class UCommonButton* AssociatedButton, int32 ButtonIndex);
	void Destruct();
	void Construct();
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_ItemWindow(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UCommonButton* K2Node_CustomEvent_AssociatedButton, int32 K2Node_CustomEvent_ButtonIndex, class UFortItemDefinition* CallFunc_Array_Get_Item, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue12, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue123, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue1234, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue12345);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
