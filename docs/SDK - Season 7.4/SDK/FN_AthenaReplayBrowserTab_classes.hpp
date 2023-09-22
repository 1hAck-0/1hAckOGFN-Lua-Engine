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

// WidgetBlueprintGeneratedClass AthenaReplayBrowserTab.AthenaReplayBrowserTab_C
// 0x0040 (0x0400 - 0x03C0)
class UAthenaReplayBrowserTab_C : public UAthenaReplayBrowserScreenBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ULeaderboardThrobber_C*                      LoadingThrobber;                                          // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               LowerBarBorder;                                           // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           OpenReplayFolder;                                         // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAthenaReplayBrowserRenameDialog_C*          RenameDialog;                                             // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonListView*                             ReplayListView;                                           // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAthenaReplayBrowserRowProxyInstance*        SelectedRowProxy;                                         // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                LoadingTimerHandle;                                       // 0x03F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaReplayBrowserTab.AthenaReplayBrowserTab_C");
		return ptr;
	}


	void OnBackActionExecuted(bool* bPassThrough);
	void OnRenameActionExecuted(bool* bPassThrough);
	void OnDeleteActionExecuted(bool* bPassThrough);
	void OnPlayActionExecuted(bool* bPassThrough);
	void StartAthenaLobbyMusic();
	void RefreshReplayFolderState();
	void DoesSupportReplayFolder(bool* IsSupported);
	void OnShowLoadingThrobber();
	void OnActionStateChanged(bool ActionInProgress);
	void SetupInputActionHandlers();
	void CloseRenameDialog();
	void OnConfirmRename(struct FText NewName);
	void HideInputActions();
	void FocusList();
	void SelectReplay(class UObject* ReplayInfoObject);
	void DialogResult(EFortDialogResult Result, struct FName ResultName);
	void DialogResult_E89869AF460753E34CA097BC86722E95(EFortDialogResult Result, struct FName ResultName);
	void DialogResult_F681A46A43F230E95DCC3F994D03E83C(EFortDialogResult Result, struct FName ResultName);
	void OnRowsUpdated();
	void OnActivated();
	void DeleteReplay(class UAthenaReplayBrowserRowProxyInstance* RowProxy);
	void BndEvt__CommonListView(class UObject* Item);
	void Construct();
	void PlayReplay(class UAthenaReplayBrowserRowProxyInstance* RowProxy);
	void OnInputModeChanged(bool bUsingGamepad);
	void BndEvt__ReplayListView_K2Node_ComponentBoundEvent(class UObject* Item);
	void OnDeleteFailed(struct FText Reason);
	void OnRenameFailed(struct FText Reason);
	void OnSaveFailed(struct FText Reason);
	void OnPlayFailed(struct FText Reason);
	void BndEvt__OpenReplayFolder_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void OnActionStarted();
	void OnActionFinished();
	void ShowDeleteInvalidDialog(struct FText Title, struct FText MESSAGE);
	void ExecuteUbergraph_AthenaReplayBrowserTab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
