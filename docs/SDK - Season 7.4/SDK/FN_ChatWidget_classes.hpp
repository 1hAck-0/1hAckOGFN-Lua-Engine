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

// WidgetBlueprintGeneratedClass ChatWidget.ChatWidget_C
// 0x0070 (0x03C8 - 0x0358)
class UChatWidget_C : public UFortChatPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                           ConsoleChatShortcut;                                      // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                             DEPRECATED_CursorModeSwitcher;                            // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              HudContentHBox;                                           // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UKeybindWidget_C*                            KeybindWidget;                                            // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         CloseUserListAction;                                      // 0x0380(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         OpenUserListAction;                                       // 0x0390(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         CurrentUserListAction;                                    // 0x03A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bEnteringChat;                                            // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x03B1(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty ChatWidget.ChatWidget_C.OnEnteredChat

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatWidget.ChatWidget_C");
		return ptr;
	}


	void HandlePreShowConfirmationDialog(class UFortUIManagerWidget_NUI* Source, struct FFortDialogDescription_NUI* DialogDescription);
	void HandleControllerSendMessagePressed(bool* Handled);
	void HandleRightTabPressed(bool* Handled);
	void HandleLeftTabPressed(bool* Handled);
	void HandleExitPressed(bool* Handled);
	void InitializeChat();
	void BindDelegates();
	void HandleCursorModeChanged(bool bEnabled, struct FName ActionName, class UUserWidget* Widget);
	void HandleShowChatWindow(EFortUIFeature Feature, EFortUIFeatureState FeatureState, EFortUIFeatureStateReason FeatureStateReason);
	void HandeChatEnteredEvent(bool bEnteringChat);
	void UpdateChatUserListIcon(bool Open);
	void Set_Chat_Shortcut_Visibility(ESlateVisibility New_Visibility);
	void Set_Chat_Visibility(ESlateVisibility New_Visibility);
	void Destruct();
	void Construct();
	void BndEvt__FortChat_K2Node_ComponentBoundEvent(bool bOpen);
	void OnActivated();
	void OnDeactivated();
	void HandleInputMethodChanged(bool bUsingGamepad);
	void ExecuteUbergraph_ChatWidget(int EntryPoint);
	void OnEnteredChat__DelegateSignature(bool EnteredChat);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
