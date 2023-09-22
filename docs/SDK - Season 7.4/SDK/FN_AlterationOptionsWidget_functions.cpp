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

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.UnbindChildren
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAlterationOptionsWidget_C::UnbindChildren(class UPanelWidget* Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.UnbindChildren");

	UAlterationOptionsWidget_C_UnbindChildren_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ClearAndUnbindOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UAlterationOptionsWidget_C::ClearAndUnbindOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.ClearAndUnbindOptions");

	UAlterationOptionsWidget_C_ClearAndUnbindOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.SetScrollWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UAlterationOptionsWidget_C::SetScrollWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.SetScrollWidget");

	UAlterationOptionsWidget_C_SetScrollWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ShouldShowNoOptions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAlterationOptionsWidget_C::ShouldShowNoOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.ShouldShowNoOptions");

	UAlterationOptionsWidget_C_ShouldShowNoOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.DoAnyAlterationsExist
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OptionsExist                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAlterationOptionsWidget_C::DoAnyAlterationsExist(bool* OptionsExist)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.DoAnyAlterationsExist");

	UAlterationOptionsWidget_C_DoAnyAlterationsExist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptionsExist != nullptr)
		*OptionsExist = params.OptionsExist;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.AddAlterationOptionWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortAlterationOptionType      OptionType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortAlterationOption*   OptionWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAlterationOptionsWidget_C::AddAlterationOptionWidget(EFortAlterationOptionType OptionType, class UFortAlterationOption* OptionWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.AddAlterationOptionWidget");

	UAlterationOptionsWidget_C_AddAlterationOptionWidget_Params params;
	params.OptionType = OptionType;
	params.OptionWidget = OptionWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ClearOptionsAndInitialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIntroAlteration               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationOptionsWidget_C::ClearOptionsAndInitialize(bool bIntroAlteration)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.ClearOptionsAndInitialize");

	UAlterationOptionsWidget_C_ClearOptionsAndInitialize_Params params;
	params.bIntroAlteration = bIntroAlteration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnItemChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIntroAlterations              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationOptionsWidget_C::OnItemChanged(bool bIntroAlterations)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnItemChanged");

	UAlterationOptionsWidget_C_OnItemChanged_Params params;
	params.bIntroAlterations = bIntroAlterations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnGenerateOption
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortAlterationOptionType      OptionType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortAlterationOption*   OptionWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAlterationOptionsWidget_C::OnGenerateOption(EFortAlterationOptionType OptionType, class UFortAlterationOption* OptionWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnGenerateOption");

	UAlterationOptionsWidget_C_OnGenerateOption_Params params;
	params.OptionType = OptionType;
	params.OptionWidget = OptionWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAlterationOptionsWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.Destruct");

	UAlterationOptionsWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnOptionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           SelectedOption                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationOptionsWidget_C::OnOptionSelected(class UCommonButton* SelectedOption, bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnOptionSelected");

	UAlterationOptionsWidget_C_OnOptionSelected_Params params;
	params.SelectedOption = SelectedOption;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ExecuteUbergraph_AlterationOptionsWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationOptionsWidget_C::ExecuteUbergraph_AlterationOptionsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.ExecuteUbergraph_AlterationOptionsWidget");

	UAlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
