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

// 0x50 (0x358 - 0x308)
// WidgetBlueprintGeneratedClass AthenaMatchmakingPlay.AthenaMatchmakingPlay_C
class UAthenaMatchmakingPlay_C : public UFortAthenaMatchmakingWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      NewModeSelected;                                   // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     B_ChangeGameMode;                                  // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      GameModeDescription;                               // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBoxPlaylist;                                      // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MatchmakingSpinner;                                // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     TouchButtonChangeGameMode;                         // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBoxOptions;                                       // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  PlaylistsUpdated;                                  // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaMatchmakingPlay_C");
		return Clss;
	}

	void OpenPlayOptions(class UCommonUIContext* CallFunc_GetContext_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin1, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsBROnly_ReturnValue, class UAthenaMatchmakingOptionsDisplay_v2_C* CallFunc_Create_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, const struct FMargin& K2Node_Select_Default, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void FillChange(bool bDirection, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess);
	void PlaylistChange(bool bDirection, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess);
	void SetAutoFillOptions(TArray<class FText>& K2Node_MakeArray_Array);
	void BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature(int32 Value);
	void BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature(int32 Value);
	void BndEvt__FillSquadButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void NewModeSelected_Display();
	void OnAvailablePlaylistsUpdated();
	void OnPlayButtonUpdated(bool bShowPlayButton);
	void BndEvt__TouchButtonChangeGameMode_K2Node_ComponentBoundEvent_95_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnSetPlayButtonText(class FText& PlayButtonText);
	void OnSetCancelButtonText(class FText& CancelButtonText);
	void ExecuteUbergraph_AthenaMatchmakingPlay(int32 EntryPoint, class FText K2Node_Event_CancelButtonText, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsUsingGamepad_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, class UCommonButton* K2Node_ComponentBoundEvent_Button123, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button1, bool K2Node_DynamicCast_bSuccess1, int32 K2Node_ComponentBoundEvent_Value1, int32 K2Node_ComponentBoundEvent_Value, class UCommonButton* K2Node_ComponentBoundEvent_Button12, bool CallFunc_Conv_IntToBool_ReturnValue, bool K2Node_Event_bShowPlayButton, enum class ESlateVisibility Temp_byte_Variable12, bool CallFunc_IsBROnly_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1, enum class ESlateVisibility K2Node_Select_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsBROnly_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable123, bool Temp_bool_Variable1, enum class ESlateVisibility K2Node_Select1_Default, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess12, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator1, bool K2Node_DynamicCast_bSuccess123, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue1, const struct FMargin& K2Node_MakeStruct_Margin1, bool CallFunc_IsBROnly_ReturnValue12, class FText K2Node_Event_PlayButtonText);
	void PlaylistsUpdated__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
