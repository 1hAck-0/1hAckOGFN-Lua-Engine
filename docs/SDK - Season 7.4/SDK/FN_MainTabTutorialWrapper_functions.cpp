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

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.SetParentButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           ParentButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainTabTutorialWrapper_C::SetParentButton(class UCommonButton* ParentButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.SetParentButton");

	UMainTabTutorialWrapper_C_SetParentButton_Params params;
	params.ParentButton = ParentButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.GetTutorialCalloutData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUITutorialData     TutorialData                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortToastDisplayInfo   FortToastDisplayInfo           (Parm, OutParm)

void UMainTabTutorialWrapper_C::GetTutorialCalloutData(struct FFortUITutorialData TutorialData, struct FFortToastDisplayInfo* FortToastDisplayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.GetTutorialCalloutData");

	UMainTabTutorialWrapper_C_GetTutorialCalloutData_Params params;
	params.TutorialData = TutorialData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FortToastDisplayInfo != nullptr)
		*FortToastDisplayInfo = params.FortToastDisplayInfo;
}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.HasValidData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUITutorialData     FortUITutorialData             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainTabTutorialWrapper_C::HasValidData(struct FFortUITutorialData FortUITutorialData, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.HasValidData");

	UMainTabTutorialWrapper_C_HasValidData_Params params;
	params.FortUITutorialData = FortUITutorialData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.HandleTutorialCallout
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TutorialObjectiveName          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// ETutorialType                  TutorialType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabTutorialWrapper_C::HandleTutorialCallout(struct FName TutorialObjectiveName, ETutorialType TutorialType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.HandleTutorialCallout");

	UMainTabTutorialWrapper_C_HandleTutorialCallout_Params params;
	params.TutorialObjectiveName = TutorialObjectiveName;
	params.TutorialType = TutorialType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.CheckFinishTutorialWrapper
// (Public, BlueprintCallable, BlueprintEvent)

void UMainTabTutorialWrapper_C::CheckFinishTutorialWrapper()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.CheckFinishTutorialWrapper");

	UMainTabTutorialWrapper_C_CheckFinishTutorialWrapper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.OnBangStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabTutorialWrapper_C::OnBangStateChanged(bool bEnabled, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.OnBangStateChanged");

	UMainTabTutorialWrapper_C_OnBangStateChanged_Params params;
	params.bEnabled = bEnabled;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.OnStopCallout
// (Event, Protected, BlueprintEvent)

void UMainTabTutorialWrapper_C::OnStopCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.OnStopCallout");

	UMainTabTutorialWrapper_C_OnStopCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.OnStartCallout
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FName                   TutorialObjectiveName          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ETutorialType                  TutorialType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabTutorialWrapper_C::OnStartCallout(struct FName TutorialObjectiveName, ETutorialType TutorialType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.OnStartCallout");

	UMainTabTutorialWrapper_C_OnStartCallout_Params params;
	params.TutorialObjectiveName = TutorialObjectiveName;
	params.TutorialType = TutorialType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.Tab Reveal Message Closed
// (BlueprintCallable, BlueprintEvent)

void UMainTabTutorialWrapper_C::Tab_Reveal_Message_Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.Tab Reveal Message Closed");

	UMainTabTutorialWrapper_C_Tab_Reveal_Message_Closed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.ExecuteUbergraph_MainTabTutorialWrapper
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabTutorialWrapper_C::ExecuteUbergraph_MainTabTutorialWrapper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.ExecuteUbergraph_MainTabTutorialWrapper");

	UMainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
