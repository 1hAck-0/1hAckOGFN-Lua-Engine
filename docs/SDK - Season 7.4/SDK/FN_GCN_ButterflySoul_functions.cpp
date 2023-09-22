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

// Function GCN_ButterflySoul.GCN_ButterflySoul_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCN_ButterflySoul_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_ButterflySoul.GCN_ButterflySoul_C.OnRemove");

	AGCN_ButterflySoul_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_ButterflySoul.GCN_ButterflySoul_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_ButterflySoul_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_ButterflySoul.GCN_ButterflySoul_C.UserConstructionScript");

	AGCN_ButterflySoul_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_ButterflySoul.GCN_ButterflySoul_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCN_ButterflySoul_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_ButterflySoul.GCN_ButterflySoul_C.OnLoopingStart");

	AGCN_ButterflySoul_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_ButterflySoul.GCN_ButterflySoul_C.ExecuteUbergraph_GCN_ButterflySoul
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_ButterflySoul_C::ExecuteUbergraph_GCN_ButterflySoul(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_ButterflySoul.GCN_ButterflySoul_C.ExecuteUbergraph_GCN_ButterflySoul");

	AGCN_ButterflySoul_C_ExecuteUbergraph_GCN_ButterflySoul_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
