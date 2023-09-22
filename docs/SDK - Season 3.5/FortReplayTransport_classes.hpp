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

// 0xBC (0x47C - 0x3C0)
// WidgetBlueprintGeneratedClass FortReplayTransport.FortReplayTransport_C
class UFortReplayTransport_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(Transient, DuplicateTransient)
	class UIconTextButtonReplay_C*               Back;                                              // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_2;                                          // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               ButtonSpacer;                                      // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                           CameraSelectAnchor;                                // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               CurrentCamera;                                     // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               Faster;                                            // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               Forward;                                           // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               JumpToEnd;                                         // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               JumpToStart;                                       // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               NextPlayerButton;                                  // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               PlayPause;                                         // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               PreviousPlayerButton;                              // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SelectedPlayerText;                                // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               SelectPlayerButton;                                // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               Slower;                                            // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_Playback;                                   // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextTimeDilation;                                  // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TimeDilationButtonIcon;                            // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               TimelineFocusMode;                                 // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButtonReplay_C*               ViewSettings;                                      // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortReplayContext*                    ReplayContext;                                     // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeToSkip;                                        // 0x478(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortReplayTransport_C");
		return Clss;
	}

	void ResetFocusToPlayPauseIfNeeded(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void SetButtonsAllowedFocus(bool bFocusAllowed, bool* FocusAllowed);
	void FollowedPlayerChanged(class AFortPlayerControllerSpectating* PlayerController, class AFortPlayerState* NewFollowedPlayer, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void CameraTypeChanged(class AFortPlayerControllerSpectating* PlayerController, enum class ESpectatorCameraType CameraType, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class AFortPlayerState* CallFunc_GetFollowedPlayer_ReturnValue);
	void SetupHUDEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortReplaySpectator* K2Node_DynamicCast_AsFort_Replay_Spectator, bool K2Node_DynamicCast_bSuccess);
	void Focus_Menu();
	void Unfocus_Menu();
	void BindingsChanged(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_SetButtonsAllowedFocus_focusAllowed);
	void Format_Playback_Multiplier(float Multiplier, class FString* FormattedText, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void SetReplayContext(class UFortReplayContext* InReplayContext, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
	void BndEvt__Previous_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_118_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_258_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButtonReplay_0_K2Node_ComponentBoundEvent_302_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButtonReplay_1_K2Node_ComponentBoundEvent_380_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButtonReplay_2_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButtonReplay_3_K2Node_ComponentBoundEvent_574_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void PlaybackMultiplierChangedFromNative(float NewMultiplier);
	void BndEvt__PreviousPlayerButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__NextPlayerButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CurrentCamera_K2Node_ComponentBoundEvent_283_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void OnDeactivated();
	void PauseStateChangedFromNative(bool bNewPauseState);
	void BndEvt__TimelineFocusMode_K2Node_ComponentBoundEvent_103_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void ExecuteUbergraph_FortReplayTransport(int32 EntryPoint, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable1, class UFortReplayContext* CallFunc_GetContext_ReturnValue, class UFortReplayContext* CallFunc_GetContext_ReturnValue1, bool Temp_bool_Variable, class USoundBase* Temp_object_Variable12, class USoundBase* Temp_object_Variable123, class UFortReplayContext* CallFunc_GetContext_ReturnValue12, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123, class UCommonInputContext* CallFunc_GetContext_ReturnValue1234, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567891011, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678910, class UCommonButton* K2Node_ComponentBoundEvent_Button123456789, class UCommonButton* K2Node_ComponentBoundEvent_Button12345678, class UCommonButton* K2Node_ComponentBoundEvent_Button1234567, class UCommonButton* K2Node_ComponentBoundEvent_Button123456, class UCommonButton* K2Node_ComponentBoundEvent_Button12345, class UCommonButton* K2Node_ComponentBoundEvent_Button1234, class UTexture2D* Temp_object_Variable1234, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_CustomEvent_NewMultiplier, const class FString& CallFunc_Format_Playback_Multiplier_FormattedText, class UCommonButton* K2Node_ComponentBoundEvent_Button123, class FText CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating, bool K2Node_DynamicCast_bSuccess, class UCommonButton* K2Node_ComponentBoundEvent_Button12, class APlayerController* CallFunc_GetPlayerController_ReturnValue1, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating1, bool K2Node_DynamicCast_bSuccess1, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class APlayerController* CallFunc_GetPlayerController_ReturnValue12, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating12, bool K2Node_DynamicCast_bSuccess12, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, enum class ECommonGamepadType Temp_byte_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue123, class UCommonInputContext* CallFunc_GetContext_ReturnValue12345, enum class ECommonGamepadType CallFunc_GetCurrentGamepadType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UTexture2D* K2Node_Select_Default, class UTexture2D* Temp_object_Variable12345, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, bool K2Node_CustomEvent_bNewPauseState, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UTexture2D* Temp_object_Variable123456, class USoundBase* K2Node_Select1_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue1234, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating123, bool K2Node_DynamicCast_bSuccess123, bool CallFunc_IsFollowedPlayerInBus_ReturnValue, bool Temp_bool_Variable1, class UTexture2D* K2Node_Select12_Default, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
