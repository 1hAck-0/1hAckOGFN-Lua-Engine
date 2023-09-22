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

// Function FeatureUnlockScreen.FeatureUnlockScreen_C.Reset Intro
// (Public, BlueprintCallable, BlueprintEvent)

void UFeatureUnlockScreen_C::Reset_Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeatureUnlockScreen.FeatureUnlockScreen_C.Reset Intro");

	UFeatureUnlockScreen_C_Reset_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFeatureUnlockScreen_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeatureUnlockScreen.FeatureUnlockScreen_C.HandleBack");

	UFeatureUnlockScreen_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.OnBeginIntro
// (Event, Public, BlueprintEvent)

void UFeatureUnlockScreen_C::OnBeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeatureUnlockScreen.FeatureUnlockScreen_C.OnBeginIntro");

	UFeatureUnlockScreen_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UFeatureUnlockScreen_C::RefreshDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeatureUnlockScreen.FeatureUnlockScreen_C.RefreshDataBP");

	UFeatureUnlockScreen_C_RefreshDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFeatureUnlockScreen_C::BndEvt__Button_Continue_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeatureUnlockScreen.FeatureUnlockScreen_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent");

	UFeatureUnlockScreen_C_BndEvt__Button_Continue_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFeatureUnlockScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeatureUnlockScreen.FeatureUnlockScreen_C.Construct");

	UFeatureUnlockScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFeatureUnlockScreen_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeatureUnlockScreen.FeatureUnlockScreen_C.Destruct");

	UFeatureUnlockScreen_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UFeatureUnlockScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeatureUnlockScreen.FeatureUnlockScreen_C.OnActivated");

	UFeatureUnlockScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.OnRemovedFromActivationStack
// (Event, Protected, BlueprintEvent)

void UFeatureUnlockScreen_C::OnRemovedFromActivationStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeatureUnlockScreen.FeatureUnlockScreen_C.OnRemovedFromActivationStack");

	UFeatureUnlockScreen_C_OnRemovedFromActivationStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.AnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UFeatureUnlockScreen_C::AnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeatureUnlockScreen.FeatureUnlockScreen_C.AnimationFinished");

	UFeatureUnlockScreen_C_AnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.ExecuteUbergraph_FeatureUnlockScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFeatureUnlockScreen_C::ExecuteUbergraph_FeatureUnlockScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeatureUnlockScreen.FeatureUnlockScreen_C.ExecuteUbergraph_FeatureUnlockScreen");

	UFeatureUnlockScreen_C_ExecuteUbergraph_FeatureUnlockScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.OnFeatureUnlockClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFeatureUnlockScreen_C::OnFeatureUnlockClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeatureUnlockScreen.FeatureUnlockScreen_C.OnFeatureUnlockClosed__DelegateSignature");

	UFeatureUnlockScreen_C_OnFeatureUnlockClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
