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

// 0x50 (0x410 - 0x3C0)
// WidgetBlueprintGeneratedClass CareerScreen.CareerScreen_C
class UCareerScreen_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(Transient, DuplicateTransient)
	class UImage*                                Image_0;                                           // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_3;                                           // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_4;                                           // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_5;                                           // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        LeaderboardsButton;                                // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        ProfileButton;                                     // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        ReplaysButton;                                     // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CareerScreen_C");
		return Clss;
	}

	void Construct();
	void OnActivated();
	void OnDeactivated();
	void BndEvt__ReplaysButton_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__PanelButton_0_K2Node_ComponentBoundEvent_71_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void DisableHotFixedOffButtons();
	void ExecuteUbergraph_CareerScreen(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EFortUIFeatureState Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, enum class ESlateVisibility Temp_byte_Variable1234, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable1, class UCommonButton* K2Node_ComponentBoundEvent_Button12, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, class UAthenaStatsTab_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UAthenaLeaderboardTab_C* CallFunc_Create_ReturnValue1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue12, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue12, class UAthenaReplayBrowserTab_C* CallFunc_Create_ReturnValue12, bool Temp_bool_Variable12, bool Temp_bool_Variable123, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, TArray<class FName>& CallFunc_GetDisabledFrontendNavigationTabs_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue1, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, class FName CallFunc_MakeLiteralName_ReturnValue12, bool CallFunc_EqualEqual_NameName_ReturnValue12, enum class EFortUIFeatureState Temp_byte_Variable12345, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue1, bool CallFunc_IsMobileGame_ReturnValue12);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
