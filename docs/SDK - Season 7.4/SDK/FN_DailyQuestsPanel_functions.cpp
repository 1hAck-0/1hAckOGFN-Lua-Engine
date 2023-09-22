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

// Function DailyQuestsPanel.DailyQuestsPanel_C.NotifyQuestsDirty
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestsPanel_C::NotifyQuestsDirty()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.NotifyQuestsDirty");

	UDailyQuestsPanel_C_NotifyQuestsDirty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.Reset Button Anim
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestsPanel_C::Reset_Button_Anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.Reset Button Anim");

	UDailyQuestsPanel_C_Reset_Button_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.CreateMultiQuestWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>  Quests                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UVerticalBox*            QuestList                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           QuestCompleted                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDailyQuestsPanel_C::CreateMultiQuestWidget(class UVerticalBox* QuestList, TArray<class UFortQuestItem*>* Quests, bool* QuestCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.CreateMultiQuestWidget");

	UDailyQuestsPanel_C_CreateMultiQuestWidget_Params params;
	params.QuestList = QuestList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Quests != nullptr)
		*Quests = params.Quests;
	if (QuestCompleted != nullptr)
		*QuestCompleted = params.QuestCompleted;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.SetInputActionHandlers
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestsPanel_C::SetInputActionHandlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.SetInputActionHandlers");

	UDailyQuestsPanel_C_SetInputActionHandlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.ProcessQuestUpdate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UFortQuestItem*>  QuestArray                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UVerticalBox*            QuestList                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           QuestIsCompleted               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDailyQuestsPanel_C::ProcessQuestUpdate(class UFortQuestItem* Quest, class UVerticalBox* QuestList, TArray<class UFortQuestItem*>* QuestArray, bool* QuestIsCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.ProcessQuestUpdate");

	UDailyQuestsPanel_C_ProcessQuestUpdate_Params params;
	params.Quest = Quest;
	params.QuestList = QuestList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestArray != nullptr)
		*QuestArray = params.QuestArray;
	if (QuestIsCompleted != nullptr)
		*QuestIsCompleted = params.QuestIsCompleted;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.ShowModalQuests
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCommitted                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDailyQuestsPanel_C::ShowModalQuests(bool* bCommitted)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.ShowModalQuests");

	UDailyQuestsPanel_C_ShowModalQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCommitted != nullptr)
		*bCommitted = params.bCommitted;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.ClaimNextQuestReward
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestsPanel_C::ClaimNextQuestReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.ClaimNextQuestReward");

	UDailyQuestsPanel_C_ClaimNextQuestReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.OnNoQuestRewardsToClaim
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestsPanel_C::OnNoQuestRewardsToClaim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.OnNoQuestRewardsToClaim");

	UDailyQuestsPanel_C_OnNoQuestRewardsToClaim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestRewardClaimed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FFortItemInstanceQuantityPair> Rewards                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDailyQuestsPanel_C::OnQuestRewardClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestRewardClaimed");

	UDailyQuestsPanel_C_OnQuestRewardClaimed_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestsGranted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>  NewQuests                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDailyQuestsPanel_C::OnQuestsGranted(TArray<class UFortQuestItem*>* NewQuests)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestsGranted");

	UDailyQuestsPanel_C_OnQuestsGranted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewQuests != nullptr)
		*NewQuests = params.NewQuests;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.CreateQuestWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UVerticalBox*            QuestList                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           QuestCompleted                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDailyQuestsPanel_C::CreateQuestWidget(class UFortQuestItem* Quest, class UVerticalBox* QuestList, bool* QuestCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.CreateQuestWidget");

	UDailyQuestsPanel_C_CreateQuestWidget_Params params;
	params.Quest = Quest;
	params.QuestList = QuestList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestCompleted != nullptr)
		*QuestCompleted = params.QuestCompleted;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestsUpdated
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestsPanel_C::OnQuestsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestsUpdated");

	UDailyQuestsPanel_C_OnQuestsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.BindEventListeners
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestsPanel_C::BindEventListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.BindEventListeners");

	UDailyQuestsPanel_C_BindEventListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDailyQuestsPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.Construct");

	UDailyQuestsPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDailyQuestsPanel_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent");

	UDailyQuestsPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDailyQuestsPanel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.PreConstruct");

	UDailyQuestsPanel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDailyQuestsPanel_C::Tick(struct FGeometry MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.Tick");

	UDailyQuestsPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.WidgetAnimationEvt_ClaimReward_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UDailyQuestsPanel_C::WidgetAnimationEvt_ClaimReward_K2Node_WidgetAnimationEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.WidgetAnimationEvt_ClaimReward_K2Node_WidgetAnimationEvent_1");

	UDailyQuestsPanel_C_WidgetAnimationEvt_ClaimReward_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.ExecuteUbergraph_DailyQuestsPanel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDailyQuestsPanel_C::ExecuteUbergraph_DailyQuestsPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.ExecuteUbergraph_DailyQuestsPanel");

	UDailyQuestsPanel_C_ExecuteUbergraph_DailyQuestsPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
