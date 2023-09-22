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

// 0x7D (0x295 - 0x218)
// WidgetBlueprintGeneratedClass AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C
class UAthenaCustomizationSlotButtonWrapper_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(Transient, DuplicateTransient)
	class UAthenaCustomizationSlotButton_C*      SlotButton;                                        // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  BannerDisplayName;                                 // 0x228(0x18)(Edit, BlueprintVisible)
	enum class EAthenaCustomizationCategory      CustomizationType;                                 // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4223[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnSlotClicked;                                     // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnSlotHovered;                                     // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  CategoryDescription;                               // 0x268(0x18)(Edit, BlueprintVisible)
	UMulticastDelegateProperty_                  OnSlotUnhovered;                                   // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        SubslotIndex;                                      // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBangType                     BangType;                                          // 0x294(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaCustomizationSlotButtonWrapper_C");
		return Clss;
	}

	void PreConstruct(bool IsDesignTime);
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool K2Node_Event_IsDesignTime, class UCommonButton* K2Node_ComponentBoundEvent_Button12, bool CallFunc_CanShowLockerSlotType_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1, enum class ESlateVisibility K2Node_Select_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button);
	void OnSlotUnhovered__DelegateSignature();
	void OnSlotHovered__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class FText BannerLabel, class FText CustomizationDescription, int32 SubslotIndex);
	void OnSlotClicked__DelegateSignature(enum class EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, class FText BannerLabel, int32 Subslot_Index);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
