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

// 0xB0 (0x338 - 0x288)
// WidgetBlueprintGeneratedClass TabVideoOptions.TabVideoOptions_C
class UTabVideoOptions_C : public UFortVideoOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(Transient, DuplicateTransient)
	class UResolutionScaleSlider_C*              _3DResolution;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuRowSelector_C*             Anti_Aliasing;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    DisplayResolution;                                 // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuRowSelector_C*             Effects;                                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    FrameRateLimit;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    MotionBlur;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuRowSelector_C*             PostProcessing;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuRowSelector_C*             Quality;                                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuRowSelector_C*             Shadows;                                           // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    ShowFPS;                                           // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    ShowGrass;                                         // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuRowSelector_C*             Textures;                                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TooltipDisplay;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_0;                                     // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuRowSelector_C*             ViewDistance;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    VSync;                                             // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    WindowMode;                                        // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  Enable_Overlay;                                    // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  Disable_Overlay;                                   // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabVideoOptions_C");
		return Clss;
	}

	void Initialize_Display_Resolutions(class FText CallFunc_MakeLiteralText_ReturnValue, TArray<class FText>& CallFunc_GetPossibleDisplayResolutions_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1);
	void Update_Data(bool Reset_Quality_Selector, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, int32 CallFunc_GetOverallQualityLevel_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsBROnly_ReturnValue, int32 CallFunc_GetCurrentFPS_ReturnValue, bool CallFunc_IsWindowedFullscreen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsBROnly_ReturnValue1, int32 CallFunc_GetCurrentDisplayResolution_ReturnValue, int32 CallFunc_GetCurrentWindowMode_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, bool CallFunc_GetShowFPS_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_GetShowGrass_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue1, bool CallFunc_GetMotionBlur_ReturnValue, bool CallFunc_GetUseVsync_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue12, int32 CallFunc_Conv_BoolToInt_ReturnValue123, int32 CallFunc_GetPostProcessQuality_ReturnValue, int32 CallFunc_GetEffectsQuality_ReturnValue, int32 CallFunc_GetTextureQuality_ReturnValue, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, int32 CallFunc_GetViewDistanceQuality_ReturnValue);
	void Initialize_Data(const TArray<class FText>& NewLocalVar_0, TArray<class FText>& K2Node_MakeArray_Array, TArray<class FText>& K2Node_MakeArray_Array1, TArray<class FText>& K2Node_MakeArray_Array12, TArray<class FText>& K2Node_MakeArray_Array123, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText CallFunc_MakeLiteralText_ReturnValue12, class FText CallFunc_MakeLiteralText_ReturnValue123, class FText CallFunc_MakeLiteralText_ReturnValue1234, class FText CallFunc_MakeLiteralText_ReturnValue12345, class FText CallFunc_MakeLiteralText_ReturnValue123456, class FText CallFunc_MakeLiteralText_ReturnValue1234567, class FText CallFunc_MakeLiteralText_ReturnValue12345678, class FText CallFunc_MakeLiteralText_ReturnValue123456789, TArray<class FText>& CallFunc_GetPossibleFPS_ReturnValue, TArray<class FText>& CallFunc_GetPossibleWindowModes_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue12345678910, class FText CallFunc_MakeLiteralText_ReturnValue1234567891011, TArray<class FText>& K2Node_MakeArray_Array1234, TArray<class FText>& K2Node_MakeArray_Array12345, class FText CallFunc_MakeLiteralText_ReturnValue123456789101112, TArray<class FText>& K2Node_MakeArray_Array123456, TArray<class FText>& K2Node_MakeArray_Array1234567, TArray<class FText>& K2Node_MakeArray_Array12345678, TArray<class FText>& K2Node_MakeArray_Array123456789, TArray<class FText>& K2Node_MakeArray_Array12345678910, TArray<class FText>& K2Node_MakeArray_Array1234567891011, TArray<class FText>& K2Node_MakeArray_Array123456789101112, class FText CallFunc_MakeLiteralText_ReturnValue12345678910111213, TArray<class FText>& K2Node_MakeArray_Array12345678910111213, class FText CallFunc_MakeLiteralText_ReturnValue1234567891011121314, TArray<class FText>& K2Node_MakeArray_Array1234567891011121314, class FText CallFunc_MakeLiteralText_ReturnValue123456789101112131415, TArray<class FText>& K2Node_MakeArray_Array123456789101112131415, class FText CallFunc_MakeLiteralText_ReturnValue12345678910111213141516, TArray<class FText>& K2Node_MakeArray_Array12345678910111213141516, class FText CallFunc_MakeLiteralText_ReturnValue1234567891011121314151617, TArray<class FText>& K2Node_MakeArray_Array1234567891011121314151617, class FText CallFunc_MakeLiteralText_ReturnValue123456789101112131415161718);
	void Shadows_Changed(int32 Tab_Id);
	void Anti_Aliasing_Changed(int32 Tab_Id);
	void Textures_Changed(int32 Tab_Id);
	void Post_Processing_Changed(int32 Tab_Id);
	void Effects_Changed(int32 Tab_Id);
	void Quality_Changed(int32 Tab_Id);
	void UpdateOptionsTab();
	void Window_Mode__Changed(int32 Selected_Index);
	void CustomEvent_22(int32 Selected_Index);
	void CustomEvent_23(int32 Selected_Index);
	void View_Distance_Changed(int32 Tab_Id);
	void Construct();
	void CenterOnTab();
	void VSync_Changed(int32 Selected_Index);
	void Motion_Blur_Changed(int32 Selected_Index);
	void CustomEvent(int32 Selected_Index);
	void CustomEvent_1(int32 Selected_Index);
	void PreConstruct(bool IsDesignTime);
	void _3D_Resolution_Changed(float Slider_Value);
	void OnGameUserSettingsUINeedsUpdate();
	void Destruct();
	void ExecuteUbergraph_TabVideoOptions(int32 EntryPoint, int32 CallFunc_GetCurrentWindowMode_ReturnValue, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, int32 K2Node_CustomEvent_Tab_Id123456, int32 K2Node_CustomEvent_Tab_Id12345, int32 K2Node_CustomEvent_Tab_Id1234, int32 K2Node_CustomEvent_Tab_Id123, int32 K2Node_CustomEvent_Tab_Id12, int32 K2Node_CustomEvent_Tab_Id1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_CustomEvent_Selected_Index123456, bool CallFunc_IsWindowedFullscreen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_CustomEvent_Selected_Index12345, enum class ESlateVisibility K2Node_Select_Default, int32 K2Node_CustomEvent_Selected_Index1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, int32 CallFunc_GetCurrentDisplayResolution_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789, int32 K2Node_CustomEvent_Tab_Id, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910, int32 K2Node_CustomEvent_Selected_Index123, bool CallFunc_Conv_IntToBool_ReturnValue, int32 K2Node_CustomEvent_Selected_Index12, bool CallFunc_Conv_IntToBool_ReturnValue1, int32 K2Node_CustomEvent_Selected_Index1, bool CallFunc_Conv_IntToBool_ReturnValue12, int32 K2Node_CustomEvent_Selected_Index, bool CallFunc_Conv_IntToBool_ReturnValue123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112131415, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_MakeLiteralString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsAthena_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, enum class ESlateVisibility K2Node_Select1_Default, bool CallFunc_IsBROnly_ReturnValue, float K2Node_CustomEvent_Slider_Value, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue1);
	void Disable_Overlay__DelegateSignature();
	void Enable_Overlay__DelegateSignature(bool Accept_Input);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
