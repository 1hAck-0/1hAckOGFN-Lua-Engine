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

// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.SkeletalMeshSetup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawnAthena*   FortPawn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Abilities_Death_FadeCapsule_Athena_C::SkeletalMeshSetup(class AFortPlayerPawnAthena* FortPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.SkeletalMeshSetup");

	AGC_Abilities_Death_FadeCapsule_Athena_C_SkeletalMeshSetup_Params params;
	params.FortPawn = FortPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_Abilities_Death_FadeCapsule_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.UserConstructionScript");

	AGC_Abilities_Death_FadeCapsule_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.CapsuleFadeTL__FinishedFunc
// (BlueprintEvent)

void AGC_Abilities_Death_FadeCapsule_Athena_C::CapsuleFadeTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.CapsuleFadeTL__FinishedFunc");

	AGC_Abilities_Death_FadeCapsule_Athena_C_CapsuleFadeTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.CapsuleFadeTL__UpdateFunc
// (BlueprintEvent)

void AGC_Abilities_Death_FadeCapsule_Athena_C::CapsuleFadeTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.CapsuleFadeTL__UpdateFunc");

	AGC_Abilities_Death_FadeCapsule_Athena_C_CapsuleFadeTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGC_Abilities_Death_FadeCapsule_Athena_C::K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.K2_HandleGameplayCue");

	AGC_Abilities_Death_FadeCapsule_Athena_C_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Abilities_Death_FadeCapsule_Athena_C::ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena");

	AGC_Abilities_Death_FadeCapsule_Athena_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
