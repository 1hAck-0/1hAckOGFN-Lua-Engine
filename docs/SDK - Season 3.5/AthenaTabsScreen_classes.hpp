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

// 0xB8 (0x508 - 0x450)
// WidgetBlueprintGeneratedClass AthenaTabsScreen.AthenaTabsScreen_C
class UAthenaTabsScreen_C : public UFortAthenaTabsScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      IntroTabLabel;                                     // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CurrentTab;                                        // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortSZAwareImage*                     FriendInviteBang;                                  // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBoxMainTabBar;                                    // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBoxContainer;                            // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     MainMenuButton;                                    // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMTXButton_C*                          MTXButton;                                         // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MTXButtonContainer;                                // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                  NormalBangWrapper;                                 // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayContent;                                    // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlaySocial;                                     // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZoneContent;                                   // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxMenu;                                       // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxSocial;                                     // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxTabLabel;                                   // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxVbucks;                                     // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Social;                                            // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 TopTabContentWidgetSwitcher;                       // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  LastActiveTabId;                                   // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UnclaimedResearchBangThreshold;                    // 0x4F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4459[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          UnclaimedResearchPointsHandle;                     // 0x4F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UTopBar_C*                             TopBar;                                            // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaTabsScreen_C");
		return Clss;
	}

	void SetTopBar(class UTopBar_C* InTopbar);
	void HandleTabSelected(class FName TabName, class FName CallFunc_GetActiveTab_ReturnValue);
	void HandleTabCreated(class FName TabId, class UCommonButton* TabButton, class UClass* Temp_class_Variable, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, class UClass* Temp_class_Variable1, bool Temp_bool_Variable, bool CallFunc_IsMobileGame_ReturnValue, class UClass* K2Node_Select_Default);
	void OnActivated();
	void BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId);
	void OnDeactivated();
	void HandleTabContentCreated(class FName TabId, class UCommonUserWidget* TabWidget);
	void BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_416_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__Social_K2Node_ComponentBoundEvent_89_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void PreConstruct(bool IsDesignTime);
	void OnActiveFriendsCountUpdated(int32 ActiveFriendsCount);
	void DisableTabsHotfixedOffTabs(class FName TabId, class UCommonButton* NewParam);
	void ExecuteUbergraph_AthenaTabsScreen(int32 EntryPoint, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, TArray<class FName>& CallFunc_GetDisabledFrontendNavigationTabs_ReturnValue, class FName K2Node_CustomEvent_TabId1, class UCommonUserWidget* K2Node_CustomEvent_TabWidget, class UStoreMain_Root_C* K2Node_DynamicCast_AsStore_Main_Root, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1, bool CallFunc_IsValid_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, TArray<class FString>& K2Node_MakeArray_Array, class UHorizontalTabList_C* K2Node_DynamicCast_AsHorizontal_Tab_List, bool K2Node_DynamicCast_bSuccess1, class UHorizontalTabList_C* K2Node_DynamicCast_AsHorizontal_Tab_List1, bool K2Node_DynamicCast_bSuccess12, bool K2Node_Event_IsDesignTime, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin1, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, class FName K2Node_ComponentBoundEvent_TabId, const struct FFortTabListRegistrationInfo& CallFunc_GetPreregisteredTabInfo_OutTabInfo, bool CallFunc_GetPreregisteredTabInfo_ReturnValue, class FName K2Node_ComponentBoundEvent_TabId1, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess123, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_EqualEqual_NameName_ReturnValue12, bool CallFunc_IsBROnly_ReturnValue, class FName Temp_name_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_Array_Contains_ReturnValue, class UHorizontalTabList_C* K2Node_DynamicCast_AsHorizontal_Tab_List12, bool K2Node_DynamicCast_bSuccess1234, class UHorizontalTabList_C* K2Node_DynamicCast_AsHorizontal_Tab_List123, bool K2Node_DynamicCast_bSuccess12345, class UFortPartyContext* CallFunc_GetContext_ReturnValue, int32 K2Node_CustomEvent_ActiveFriendsCount, TArray<class UFortSocialItem*>& CallFunc_GetActiveFriendsList_OutActiveFriends, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, class FName K2Node_CustomEvent_TabId, class UCommonButton* K2Node_CustomEvent_NewParam, class UFortLeaderboardContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_CanShowLeaderboards_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue123, bool CallFunc_BooleanAND_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue12, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool K2Node_SwitchEnum_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
