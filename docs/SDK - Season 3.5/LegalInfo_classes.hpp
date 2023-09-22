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

// 0x40 (0x430 - 0x3F0)
// WidgetBlueprintGeneratedClass LegalInfo.LegalInfo_C
class ULegalInfo_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         BorderTouch;                                       // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CloseButton;                                       // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_0;                            // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalTabList_C*                  LegalOptions;                                      // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_1;                                         // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LegalInfo_C");
		return Clss;
	}

	struct FEventReply On_BorderTouch_MouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_IsBROnly_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void On_Scroll_Down(bool* Passthrough);
	void Construct();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_68_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void BndEvt__LegalOptions_K2Node_ComponentBoundEvent_101_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void Close();
	void ExecuteUbergraph_LegalInfo(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UCommonButton* K2Node_ComponentBoundEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UEulaTab_C* K2Node_DynamicCast_AsEula_Tab, bool K2Node_DynamicCast_bSuccess, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess1, class UThirdPartyTab_C* K2Node_DynamicCast_AsThird_Party_Tab, bool K2Node_DynamicCast_bSuccess12, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_IsBROnly_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
