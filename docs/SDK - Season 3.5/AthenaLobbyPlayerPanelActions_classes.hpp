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

// 0x250 (0x468 - 0x218)
// WidgetBlueprintGeneratedClass AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C
class UAthenaLobbyPlayerPanelActions_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(Transient, DuplicateTransient)
	class UVerticalBox*                          BoxActions;                                        // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonAddFriend;                                   // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonEmote;                                       // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonInviteParty;                                 // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonManage;                                      // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonMute;                                        // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ViewProfileButton;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     HoveredActionButton;                               // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnGadgetsClicked;                                  // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0x270(0x1F8)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaLobbyPlayerPanelActions_C");
		return Clss;
	}

	void OnMutingChanged(const struct FUniqueNetIdRepl& NewParam, bool NewParam1);
	void CanViewProfile(bool* CanView, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue, bool CallFunc_CanShowExternalProfile_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool IsTeamMemberLocalPlayer(class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsLocalPlayersUniqueID_ReturnValue);
	void SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void OnActiveFriendsCountUpdated(int32 ActiveFriendsCount);
	void OnPartyInvitesCountChanged(int32 InvitesCount);
	void InitializeContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue12);
	void Focus(class UIconTextButton_C* CallFunc_GetFirstActiveActionButton_IconTextButton, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1);
	void HasValidActions(bool* bHasValidActions, class UIconTextButton_C* CallFunc_GetFirstActiveActionButton_IconTextButton, bool CallFunc_IsValid_ReturnValue);
	void GetFirstActiveActionButton(class UIconTextButton_C** IconTextButton, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void CanManage(bool* bCanManage, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInLocalPlayersParty_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue);
	void IsInvitationPending(bool* bIsInvitationPending, const struct FUniqueNetIdRepl& PlayerUniqueId, bool Temp_bool_Variable, bool Temp_bool_Variable1, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortFriendRequestStatus Temp_byte_Variable, bool Temp_bool_Variable12, bool Temp_bool_Variable123, bool Temp_bool_Variable1234, bool Temp_bool_Variable12345, bool Temp_bool_Variable123456, bool Temp_bool_Variable1234567, bool Temp_bool_Variable12345678, const struct FUniqueNetIdRepl& CallFunc_GetFriendRequestStatusForTeamMember_UniqueIdUsed, bool CallFunc_GetFriendRequestStatusForTeamMember_bIsMcpId, enum class EFortFriendRequestStatus CallFunc_GetFriendRequestStatusForTeamMember_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue, bool K2Node_Select_Default, bool CallFunc_HasPendingMcpPartyInvitation_ReturnValue, bool K2Node_Select1_Default, bool K2Node_Select12_Default, bool CallFunc_BooleanOR_ReturnValue);
	void CanInviteToParty(bool* bCanInviteToParty, bool CallFunc_IsInvitationPending_bIsInvitationPending, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortPartyRestriction CallFunc_CanBeInvitedNetID_FailReason, bool CallFunc_CanBeInvitedNetID_ReturnValue);
	void CanFriend(bool* bCanFriend, enum class EFortFriendRequestStatus Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable12, bool Temp_bool_Variable123, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsDesktopPlatform_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetFriendRequestStatusForTeamMember_UniqueIdUsed, bool CallFunc_GetFriendRequestStatusForTeamMember_bIsMcpId, enum class EFortFriendRequestStatus CallFunc_GetFriendRequestStatusForTeamMember_ReturnValue, bool K2Node_Select_Default);
	void IsMissionLocalPlayersOutpost(bool* IsLocalPlayersOutpost, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, const struct FFortMissionDetails& CallFunc_GetActiveTileMissionDetails_MissionDetails, bool CallFunc_GetActiveTileMissionDetails_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsLocalPlayerPartyLeader_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void IsLocalPlayer(bool* bIsLocalPlayer, class UFortPartyContext* CallFunc_GetContext_ReturnValue, const struct FFortTeamMemberInfo& CallFunc_GetLocalPlayerTeamMemberInfo_LocalPlayerInfo, bool CallFunc_AreUniqueIDsIdentical_ReturnValue);
	void Refresh(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable12, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, bool Temp_bool_Variable123, enum class ESlateVisibility Temp_byte_Variable1234, enum class ESlateVisibility Temp_byte_Variable12345, bool Temp_bool_Variable1234, enum class ESlateVisibility Temp_byte_Variable123456, enum class ESlateVisibility Temp_byte_Variable1234567, bool Temp_bool_Variable12345, enum class ESlateVisibility Temp_byte_Variable12345678, enum class ESlateVisibility Temp_byte_Variable123456789, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInVoiceChat_ReturnValue, bool CallFunc_IsVoiceChatPlayerMuted_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_Select1_Default, bool CallFunc_CanViewProfile_CanView, enum class ESlateVisibility K2Node_Select12_Default, bool CallFunc_CanManage_bCanManage, enum class ESlateVisibility K2Node_Select123_Default, bool CallFunc_CanInviteToParty_bCanInviteToParty, bool CallFunc_CanFriend_bCanFriend, enum class ESlateVisibility K2Node_Select1234_Default, enum class ESlateVisibility K2Node_Select12345_Default, bool CallFunc_IsLocalPlayer_bIsLocalPlayer);
	void Initialize(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UIconTextButton_C*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UIconTextButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void OnButtonHovered(class UCommonButton* Button);
	void BndEvt__ButtonManage_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonAddFriend_K2Node_ComponentBoundEvent_103_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonInviteParty_K2Node_ComponentBoundEvent_121_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonMute_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonEmote_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaLobbyPlayerPanelActions(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UCommonButton* K2Node_ComponentBoundEvent_Button12345, class UCommonButton* K2Node_CustomEvent_Button, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, bool Temp_bool_Variable, class UFortPartyContext* CallFunc_GetContext_ReturnValue12, class UCommonButton* K2Node_ComponentBoundEvent_Button1234, class UCommonButton* K2Node_ComponentBoundEvent_Button123, class UFortPartyContext* CallFunc_GetContext_ReturnValue123, class UFullPartyMemberConnected_C* CallFunc_Create_ReturnValue, class UFortAsyncAction_ShowPartyDialog* CallFunc_ShowPartyLeaderManageDialog_ReturnValue, class UFortAsyncAction_ShowPartyDialog* CallFunc_ShowPartyMemberManageDialog_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValidNetID_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button12, class UFortPartyContext* CallFunc_GetContext_ReturnValue1234, const struct FUniqueNetIdRepl& K2Node_Select_Default, bool CallFunc_IsPlayerInOurParty_ReturnValue, bool CallFunc_IsLocalPlayerPartyLeader_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValidNetID_ReturnValue12, bool CallFunc_IsVoiceChatPlayerMuted_ReturnValue);
	void OnGadgetsClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
