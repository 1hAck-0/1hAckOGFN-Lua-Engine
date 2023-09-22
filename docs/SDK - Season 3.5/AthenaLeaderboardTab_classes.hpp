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

// 0xC8 (0x5B8 - 0x4F0)
// WidgetBlueprintGeneratedClass AthenaLeaderboardTab.AthenaLeaderboardTab_C
class UAthenaLeaderboardTab_C : public UAthenaLeaderboardScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F0(0x8)(Transient, DuplicateTransient)
	class UPanelButton_C*                        BacchusClose2Button;                               // 0x4F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        BacchusCloseButton;                                // 0x500(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       EnableWidgetSwitcher;                              // 0x508(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBContentMain;                                     // 0x510(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaderboardHeaderRowWidget_C*         LeaderboardHeaderRow;                              // 0x518(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaderboardListView_C*                LeaderboardListView;                               // 0x520(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 LeaderboardSwitcher;                               // 0x528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaderboardThrobber_C*                LeaderboardThrobber;                               // 0x530(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaderboardRowWidget_C*               LocalUserRow;                                      // 0x538(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NoDataMessageText;                                 // 0x540(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerRankEmblem_C*                   PlayerRankEmblem;                                  // 0x548(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              QueryError;                                        // 0x550(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      QueryErrorMessageText;                             // 0x558(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ResetTimeBox;                                      // 0x560(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBFriendsOnly;                                     // 0x568(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBNoData;                                          // 0x570(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   PlaylistChange;                                    // 0x578(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   FriendTypeChange;                                  // 0x588(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          QueryTimerHandle;                                  // 0x598(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class USoundBase*                            OnQueryFinishedSound;                              // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   BackAction;                                        // 0x5A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaLeaderboardTab_C");
		return Clss;
	}

	void HandleBackAction(bool* Passthrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void ToggleDisabledTabVisuals(bool bShouldBeDisabled, bool CallFunc_Not_PreBool_ReturnValue);
	void OnShowQueryThrobber();
	void OnQueryStateChanged(bool bQueryInProgress, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanAND_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void OnFriendTypeChangeGamepad(bool* bCommitted, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnPlaylistChangeGamepad(bool* bCommitted, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess);
	void BndEvt__SecondaryTabList_K2Node_ComponentBoundEvent_189_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void Construct();
	void BndEvt__LeaderboardSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void BndEvt__MatchRotator_K2Node_ComponentBoundEvent_39_OnRotated__DelegateSignature(int32 Value);
	void BndEvt__FriendsRotator_K2Node_ComponentBoundEvent_63_OnRotated__DelegateSignature(int32 Value);
	void BndEvt__LeaderboardTabList_K2Node_ComponentBoundEvent_57_OnTabButtonRemoved__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void OnUpdateTabButtonText(class UCommonButton* Button, struct FAthenaPlaylistLeaderboardData& PlaylistTabData);
	void OnUpdateLeaderboardListUI(bool bWasSuccessful, class UFortLeaderboardRowProxyInstance* LocalUserRow, class FText& QueryErrorStr);
	void OnUpdateListHeader(struct FAthenaPlaylistLeaderboardData& PlaylistTabData);
	void OnDeactivated();
	void OnQueryFinished();
	void OnQueryStarted();
	void OnActivated();
	void BndEvt__MatchRotator_K2Node_ComponentBoundEvent_366_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__LeaderboardTypeRotator_K2Node_ComponentBoundEvent_399_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__BacchusClose2Button_K2Node_ComponentBoundEvent_30_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaLeaderboardTab(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable1234, enum class ESlateVisibility Temp_byte_Variable12345, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable12, bool CallFunc_CanShowLeaderboards_ReturnValue, enum class ESlateVisibility Temp_byte_Variable123456, enum class ESlateVisibility Temp_byte_Variable1234567, bool Temp_bool_Variable123, class FText Temp_text_Variable, class FText Temp_text_Variable1, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue1, bool Temp_bool_Variable1234, bool CallFunc_CanShowGlobalLeaderboards_ReturnValue, enum class ESlateVisibility Temp_byte_Variable12345678, enum class ESlateVisibility Temp_byte_Variable123456789, bool Temp_bool_Variable12345, enum class ESlateVisibility Temp_byte_Variable12345678910, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable1234567891011, class FName K2Node_ComponentBoundEvent_TabId1, class UCommonButton* K2Node_ComponentBoundEvent_TabButton1, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, int32 K2Node_ComponentBoundEvent_Value1, int32 K2Node_ComponentBoundEvent_Value, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, bool CallFunc_Map_Remove_ReturnValue, class UCommonButton* K2Node_Event_Button, const struct FAthenaPlaylistLeaderboardData& K2Node_Event_PlaylistTabData1, bool K2Node_Event_bWasSuccessful, class UFortLeaderboardRowProxyInstance* K2Node_Event_LocalUserRow, class FText K2Node_Event_QueryErrorStr, class FText CallFunc_TextToUpper_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default, class UAthenaLeaderboardTabButton_C* K2Node_DynamicCast_AsAthena_Leaderboard_Tab_Button, bool K2Node_DynamicCast_bSuccess, const struct FAthenaPlaylistLeaderboardData& K2Node_Event_PlaylistTabData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool Temp_bool_Variable123456, enum class ESlateVisibility K2Node_Select12_Default, bool CallFunc_CanShowFriendsOnlyLeaderboard_ReturnValue, enum class ESlateVisibility Temp_byte_Variable123456789101112, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable12345678910111213, enum class ESlateVisibility K2Node_Select123_Default, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select1234_Default, class FText K2Node_Select12345_Default, bool Temp_bool_Variable1234567, bool CallFunc_SelectTabByID_ReturnValue, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsBROnly_ReturnValue, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator1, bool K2Node_DynamicCast_bSuccess12, class UCommonButton* K2Node_ComponentBoundEvent_Button123, class UCommonButton* K2Node_ComponentBoundEvent_Button12, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator12, bool K2Node_DynamicCast_bSuccess123, class UAthenaRotator_C* K2Node_DynamicCast_AsAthena_Rotator123, bool K2Node_DynamicCast_bSuccess1234, bool CallFunc_IsBROnly_ReturnValue1, bool CallFunc_IsBROnly_ReturnValue12, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue12, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123, bool CallFunc_CanShowLeaderboards_ReturnValue1, int32 Temp_int_Variable, enum class ESlateVisibility K2Node_Select123456_Default, int32 Temp_int_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UCommonButton* K2Node_ComponentBoundEvent_Button1, bool CallFunc_HandleBackAction_PassThrough, bool CallFunc_IsBROnly_ReturnValue123, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable12345678, enum class ESlateVisibility K2Node_Select1234567_Default, int32 K2Node_Select12345678_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
