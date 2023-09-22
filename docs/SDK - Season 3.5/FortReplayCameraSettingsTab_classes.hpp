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

// 0x40 (0x440 - 0x400)
// WidgetBlueprintGeneratedClass FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C
class UFortReplayCameraSettingsTab_C : public UFortReplayViewSettingsTabBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(Transient, DuplicateTransient)
	class URotatorSelectorReplaySettings_C*      DamageEffects;                                     // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*      HighQualityFX;                                     // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*      NamePlates;                                        // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*      PlayerOutlines;                                    // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*      RelevancyZone;                                     // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*      TPAutoFollow;                                      // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*            TPDistanceToSubject;                               // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortReplayCameraSettingsTab_C");
		return Clss;
	}

	void RefreshHighQualityFXState(const struct FFortReplayFXState& FX_State, int32 CallFunc_SelectInt_ReturnValue);
	void SetTPAutoFollowWidget(class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue, class UFortSpectatorCamComp_ThirdPerson* K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue1);
	void SetTPDistanceToSubjectWidget(class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue, class UFortSpectatorCamComp_ThirdPerson* K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetText_ReturnValue, float CallFunc_GetNormalizedDistance_ReturnValue);
	void ResetToDefault();
	void CenterOnTab();
	void OnCameraTypeChanged(class AFortPlayerControllerSpectating* FortPlayerControllerSpectating, enum class ESpectatorCameraType CameraType);
	void SetWidgetValues();
	void InitializeWidgets();
	void BndEvt__CameraCollision_K2Node_ComponentBoundEvent_0_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__NamePlates_K2Node_ComponentBoundEvent_1_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__PlayerOutlines_K2Node_ComponentBoundEvent_2_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__RelevancyZone_K2Node_ComponentBoundEvent_3_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__TPAutoFollow_K2Node_ComponentBoundEvent_4_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__TPDistanceToSubject_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature(float Slider_Value);
	void Destruct();
	void BndEvt__DamageEffects_K2Node_ComponentBoundEvent_29_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__HighQualityFX_K2Node_ComponentBoundEvent_10_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void Construct();
	void OnActivated();
	void ExecuteUbergraph_FortReplayCameraSettingsTab(int32 EntryPoint, class UFortReplayContext* CallFunc_GetContext_ReturnValue, class UFortReplayContext* CallFunc_GetContext_ReturnValue1, class UFortReplayContext* CallFunc_GetContext_ReturnValue12, class UFortReplayContext* CallFunc_GetContext_ReturnValue123, bool CallFunc_IsValid_ReturnValue, class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue, class UFortSpectatorCamComp_ThirdPerson* K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person, bool K2Node_DynamicCast_bSuccess, class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue1, class AFortPlayerControllerSpectating* K2Node_Event_FortPlayerControllerSpectating, enum class ESpectatorCameraType K2Node_Event_CameraType, class UFortSpectatorCamComp_ThirdPerson* K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class FText>& K2Node_MakeArray_Array, TArray<class FText>& K2Node_MakeArray_Array1, TArray<class FText>& K2Node_MakeArray_Array12, TArray<class FText>& K2Node_MakeArray_Array123, bool CallFunc_GetNameplatesEnabled_ReturnValue, bool CallFunc_GetOutlinesEnabled_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue1, bool CallFunc_GetRelevancyZoneVisible_ReturnValue, int32 K2Node_ComponentBoundEvent_Selected_Index123456, int32 CallFunc_SelectInt_ReturnValue12, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_ComponentBoundEvent_Selected_Index12345, bool CallFunc_Greater_IntInt_ReturnValue1, int32 K2Node_ComponentBoundEvent_Selected_Index1234, bool CallFunc_Greater_IntInt_ReturnValue12, int32 K2Node_ComponentBoundEvent_Selected_Index123, bool CallFunc_Greater_IntInt_ReturnValue123, int32 K2Node_ComponentBoundEvent_Selected_Index12, float K2Node_ComponentBoundEvent_Slider_Value, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, int32 K2Node_ComponentBoundEvent_Selected_Index1, bool CallFunc_Greater_IntInt_ReturnValue1234, TArray<class FText>& K2Node_MakeArray_Array1234, bool CallFunc_GetDamageFXEnabled_ReturnValue, int32 CallFunc_SelectInt_ReturnValue123, enum class ESlateVisibility Temp_byte_Variable, int32 K2Node_ComponentBoundEvent_Selected_Index, bool CallFunc_Greater_IntInt_ReturnValue12345, enum class ESlateVisibility Temp_byte_Variable1, TArray<class FText>& K2Node_MakeArray_Array12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
