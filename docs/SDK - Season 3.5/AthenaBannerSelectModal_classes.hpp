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

// 0x58 (0x448 - 0x3F0)
// WidgetBlueprintGeneratedClass AthenaBannerSelectModal.AthenaBannerSelectModal_C
class UAthenaBannerSelectModal_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(Transient, DuplicateTransient)
	class UBP_LocalPlayerBannerEditor_C*         BP_LocalPlayerBannerEditor;                        // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CloseAction;                                       // 0x408(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FName                                  LastChosenIcon;                                    // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LastChosenColor;                                   // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   PreviousAction;                                    // 0x428(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   NextAction;                                        // 0x438(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaBannerSelectModal_C");
		return Clss;
	}

	void HandleNextAction(bool* Passthrough);
	void HandlePreviousAction(bool* Passthrough);
	void Setup_Input_Action_Handlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12);
	void HandleCloseAction(bool* Passthrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Construct();
	void BndEvt__BP_LocalPlayerProfileManagement_K2Node_ComponentBoundEvent_14_CloseProfileModal__DelegateSignature();
	void BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature(class FName IconId, class FName ColorId);
	void OnDeactivated();
	void OnActivated();
	void ExecuteUbergraph_AthenaBannerSelectModal(int32 EntryPoint, class FName K2Node_ComponentBoundEvent_IconId, class FName K2Node_ComponentBoundEvent_ColorId, bool CallFunc_HandleCloseAction_PassThrough, bool CallFunc_HandleCloseAction_PassThrough1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
