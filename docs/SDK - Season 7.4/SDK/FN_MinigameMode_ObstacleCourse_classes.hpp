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

// BlueprintGeneratedClass MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C
// 0x0010 (0x06E8 - 0x06D8)
class AMinigameMode_ObstacleCourse_C : public AFortMinigame
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                AmmountOfWood;                                            // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FinishedPlayers;                                          // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C");
		return ptr;
	}


	struct FGameplayTagQuery GetStartQueryForPlayer(class APlayerState* Player);
	void Has_Player_Completed_Objective(class AFortPlayerState* Player, bool* Complete);
	void GiveWood();
	void SetPlayerPositionToStart();
	void UserConstructionScript();
	void HandleMinigameWarmup();
	void On_Stat_Changed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MinigameMode_ObstacleCourse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
