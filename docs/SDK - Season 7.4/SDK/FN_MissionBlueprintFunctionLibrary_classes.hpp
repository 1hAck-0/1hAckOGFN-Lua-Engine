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

// BlueprintGeneratedClass MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UMissionBlueprintFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C");
		return ptr;
	}


	void STATIC_LaunchHoverboard(class AActor* HoverboardActor, struct FVector LaunchVelocity, struct FName ForceFeedbackTag, class UObject* __WorldContext, bool* Success);
	void STATIC_NPC_ConvertTagToNameText(struct FGameplayTag PawnTag, class UObject* __WorldContext, struct FText* Name);
	void STATIC_CheckBasicVectorToActorLineOfSight(struct FVector Vector_A, class AActor* Actor_B, struct FVector Actor_B_Location_Offset, TEnumAsByte<ETraceTypeQuery> TraceChannel, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DrawTime, TArray<class AActor*> ActorsToIgnore, bool bTraceComplex, class UObject* __WorldContext, bool* In_Line_Of_Sight, float* Distance);
	void STATIC_CheckBasicActorLineOfSight(class AActor* Actor_A, struct FVector ActorA_Location_Offset, class AActor* Actor_B, struct FVector Actor_B_Location_Offset, bool UseActorHalfHeightForSight, TEnumAsByte<ETraceTypeQuery> TraceChannel, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DrawTime, bool bTraceComplex, class UObject* __WorldContext, bool* In_Line_Of_Sight, float* Distance);
	void STATIC_NPC_LockThenRotateInPlace(bool LockedInPlace, class AFortPlayerPawn* PlayerPawn, class AFortAIPawn* SurvivorPawn, class UObject* __WorldContext);
	void STATIC_GetControllersNearActorThatRequireQuestObjective(float Distance, class AActor* Actor, class UFortQuestItemDefinition* Quest_Item, struct FName Quest_Item_Backend_Objective_Name, class UObject* __WorldContext, TArray<class AFortPlayerController*>* PlayerControllersNearbyThatRequireQuest, bool* SuccessfullyFoundPlayer);
	void STATIC_HaveAllPlayersCompletedQuest(class UFortQuestItemDefinition* QuestItem, class UObject* __WorldContext, bool* AllPlayersCompletedQuest);
	void STATIC_HasPlayerCompletedQuestObjectiveHandle(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* QuestReference, struct FDataTableRowHandle QuestBackendObjectiveHandle, class UObject* __WorldContext, class AFortPlayerController** PlayerControllerOut, bool* CompletedQuestObjective);
	void STATIC_DoesAnyPlayerRequireQuestObjective(class UFortQuestItemDefinition* QuestReference, struct FDataTableRowHandle QuestObjectiveHandle, class UObject* __WorldContext, TArray<class AFortPlayerController*>* PlayerControllersWhoRequireObjective, bool* SomebodyRequiresObjective);
	void STATIC_HideParticleComponentsAttachedToMesh(class UStaticMeshComponent* MeshComponent, class UObject* __WorldContext, bool* SuccessfullyDeactivatedParticle);
	void STATIC_HasPlayerCompletedQuestObjective(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* QuestReference, struct FName QuestBackendObjectiveName, class UObject* __WorldContext, class AFortPlayerController** PlayerControllerOut, bool* CompletedQuestObjective);
	void STATIC_GetContributingControllersNearActor(float Distance, class AActor* Actor, class UObject* __WorldContext, TArray<class AFortPlayerController*>* PlayerControllersNearby, bool* SuccessfullyFoundPlayer);
	void STATIC_PointLocationsBetweenTwoVectors(struct FVector Vector_1, struct FVector Vector_2, int HowManyPoints, class UObject* __WorldContext, TArray<struct FVector>* VectorPoints, bool* SuccessfullyFoundPoints);
	void STATIC_GetCurrentDifficulty(class UObject* __WorldContext, float* Difficulty, bool* Success);
	void STATIC_ApplyDifficultyOffset(struct FName RowName, float BaseDifficulty, class UObject* __WorldContext, bool* Success);
	void STATIC_DistanceBetweenTwoVectors(struct FVector Vector1, struct FVector Vector2, class UObject* __WorldContext, float* Distance);
	void STATIC_HasPlayerCompletedQuest(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* QuestReference, struct FName QuestBackendName, class UObject* __WorldContext, class AFortPlayerController** PlayerControllerOut, bool* CompletedQuest);
	void STATIC_SeperatePlayersWhoNeedQuest(class UFortQuestItemDefinition* QuestItemReference, struct FName QuestObjectiveBackendName, class UObject* __WorldContext, TArray<class AFortPlayerController*>* PlayersWhoNeedQuest, TArray<class AFortPlayerController*>* PlayersWhoDoNotNeedQuest);
	void STATIC_BasicBuildingItemDrop(TEnumAsByte<EnumEventWorldItemDrop> Item_Drop_Level, struct FVector LootDropLocation, class UObject* __WorldContext);
	void STATIC_GrantSurvivorBadge(int LootLevelIn, TEnumAsByte<ESurvivorBadgeTypes> BadgeType, class UObject* __WorldContext, class UFortItemDefinition** NewParam);
	void STATIC_GetBuildingRecommendation(struct FName RowName, class UObject* __WorldContext, int* BuildingCount, bool* RowFound);
	void STATIC_Random(float MinDistance, float MaxDistance, class UObject* __WorldContext, struct FVector* Random_Vector_Result_);
	void STATIC_AnyPawnNearActor(float DistanceToCheck, class AActor* Actor, class UObject* __WorldContext, bool* IsPawnNearActor, TArray<class AFortPawn*>* PawnsNearActor);
	void STATIC_GiveQuestUpdateToPlayers(class UFortQuestItemDefinition* Quest_Reference, struct FName Quest_Objective_Backend_Name, struct FDataTableRowHandle ObjectiveStatEvent, class UObject* __WorldContext, TArray<class AFortPlayerController*>* PlayerControllersForUpdate);
	void STATIC_DropChance(float DropPercentChance, class UObject* __WorldContext, bool* DropResult);
	void STATIC_AnyPlayerNearActor(float DistanceToCheck, class AActor* Actor, class UObject* __WorldContext, bool* IsPlayerNearActor, TArray<class AFortPlayerPawn*>* PlayersNearActor);
	void STATIC_FlashObjectiveUI(class AFortObjectiveBase* Objective_Reference, class UObject* __WorldContext);
	void STATIC_NPC_DroneStopRescue(class AActor* Actor, class AActor* Instigator, class UObject* __WorldContext);
	void STATIC_NPC_DroneStartRescue(class AActor* Actor, class AActor* Instigator, class UObject* __WorldContext);
	void STATIC_ListPlayersWhoNeedQuest(class UFortQuestItemDefinition* Quest_Reference, struct FName Quest_Backend_Name, class UObject* __WorldContext, TArray<class AFortPlayerController*>* Player_Controllers_Who_Require_The_Quest, bool* DoesAnyoneRequireTheQuest);
	void STATIC_DoesAnyoneRequireQuest(class UFortQuestItemDefinition* QuestReference, struct FName Quest_Backend_Name, class UObject* __WorldContext, bool* SomePlayerNeedsTheQuest);
	void STATIC_QuestObjectiveCountAchieved(class AFortPlayerController* PlayerControllerReference, class UFortQuestItemDefinition* Quest_Item_Reference, struct FDataTableRowHandle ObjectiveStatHandle, class UObject* __WorldContext, int* Quest_Count_Achieved, int* Quest_Count_Required, bool* SuccessfullyFoundCount);
	void STATIC_HighlightQuestActor(class AActor* ActorToHighlight, bool HighlightEnabled, class UObject* __WorldContext);
	void STATIC_DoesPlayerHaveQuest(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* Quest_Item_Reference, struct FName Quest_Item_Objective_Backend_Name, class UObject* __WorldContext, bool* QuestValid, class AFortPlayerController** PlayerControllerRef);
	void STATIC_GetObjectiveBadgeIconBrush(class AFortObjectiveBase* Objective, struct FGameplayTag RewardTag, class UObject* __WorldContext, struct FSlateBrush* IconBrush);
	void STATIC_UnRegisterUI_UpdatesWithDamageEvents(class AActor* ActorToUnRegisterWith, class AFortMissionState* MissionState, class UObject* __WorldContext);
	void STATIC_RegisterUI_UpdatesWithDamageEvents(class AActor* ActorToRegisterWith, class AFortMissionState* MissionState, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
