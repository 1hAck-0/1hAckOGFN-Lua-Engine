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

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass TabAccessibilityOptions.TabAccessibilityOptions_C
class UTabAccessibilityOptions_C : public UFortGameOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class URotatorSelector_C*                    ColorBlindMode;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSlider_C*                  ColorBlindStrength;                                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    HearingImpairedMode;                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          HearingSection;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabAccessibilityOptions_C");
		return Clss;
	}

	void Initialize_Data(class FText CallFunc_MakeLiteralText_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, TArray<class FText>& K2Node_MakeArray_Array1);
	void Update_Data(enum class EColorBlindMode Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable12, int32 Temp_int_Variable123, bool Temp_bool_Variable, int32 Temp_int_Variable1234, int32 Temp_int_Variable12345, enum class EColorBlindMode CallFunc_GetColorBlindMode_ReturnValue, float CallFunc_GetColorBlindStrength_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_GetHearingImpairedMode_ReturnValue, int32 K2Node_Select1_Default);
	void Construct();
	void UpdateOptionsTab();
	void CenterOnTab();
	void BndEvt__OptionsMenuSlider_K2Node_ComponentBoundEvent_10_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__ColorBlindMode_K2Node_ComponentBoundEvent_11_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__HearingImpairedMode_K2Node_ComponentBoundEvent_13_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void ExecuteUbergraph_TabAccessibilityOptions(int32 EntryPoint, bool CallFunc_IsHearingImpairedFeatureAvailable_ReturnValue, int32 Temp_int_Variable, enum class EColorBlindMode Temp_byte_Variable, enum class EColorBlindMode Temp_byte_Variable1, enum class EColorBlindMode Temp_byte_Variable12, enum class EColorBlindMode Temp_byte_Variable123, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable1234, enum class ESlateVisibility Temp_byte_Variable12345, enum class ESlateVisibility K2Node_Select_Default, float K2Node_ComponentBoundEvent_Slider_Value, int32 K2Node_ComponentBoundEvent_Selected_Index1, int32 K2Node_ComponentBoundEvent_Selected_Index, enum class EColorBlindMode K2Node_Select1_Default, bool CallFunc_Conv_IntToBool_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
