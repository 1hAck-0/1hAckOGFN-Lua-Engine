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

// BlueprintGeneratedClass Minigame_PlayerCreated.Minigame_PlayerCreated_C
// 0x0018 (0x06F0 - 0x06D8)
class AMinigame_PlayerCreated_C : public AFortMinigame
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                MaxTeams;                                                 // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06E4(0x0004) MISSED OFFSET
	class UCommonActivatablePanel*                     ScoreboardPanel;                                          // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Minigame_PlayerCreated.Minigame_PlayerCreated_C");
		return ptr;
	}


	void GetRandomlyOrderedParticipatingPlayers(TArray<class AFortPlayerState*>* RandomizedPlayers);
	void IsVolumeEventRelevant(class APlayerState* PlayerState, class AFortVolume* EventVolume, bool* bResult);
	void UnbindVolumeDelegates();
	void BindVolumeDelegates();
	void ShouldShowScoreboard(class APlayerController* PlayerController, bool* bResult);
	void AssignTeams();
	void UserConstructionScript();
	void OnComplete_D9496DB6400ADA561B9C749CD6D8B5BC(class UUserWidget* UserWidget);
	void HandleMinigameWarmup();
	void ShowScoreboardPanel();
	void HideScoreboardPanel();
	void HandleStateChanged(EFortMinigameState MinigameState);
	void ReceiveBeginPlay();
	void OnClientEnterVolume(class APlayerState* PlayerState, class AFortVolume* Volume);
	void OnClientExitVolume(class APlayerState* PlayerState, class AFortVolume* Volume);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_Minigame_PlayerCreated(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
