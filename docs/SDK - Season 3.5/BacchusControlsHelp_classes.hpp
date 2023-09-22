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

// 0x38 (0x3F8 - 0x3C0)
// WidgetBlueprintGeneratedClass BacchusControlsHelp.BacchusControlsHelp_C
class UBacchusControlsHelp_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     ButtonSwitcher;                                    // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        PanelButton;                                       // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SBBuilding;                                        // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SBCombat;                                          // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherHelp;                                      // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BacchusControlsHelp_C");
		return Clss;
	}

	void Handle_Close(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Construct();
	void BndEvt__ButtonCombat_K2Node_ComponentBoundEvent_113_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__PanelButton_K2Node_ComponentBoundEvent_29_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_BacchusControlsHelp(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText K2Node_Select_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsBROnly_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
