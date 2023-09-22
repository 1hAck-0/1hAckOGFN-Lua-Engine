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

// Function ChallengeBundlePage.ChallengeBundlePage_C.ConstructTimespanSource
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortTimerTimespanDataSource* NewObject                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChallengeBundlePage_C::ConstructTimespanSource(class UFortTimerTimespanDataSource** NewObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.ConstructTimespanSource");

	UChallengeBundlePage_C_ConstructTimespanSource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewObject != nullptr)
		*NewObject = params.NewObject;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.GetAthenaEventTime
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTimespan               Result                         (Parm, OutParm, ZeroConstructor)

void UChallengeBundlePage_C::GetAthenaEventTime(struct FTimespan* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.GetAthenaEventTime");

	UChallengeBundlePage_C_GetAthenaEventTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.SetBackground
// (Public, BlueprintCallable, BlueprintEvent)

void UChallengeBundlePage_C::SetBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.SetBackground");

	UChallengeBundlePage_C_SetBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.UpdateQuestList
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EChallengeBundleQuestVisualStyle Visual_Style                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPanelWidget*            Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPanelWidget*            Container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           HasClaimableQuests             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChallengeBundlePage_C::UpdateQuestList(EChallengeBundleQuestVisualStyle Visual_Style, class UPanelWidget* Panel, class UPanelWidget* Container, bool* HasClaimableQuests)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.UpdateQuestList");

	UChallengeBundlePage_C_UpdateQuestList_Params params;
	params.Visual_Style = Visual_Style;
	params.Panel = Panel;
	params.Container = Container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasClaimableQuests != nullptr)
		*HasClaimableQuests = params.HasClaimableQuests;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.Initial Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UChallengeBundlePage_C::Initial_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.Initial Reset");

	UChallengeBundlePage_C_Initial_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.Play Intro
// (Public, BlueprintCallable, BlueprintEvent)

void UChallengeBundlePage_C::Play_Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.Play Intro");

	UChallengeBundlePage_C_Play_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChallengeBundlePage_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.HandleBack");

	UChallengeBundlePage_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.CreateQuestWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortQuestItemDefinition* QuestDefinition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPanelWidget*            Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChallengeBundlePage_C::CreateQuestWidget(class UFortQuestItem* Quest, class UFortQuestItemDefinition* QuestDefinition, class UPanelWidget* Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.CreateQuestWidget");

	UChallengeBundlePage_C_CreateQuestWidget_Params params;
	params.Quest = Quest;
	params.QuestDefinition = QuestDefinition;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.RegisterEventListeners
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChallengeBundlePage_C::RegisterEventListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.RegisterEventListeners");

	UChallengeBundlePage_C_RegisterEventListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.ClaimNextQuestReward
// (Public, BlueprintCallable, BlueprintEvent)

void UChallengeBundlePage_C::ClaimNextQuestReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.ClaimNextQuestReward");

	UChallengeBundlePage_C_ClaimNextQuestReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.UpdateQuests
// (Public, BlueprintCallable, BlueprintEvent)

void UChallengeBundlePage_C::UpdateQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.UpdateQuests");

	UChallengeBundlePage_C_UpdateQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.UpdateBundle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChallengeBundlePage_C::UpdateBundle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.UpdateBundle");

	UChallengeBundlePage_C_UpdateBundle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.BndEvt__PagePreviousButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChallengeBundlePage_C::BndEvt__PagePreviousButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.BndEvt__PagePreviousButton_K2Node_ComponentBoundEvent");

	UChallengeBundlePage_C_BndEvt__PagePreviousButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.BndEvt__PageNextButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChallengeBundlePage_C::BndEvt__PageNextButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.BndEvt__PageNextButton_K2Node_ComponentBoundEvent");

	UChallengeBundlePage_C_BndEvt__PageNextButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChallengeBundlePage_C::BndEvt__PanelButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent");

	UChallengeBundlePage_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.OnBundleUpdated
// (Event, Protected, BlueprintEvent)

void UChallengeBundlePage_C::OnBundleUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.OnBundleUpdated");

	UChallengeBundlePage_C_OnBundleUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent
// (BlueprintEvent)

void UChallengeBundlePage_C::BndEvt__SwipePanel_K2Node_ComponentBoundEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent");

	UChallengeBundlePage_C_BndEvt__SwipePanel_K2Node_ComponentBoundEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UChallengeBundlePage_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.OnActivated");

	UChallengeBundlePage_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChallengeBundlePage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.Construct");

	UChallengeBundlePage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChallengeBundlePage_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.OnInitialized");

	UChallengeBundlePage_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UChallengeBundlePage_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.OnDeactivated");

	UChallengeBundlePage_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundlePage.ChallengeBundlePage_C.ExecuteUbergraph_ChallengeBundlePage
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeBundlePage_C::ExecuteUbergraph_ChallengeBundlePage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundlePage.ChallengeBundlePage_C.ExecuteUbergraph_ChallengeBundlePage");

	UChallengeBundlePage_C_ExecuteUbergraph_ChallengeBundlePage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
