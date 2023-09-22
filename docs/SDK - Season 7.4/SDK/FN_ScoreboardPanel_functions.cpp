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

// Function ScoreboardPanel.ScoreboardPanel_C.CanChangeMinigameState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScoreboardPanel_C::CanChangeMinigameState(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPanel.ScoreboardPanel_C.CanChangeMinigameState");

	UScoreboardPanel_C_CanChangeMinigameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function ScoreboardPanel.ScoreboardPanel_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreboardPanel_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPanel.ScoreboardPanel_C.Close");

	UScoreboardPanel_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPanel.ScoreboardPanel_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UScoreboardPanel_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPanel.ScoreboardPanel_C.OnActivated");

	UScoreboardPanel_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPanel.ScoreboardPanel_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UScoreboardPanel_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPanel.ScoreboardPanel_C.OnDeactivated");

	UScoreboardPanel_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPanel.ScoreboardPanel_C.BndEvt__DismissButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UScoreboardPanel_C::BndEvt__DismissButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPanel.ScoreboardPanel_C.BndEvt__DismissButton_K2Node_ComponentBoundEvent");

	UScoreboardPanel_C_BndEvt__DismissButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPanel.ScoreboardPanel_C.BndEvt__RestartButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UScoreboardPanel_C::BndEvt__RestartButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPanel.ScoreboardPanel_C.BndEvt__RestartButton_K2Node_ComponentBoundEvent");

	UScoreboardPanel_C_BndEvt__RestartButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPanel.ScoreboardPanel_C.BndEvt__AbortButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UScoreboardPanel_C::BndEvt__AbortButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPanel.ScoreboardPanel_C.BndEvt__AbortButton_K2Node_ComponentBoundEvent");

	UScoreboardPanel_C_BndEvt__AbortButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPanel.ScoreboardPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScoreboardPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPanel.ScoreboardPanel_C.Construct");

	UScoreboardPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPanel.ScoreboardPanel_C.ExecuteUbergraph_ScoreboardPanel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardPanel_C::ExecuteUbergraph_ScoreboardPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPanel.ScoreboardPanel_C.ExecuteUbergraph_ScoreboardPanel");

	UScoreboardPanel_C_ExecuteUbergraph_ScoreboardPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
