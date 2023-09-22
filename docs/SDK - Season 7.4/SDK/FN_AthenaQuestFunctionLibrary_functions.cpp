// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_IsCreativeOrPlaygroundPlaylist
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaQuestFunctionLibrary_C::STATIC_Athena_IsCreativeOrPlaygroundPlaylist(struct FGameplayTagContainer TagContainer, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_IsCreativeOrPlaygroundPlaylist");

	UAthenaQuestFunctionLibrary_C_Athena_IsCreativeOrPlaygroundPlaylist_Params params;
	params.TagContainer = TagContainer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_CheckCreativeMode
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameStateBase*          InGameState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanCompleteQuest               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaQuestFunctionLibrary_C::STATIC_Athena_CheckCreativeMode(class AGameStateBase* InGameState, class UObject* __WorldContext, bool* CanCompleteQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_CheckCreativeMode");

	UAthenaQuestFunctionLibrary_C_Athena_CheckCreativeMode_Params params;
	params.InGameState = InGameState;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanCompleteQuest != nullptr)
		*CanCompleteQuest = params.CanCompleteQuest;
}


// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_QuestObjectiveCounter
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   FortPlayerControllerAthena     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortQuestItemDefinition* ObjectiveItem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDataTableRowHandle     ObjectiveStat                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            QuestCountAchieved             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            QuestCountRequired             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CountSuccessfullyReturned      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaQuestFunctionLibrary_C::STATIC_Athena_QuestObjectiveCounter(class AFortPlayerController* FortPlayerControllerAthena, class UFortQuestItemDefinition* ObjectiveItem, struct FDataTableRowHandle ObjectiveStat, class UObject* __WorldContext, int* QuestCountAchieved, int* QuestCountRequired, bool* CountSuccessfullyReturned)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_QuestObjectiveCounter");

	UAthenaQuestFunctionLibrary_C_Athena_QuestObjectiveCounter_Params params;
	params.FortPlayerControllerAthena = FortPlayerControllerAthena;
	params.ObjectiveItem = ObjectiveItem;
	params.ObjectiveStat = ObjectiveStat;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestCountAchieved != nullptr)
		*QuestCountAchieved = params.QuestCountAchieved;
	if (QuestCountRequired != nullptr)
		*QuestCountRequired = params.QuestCountRequired;
	if (CountSuccessfullyReturned != nullptr)
		*CountSuccessfullyReturned = params.CountSuccessfullyReturned;
}


// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_GiveQuestUpdateToPlayers
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition* InQuestItemRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ObjectiveBackendName           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDataTableRowHandle     ObjectiveStatEvent             (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class AFortPlayerController*> PlayerControllersForUpdate     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuestFunctionLibrary_C::STATIC_Athena_GiveQuestUpdateToPlayers(class UFortQuestItemDefinition* InQuestItemRef, struct FName ObjectiveBackendName, struct FDataTableRowHandle ObjectiveStatEvent, class UObject* __WorldContext, TArray<class AFortPlayerController*>* PlayerControllersForUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_GiveQuestUpdateToPlayers");

	UAthenaQuestFunctionLibrary_C_Athena_GiveQuestUpdateToPlayers_Params params;
	params.InQuestItemRef = InQuestItemRef;
	params.ObjectiveBackendName = ObjectiveBackendName;
	params.ObjectiveStatEvent = ObjectiveStatEvent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerControllersForUpdate != nullptr)
		*PlayerControllersForUpdate = params.PlayerControllersForUpdate;
}


// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_CheckQuestAndObjectiveCompletion
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   InPlayerControlle              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortQuestItemDefinition* InQuestItemRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ObjectiveBackendName           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           QuestIsValid                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           QuestCompleted                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ObjectiveCompleted             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaQuestFunctionLibrary_C::STATIC_Athena_CheckQuestAndObjectiveCompletion(class AFortPlayerController* InPlayerControlle, class UFortQuestItemDefinition* InQuestItemRef, struct FName ObjectiveBackendName, class UObject* __WorldContext, bool* QuestIsValid, bool* QuestCompleted, bool* ObjectiveCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_CheckQuestAndObjectiveCompletion");

	UAthenaQuestFunctionLibrary_C_Athena_CheckQuestAndObjectiveCompletion_Params params;
	params.InPlayerControlle = InPlayerControlle;
	params.InQuestItemRef = InQuestItemRef;
	params.ObjectiveBackendName = ObjectiveBackendName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestIsValid != nullptr)
		*QuestIsValid = params.QuestIsValid;
	if (QuestCompleted != nullptr)
		*QuestCompleted = params.QuestCompleted;
	if (ObjectiveCompleted != nullptr)
		*ObjectiveCompleted = params.ObjectiveCompleted;
}


// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_HasPlayerCompletedQuest
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   InPlayerControlle              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortQuestItemDefinition* InQuestItemRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasQuest                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           QuestCompleted                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaQuestFunctionLibrary_C::STATIC_Athena_HasPlayerCompletedQuest(class AFortPlayerController* InPlayerControlle, class UFortQuestItemDefinition* InQuestItemRef, class UObject* __WorldContext, bool* HasQuest, bool* QuestCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_HasPlayerCompletedQuest");

	UAthenaQuestFunctionLibrary_C_Athena_HasPlayerCompletedQuest_Params params;
	params.InPlayerControlle = InPlayerControlle;
	params.InQuestItemRef = InQuestItemRef;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasQuest != nullptr)
		*HasQuest = params.HasQuest;
	if (QuestCompleted != nullptr)
		*QuestCompleted = params.QuestCompleted;
}


// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_HasQuest
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   InPlayerControlle              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortQuestItemDefinition* InQuestItemRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayerHasQuest                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaQuestFunctionLibrary_C::STATIC_Athena_HasQuest(class AFortPlayerController* InPlayerControlle, class UFortQuestItemDefinition* InQuestItemRef, class UObject* __WorldContext, bool* PlayerHasQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_HasQuest");

	UAthenaQuestFunctionLibrary_C_Athena_HasQuest_Params params;
	params.InPlayerControlle = InPlayerControlle;
	params.InQuestItemRef = InQuestItemRef;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerHasQuest != nullptr)
		*PlayerHasQuest = params.PlayerHasQuest;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
