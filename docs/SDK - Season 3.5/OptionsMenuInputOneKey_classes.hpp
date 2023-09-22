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

// 0x68 (0x280 - 0x218)
// WidgetBlueprintGeneratedClass OptionsMenuInputOneKey.OptionsMenuInputOneKey_C
class UOptionsMenuInputOneKey_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      ActionText;                                        // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ClearButton;                                       // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGamepadKeyButton_C*                   GamepadKeyButton;                                  // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Number_in_List;                                    // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3660[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  Input_Clicked;                                     // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UCommonTextBlock*                      Tab_Tooltip_Text;                                  // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Hover_Text;                                        // 0x258(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastDelegateProperty_                  UnbindClicked;                                     // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptionsMenuInputOneKey_C");
		return Clss;
	}

	int32 DoesItemHaveChildren();
	int32 GetIndentLevel();
	bool IsItemExpanded();
	class UObject* GetData();
	void SetClearButtonVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Center_on_Widget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void SetExpanded(bool bExpanded);
	void SetIndexInList(int32 InIndexInList);
	void SetSelected(bool bSelected);
	void ToggleExpansion();
	void Reset();
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_226_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__GamepadKeyButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void RegisterOnClicked(UDelegateProperty_& Callback);
	void Private_OnExpanderArrowShiftClicked();
	void OnReleaseToPool();
	void OnAcquireFromPool();
	void ExecuteUbergraph_OptionsMenuInputOneKey(int32 EntryPoint, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList, class UFortOptionsMenuInputData* K2Node_DynamicCast_AsFort_Options_Menu_Input_Data, bool K2Node_DynamicCast_bSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool K2Node_Event_bSelected, class FText CallFunc_Format_ReturnValue, int32 K2Node_Event_InIndexInList, bool K2Node_Event_bExpanded, const struct FPointerEvent& K2Node_Event_MouseEvent1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, UDelegateProperty_ K2Node_Event_Callback);
	void UnbindClicked__DelegateSignature(int32 Number_in_List, class UOptionsMenuInputOneKey_C* Widget);
	void Input_Clicked__DelegateSignature(int32 Number_in_List, bool Is_Primary_Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
