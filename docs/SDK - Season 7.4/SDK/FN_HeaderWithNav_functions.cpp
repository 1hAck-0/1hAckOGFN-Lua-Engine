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

// Function HeaderWithNav.HeaderWithNav_C.SetArrowButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnableLeftArrow                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableRightArrow               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HideInsteadOfEnable            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeaderWithNav_C::SetArrowButtonState(bool EnableLeftArrow, bool EnableRightArrow, bool HideInsteadOfEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.SetArrowButtonState");

	UHeaderWithNav_C_SetArrowButtonState_Params params;
	params.EnableLeftArrow = EnableLeftArrow;
	params.EnableRightArrow = EnableRightArrow;
	params.HideInsteadOfEnable = HideInsteadOfEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeaderWithNav.HeaderWithNav_C.IncludeDefenders
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IncludeDefenders               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHeaderWithNav_C::IncludeDefenders(bool* IncludeDefenders)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.IncludeDefenders");

	UHeaderWithNav_C_IncludeDefenders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IncludeDefenders != nullptr)
		*IncludeDefenders = params.IncludeDefenders;
}


// Function HeaderWithNav.HeaderWithNav_C.UpdateIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Increment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeaderWithNav_C::UpdateIndex(bool Increment)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.UpdateIndex");

	UHeaderWithNav_C_UpdateIndex_Params params;
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeaderWithNav.HeaderWithNav_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeaderWithNav_C::SetIndex(int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.SetIndex");

	UHeaderWithNav_C_SetIndex_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeaderWithNav.HeaderWithNav_C.SetTextAndUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UHeaderWithNav_C::SetTextAndUpdate(struct FText Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.SetTextAndUpdate");

	UHeaderWithNav_C_SetTextAndUpdate_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeaderWithNav.HeaderWithNav_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUsingGamepad                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeaderWithNav_C::Update(bool IsUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.Update");

	UHeaderWithNav_C_Update_Params params;
	params.IsUsingGamepad = IsUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeaderWithNav.HeaderWithNav_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHeaderWithNav_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.Construct");

	UHeaderWithNav_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeaderWithNav.HeaderWithNav_C.HandleInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeaderWithNav_C::HandleInputMethodChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.HandleInputMethodChanged");

	UHeaderWithNav_C_HandleInputMethodChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeaderWithNav.HeaderWithNav_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHeaderWithNav_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent");

	UHeaderWithNav_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeaderWithNav.HeaderWithNav_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeaderWithNav_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.PreConstruct");

	UHeaderWithNav_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeaderWithNav.HeaderWithNav_C.BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHeaderWithNav_C::BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent");

	UHeaderWithNav_C_BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeaderWithNav.HeaderWithNav_C.BndEvt__PageRightBtn_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHeaderWithNav_C::BndEvt__PageRightBtn_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.BndEvt__PageRightBtn_K2Node_ComponentBoundEvent");

	UHeaderWithNav_C_BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeaderWithNav.HeaderWithNav_C.ExecuteUbergraph_HeaderWithNav
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeaderWithNav_C::ExecuteUbergraph_HeaderWithNav(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.ExecuteUbergraph_HeaderWithNav");

	UHeaderWithNav_C_ExecuteUbergraph_HeaderWithNav_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeaderWithNav.HeaderWithNav_C.CycleRightPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHeaderWithNav_C::CycleRightPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.CycleRightPressed__DelegateSignature");

	UHeaderWithNav_C_CycleRightPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeaderWithNav.HeaderWithNav_C.CycleLeftPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHeaderWithNav_C::CycleLeftPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.CycleLeftPressed__DelegateSignature");

	UHeaderWithNav_C_CycleLeftPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeaderWithNav.HeaderWithNav_C.ButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeaderWithNav_C::ButtonPressed__DelegateSignature(int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.ButtonPressed__DelegateSignature");

	UHeaderWithNav_C_ButtonPressed__DelegateSignature_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeaderWithNav.HeaderWithNav_C.BackButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHeaderWithNav_C::BackButtonPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeaderWithNav.HeaderWithNav_C.BackButtonPressed__DelegateSignature");

	UHeaderWithNav_C_BackButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
