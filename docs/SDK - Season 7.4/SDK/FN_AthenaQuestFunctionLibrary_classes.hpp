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

// BlueprintGeneratedClass AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UAthenaQuestFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C");
		return ptr;
	}


	bool STATIC_Athena_IsCreativeOrPlaygroundPlaylist(struct FGameplayTagContainer TagContainer, class UObject* __WorldContext);
	void STATIC_Athena_CheckCreativeMode(class AGameStateBase* InGameState, class UObject* __WorldContext, bool* CanCompleteQuest);
	void STATIC_Athena_QuestObjectiveCounter(class AFortPlayerController* FortPlayerControllerAthena, class UFortQuestItemDefinition* ObjectiveItem, struct FDataTableRowHandle ObjectiveStat, class UObject* __WorldContext, int* QuestCountAchieved, int* QuestCountRequired, bool* CountSuccessfullyReturned);
	void STATIC_Athena_GiveQuestUpdateToPlayers(class UFortQuestItemDefinition* InQuestItemRef, struct FName ObjectiveBackendName, struct FDataTableRowHandle ObjectiveStatEvent, class UObject* __WorldContext, TArray<class AFortPlayerController*>* PlayerControllersForUpdate);
	void STATIC_Athena_CheckQuestAndObjectiveCompletion(class AFortPlayerController* InPlayerControlle, class UFortQuestItemDefinition* InQuestItemRef, struct FName ObjectiveBackendName, class UObject* __WorldContext, bool* QuestIsValid, bool* QuestCompleted, bool* ObjectiveCompleted);
	void STATIC_Athena_HasPlayerCompletedQuest(class AFortPlayerController* InPlayerControlle, class UFortQuestItemDefinition* InQuestItemRef, class UObject* __WorldContext, bool* HasQuest, bool* QuestCompleted);
	void STATIC_Athena_HasQuest(class AFortPlayerController* InPlayerControlle, class UFortQuestItemDefinition* InQuestItemRef, class UObject* __WorldContext, bool* PlayerHasQuest);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
