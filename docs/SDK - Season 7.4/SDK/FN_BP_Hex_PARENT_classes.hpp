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

// BlueprintGeneratedClass BP_Hex_PARENT.BP_Hex_PARENT_C
// 0x011C (0x06E4 - 0x05C8)
class ABP_Hex_PARENT_C : public AFortTheaterMapTile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SpinnerIconMesh;                                          // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_StrongStormAffected;                                    // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            StormZoneIndicator;                                       // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_StormAffected;                                          // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_CloudTwister_RandomLightning;                           // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PinnedQuestIcon;                                          // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MissionIconMesh;                                          // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MouseoverMesh;                                            // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SelectedIndicatorMesh;                                    // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             HexTileSound;                                             // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline;                                                 // 0x0620(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline02;                                               // 0x0624(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0625(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_13;                                              // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline03;                                               // 0x0630(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline04;                                               // 0x0634(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0635(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_12;                                              // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             HexAudioComponent;                                        // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  HexMapSound;                                              // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StormChance;                                              // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseHexNeighborTextureBlending;                            // 0x0654(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoesTileHaveRoads;                                        // 0x0655(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFirstOutpost;                                           // 0x0656(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsOutpost;                                                // 0x0657(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsQuickplayMission;                                       // 0x0658(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0659(0x0003) MISSED OFFSET
	int                                                RandomIndex;                                              // 0x065C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        HexDecoMesh;                                              // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Mouseover;                                                // 0x0668(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MissionSelected;                                          // 0x0669(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TileIsPlayable;                                           // 0x066A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TileIsLocked;                                             // 0x066B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TileIsHidden;                                             // 0x066C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TileIsVaildMission;                                       // 0x066D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x066E(0x0002) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MIDMissionIcon;                                           // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Selected;                                             // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UStaticMesh*>                         Hex_Deco_Meshes;                                          // 0x0680(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UMaterialInstanceDynamic*                    MID_Mouseover;                                            // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RenderHexWithClouds;                                      // 0x0698(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0699(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MIDMissionPinnedIcon;                                     // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DifficultyColor;                                          // 0x06A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PinnedQuest;                                              // 0x06B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x06B9(0x0007) MISSED OFFSET
	class ATheaterCamera_Blueprint_C*                  TheaterCamera;                                            // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               CameraIsMissionControl;                                   // 0x06C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTutorial;                                               // 0x06C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x06CA(0x0002) MISSED OFFSET
	float                                              TimesUpdated;                                             // 0x06CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TileIsBeingInitialized;                                   // 0x06D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PauseUpdates;                                             // 0x06D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PinnedMissionExists;                                      // 0x06D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OppositePinnedQuest;                                      // 0x06D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OppositePinnedQuestOpacity;                               // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseLightning;                                             // 0x06D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMainMission;                                            // 0x06D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBlockParty;                                             // 0x06DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x06DB(0x0001) MISSED OFFSET
	float                                              TileTypeNumber;                                           // 0x06DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StormModLightningStrength;                                // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Hex_PARENT.BP_Hex_PARENT_C");
		return ptr;
	}


	void HasPinnedQuest(bool* Pinned);
	void HandleUpdatingBannerMesh(class USceneComponent* Target, class UFortQuestItemDefinition* CompletedQuest, class UMaterialInstanceDynamic* Material_Instance_Dynamic);
	void HandleMissionAlert();
	void GroundSliceSettings(class UMaterialInstanceDynamic* SourceMaterial, class UTexture2D* TileTypeA, class UTexture2D* TileTypeB, float TileIsSameRegionA, float TileIsSameRegionB, float TileIsHiddenA, float TileIsHiddenB, float TileExistsA, float TileExistsB);
	void UserConstructionScript();
	void Timeline();
	void OnLoaded(class UObject* Loaded);
	void CheckFocus();
	void FireLightningA();
	void ForceDefocus();
	void OnMissionDataUpdated();
	void OnDefocus();
	void OnFocus();
	void OnHostDeselect();
	void OnHostSelect();
	void OnClientDeselect();
	void OnClientSelect();
	void HandleTeamPowerChanged(int TeamPower, int PersonalPower);
	void OnInitializeTile();
	void HandleFrontendCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void OnMarkedQuestChanged();
	void CheckIfQuestShouldBePinned();
	void CheckForPinnedInLevel();
	void RetryTileInitialized();
	void SetMissionPowerLevelDependencies();
	void ReceiveBeginPlay();
	void MissionLightning(struct FName EventName, float EmitterTime, struct FVector Location, struct FVector Velocity);
	void MissionLightningOff(struct FName EventName, float EmitterTime, int ParticleTime, struct FVector Location, struct FVector Velocity, struct FVector Direction);
	void Unpause_Updates();
	void AsyncUpdateBanner(class UMaterialInstanceDynamic* Material_Instance_Dynamic, struct FUniqueNetIdRepl Unique_Net_Id);
	void RefreshTile();
	void ExecuteUbergraph_BP_Hex_PARENT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
