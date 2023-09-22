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

// Function GC_DUDEBRO_Sweep_Beam.GC_DUDEBRO_Sweep_Beam_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_DUDEBRO_Sweep_Beam_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_DUDEBRO_Sweep_Beam.GC_DUDEBRO_Sweep_Beam_C.UserConstructionScript");

	AGC_DUDEBRO_Sweep_Beam_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_DUDEBRO_Sweep_Beam.GC_DUDEBRO_Sweep_Beam_C.Overtime__FinishedFunc
// (BlueprintEvent)

void AGC_DUDEBRO_Sweep_Beam_C::Overtime__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_DUDEBRO_Sweep_Beam.GC_DUDEBRO_Sweep_Beam_C.Overtime__FinishedFunc");

	AGC_DUDEBRO_Sweep_Beam_C_Overtime__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_DUDEBRO_Sweep_Beam.GC_DUDEBRO_Sweep_Beam_C.Overtime__UpdateFunc
// (BlueprintEvent)

void AGC_DUDEBRO_Sweep_Beam_C::Overtime__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_DUDEBRO_Sweep_Beam.GC_DUDEBRO_Sweep_Beam_C.Overtime__UpdateFunc");

	AGC_DUDEBRO_Sweep_Beam_C_Overtime__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_DUDEBRO_Sweep_Beam.GC_DUDEBRO_Sweep_Beam_C.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGC_DUDEBRO_Sweep_Beam_C::K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_DUDEBRO_Sweep_Beam.GC_DUDEBRO_Sweep_Beam_C.K2_HandleGameplayCue");

	AGC_DUDEBRO_Sweep_Beam_C_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_DUDEBRO_Sweep_Beam.GC_DUDEBRO_Sweep_Beam_C.Reset
// (BlueprintCallable, BlueprintEvent)

void AGC_DUDEBRO_Sweep_Beam_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_DUDEBRO_Sweep_Beam.GC_DUDEBRO_Sweep_Beam_C.Reset");

	AGC_DUDEBRO_Sweep_Beam_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_DUDEBRO_Sweep_Beam.GC_DUDEBRO_Sweep_Beam_C.ExecuteUbergraph_GC_DUDEBRO_Sweep_Beam
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_DUDEBRO_Sweep_Beam_C::ExecuteUbergraph_GC_DUDEBRO_Sweep_Beam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_DUDEBRO_Sweep_Beam.GC_DUDEBRO_Sweep_Beam_C.ExecuteUbergraph_GC_DUDEBRO_Sweep_Beam");

	AGC_DUDEBRO_Sweep_Beam_C_ExecuteUbergraph_GC_DUDEBRO_Sweep_Beam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
