#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_IsCreativeOrPlaygroundPlaylist
struct UAthenaQuestFunctionLibrary_C_Athena_IsCreativeOrPlaygroundPlaylist_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_CheckCreativeMode
struct UAthenaQuestFunctionLibrary_C_Athena_CheckCreativeMode_Params
{
	class AGameStateBase*                              InGameState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanCompleteQuest;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_QuestObjectiveCounter
struct UAthenaQuestFunctionLibrary_C_Athena_QuestObjectiveCounter_Params
{
	class AFortPlayerController*                       FortPlayerControllerAthena;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortQuestItemDefinition*                    ObjectiveItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDataTableRowHandle                         ObjectiveStat;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                QuestCountAchieved;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                QuestCountRequired;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               CountSuccessfullyReturned;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_GiveQuestUpdateToPlayers
struct UAthenaQuestFunctionLibrary_C_Athena_GiveQuestUpdateToPlayers_Params
{
	class UFortQuestItemDefinition*                    InQuestItemRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveBackendName;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDataTableRowHandle                         ObjectiveStatEvent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class AFortPlayerController*>               PlayerControllersForUpdate;                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_CheckQuestAndObjectiveCompletion
struct UAthenaQuestFunctionLibrary_C_Athena_CheckQuestAndObjectiveCompletion_Params
{
	class AFortPlayerController*                       InPlayerControlle;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortQuestItemDefinition*                    InQuestItemRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveBackendName;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               QuestIsValid;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               QuestCompleted;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ObjectiveCompleted;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_HasPlayerCompletedQuest
struct UAthenaQuestFunctionLibrary_C_Athena_HasPlayerCompletedQuest_Params
{
	class AFortPlayerController*                       InPlayerControlle;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortQuestItemDefinition*                    InQuestItemRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasQuest;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               QuestCompleted;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_HasQuest
struct UAthenaQuestFunctionLibrary_C_Athena_HasQuest_Params
{
	class AFortPlayerController*                       InPlayerControlle;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortQuestItemDefinition*                    InQuestItemRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayerHasQuest;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
