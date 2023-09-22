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

// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.GetOverrideRarity
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EFortRarity                    Rarity                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AB_Athena_VendingMachine_C::GetOverrideRarity(EFortRarity* Rarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.GetOverrideRarity");

	AB_Athena_VendingMachine_C_GetOverrideRarity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rarity != nullptr)
		*Rarity = params.Rarity;

	return params.ReturnValue;
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.SetRarityColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Athena_VendingMachine_C::SetRarityColors(struct FLinearColor Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.SetRarityColors");

	AB_Athena_VendingMachine_C_SetRarityColors_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AB_Athena_VendingMachine_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.BlueprintGetInteractionString");

	AB_Athena_VendingMachine_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Athena_VendingMachine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.UserConstructionScript");

	AB_Athena_VendingMachine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.SwitchHitch__FinishedFunc
// (BlueprintEvent)

void AB_Athena_VendingMachine_C::SwitchHitch__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.SwitchHitch__FinishedFunc");

	AB_Athena_VendingMachine_C_SwitchHitch__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.SwitchHitch__UpdateFunc
// (BlueprintEvent)

void AB_Athena_VendingMachine_C::SwitchHitch__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.SwitchHitch__UpdateFunc");

	AB_Athena_VendingMachine_C_SwitchHitch__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.VendWobble__FinishedFunc
// (BlueprintEvent)

void AB_Athena_VendingMachine_C::VendWobble__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.VendWobble__FinishedFunc");

	AB_Athena_VendingMachine_C_VendWobble__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.VendWobble__UpdateFunc
// (BlueprintEvent)

void AB_Athena_VendingMachine_C::VendWobble__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.VendWobble__UpdateFunc");

	AB_Athena_VendingMachine_C_VendWobble__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.VendWobble__Start FF Time__EventFunc
// (BlueprintEvent)

void AB_Athena_VendingMachine_C::VendWobble__Start_FF_Time__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.VendWobble__Start FF Time__EventFunc");

	AB_Athena_VendingMachine_C_VendWobble__Start_FF_Time__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Athena_VendingMachine_C::BlueprintOnInteract(class AFortPawn* InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.BlueprintOnInteract");

	AB_Athena_VendingMachine_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.BlueprintOnBeginInteract
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AB_Athena_VendingMachine_C::BlueprintOnBeginInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.BlueprintOnBeginInteract");

	AB_Athena_VendingMachine_C_BlueprintOnBeginInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.PlayVendFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Athena_VendingMachine_C::PlayVendFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.PlayVendFX");

	AB_Athena_VendingMachine_C_PlayVendFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.UpdateCollectorsActiveItem
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            StartingSeedValue              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWorldItemDefinition* InputItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                InputTexture                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentGoal                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentCollectedAmount         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentCaptureCount            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                OutputTexture                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Athena_VendingMachine_C::UpdateCollectorsActiveItem(int StartingSeedValue, class UFortWorldItemDefinition* InputItem, class UTexture* InputTexture, int CurrentGoal, int CurrentCollectedAmount, int CurrentCaptureCount, class UTexture* OutputTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.UpdateCollectorsActiveItem");

	AB_Athena_VendingMachine_C_UpdateCollectorsActiveItem_Params params;
	params.StartingSeedValue = StartingSeedValue;
	params.InputItem = InputItem;
	params.InputTexture = InputTexture;
	params.CurrentGoal = CurrentGoal;
	params.CurrentCollectedAmount = CurrentCollectedAmount;
	params.CurrentCaptureCount = CurrentCaptureCount;
	params.OutputTexture = OutputTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.PlayVendFailFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Athena_VendingMachine_C::PlayVendFailFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.PlayVendFailFX");

	AB_Athena_VendingMachine_C_PlayVendFailFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.OnForcedCycle
// (Event, Public, BlueprintEvent)

void AB_Athena_VendingMachine_C::OnForcedCycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.OnForcedCycle");

	AB_Athena_VendingMachine_C_OnForcedCycle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Athena_VendingMachine_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.ReceiveBeginPlay");

	AB_Athena_VendingMachine_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.ExecuteUbergraph_B_Athena_VendingMachine
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Athena_VendingMachine_C::ExecuteUbergraph_B_Athena_VendingMachine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Athena_VendingMachine.B_Athena_VendingMachine_C.ExecuteUbergraph_B_Athena_VendingMachine");

	AB_Athena_VendingMachine_C_ExecuteUbergraph_B_Athena_VendingMachine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
