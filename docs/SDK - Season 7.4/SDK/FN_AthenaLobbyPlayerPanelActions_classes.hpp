#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C
// 0x02C0 (0x04F8 - 0x0238)
class UAthenaLobbyPlayerPanelActions_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                BoxActions;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           ButtonAddFriend;                                          // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           ButtonInviteParty;                                        // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           ButtonManage;                                             // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           ButtonMute;                                               // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           ViewProfileButton;                                        // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           HoveredActionButton;                                      // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0278(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.OnGadgetsClicked
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // 0x0288(0x0200) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0488(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.OnEmoteClicked
	struct FText                                       AddFriendText;                                            // 0x0498(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       AcceptInviteText;                                         // 0x04B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SentInviteText;                                           // 0x04C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       AcceptedInviteText;                                       // 0x04E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C");
		return ptr;
	}


	void RefreshAddFriendButton();
	void OnMutingChanged(struct FUniqueNetIdRepl NewParam, bool NewParam1);
	void CanViewProfile(bool* CanView);
	bool IsTeamMemberLocalPlayer();
	void SetTeamMemberInfo(struct FFortTeamMemberInfo TeamMemberInfo);
	void OnActiveFriendsCountUpdated(int ActiveFriendsCount);
	void OnPartyInvitesCountChanged(int InvitesCount);
	void InitializeContextEvents();
	void Focus();
	void HasValidActions(bool* bHasValidActions);
	void GetFirstActiveActionButton(class UIconTextButton_C** IconTextButton);
	void CanManage(bool* bCanManage);
	void IsInvitationPending(bool* bIsInvitationPending);
	void CanInviteToParty(bool* bCanInviteToParty);
	void CanFriendInviteOrAccept(bool* bCanFriend);
	void IsMissionLocalPlayersOutpost(bool* isLocalPlayersOutpost);
	void IsLocalPlayer(bool* bIsLocalPlayer);
	void Refresh();
	void Initialize();
	void OnButtonHovered(class UCommonButton* Button);
	void BndEvt__ButtonManage_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void BndEvt__ButtonAddFriend_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void BndEvt__ButtonInviteParty_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void BndEvt__ButtonMute_K2Node_ComponentBoundEvent(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaLobbyPlayerPanelActions(int EntryPoint);
	void OnEmoteClicked__DelegateSignature();
	void OnGadgetsClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
