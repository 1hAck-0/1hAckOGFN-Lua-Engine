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

// 0x90 (0x530 - 0x4A0)
// WidgetBlueprintGeneratedClass ItemReceived_Base.ItemReceived_Base_C
class UItemReceived_Base_C : public UFortItemReceivedWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_BattlePassUnlockAnim_C*            BP_BattlePassUnlockAnim;                           // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CloseButton;                                       // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     EquipButton;                                       // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemTileView*                     FortItemTileView_0;                                // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBoxActions;                              // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageRarityFlare;                                  // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInfoWidget_C*                     ItemInfoWidget;                                    // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          LeftContainer;                                     // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        ItemSelectionIndex;                                // 0x4F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AnimationIndex;                                    // 0x4F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RolloutTime;                                       // 0x4F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AnimationIndexCached;                              // 0x4FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         B;                                                 // 0x500(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C25[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  FinalOnGiftingComplete;                            // 0x508(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         NewVar_0;                                          // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C26[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentUserSelectedIndex;                          // 0x51C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsBattlePassUpgrade;                              // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C27[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            SoundOnItemReceived;                               // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemReceived_Base_C");
		return Clss;
	}

	void Clicked(class UCommonButton* NewParam);
	void HandleSelectionIncrement(bool Increment, int32* Index, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HandleRight(enum class EUINavigation Nav_Enum, class UWidget** NewParam, enum class EUINavigation Temp_byte_Variable, class UWidget* Temp_object_Variable, class UWidget* Temp_object_Variable1, class UWidget* Temp_object_Variable12, class UWidget* Temp_object_Variable123, class UWidget* Temp_object_Variable1234, int32 CallFunc_HandleSelectionIncrement_Index, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* K2Node_Select_Default);
	void HandleLeft(enum class EUINavigation Navigation_Enum, class UWidget** NewParam, enum class EUINavigation Temp_byte_Variable, class UWidget* Temp_object_Variable, class UWidget* Temp_object_Variable1, class UWidget* Temp_object_Variable12, class UWidget* Temp_object_Variable123, class UWidget* Temp_object_Variable1234, int32 CallFunc_HandleSelectionIncrement_Index, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* K2Node_Select_Default);
	void UpdateFromHoverState(const struct FFortReceivedItemLootInfo& Loot);
	class UItemCardWidget_C* AddItemCard(const struct FFortReceivedItemLootInfo& NewParam, class UItemCardWidget_C* CallFunc_Create_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FMargin& K2Node_MakeStruct_Margin, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess);
	void UpdateFromItemReceivedInfo(const struct FFortReceivedItemLootInfo& Loot, bool Select, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue);
	void HandleBack(bool* Passthrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void AnimateRollout();
	void Right();
	void Left();
	void UpdateRarityFlare();
	void SelectItem(int32 Index, bool CenterWidget);
	void OnGiftBoxItemSet();
	void OnActivated();
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void CustomEvent_0();
	void Construct();
	void BndEvt__EquipButton_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnInputModeChanged(bool bUsingGamepad);
	void Check_if_Battlepass_upgrade();
	void Rollout_Items_Received();
	void Play_BattlePass_Upgrade_Anim();
	void OnBattlepassAnimFinished();
	void ExecuteUbergraph_ItemReceived_Base(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, bool CallFunc_Array_IsValidIndex_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FFortReceivedItemLootInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, int32 K2Node_CustomEvent_Index, bool K2Node_CustomEvent_CenterWidget, class UFortGiftBoxItemDefinition* CallFunc_GetGiftBoxDefinition_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UItemCardWidget_C* K2Node_DynamicCast_AsItem_Card_Widget, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_Create_ReturnValue, class UItemReceivedHeaderSubWidgetBase_C* K2Node_DynamicCast_AsItem_Received_Header_Sub_Widget_Base, bool K2Node_DynamicCast_bSuccess1, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, class UWidget* CallFunc_GetChildAt_ReturnValue1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UItemCardWidget_C* K2Node_DynamicCast_AsItem_Card_Widget1, bool K2Node_DynamicCast_bSuccess12, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FFortReceivedItemLootInfo& CallFunc_Array_Get_Item1, class UItemCardWidget_C* CallFunc_AddItemCard_ReturnValue, const struct FFortReceivedItemLootInfo& CallFunc_Array_Get_Item12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, bool CallFunc_HandleBack_PassThrough, int32 Temp_int_Loop_Counter_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable1, bool CallFunc_Greater_IntInt_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue1, TArray<class UFortItem*>& CallFunc_GetItemInstancesByDefinition_Items, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue12, class UFortItem* CallFunc_Array_Get_Item123, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess123, bool K2Node_Event_bUsingGamepad, bool CallFunc_IsFavorite_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123, const struct FFortReceivedItemLootInfo& CallFunc_Array_Get_Item1234, int32 CallFunc_Array_Length_ReturnValue12, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue12, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void FinalOnGiftingComplete__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
