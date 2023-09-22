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

// 0xB9 (0x2E1 - 0x228)
// WidgetBlueprintGeneratedClass OptionsMenuSetting.OptionsMenuSetting_C
class UOptionsMenuSetting_C : public UFortOptionsMenuSetting
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(Transient, DuplicateTransient)
	class UButton*                               Button_0;                                          // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonLeft;                                        // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonRight;                                       // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_0;                            // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnalogSlider*                         MenuSlider;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxContainer;                                  // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SliderBackground;                                  // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SliderText;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SliderValue;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               SpacerBottom;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextRotator_C*                        TextRotator;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  SettingValueChanged;                               // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        Total_Width;                                       // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_470D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              Slider_Texture;                                    // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      Tab_Tooltip_Text;                                  // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Hover_Text;                                        // 0x2B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        MinIntegralDigits;                                 // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxIntegralDigits;                                 // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MinFractionalDigits;                               // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxFractionalDigits;                               // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxSensitivityValue;                               // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinSensitivityValue;                               // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERoundingMode                     RoundingMode;                                      // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptionsMenuSetting_C");
		return Clss;
	}

	int32 DoesItemHaveChildren();
	int32 GetIndentLevel();
	bool IsItemExpanded();
	class UObject* GetData();
	void HandlePawnSet(bool bRCPawn, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AFortRemoteControlledPawnAthena* K2Node_DynamicCast_AsFort_Remote_Controlled_Pawn_Athena, bool K2Node_DynamicCast_bSuccess);
	void UpdateSize(const struct FVector2D& LargeSize, const struct FVector2D& SmallSize, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable1, bool Temp_bool_Variable1, bool Temp_bool_Variable12, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable123, bool CallFunc_IsBROnly_ReturnValue, bool CallFunc_IsBROnly_ReturnValue1, const struct FVector2D& K2Node_Select_Default, float Temp_float_Variable, bool CallFunc_IsBROnly_ReturnValue12, float Temp_float_Variable1, const struct FVector2D& K2Node_Select1_Default, bool CallFunc_IsBROnly_ReturnValue123, bool CallFunc_IsBROnly_ReturnValue1234, int32 K2Node_Select12_Default, bool Temp_bool_Variable1234, const struct FVector2D& K2Node_Select123_Default, float K2Node_Select1234_Default);
	void Update_Setting(class UCommonTextBlock* Tooltip_Text_Block, class FName CallFunc_MakeLiteralName_ReturnValue, float CallFunc_GetSettingValue_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue);
	void Center_on_Widget(int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1);
	void OnAcquireFromPool();
	void Private_OnExpanderArrowShiftClicked();
	void RegisterOnClicked(UDelegateProperty_& Callback);
	void SetExpanded(bool bExpanded);
	void SetIndexInList(int32 InIndexInList);
	void SetSelected(bool bSelected);
	void ToggleExpansion();
	void Reset();
	void Construct();
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature();
	void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__TextRotator_K2Node_ComponentBoundEvent_20_OnRotated__DelegateSignature(int32 Value);
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void OnReleaseToPool();
	void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_OptionsMenuSetting(int32 EntryPoint, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable1, int32 Temp_int_Variable12, int32 Temp_int_Variable123, bool Temp_bool_Variable12, int32 Temp_int_Variable1234, int32 Temp_int_Variable12345, bool Temp_bool_Variable123, float Temp_float_Variable12, float Temp_float_Variable123, UDelegateProperty_ K2Node_Event_Callback, bool K2Node_Event_bExpanded, int32 K2Node_Event_InIndexInList, bool K2Node_Event_bSelected, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FPointerEvent& K2Node_Event_MouseEvent1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, float K2Node_ComponentBoundEvent_Value12, float K2Node_ComponentBoundEvent_Value1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor1, float CallFunc_GetValue_ReturnValue, float CallFunc_GetValue_ReturnValue1, float CallFunc_GetValue_ReturnValue12, bool CallFunc_Less_FloatFloat_ReturnValue, int32 K2Node_ComponentBoundEvent_Value, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList, float CallFunc_Conv_IntToFloat_ReturnValue, class UFortSettingInfo* K2Node_DynamicCast_AsFort_Setting_Info, bool K2Node_DynamicCast_bSuccess, int32 K2Node_Select_Default, int32 K2Node_Select1_Default, int32 K2Node_Select12_Default, float K2Node_Select123_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, int32 CallFunc_Conv_ByteToInt_ReturnValue, TArray<class FText>& CallFunc_GetSettingDisplayNames_ReturnValue, bool Temp_bool_Variable1234, float K2Node_Select1234_Default, bool Temp_bool_Variable12345, float K2Node_Select12345_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button1, float CallFunc_Multiply_FloatFloat_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class FText CallFunc_Conv_FloatToText_ReturnValue);
	void SettingValueChanged__DelegateSignature(float Slider_Value);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
