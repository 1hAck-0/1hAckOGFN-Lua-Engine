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

// 0x80 (0x470 - 0x3F0)
// WidgetBlueprintGeneratedClass AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C
class UAthenaReplayBrowserRenameDialog_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     ConfirmButton;                                     // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 ContentSwitcher;                                   // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     DeclineButton;                                     // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            LeftOptionalWidget;                                // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                         NewNameTextBox;                                    // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         TapToCloseZone;                                    // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                WaitThrobber;                                      // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  WaitThrobberColorParamName;                        // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          WaitThrobberColor;                                 // 0x438(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnConfirmRename;                                   // 0x448(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnCancelRename;                                    // 0x458(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAthenaReplayBrowserRowProxyInstance*  BrowerRowProxy;                                    // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaReplayBrowserRenameDialog_C");
		return Clss;
	}

	void CancelRename();
	struct FEventReply TapToClose(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void OnActivated();
	void BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__NewNameTextBox_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void ExecuteUbergraph_AthenaReplayBrowserRenameDialog(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class FText CallFunc_GetText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText K2Node_ComponentBoundEvent_Text1, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool CallFunc_TextIsEmpty_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess);
	void OnCancelRename__DelegateSignature();
	void OnConfirmRename__DelegateSignature(class UAthenaReplayBrowserRowProxyInstance* BrowserRowProxy, class FText NewName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
