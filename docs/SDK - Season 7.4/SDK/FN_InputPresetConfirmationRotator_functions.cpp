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

// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.Show Param Name
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputPresetConfirmationRotator_C::Show_Param_Name(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.Show Param Name");

	UInputPresetConfirmationRotator_C_Show_Param_Name_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.Update Size
// (Public, BlueprintCallable, BlueprintEvent)

void UInputPresetConfirmationRotator_C::Update_Size()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.Update Size");

	UInputPresetConfirmationRotator_C_Update_Size_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UInputPresetConfirmationRotator_C::OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.OnFocusReceived");

	UInputPresetConfirmationRotator_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.Update Options
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UInputPresetConfirmationRotator_C::Update_Options(TArray<struct FText>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.Update Options");

	UInputPresetConfirmationRotator_C_Update_Options_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.Center on Widget
// (Public, BlueprintCallable, BlueprintEvent)

void UInputPresetConfirmationRotator_C::Center_on_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.Center on Widget");

	UInputPresetConfirmationRotator_C_Center_on_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInputPresetConfirmationRotator_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.Initialize");

	UInputPresetConfirmationRotator_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.Update Row Selector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Currently_Selected             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputPresetConfirmationRotator_C::Update_Row_Selector(int Currently_Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.Update Row Selector");

	UInputPresetConfirmationRotator_C_Update_Row_Selector_Params params;
	params.Currently_Selected = Currently_Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInputPresetConfirmationRotator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.Construct");

	UInputPresetConfirmationRotator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputPresetConfirmationRotator_C::BndEvt__TextRotator_K2Node_ComponentBoundEvent(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent");

	UInputPresetConfirmationRotator_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInputPresetConfirmationRotator_C::BndEvt__ButtonLeft_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent");

	UInputPresetConfirmationRotator_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInputPresetConfirmationRotator_C::BndEvt__ButtonRight_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent");

	UInputPresetConfirmationRotator_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputPresetConfirmationRotator_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.PreConstruct");

	UInputPresetConfirmationRotator_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.ExecuteUbergraph_InputPresetConfirmationRotator
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputPresetConfirmationRotator_C::ExecuteUbergraph_InputPresetConfirmationRotator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputPresetConfirmationRotator.InputPresetConfirmationRotator_C.ExecuteUbergraph_InputPresetConfirmationRotator");

	UInputPresetConfirmationRotator_C_ExecuteUbergraph_InputPresetConfirmationRotator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
