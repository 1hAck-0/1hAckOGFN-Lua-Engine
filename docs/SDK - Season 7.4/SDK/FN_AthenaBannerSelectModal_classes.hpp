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

// WidgetBlueprintGeneratedClass AthenaBannerSelectModal.AthenaBannerSelectModal_C
// 0x0060 (0x03A8 - 0x0348)
class UAthenaBannerSelectModal_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                               BorderTouch;                                              // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBP_LocalPlayerBannerEditor_C*               BP_LocalPlayerBannerEditor;                               // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class ULightbox_C*                                 Lightbox;                                                 // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         CloseAction;                                              // 0x0368(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       LastChosenIcon;                                           // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LastChosenColor;                                          // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         PreviousAction;                                           // 0x0388(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         NextAction;                                               // 0x0398(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaBannerSelectModal.AthenaBannerSelectModal_C");
		return ptr;
	}


	struct FEventReply On_BorderTouch_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent);
	void HandleNextAction(bool* PassThrough);
	void HandlePreviousAction(bool* PassThrough);
	void Setup_Input_Action_Handlers();
	void HandleCloseAction(bool* PassThrough);
	void Construct();
	void BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent();
	void BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent(struct FName IconId, struct FName ColorId);
	void OnDeactivated();
	void OnActivated();
	void Close();
	void ExecuteUbergraph_AthenaBannerSelectModal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
