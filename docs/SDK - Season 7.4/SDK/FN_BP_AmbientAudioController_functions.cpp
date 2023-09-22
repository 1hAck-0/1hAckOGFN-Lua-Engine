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

// Function BP_AmbientAudioController.BP_AmbientAudioController_C.SetTargetLPFFreq
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AmbientAudioController_C::SetTargetLPFFreq(float Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientAudioController.BP_AmbientAudioController_C.SetTargetLPFFreq");

	UBP_AmbientAudioController_C_SetTargetLPFFreq_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.SetIndoorMixEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AmbientAudioController_C::SetIndoorMixEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientAudioController.BP_AmbientAudioController_C.SetIndoorMixEnabled");

	UBP_AmbientAudioController_C_SetIndoorMixEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.Trace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AmbientAudioController_C::Trace(struct FVector Start, struct FVector Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientAudioController.BP_AmbientAudioController_C.Trace");

	UBP_AmbientAudioController_C_Trace_Params params;
	params.Start = Start;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_AmbientAudioController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientAudioController.BP_AmbientAudioController_C.ReceiveBeginPlay");

	UBP_AmbientAudioController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AmbientAudioController_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientAudioController.BP_AmbientAudioController_C.ReceiveEndPlay");

	UBP_AmbientAudioController_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.OnCheckIfSurrounded
// (BlueprintCallable, BlueprintEvent)

void UBP_AmbientAudioController_C::OnCheckIfSurrounded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientAudioController.BP_AmbientAudioController_C.OnCheckIfSurrounded");

	UBP_AmbientAudioController_C_OnCheckIfSurrounded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.Evaluate Inside State
// (BlueprintCallable, BlueprintEvent)

void UBP_AmbientAudioController_C::Evaluate_Inside_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientAudioController.BP_AmbientAudioController_C.Evaluate Inside State");

	UBP_AmbientAudioController_C_Evaluate_Inside_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AmbientAudioController_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientAudioController.BP_AmbientAudioController_C.ReceiveTick");

	UBP_AmbientAudioController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.On Game Phase Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaGamePhase               GamePhase                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AmbientAudioController_C::On_Game_Phase_Change(EAthenaGamePhase GamePhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientAudioController.BP_AmbientAudioController_C.On Game Phase Change");

	UBP_AmbientAudioController_C_On_Game_Phase_Change_Params params;
	params.GamePhase = GamePhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.On Game Phase Step Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaGamePhaseStep           GamePhaseStep                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AmbientAudioController_C::On_Game_Phase_Step_Change(EAthenaGamePhaseStep GamePhaseStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientAudioController.BP_AmbientAudioController_C.On Game Phase Step Change");

	UBP_AmbientAudioController_C_On_Game_Phase_Step_Change_Params params;
	params.GamePhaseStep = GamePhaseStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.Set Storm Amb Layer Enabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AmbientAudioController_C::Set_Storm_Amb_Layer_Enabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientAudioController.BP_AmbientAudioController_C.Set Storm Amb Layer Enabled");

	UBP_AmbientAudioController_C_Set_Storm_Amb_Layer_Enabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.ExecuteUbergraph_BP_AmbientAudioController
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AmbientAudioController_C::ExecuteUbergraph_BP_AmbientAudioController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientAudioController.BP_AmbientAudioController_C.ExecuteUbergraph_BP_AmbientAudioController");

	UBP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
