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

// 0x1C8 (0x5A8 - 0x3E0)
// WidgetBlueprintGeneratedClass AthenaHUD.AthenaHUD_C
class UAthenaHUD_C : public UAthenaHUDBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)
	class UOverlay*                              _Overlay__Persistent_HUD_Content;                  // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       _Switcher__Mode_Content;                           // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          _Vertical_Box__Top_Left_Content;                   // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              AmmoAndProgress;                                   // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaAerialFeedback_C*               AthenaAerialFeedback;                              // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaCompass_C*                      AthenaCompass;                                     // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaEquippedItemWidget_C*           AthenaEquippedItemWidget;                          // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaFPS_C*                          AthenaFPS;                                         // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaGamePhaseWidget_C*              AthenaGamePhaseWidget;                             // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaEquipProgress_C*                AthenaHealProgress;                                // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaHUDMenu_C*                      AthenaHUDMenu;                                     // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaIndicatorLayer_C*               AthenaIndicatorLayer;                              // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaKillFeedWidget_C*               AthenaKillFeedWidget;                              // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaPickupManager_C*                AthenaPickupManager;                               // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaPickupStream_C*                 AthenaPickupStream;                                // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaPlayerActionAlert_C*            AthenaPlayerActionAlert;                           // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaPlayerInfo_C*                   AthenaPlayerInfo_C_0;                              // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSessionId_C*                    AthenaSessionId;                                   // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaWatchers_C*                     AthenaWatchers;                                    // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBuildWatermark_C*                     BuildWatermark;                                    // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              CameraMode;                                        // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaMapPanel_C*                     FullscreenMap;                                     // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaGamePhaseChangeWidget_C*        GamePhaseAlert;                                    // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBox_DetachRCPawn;                                 // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBox_PickupMaterials;                              // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBoxGamePhase_PlayerNumbers;            // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindWidget;                                     // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      KillLogAndWatchers;                                // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaLocalPlayerHitPointInfo_C*      LocalPlayerHitPointInfo;                           // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapAndBackpackKeys_C*                 MapAndBackpackKeys;                                // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaMinimapContainer_C*             Minimap;                                           // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNetDebugContainer_C*                  NetDebugContainer;                                 // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      PersistentHUDInvalidationBox;                      // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             PersistentHUDScale;                                // 0x4F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPopupCenterMessageWidget_C*           PopupCenterMessageWidget;                          // 0x4F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaQuickbarPrimary_C*              QuickbarPrimary;                                   // 0x500(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          QuickBars;                                         // 0x508(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaQuickbarSecondary_C*            QuickbarSecondary;                                 // 0x510(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialPicker_C*                       RadialPicker;                                      // 0x518(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URCPawn_ExpirationProgressBar_C*       RCPawn_ExpirationProgressBar;                      // 0x520(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResourceAggregationWidget_C*          ResourceAggregation;                               // 0x528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UReticle_C*                            Reticle;                                           // 0x530(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UReticleStatusWidget_C*                ReticleStatusWidget;                               // 0x538(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSquadList_C*                    TeamInfo;                                          // 0x540(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      TeamInvalidationBox;                               // 0x548(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          TopRightContent;                                   // 0x550(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWinnerOverlay_C*                      WinnerOverlay;                                     // 0x558(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortQuickBars                    FocusedQuickbar;                                   // 0x560(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B82[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             UnfocusedQuickbarScale;                            // 0x564(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CursorModeEnabled;                                 // 0x56C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ZoneCompleted;                                     // 0x56D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B83[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  PlayerLeft;                                        // 0x570(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  KillsPrefix;                                       // 0x588(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWidgetSwitcher*                       _Switcher__CursorModeContent_0;                    // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaHUD_C");
		return Clss;
	}

	void HasClientBeenNotifiedOfWin(bool* bClientWon, bool* bTeamWon, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsClientNotifiedOfWin_ReturnValue, bool CallFunc_IsClientNotifiedOfTeamWin_ReturnValue);
	void HandlePawnSet_RCPawnVisibilityUpdates(enum class ESlateVisibility InVisibility);
	void HandlePawnSet_VisibilityUpdates(enum class ESlateVisibility InVisibility);
	void HandlePawnSet(bool bRCPawn, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AFortRemoteControlledPawnAthena* K2Node_DynamicCast_AsFort_Remote_Controlled_Pawn_Athena, bool K2Node_DynamicCast_bSuccess);
	void BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
	void SetupCameraMode(class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue);
	void HandleAircraftModeChanged(const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInAircraft_ReturnValue);
	void CheckHUDElementVisibility(struct FGameplayTagContainer& HiddenHUDElementTags, const struct FGameplayTag& HUDElementTagToCheck, class UWidget*& HUDElement, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	class UWidget* PopContentWidgetInternal(const struct FContentPushState& State, class UWidget* CallFunc_PopMenuContent_ReturnValue);
	void ShowPicker(enum class EFortPickerMode Mode, int32 InitialOption, bool IgnoreFirstAccept, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void HandleFocusChat();
	void ToggleChat(bool Show);
	void SetPersistentHUDContentVisibility(bool Visible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void HandleIndicatorModeChanged(bool InidicatorsEnabled, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default);
	void OnPlayerTargetingChanged(bool IsTargeting, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class AFortWeapon* CallFunc_GetEquippedWeapon_ReturnValue, class AFortWeaponRanged* K2Node_DynamicCast_AsFort_Weapon_Ranged, bool K2Node_DynamicCast_bSuccess);
	void HandleKeybindsChanged();
	void OnHandleAction(struct FEventReply* Result, bool* bPassThrough, bool HandleAction, bool Temp_bool_Variable, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_ShouldCloseMenuOnEscape_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FEventReply& K2Node_Select_Default);
	void SetQuickbarSizes(bool K2Node_SwitchEnum_CmpSuccess);
	void HandleQuickbarSlotFocusSlotChanged(enum class EFortQuickBars Quickbar_Index, int32 Slot, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void HandleCursorModeChanged(bool IsEnabled, class FName ActionName, class UUserWidget* CursorModeContentCustomWidget, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, enum class EFortInputMode Temp_byte_Variable12, enum class EFortInputMode Temp_byte_Variable123, bool CallFunc_HasClientBeenNotifiedOfWin_bClientWon, bool CallFunc_HasClientBeenNotifiedOfWin_bTeamWon, bool Temp_bool_Variable1, enum class EFortInputMode K2Node_Select_Default, class UCommonUIContext* CallFunc_GetContext_ReturnValue1, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, enum class ESlateVisibility K2Node_Select1_Default);
	void OnDeclined_13B571B74B3BBCF095CCFA8AED69EBED();
	void OnConfirmed_13B571B74B3BBCF095CCFA8AED69EBED();
	void OnEnterState(enum class EFortUIState PreviousUIState);
	void QuestsCompleted(TArray<class UFortQuestItem*>& Quests);
	void Construct();
	void PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State);
	void Destruct();
	void HandleInputMethodChanged(bool UsingGamepad);
	void OnUnableToPerformAction(const struct FGameplayTagContainer& FailedReason, class FText FailureText);
	void Prepare_Game_Over();
	void On_Player_Died(struct FFortPlayerDeathReport& DeathReport);
	void PrepareToShowEndGameUI();
	void On_Player_Won();
	void OnRevived();
	void HandleRevived();
	void On_Team_Won();
	void ViewModelChanged(class UAthenaPlayerViewModel* ViewModel);
	void OnHUDScaleChanged(float HUDScale);
	void SetFullScreenMapVisibility(bool bIsVisible);
	void ExecuteUbergraph_AthenaHUD(int32 EntryPoint, class UFortPickerContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortHUDContext* CallFunc_GetContext_ReturnValue1234, class UFortHUDContext* CallFunc_GetContext_ReturnValue12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UFortHUDContext* CallFunc_GetContext_ReturnValue123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class UFortHUDContext* CallFunc_GetContext_ReturnValue1234567, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, enum class EFortUIState K2Node_Event_PreviousUIState, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, TArray<class UFortQuestItem*>& K2Node_CustomEvent_Quests, int32 CallFunc_Array_Length_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12345678, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910, class UWidget* K2Node_Event_Widget, const struct FContentPushState& K2Node_Event_State, int32 Temp_int_Array_Index_Variable, class UFortQuestItem* CallFunc_Array_Get_Item, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool K2Node_CustomEvent_UsingGamepad, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Format_ReturnValue, const struct FFortDialogDescription& K2Node_MakeStruct_FortDialogDescription, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue123456789, class UFortAsyncAction_TriggerNotification* CallFunc_TriggerNotification_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena1, bool K2Node_DynamicCast_bSuccess1, const struct FGameplayTagContainer& K2Node_CustomEvent_FailedReason, class FText K2Node_CustomEvent_FailureText, bool CallFunc_HasTag_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213, const struct FFortPlayerDeathReport& K2Node_CustomEvent_DeathReport, class UFortHUDContext* CallFunc_GetContext_ReturnValue12345678910, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1234567891011, class UFortInventoryContext* CallFunc_GetContext_ReturnValue123456789101112, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UAthenaPlayerViewModel* K2Node_Event_ViewModel, float K2Node_Event_HUDScale, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_bIsVisible, enum class ESlateVisibility K2Node_Select1_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue12, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena12, bool K2Node_DynamicCast_bSuccess12);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
