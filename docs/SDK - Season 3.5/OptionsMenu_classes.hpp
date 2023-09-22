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

// 0x290 (0x680 - 0x3F0)
// WidgetBlueprintGeneratedClass OptionsMenu.OptionsMenu_C
class UOptionsMenu_C : public UFortOptionsMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         BorderBackground;                                  // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CurrentTabSwitcher;                                // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     LanguageOk;                                        // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         MESSAGE;                                           // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      OverlayText;                                       // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ResetCustomGamepadToDefaultNo;                     // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ResetCustomGamepadToDefaultYes;                    // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ResetGameOptionsToDefaultNo;                       // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ResetGameOptionsToDefaultYes;                      // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ResetHUDOptionsToDefaultNo;                        // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ResetHUDOptionsToDefaultYes;                       // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ResetKBMToDefaultNo;                               // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ResetKBMToDefaultYes;                              // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_1;                                        // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            SavingLayer;                                       // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalTabList_C*                  SettingsTabs;                                      // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     VideoSettingsAccept;                               // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     VideoSettingsCancel;                               // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SelectedOption;                                    // 0x4A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Current_Tab;                                       // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Accept_Input;                                      // 0x4B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Video_Tab_Selected;                                // 0x4B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Apply_Visible;                                     // 0x4B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47A6[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortOptionsTab*>               AllTabWidgets;                                     // 0x4B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UProgressModalWidget_C*                SavingModal;                                       // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                VideoTabClass;                                     // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                AccountTabClass;                                   // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GamepadTabClass;                                   // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                InputTabClass;                                     // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LoadCount;                                         // 0x4F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UObject>                 TabGamePad;                                        // 0x4F8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UObject>                 TabAccount;                                        // 0x520(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UObject>                 TabVideoOptions;                                   // 0x548(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UObject>                 TabInputOptions;                                   // 0x570(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ApplyAction;                                       // 0x598(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ResetGameOptionsToDefaultAction;                   // 0x5A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ResetHUDToDefaultAction;                           // 0x5B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ToggleModeAction;                                  // 0x5C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ResetToDefault;                                    // 0x5D8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   Restore;                                           // 0x5E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   Back;                                              // 0x5F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          ResetVideoOptionsTimer;                            // 0x608(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TSoftClassPtr<class UObject>                 TabAccessibilityOptions;                           // 0x610(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                AccessibilityTabClass;                             // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ResetCustomGamepadToDefault;                       // 0x640(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor)
	TSoftClassPtr<class UObject>                 TabBrightnessOptions;                              // 0x650(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                BrightnessTabClass;                                // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptionsMenu_C");
		return Clss;
	}

	void DoResetKBMToDefault();
	void HandleResetCustomGamepadToDefault(bool* Passthrough);
	void UpdateAllOptionsTabs(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFortOptionsTab* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void HandleTabAccessibilityOptionsActionHandlerStates(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, enum class EInputActionState K2Node_Select_Default);
	void ResetActionHandlerStates(bool DisableBack, bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, enum class EInputActionState K2Node_Select_Default);
	void UpdateBasedOnActiveWidget(class UObject* ActiveWidget, bool ShouldCenterOnTab, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess, class UTabGameOptions_C* K2Node_DynamicCast_AsTab_Game_Options, bool K2Node_DynamicCast_bSuccess1, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue1, bool CallFunc_ClassIsChildOf_ReturnValue, class UTabAccessibilityOptions_C* K2Node_DynamicCast_AsTab_Accessibility_Options, bool K2Node_DynamicCast_bSuccess12, class UFortAudioOptions* K2Node_DynamicCast_AsFort_Audio_Options, bool K2Node_DynamicCast_bSuccess123, class UTabBrightnessOptions_C* K2Node_DynamicCast_AsTab_Brightness_Options, bool K2Node_DynamicCast_bSuccess1234, class UClass* CallFunc_GetObjectClass_ReturnValue12, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess12345, bool CallFunc_ClassIsChildOf_ReturnValue1, bool CallFunc_ClassIsChildOf_ReturnValue12);
	void ApplySettings(class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue);
	void DoResetHUDOptionsToDefault();
	void DoResetGameOptionsToDefault();
	void HandleTabGameOptionsActionHandlerStates(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, enum class EInputActionState K2Node_Select_Default);
	void HandleTabAccountLinkageActionHandlerStates();
	void HandleTabGamepadConfigActionHandlerStates(int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UTabGamePadConfig_C* K2Node_DynamicCast_AsTab_Game_Pad_Config, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCustomConfig_ReturnValue);
	void HandleTabFortAudioOptionsActionHandlerStates(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, enum class EInputActionState K2Node_Select_Default);
	void HandleTabVideoOptionsActionHandlerStates(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, enum class EInputActionState K2Node_Select_Default);
	void HandleTabBrightnessOptionsActionHandlerStates(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, enum class EInputActionState K2Node_Select_Default);
	void HandleTabInputOptionsActionHandlerStates(class UTabInputOptions_C* TabInputOptionsActor);
	void HandleTabGameOptionsResetActionHandlerStates(int32 ActiveWidgetIndex, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, int32 Temp_int_Variable, enum class EInputActionState Temp_byte_Variable12, enum class EInputActionState Temp_byte_Variable123, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, enum class EInputActionState K2Node_Select_Default, int32 Temp_int_Variable1, enum class EInputActionState K2Node_Select1_Default);
	void HandleResetGameOptionsToDefault(bool* Passthrough);
	void CenterOnActiveTab(int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess);
	void Handle_Reset_HUD_Default(bool* Passthrough);
	void SetBackground(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue);
	void AddTab(class UClass* WidgetClass, class FText DisplayName, class FName NameId, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortOptionsTab* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_RegisterFortTab_ReturnValue);
	void HandleCursorModeChanging(bool IsEnabled, bool CallFunc_Not_PreBool_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsActivated_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Handle_Toggle_Mode(bool* Passthrough, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortGamepadInputOptions* K2Node_DynamicCast_AsFort_Gamepad_Input_Options, bool K2Node_DynamicCast_bSuccess);
	void Set_Input_Action_Handlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456);
	void HandleBack(bool* Passthrough);
	void Handle_Reset(bool* Passthrough);
	void HandleResetKBMToDefault(bool* Passthrough);
	void Handle_Apply(bool* Passthrough, bool CallFunc_NeedsLanguageChangeConfirmation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_NeedsLanguageChangeConfirmation_ReturnValue1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_NeedsVideoChangeConfirmation_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UTabGamePadConfig_C* K2Node_DynamicCast_AsTab_Game_Pad_Config, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_Add_IntInt_ReturnValue);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Initialize(class FText Temp_text_Variable, class FText Temp_text_Variable1, bool CallFunc_ShowBrightnessOptions_ReturnValue, bool Temp_bool_Variable, bool CallFunc_ShowAccessibilityOptions_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_ShowAccountOptions_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UProgressModalWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_ShowControllerOptions_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_HasWidgets_ReturnValue, class FText K2Node_Select_Default, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess, class FText Temp_text_Variable12, bool CallFunc_ShowInputOptions_ReturnValue, class FText Temp_text_Variable123, bool CallFunc_ShowVideoOptions_ReturnValue);
	void DialogResult_360436EF48DEEFB10FA2CAA85B0BEA8F(enum class EFortDialogResult Result, class FName ResultName);
	void OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426(class UClass* Loaded);
	void OnLoaded_56F757014AB176CE2140009FB54D0D23(class UClass* Loaded);
	void OnLoaded_488EE90943BFF7AA4DB2049A7D72238C(class UClass* Loaded);
	void OnLoaded_598823E641B8288CD371F0B50BE07C91(class UClass* Loaded);
	void OnLoaded_B8BA00A14ACF4BA8F4B657B2B247D3CD(class UClass* Loaded);
	void OnLoaded_EF0A182C49925D83A3E55080FA222F7D(class UClass* Loaded);
	void BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Destruct();
	void Tab_Setting_Changed();
	void OnActivated();
	void Disable_Overlay_Input();
	void Gamepad_Changed(bool Gamepad_Enabled);
	void BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void HandleBenchmarkComplete();
	void BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleSettingsErrorMessageClosed();
	void OnHandleBack();
	void Disable_Overlay();
	void Enable_Overlay_Video(bool Accept_Input);
	void Enable_Overlay_Input(bool Accept_Input, class FText Overlay_Text);
	void TabGameOptions_OnActiveWidgetChanged_Bind(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void BndEvt__ResetGameOptionsToDefaultYes_K2Node_ComponentBoundEvent_461_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ResetGameOptionsToDefaultNo_K2Node_ComponentBoundEvent_484_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ResetHUDOptionsToDefaultYes_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ResetHUDOptionsToDefaultNo_K2Node_ComponentBoundEvent_533_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ShowResetGameOptionsToDefaultMessage();
	void ShowResetHUDOptionToDefaultMessage();
	void HandleSettingsSaveComplete();
	void OnDeactivated();
	void LoadTabClasses();
	void ResetVideoOptionsTimerDelegate();
	void BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void ShowResetCustomGamepadToDefaultMessage();
	void BndEvt__ResetCustomGamepadToDefaultYes_K2Node_ComponentBoundEvent_202_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ResetCustomGamepadToDefaultNo_K2Node_ComponentBoundEvent_228_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__ResetKBMToDefaultYes_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ResetKBMToDefaultNo_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ShowResetKBMToDefaultMessage();
	void ExecuteUbergraph_OptionsMenu(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, class UClass* K2Node_CustomEvent_Loaded12345, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_CustomEvent_Loaded1234, class UClass* Temp_class_Variable1, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab1, bool K2Node_ClassDynamicCast_bSuccess1, class UClass* K2Node_CustomEvent_Loaded123, class UClass* Temp_class_Variable12, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab12, bool K2Node_ClassDynamicCast_bSuccess12, class UClass* K2Node_CustomEvent_Loaded12, class UClass* Temp_class_Variable123, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab123, bool K2Node_ClassDynamicCast_bSuccess123, class UClass* K2Node_CustomEvent_Loaded1, class UClass* Temp_class_Variable1234, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab1234, bool K2Node_ClassDynamicCast_bSuccess1234, class UClass* K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable12345, class UClass* K2Node_ClassDynamicCast_AsFort_Options_Tab12345, bool K2Node_ClassDynamicCast_bSuccess12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_MakeLiteralText_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678910, class UCommonButton* K2Node_ComponentBoundEvent_Button123456789, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortVideoOptions* K2Node_DynamicCast_AsFort_Video_Options, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortOptionsTab* K2Node_DynamicCast_AsFort_Options_Tab, bool K2Node_DynamicCast_bSuccess1, class UTabGamePadConfig_C* K2Node_DynamicCast_AsTab_Game_Pad_Config, bool K2Node_DynamicCast_bSuccess12, class UTabGameOptions_C* K2Node_DynamicCast_AsTab_Game_Options, bool K2Node_DynamicCast_bSuccess123, class UTabVideoOptions_C* K2Node_DynamicCast_AsTab_Video_Options, bool K2Node_DynamicCast_bSuccess1234, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options, bool K2Node_DynamicCast_bSuccess12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_Gamepad_Enabled, enum class EInputActionState K2Node_Select_Default, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class FName CallFunc_GetActiveTab_ReturnValue, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess123456, bool CallFunc_EqualEqual_NameName_ReturnValue, enum class EFortDialogResult Temp_byte_Variable12, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Handle_Reset_PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class FName Temp_name_Variable, bool CallFunc_Handle_Reset_PassThrough1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, bool K2Node_CustomEvent_Accept_Input1, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, bool K2Node_CustomEvent_Accept_Input, class FText K2Node_CustomEvent_Overlay_Text, class UWidget* K2Node_CustomEvent_ActiveWidget, int32 K2Node_CustomEvent_ActiveWidgetIndex, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567, class UCommonButton* K2Node_ComponentBoundEvent_Button123456, class UCommonButton* K2Node_ComponentBoundEvent_Button12345, class UCommonButton* K2Node_ComponentBoundEvent_Button1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, bool CallFunc_ShowVideoOptions_ReturnValue, bool CallFunc_ShowAccountOptions_ReturnValue, bool CallFunc_ShowControllerOptions_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, bool CallFunc_ShowInputOptions_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsInZone_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789, bool CallFunc_IsVisible_ReturnValue1, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue1, class UWidget* CallFunc_GetActiveWidget_ReturnValue12, class UWidget* CallFunc_GetActiveWidget_ReturnValue123, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, class UFortHUDContext* CallFunc_GetContext_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112, bool CallFunc_ShowAccessibilityOptions_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button123, class UCommonButton* K2Node_ComponentBoundEvent_Button12, class UWidget* CallFunc_GetActiveWidget_ReturnValue1234, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112131415, bool CallFunc_ShowBrightnessOptions_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UWidget* CallFunc_GetActiveWidget_ReturnValue12345, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options1, bool K2Node_DynamicCast_bSuccess1234567, class UWidget* CallFunc_GetActiveWidget_ReturnValue123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213141516, class UTabInputOptions_C* K2Node_DynamicCast_AsTab_Input_Options12, bool K2Node_DynamicCast_bSuccess12345678, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314151617, class UWidget* CallFunc_GetActiveWidget_ReturnValue1234567, class UTabGamePadConfig_C* K2Node_DynamicCast_AsTab_Game_Pad_Config1, bool K2Node_DynamicCast_bSuccess123456789, class UTabGamePadConfig_C* K2Node_DynamicCast_AsTab_Game_Pad_Config12, bool K2Node_DynamicCast_bSuccess12345678910);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
