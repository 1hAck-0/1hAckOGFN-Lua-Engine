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

// 0xF0 (0x580 - 0x490)
// WidgetBlueprintGeneratedClass Feedback.Feedback_C
class UFeedback_C : public UFortGameFeedbackBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     BugButton;                                         // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CancelButton;                                      // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CommentButton;                                     // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       EntryProgressSwitcher;                             // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          EntryVbox;                                         // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_AutofillPlayerNameContainer;                    // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          InteractableVBox;                                  // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MainIcon;                                          // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     PlayerButton;                                      // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     PopulateName_Killer_Button;                        // 0x4F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     PopulateName_Spectator_Button;                     // 0x4F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ProgressSizeBox;                                   // 0x500(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ProgressVBox;                                      // 0x508(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               RootBorder;                                        // 0x510(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              RootOverlay;                                       // 0x518(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     SendButton;                                        // 0x520(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         TouchToCloseZone;                                  // 0x530(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  NewVar_0;                                          // 0x538(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  KillersName;                                       // 0x550(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  SpectatingName;                                    // 0x568(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Feedback_C");
		return Clss;
	}

	struct FEventReply TouchToClose(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void SetupAutoFillPlayerFields(class FText KillersName, class FText SpectatingName, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue1);
	void Setup_For_Reporting_Player(class FText PlayerName, bool CallFunc_TextIsEmpty_ReturnValue);
	void InitializeFeedback();
	bool IsAllTextNotEmpty(class FText CallFunc_GetText_ReturnValue, class FText CallFunc_GetText_ReturnValue1, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue);
	void AddButtonFeedbackTypes();
	void BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
	void OnBeginIntro();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleTextChanged(class FText& Text);
	void OnActivated();
	void ForceSelect_PopulateName_Killer_Button();
	void ForceSelect_PopulateName_Spectator_Button();
	void BndEvt__PopulateName_Spectator_Button_K2Node_ComponentBoundEvent_629_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected);
	void BndEvt__PopulateName_Killer_Button_K2Node_ComponentBoundEvent_664_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected);
	void OnInitiateDebugInfoForFeedbackComplete();
	void Construct();
	void ExecuteUbergraph_Feedback(int32 EntryPoint, bool Temp_bool_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button123, class UCommonButton* K2Node_ComponentBoundEvent_Button12, class FText K2Node_CustomEvent_Text, bool CallFunc_IsAllTextNotEmpty_ReturnValue, bool CallFunc_IsAllTextNotEmpty_ReturnValue1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_GetSelected_ReturnValue, class UIconTextButton_C* K2Node_Select_Default, bool CallFunc_GetSelected_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button1, bool K2Node_ComponentBoundEvent_Selected1, bool CallFunc_GetSelected_ReturnValue12, bool CallFunc_GetSelected_ReturnValue123, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_Selected, bool CallFunc_GetSelected_ReturnValue1234);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
