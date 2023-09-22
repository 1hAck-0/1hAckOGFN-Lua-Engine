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

// 0x9D (0x47D - 0x3E0)
// WidgetBlueprintGeneratedClass ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C
class UExpeditionSquadSlotPopupMenu_C : public UFortSquadSlotSelectorPopupMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeOut_;                                          // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeIn;                                            // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CancelButton;                                      // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     EditSlotButton;                                    // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     InspectButton;                                     // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainButtonVerticalBox;                             // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  CollectionBookItemSlotId;                          // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanSlotItemInCollectionBook;                       // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E06[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CollectionBookConfirmationDialogTitle;             // 0x428(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  CollectionBookConfirmationDialogMessage;           // 0x440(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                   SlotItemInCollectionBookAction;                    // 0x458(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   BackAction;                                        // 0x468(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FFortDialogExternalLatentActionHandle CollectionBookLatentDialogHandle;                  // 0x478(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	enum class ExpeditionSquadSlotPopupMenuButtons SelectedButton;                                    // 0x47C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ExpeditionSquadSlotPopupMenu_C");
		return Clss;
	}

	void GetItemInSlot(class UFortItem** Item, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UFortSquadSlotSelectorButton* CallFunc_GetHostButton_ReturnValue, class UFortItem* CallFunc_GetItemInSquadSlotBP_ReturnValue);
	void OnActivated();
	void BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnBeginOutro();
	void OnBeginIntro();
	void BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnDeactivated();
	void HandlePostDifferentContextProviderSet();
	void Initialize();
	void ExecuteUbergraph_ExpeditionSquadSlotPopupMenu(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button12, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_SwitchEnum_CmpSuccess, class UFortSquadSlotSelectorButton* CallFunc_GetHostButton_ReturnValue, class UFortItem* CallFunc_GetItemInSlot_Item, bool CallFunc_IsValid_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1, class UFortItem* CallFunc_GetItemInSlot_Item1, class UWidget* CallFunc_GetChildAt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
