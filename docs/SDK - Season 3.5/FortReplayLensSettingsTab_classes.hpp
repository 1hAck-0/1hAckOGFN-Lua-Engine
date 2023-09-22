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

// 0x94 (0x494 - 0x400)
// WidgetBlueprintGeneratedClass FortReplayLensSettingsTab.FortReplayLensSettingsTab_C
class UFortReplayLensSettingsTab_C : public UFortReplayViewSettingsTabBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(Transient, DuplicateTransient)
	class URotatorSelectorReplaySettings_C*      ApertureSelector;                                  // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*            ApertureSlider;                                    // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*      AutoExposureSelector;                              // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*      AutoFocusSelector;                                 // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*            ExposureSlider;                                    // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*      FocalLengthSelector;                               // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*            FocalLengthSlider;                                 // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*            FocusDistanceSlider;                               // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        MaxFocusDistance;                                  // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DefaultNormalizedFocusDistance;                    // 0x44C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                AvailableApertures;                                // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FText>                          ApertureTexts;                                     // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                AvailableFocalLengths;                             // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FText>                          FocalLengthTexts;                                  // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        CustomFocalLengthIndex;                            // 0x490(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortReplayLensSettingsTab_C");
		return Clss;
	}

	void InitFocalLengthOptions(float CurrentFocalLength, bool bDoInsert, float InFocalLength, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, float CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue1, class FText K2Node_Select_Default, int32 CallFunc_Array_Add_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, float CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void SetFocusDistanceWidget(class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue, class FText CallFunc_GetText_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void SetFocusVisibility(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetExposureVisibility(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetWidgetValues();
	void OnActivated();
	void BndEvt__AutoExposure_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__AutoFocus_K2Node_ComponentBoundEvent_6_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__Exposure_K2Node_ComponentBoundEvent_1_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__Aperture_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__FocalLength_K2Node_ComponentBoundEvent_3_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__FocusDistance_K2Node_ComponentBoundEvent_4_SliderChanged__DelegateSignature(float Slider_Value);
	void OnCameraTypeChanged(class AFortPlayerControllerSpectating* FortPlayerControllerSpectating, enum class ESpectatorCameraType CameraType);
	void ResetToDefault();
	void CenterOnTab();
	void BndEvt__ApertureSelector_K2Node_ComponentBoundEvent_61_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__FocalLengthSelector_K2Node_ComponentBoundEvent_40_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void PreConstruct(bool IsDesignTime);
	void InitializeWidgets();
	void ExecuteUbergraph_FortReplayLensSettingsTab(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue12, bool CallFunc_IsValid_ReturnValue12, TArray<class FText>& K2Node_MakeArray_Array, TArray<class FText>& K2Node_MakeArray_Array1, class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue123, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue1, float CallFunc_MapRangeClamped_ReturnValue1, float CallFunc_MapRangeClamped_ReturnValue12, bool CallFunc_IsValid_ReturnValue123, int32 CallFunc_SelectInt_ReturnValue1, class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue1234, bool CallFunc_IsValid_ReturnValue1234, int32 K2Node_ComponentBoundEvent_Selected_Index123, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_ComponentBoundEvent_Selected_Index12, bool CallFunc_Greater_IntInt_ReturnValue1, class FText CallFunc_GetText_ReturnValue, float K2Node_ComponentBoundEvent_Slider_Value123, float CallFunc_MapRangeClamped_ReturnValue123, float K2Node_ComponentBoundEvent_Slider_Value12, class FText CallFunc_GetText_ReturnValue1, float CallFunc_MapRangeClamped_ReturnValue1234, class FText CallFunc_GetText_ReturnValue12, float K2Node_ComponentBoundEvent_Slider_Value1, float K2Node_ComponentBoundEvent_Slider_Value, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue12345, float CallFunc_MapRangeClamped_ReturnValue12345, bool CallFunc_IsValid_ReturnValue12345, class AFortPlayerControllerSpectating* K2Node_Event_FortPlayerControllerSpectating, enum class ESpectatorCameraType K2Node_Event_CameraType, class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue123456, bool CallFunc_IsValid_ReturnValue123456, float CallFunc_MapRangeClamped_ReturnValue123456, class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue1234567, float CallFunc_MapRangeClamped_ReturnValue1234567, bool CallFunc_IsValid_ReturnValue1234567, int32 K2Node_ComponentBoundEvent_Selected_Index1, class FText CallFunc_MakeLiteralText_ReturnValue, float CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array12, class FText CallFunc_Format_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue12, bool CallFunc_Less_IntInt_ReturnValue1, int32 K2Node_ComponentBoundEvent_Selected_Index, class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue12345678, bool CallFunc_IsValid_ReturnValue12345678, class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue123456789, int32 CallFunc_Array_Find_ReturnValue1, bool CallFunc_IsValid_ReturnValue123456789, bool CallFunc_Greater_IntInt_ReturnValue123, bool CallFunc_Less_IntInt_ReturnValue12, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
