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

// Function FortRadioButtonGroup.FortRadioButtonGroup_C.CenterOnWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UFortRadioButtonGroup_C::CenterOnWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortRadioButtonGroup.FortRadioButtonGroup_C.CenterOnWidget");

	UFortRadioButtonGroup_C_CenterOnWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortRadioButtonGroup.FortRadioButtonGroup_C.OnButtonClicked_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           AssociatedButton               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortRadioButtonGroup_C::OnButtonClicked_Bind(class UCommonButton* AssociatedButton, int ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortRadioButtonGroup.FortRadioButtonGroup_C.OnButtonClicked_Bind");

	UFortRadioButtonGroup_C_OnButtonClicked_Bind_Params params;
	params.AssociatedButton = AssociatedButton;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortRadioButtonGroup.FortRadioButtonGroup_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFortRadioButtonGroup_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortRadioButtonGroup.FortRadioButtonGroup_C.Destruct");

	UFortRadioButtonGroup_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortRadioButtonGroup.FortRadioButtonGroup_C.UpdateButtons
// (BlueprintCallable, BlueprintEvent)

void UFortRadioButtonGroup_C::UpdateButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortRadioButtonGroup.FortRadioButtonGroup_C.UpdateButtons");

	UFortRadioButtonGroup_C_UpdateButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortRadioButtonGroup.FortRadioButtonGroup_C.ExecuteUbergraph_FortRadioButtonGroup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortRadioButtonGroup_C::ExecuteUbergraph_FortRadioButtonGroup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortRadioButtonGroup.FortRadioButtonGroup_C.ExecuteUbergraph_FortRadioButtonGroup");

	UFortRadioButtonGroup_C_ExecuteUbergraph_FortRadioButtonGroup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortRadioButtonGroup.FortRadioButtonGroup_C.RadioButtonClicked_Event__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortRadioButtonGroup_C::RadioButtonClicked_Event__DelegateSignature(int SelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortRadioButtonGroup.FortRadioButtonGroup_C.RadioButtonClicked_Event__DelegateSignature");

	UFortRadioButtonGroup_C_RadioButtonClicked_Event__DelegateSignature_Params params;
	params.SelectedIndex = SelectedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
