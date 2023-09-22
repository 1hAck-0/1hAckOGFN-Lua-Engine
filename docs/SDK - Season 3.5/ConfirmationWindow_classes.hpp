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

// 0x28E (0x67E - 0x3F0)
// WidgetBlueprintGeneratedClass ConfirmationWindow.ConfirmationWindow_C
class UConfirmationWindow_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        ButtonBox;                                         // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 ContentSwitcher;                                   // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Description;                                       // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            DescriptionScroll;                                 // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      HoverDescription;                                  // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            LeftOptionalWidget;                                // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox_NUI;                                      // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        MainContentHorizontalBox;                          // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MainIcon;                                          // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            OptionalWidget;                                    // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              RootOverlay;                                       // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SelectableConfirmButtons;                          // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         TapToCloseZone;                                    // 0x458(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                WaitThrobber;                                      // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortDialogDescription_NUI            ConfirmationDescription;                           // 0x470(0x180)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UIconTextButton_C*>             ConfirmButtons;                                    // 0x5F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UIconTextButton_C*                     DeclineButton;                                     // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          ResultNames;                                       // 0x608(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         bShowingConfirmation;                              // 0x618(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C71[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               ButtonBoxPadding;                                  // 0x61C(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                               ButtonBoxPadding_VerticalBox;                      // 0x62C(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C72[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          HoverTexts;                                        // 0x640(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                          ButtonIconColor;                                   // 0x650(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  WaitThrobberColorParamName;                        // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          WaitThrobberColor;                                 // 0x668(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDialogExternalLatentActionHandle WaitingForLatentActionHandle;                      // 0x678(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         bShowLightBoxAnims;                                // 0x67C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bShouldTriggerCameraModeOnClose;                   // 0x67D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ConfirmationWindow_C");
		return Clss;
	}

	struct FEventReply TapToClose(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void CenterFirstButton(bool Temp_bool_Variable, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* K2Node_Select_Default);
	void CloseConfirmation(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void SetupAdditionalContent(bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void SetupLeftAdditionalContent(bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void SetupNonInteractiveContent();
	void ClickButtonIfBot(bool CallFunc_IsValid_ReturnValue, class UIconTextButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsClientBot_ReturnValue);
	void OnWaitForExternalLatentAction(const struct FFortDialogExternalLatentActionHandle& LatentActionHandle);
	void StopWaitingForLatentAction();
	void GetLatentActionWaitHandle(struct FFortDialogExternalLatentActionHandle* LatentActionHandle);
	void Set_Hover_Description(class UCommonButton* Button_to_Hover, enum class ESlateVisibility Temp_byte_Variable, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class FText CallFunc_Array_Get_Item, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetupLeft();
	void SetupTitleAndDescription(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetupMainIcon(bool CallFunc_IsValid_ReturnValue);
	void Deinitialize();
	void KillCurrentConfirmation(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const struct FFortDialogExternalLatentActionHandle& CallFunc_ProcessConfirmationResult_WaitingDialogHandle);
	void GetResultName(class UIconTextButton_C* ConfirmButton, class FName* ResultName, int32 FoundIndex, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Find_ReturnValue);
	struct FDataTableRowHandle GetInputAction(class FName RowName, bool UseInputAction, bool Temp_bool_Variable, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FDataTableRowHandle& Temp_struct_Variable, const struct FDataTableRowHandle& K2Node_Select_Default);
	void AddSingleConfirmButton(const struct FConfirmationDialogAction& ConfirmDialogAction, bool UseInputAction, class UIconTextButton_C* AddedConfirmButton, bool LocalUseInputAction, const struct FConfirmationDialogAction& LocalConfirmDialogAction, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UIconTextButton_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FDataTableRowHandle& CallFunc_GetInputAction_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_Array_Add_ReturnValue12, int32 CallFunc_GetInputPriority_ReturnValue);
	bool HasAnyConfirmAction(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void ConfirmActionClicked(class UCommonButton* Button, class FName ResultName, int32 FoundIndex, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetResultName_ResultName, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const struct FFortDialogExternalLatentActionHandle& CallFunc_ProcessConfirmationResult_WaitingDialogHandle);
	bool IsSimpleConfirmAction(bool CallFunc_Not_PreBool_ReturnValue);
	void DeclineActionClicked(class UCommonButton* Button, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const struct FFortDialogExternalLatentActionHandle& CallFunc_ProcessConfirmationResult_WaitingDialogHandle);
	void AddDeclineButton(class UIconTextButton_C* CallFunc_Create_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText Temp_text_Variable, int32 CallFunc_GetInputPriority_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void AddConfirmButtons(const struct FConfirmationDialogAction& LocalConfirmDialogAction, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UIconTextButton_C* CallFunc_Array_Get_Item, bool CallFunc_HasAnyConfirmAction_ReturnValue, bool CallFunc_IsSimpleConfirmAction_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FConfirmationDialogAction& CallFunc_Array_Get_Item1, bool CallFunc_Less_IntInt_ReturnValue);
	void Initialize();
	void SetDescription(const struct FFortDialogDescription_NUI& NewDescription);
	void Construct();
	void HandleIntroEnded();
	void HandleOutroEnded();
	void OnBeginIntro();
	void OnBeginOutro();
	void PreConstruct(bool IsDesignTime);
	void OnActivated();
	void ExecuteUbergraph_ConfirmationWindow(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
