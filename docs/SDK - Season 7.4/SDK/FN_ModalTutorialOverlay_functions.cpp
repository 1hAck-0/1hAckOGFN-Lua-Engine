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

// Function ModalTutorialOverlay.ModalTutorialOverlay_C.Start
// (Public, BlueprintCallable, BlueprintEvent)

void UModalTutorialOverlay_C::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalTutorialOverlay.ModalTutorialOverlay_C.Start");

	UModalTutorialOverlay_C_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModalTutorialOverlay.ModalTutorialOverlay_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UModalTutorialOverlay_C::SetIndex(int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalTutorialOverlay.ModalTutorialOverlay_C.SetIndex");

	UModalTutorialOverlay_C_SetIndex_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModalTutorialOverlay.ModalTutorialOverlay_C.SetPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EScreenPositionEnum> InPosition                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UModalTutorialOverlay_C::SetPosition(TEnumAsByte<EScreenPositionEnum> InPosition, float Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalTutorialOverlay.ModalTutorialOverlay_C.SetPosition");

	UModalTutorialOverlay_C_SetPosition_Params params;
	params.InPosition = InPosition;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModalTutorialOverlay.ModalTutorialOverlay_C.SetupData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           InTitle                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FText>           InDescription                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UModalTutorialOverlay_C::SetupData(TArray<struct FText>* InTitle, TArray<struct FText>* InDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalTutorialOverlay.ModalTutorialOverlay_C.SetupData");

	UModalTutorialOverlay_C_SetupData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTitle != nullptr)
		*InTitle = params.InTitle;
	if (InDescription != nullptr)
		*InDescription = params.InDescription;
}


// Function ModalTutorialOverlay.ModalTutorialOverlay_C.UpdatePosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EScreenPositionEnum> InPosition                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UModalTutorialOverlay_C::UpdatePosition(TEnumAsByte<EScreenPositionEnum> InPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalTutorialOverlay.ModalTutorialOverlay_C.UpdatePosition");

	UModalTutorialOverlay_C_UpdatePosition_Params params;
	params.InPosition = InPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModalTutorialOverlay.ModalTutorialOverlay_C.ShowNext
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UModalTutorialOverlay_C::ShowNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalTutorialOverlay.ModalTutorialOverlay_C.ShowNext");

	UModalTutorialOverlay_C_ShowNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModalTutorialOverlay.ModalTutorialOverlay_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UModalTutorialOverlay_C::BndEvt__ButtonContinue_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalTutorialOverlay.ModalTutorialOverlay_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent");

	UModalTutorialOverlay_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModalTutorialOverlay.ModalTutorialOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UModalTutorialOverlay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalTutorialOverlay.ModalTutorialOverlay_C.Construct");

	UModalTutorialOverlay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModalTutorialOverlay.ModalTutorialOverlay_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UModalTutorialOverlay_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalTutorialOverlay.ModalTutorialOverlay_C.OnActivated");

	UModalTutorialOverlay_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModalTutorialOverlay.ModalTutorialOverlay_C.ExecuteUbergraph_ModalTutorialOverlay
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UModalTutorialOverlay_C::ExecuteUbergraph_ModalTutorialOverlay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModalTutorialOverlay.ModalTutorialOverlay_C.ExecuteUbergraph_ModalTutorialOverlay");

	UModalTutorialOverlay_C_ExecuteUbergraph_ModalTutorialOverlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
