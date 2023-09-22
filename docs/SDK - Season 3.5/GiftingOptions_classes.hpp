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

// 0x18 (0x388 - 0x370)
// WidgetBlueprintGeneratedClass GiftingOptions.GiftingOptions_C
class UGiftingOptions_C : public UFortGiftingOptionsPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(Transient, DuplicateTransient)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_GiftSteps;                    // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_GiftBoxes;                                 // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GiftingOptions_C");
		return Clss;
	}

	void BndEvt__BackToRecipientButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_58_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ShowFriendSelection();
	void AllowGiftWrapSelection(bool bIsAllowed);
	void ExecuteUbergraph_GiftingOptions(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_bIsAllowed);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
