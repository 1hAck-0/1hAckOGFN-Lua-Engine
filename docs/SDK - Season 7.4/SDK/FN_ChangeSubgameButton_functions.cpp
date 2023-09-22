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

// Function ChangeSubgameButton.ChangeSubgameButton_C.Change Main Menu Music State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Set_Lobby_Music_State          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChangeSubgameButton_C::Change_Main_Menu_Music_State(bool Set_Lobby_Music_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChangeSubgameButton.ChangeSubgameButton_C.Change Main Menu Music State");

	UChangeSubgameButton_C_Change_Main_Menu_Music_State_Params params;
	params.Set_Lobby_Music_State = Set_Lobby_Music_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChangeSubgameButton.ChangeSubgameButton_C.DialogResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChangeSubgameButton_C::DialogResult(EFortDialogResult Result, struct FName ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChangeSubgameButton.ChangeSubgameButton_C.DialogResult");

	UChangeSubgameButton_C_DialogResult_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChangeSubgameButton.ChangeSubgameButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChangeSubgameButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChangeSubgameButton.ChangeSubgameButton_C.Construct");

	UChangeSubgameButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChangeSubgameButton.ChangeSubgameButton_C.BndEvt__Leave_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChangeSubgameButton_C::BndEvt__Leave_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChangeSubgameButton.ChangeSubgameButton_C.BndEvt__Leave_K2Node_ComponentBoundEvent");

	UChangeSubgameButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChangeSubgameButton.ChangeSubgameButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChangeSubgameButton_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChangeSubgameButton.ChangeSubgameButton_C.Destruct");

	UChangeSubgameButton_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChangeSubgameButton.ChangeSubgameButton_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChangeSubgameButton_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChangeSubgameButton.ChangeSubgameButton_C.OnMouseEnter");

	UChangeSubgameButton_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChangeSubgameButton.ChangeSubgameButton_C.ExecuteUbergraph_ChangeSubgameButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChangeSubgameButton_C::ExecuteUbergraph_ChangeSubgameButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChangeSubgameButton.ChangeSubgameButton_C.ExecuteUbergraph_ChangeSubgameButton");

	UChangeSubgameButton_C_ExecuteUbergraph_ChangeSubgameButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChangeSubgameButton.ChangeSubgameButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UChangeSubgameButton_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChangeSubgameButton.ChangeSubgameButton_C.OnClicked__DelegateSignature");

	UChangeSubgameButton_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
