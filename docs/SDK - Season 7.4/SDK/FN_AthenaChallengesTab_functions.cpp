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

// Function AthenaChallengesTab.AthenaChallengesTab_C.GetAthenaEventTime
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan               Result                         (Parm, OutParm, ZeroConstructor)

void UAthenaChallengesTab_C::GetAthenaEventTime(struct FTimespan* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.GetAthenaEventTime");

	UAthenaChallengesTab_C_GetAthenaEventTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.ConstructTimespanSource
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortTimerTimespanDataSource* NewObject                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaChallengesTab_C::ConstructTimespanSource(class UFortTimerTimespanDataSource** NewObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.ConstructTimespanSource");

	UAthenaChallengesTab_C_ConstructTimespanSource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewObject != nullptr)
		*NewObject = params.NewObject;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.SetupChallengeBundleInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChallengeBundlePage_C*  InChallengeBundlePageWidget    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaChallengesTab_C::SetupChallengeBundleInfo(class UChallengeBundlePage_C* InChallengeBundlePageWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.SetupChallengeBundleInfo");

	UAthenaChallengesTab_C_SetupChallengeBundleInfo_Params params;
	params.InChallengeBundlePageWidget = InChallengeBundlePageWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.SetupFrontendInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaChallengesTab_C::SetupFrontendInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.SetupFrontendInfo");

	UAthenaChallengesTab_C_SetupFrontendInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.InitializeInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaChallengesTab_C::InitializeInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.InitializeInput");

	UAthenaChallengesTab_C_InitializeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.OnBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaChallengesTab_C::OnBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.OnBack");

	UAthenaChallengesTab_C_OnBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.SetBackground
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isInGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaChallengesTab_C::SetBackground(bool isInGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.SetBackground");

	UAthenaChallengesTab_C_SetBackground_Params params;
	params.isInGame = isInGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.SelectFirstBundle
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaChallengesTab_C::SelectFirstBundle()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.SelectFirstBundle");

	UAthenaChallengesTab_C_SelectFirstBundle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.TreeViewGetChildrenForCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> UAthenaChallengesTab_C::TreeViewGetChildrenForCategory(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.TreeViewGetChildrenForCategory");

	UAthenaChallengesTab_C_TreeViewGetChildrenForCategory_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.SetupViewedItemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaChallengesTab_C::SetupViewedItemData(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.SetupViewedItemData");

	UAthenaChallengesTab_C_SetupViewedItemData_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.UpdateChallengeViews
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaChallengesTab_C::UpdateChallengeViews()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.UpdateChallengeViews");

	UAthenaChallengesTab_C_UpdateChallengeViews_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.HandleChallengesChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaChallengesTab_C::HandleChallengesChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.HandleChallengesChanged");

	UAthenaChallengesTab_C_HandleChallengesChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaChallengesTab_C::BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent");

	UAthenaChallengesTab_C_BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaChallengesTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.Construct");

	UAthenaChallengesTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaChallengesTab_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.OnActivated");

	UAthenaChallengesTab_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaChallengesTab_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.OnDeactivated");

	UAthenaChallengesTab_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.OnChallengesChanged
// (Event, Protected, BlueprintEvent)

void UAthenaChallengesTab_C::OnChallengesChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.OnChallengesChanged");

	UAthenaChallengesTab_C_OnChallengesChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.OnRefreshNavigation
// (Event, Protected, BlueprintEvent)

void UAthenaChallengesTab_C::OnRefreshNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.OnRefreshNavigation");

	UAthenaChallengesTab_C_OnRefreshNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaChallengesTab_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.PreConstruct");

	UAthenaChallengesTab_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaChallengesTab_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.OnInitialized");

	UAthenaChallengesTab_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)

void UAthenaChallengesTab_C::BndEvt__BackgroundButton_K2Node_ComponentBoundEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent");

	UAthenaChallengesTab_C_BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaChallengesTab.AthenaChallengesTab_C.ExecuteUbergraph_AthenaChallengesTab
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaChallengesTab_C::ExecuteUbergraph_AthenaChallengesTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaChallengesTab.AthenaChallengesTab_C.ExecuteUbergraph_AthenaChallengesTab");

	UAthenaChallengesTab_C_ExecuteUbergraph_AthenaChallengesTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
