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

// BlueprintGeneratedClass MinigameSettingsMachine.MinigameSettingsMachine_C
// 0x006C (0x0CB4 - 0x0C48)
class AMinigameSettingsMachine_C : public AFortMinigameSettingsBuilding
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C48(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UToyOptionsComponent_C*                      ToyOptionsComponent;                                      // 0x0C50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Outpost_Console;                                          // 0x0C58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                GameModeIndex;                                            // 0x0C60(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                CachedGameModeIndex;                                      // 0x0C64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeLimit;                                                // 0x0C68(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	EFortMinigamePlayerSpawnLocationSetting            SpawnLocationSetting;                                     // 0x0C6C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C6D(0x0003) MISSED OFFSET
	int                                                NumTeams;                                                 // 0x0C70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFortMinigamePostGameSpawnLocationSetting          PostGameSpawnLocationSetting;                             // 0x0C74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C75(0x0003) MISSED OFFSET
	int                                                PlayerLives;                                              // 0x0C78(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AutoEndTeamThreshold;                                     // 0x0C7C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamToMoveToWhenOutOfSpawns;                              // 0x0C80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumKillsForEndCondition;                                  // 0x0C84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AutoStartDelay;                                           // 0x0C88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumCollectItemsForEndCondition;                           // 0x0C8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FMinigameScoringPreset>              ScoringPresets;                                           // 0x0C90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              TrackedStats;                                             // 0x0CA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                JoinInProgress;                                           // 0x0CB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MinigameSettingsMachine.MinigameSettingsMachine_C");
		return ptr;
	}


	void UpdateJoinInProgress();
	void TryAddEndCondition_CollectItems(TArray<struct FFortMinigameStatQuery>* EndConditions, bool* bResult);
	void TryAddEndCondition_Kills(TArray<struct FFortMinigameStatQuery>* EndConditions, bool* bResult);
	void UpdateAutoStart();
	void UpdateEndConditions();
	void UpdateTeamToMoveToWhenOutOfSpawns();
	void UpdateAutoEndTeamThreshold();
	void UpdatePlayerLives();
	void UpdatePostGameSpawnLocationSetting();
	struct FText BlueprintGetFailedInteractionString(class AFortPawn* InteractingPawn);
	void UpdateTeamSetting();
	void UpdateSpawnLocationSetting();
	void GetCurrentMinigame(class AFortMinigame** Minigame);
	void UpdateTimeLimit();
	void UpdateGameMode();
	void HasMinigameStarted(bool* bHasStarted);
	void IsValidGame(bool* bCanStartGame);
	void GetPickupSpawnLocation(struct FVector* SpawnLocation);
	bool BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn);
	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn);
	void UserConstructionScript();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn);
	void ReceiveBeginPlay();
	void OnGameSettingsUpdated();
	void StartMinigameHelper();
	void AbandonMinigameHelper();
	void ExecuteUbergraph_MinigameSettingsMachine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
