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

// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ACBGA_Blade_Athena_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.BlueprintGetInteractionString");

	ACBGA_Blade_Athena_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.SetDrawDistance
// (Public, BlueprintCallable, BlueprintEvent)

void ACBGA_Blade_Athena_C::SetDrawDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.SetDrawDistance");

	ACBGA_Blade_Athena_C_SetDrawDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACBGA_Blade_Athena_C::BlueprintCanInteract(class AFortPawn* InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.BlueprintCanInteract");

	ACBGA_Blade_Athena_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACBGA_Blade_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.UserConstructionScript");

	ACBGA_Blade_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACBGA_Blade_Athena_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.ReceiveBeginPlay");

	ACBGA_Blade_Athena_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACBGA_Blade_Athena_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.ReceiveEndPlay");

	ACBGA_Blade_Athena_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.OnPullStart
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACBGA_Blade_Athena_C::OnPullStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.OnPullStart");

	ACBGA_Blade_Athena_C_OnPullStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.OnPullAborted
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACBGA_Blade_Athena_C::OnPullAborted()
{
	static auto fn = UObject::FindObject<UFunction>("Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.OnPullAborted");

	ACBGA_Blade_Athena_C_OnPullAborted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.ExecuteUbergraph_CBGA_Blade_Athena
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACBGA_Blade_Athena_C::ExecuteUbergraph_CBGA_Blade_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CBGA_Blade_Athena.CBGA_Blade_Athena_C.ExecuteUbergraph_CBGA_Blade_Athena");

	ACBGA_Blade_Athena_C_ExecuteUbergraph_CBGA_Blade_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
