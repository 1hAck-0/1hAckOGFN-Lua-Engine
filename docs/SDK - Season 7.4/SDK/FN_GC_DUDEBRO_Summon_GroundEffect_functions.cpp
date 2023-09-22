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

// Function GC_DUDEBRO_Summon_GroundEffect.GC_DUDEBRO_Summon_GroundEffect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_DUDEBRO_Summon_GroundEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_DUDEBRO_Summon_GroundEffect.GC_DUDEBRO_Summon_GroundEffect_C.UserConstructionScript");

	AGC_DUDEBRO_Summon_GroundEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_DUDEBRO_Summon_GroundEffect.GC_DUDEBRO_Summon_GroundEffect_C.Timeline
// (BlueprintEvent)

void AGC_DUDEBRO_Summon_GroundEffect_C::Timeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_DUDEBRO_Summon_GroundEffect.GC_DUDEBRO_Summon_GroundEffect_C.Timeline");

	AGC_DUDEBRO_Summon_GroundEffect_C_Timeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_DUDEBRO_Summon_GroundEffect.GC_DUDEBRO_Summon_GroundEffect_C.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGC_DUDEBRO_Summon_GroundEffect_C::K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_DUDEBRO_Summon_GroundEffect.GC_DUDEBRO_Summon_GroundEffect_C.K2_HandleGameplayCue");

	AGC_DUDEBRO_Summon_GroundEffect_C_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_DUDEBRO_Summon_GroundEffect.GC_DUDEBRO_Summon_GroundEffect_C.ExecuteUbergraph_GC_DUDEBRO_Summon_GroundEffect
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_DUDEBRO_Summon_GroundEffect_C::ExecuteUbergraph_GC_DUDEBRO_Summon_GroundEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_DUDEBRO_Summon_GroundEffect.GC_DUDEBRO_Summon_GroundEffect_C.ExecuteUbergraph_GC_DUDEBRO_Summon_GroundEffect");

	AGC_DUDEBRO_Summon_GroundEffect_C_ExecuteUbergraph_GC_DUDEBRO_Summon_GroundEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
