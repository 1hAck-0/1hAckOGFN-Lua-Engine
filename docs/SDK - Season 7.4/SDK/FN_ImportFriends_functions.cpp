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

// Function ImportFriends.ImportFriends_C.SetupNav
// (Public, BlueprintCallable, BlueprintEvent)

void UImportFriends_C::SetupNav()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportFriends.ImportFriends_C.SetupNav");

	UImportFriends_C_SetupNav_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImportFriends.ImportFriends_C.ScaleTextButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharThreshold                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UScaleBox*               ContainingScaleBox             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UIconTextButton_C*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UImportFriends_C::ScaleTextButton(int CharThreshold, class UScaleBox* ContainingScaleBox, class UIconTextButton_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportFriends.ImportFriends_C.ScaleTextButton");

	UImportFriends_C_ScaleTextButton_Params params;
	params.CharThreshold = CharThreshold;
	params.ContainingScaleBox = ContainingScaleBox;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImportFriends.ImportFriends_C.ScaleTextboxWithWrappingWorkaround
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScaleBox*               ContainingScaleBox             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            CharLimitThreshold             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonTextBlock*        TargetText                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            WrapAtHorrizontal              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UImportFriends_C::ScaleTextboxWithWrappingWorkaround(class UScaleBox* ContainingScaleBox, int CharLimitThreshold, class UCommonTextBlock* TargetText, int WrapAtHorrizontal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportFriends.ImportFriends_C.ScaleTextboxWithWrappingWorkaround");

	UImportFriends_C_ScaleTextboxWithWrappingWorkaround_Params params;
	params.ContainingScaleBox = ContainingScaleBox;
	params.CharLimitThreshold = CharLimitThreshold;
	params.TargetText = TargetText;
	params.WrapAtHorrizontal = WrapAtHorrizontal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImportFriends.ImportFriends_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UImportFriends_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportFriends.ImportFriends_C.PreConstruct");

	UImportFriends_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImportFriends.ImportFriends_C.HandleHeaderText
// (BlueprintCallable, BlueprintEvent)

void UImportFriends_C::HandleHeaderText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportFriends.ImportFriends_C.HandleHeaderText");

	UImportFriends_C_HandleHeaderText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImportFriends.ImportFriends_C.HandleDescriptionText
// (BlueprintCallable, BlueprintEvent)

void UImportFriends_C::HandleDescriptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportFriends.ImportFriends_C.HandleDescriptionText");

	UImportFriends_C_HandleDescriptionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImportFriends.ImportFriends_C.OnPanelTypeSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// ESocialImportPanelType         NewType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UImportFriends_C::OnPanelTypeSet(ESocialImportPanelType NewType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportFriends.ImportFriends_C.OnPanelTypeSet");

	UImportFriends_C_OnPanelTypeSet_Params params;
	params.NewType = NewType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImportFriends.ImportFriends_C.BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UImportFriends_C::BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportFriends.ImportFriends_C.BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent");

	UImportFriends_C_BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImportFriends.ImportFriends_C.OnIncentivizedSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIncentivized                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UImportFriends_C::OnIncentivizedSet(bool bIncentivized)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportFriends.ImportFriends_C.OnIncentivizedSet");

	UImportFriends_C_OnIncentivizedSet_Params params;
	params.bIncentivized = bIncentivized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImportFriends.ImportFriends_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UImportFriends_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportFriends.ImportFriends_C.OnActivated");

	UImportFriends_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImportFriends.ImportFriends_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UImportFriends_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportFriends.ImportFriends_C.OnAnimationFinished");

	UImportFriends_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImportFriends.ImportFriends_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UImportFriends_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportFriends.ImportFriends_C.OnInputModeChanged");

	UImportFriends_C_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImportFriends.ImportFriends_C.ExecuteUbergraph_ImportFriends
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UImportFriends_C::ExecuteUbergraph_ImportFriends(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImportFriends.ImportFriends_C.ExecuteUbergraph_ImportFriends");

	UImportFriends_C_ExecuteUbergraph_ImportFriends_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
