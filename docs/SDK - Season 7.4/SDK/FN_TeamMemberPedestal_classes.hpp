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

// BlueprintGeneratedClass TeamMemberPedestal.TeamMemberPedestal_C
// 0x0135 (0x0535 - 0x0400)
class ATeamMemberPedestal_C : public AFortTeamMemberPedestal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        CharacterPlacement;                                       // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_FE_Smoke;                                               // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LightsParent;                                             // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_NoPlayer_Sparkle;                                      // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_NoPlayer_Swirl02;                                      // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_NoPlayer_Swirl01;                                      // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Lobby_Character_Pad_Light_Ring;                        // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Lobby_Character_Pad;                                   // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Lobby_Character_TopSpot;                               // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        UnderlightBluePoint02;                                    // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        UnderlightBluePoint01;                                    // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         UnderlightBlue02;                                         // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         UnderlightBlue01;                                         // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         RimSpotLight;                                             // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         TopSpotLight;                                             // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               PreviewMesh;                                              // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0481(0x0007) MISSED OFFSET
	class UStaticMesh*                                 Mesh;                                                     // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayerSelected;                                        // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0491(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MID_Pad;                                                  // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x04A0(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty TeamMemberPedestal.TeamMemberPedestal_C.Debug_OnFriendLFGRequest
	class UOverlay*                                    Hovered_InputAction;                                      // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ULobbyPlayerPadGadgets_C*                    Gadgets;                                                  // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ULobbyPlayerAddPlayer_C*                     PlayerAdd;                                                // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AFortPlayerPawn*                             LastAnimatedPlayerPawn;                                   // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowPartySuggestions;                                   // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04D1(0x0003) MISSED OFFSET
	float                                              OffsetLobbyAddPlayer;                                     // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayerPodiumHovered;                                     // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x04D9(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MID_Pad_Light_Ring;                                       // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Top_Light_Ring;                                       // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FxActive;                                                 // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MID_Holo;                                                 // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          HoloMaterial;                                             // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USizeBox*                                    Hovered_WithPlayer_InputAction;                           // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               NewLobbyLayout;                                           // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0511(0x0003) MISSED OFFSET
	float                                              LightBrightnessScale;                                     // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TopSpotLight_Brightness;                                  // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TopSpotLight_Brightness_Hovered;                          // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RimSpotLight_Brightness;                                  // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnderlightBlueSpot_Brightness;                            // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnderlightBlueSpot_Brightness_Hovered;                    // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnderlightBluePoint_Brightness;                           // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnderlightBluePoint_Brightness_Hovered;                   // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               debugHoveredLighting;                                     // 0x0534(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TeamMemberPedestal.TeamMemberPedestal_C");
		return ptr;
	}


	void HandleHoverInputActions(bool bIsHovered);
	void InitializeInputActionRefs();
	void OnPartyDataChanged(struct FFortTeamMemberInfo* MemberInfo);
	void CompletedQuestPrerequisites(bool* bCompleted);
	void IsInLobby(bool* IsInLobby);
	void PlayLobbyAnimation();
	void RefreshWidgets();
	void OnTeamMemberStateChanged(struct FFortTeamMemberInfo TeamMemberInfo);
	void OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void InitializeContextEvents();
	void UserConstructionScript();
	void HandleClientEvent_StoreTabSelected(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent ClientEvent);
	void OnHovered();
	void HandleClientEvent_StoreTabClosed(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent ClientEvent);
	void OnUnhovered();
	void ReceiveBeginPlay();
	void OnConnectedToCampaignLobby();
	void RefreshBattlePassOwnerVisuals(bool bOwnsBattlePass);
	void OnIsCurrentlyInMatchChanged(bool bIsInMatch);
	void OnPedestalIsPopulatedChanged(bool bIsPopulated);
	void OnItemClicked();
	void ExecuteUbergraph_TeamMemberPedestal(int EntryPoint);
	void Debug_OnFriendLFGRequest__DelegateSignature(int PlayerIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
