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

// Function GCNL_Perk_H_CorruptedAura.GCNL_Perk_H_CorruptedAura_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCNL_Perk_H_CorruptedAura_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Perk_H_CorruptedAura.GCNL_Perk_H_CorruptedAura_C.UserConstructionScript");

	AGCNL_Perk_H_CorruptedAura_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Perk_H_CorruptedAura.GCNL_Perk_H_CorruptedAura_C.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCNL_Perk_H_CorruptedAura_C::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Perk_H_CorruptedAura.GCNL_Perk_H_CorruptedAura_C.OnLoopingStart");

	AGCNL_Perk_H_CorruptedAura_C_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Perk_H_CorruptedAura.GCNL_Perk_H_CorruptedAura_C.ExecuteUbergraph_GCNL_Perk_H_CorruptedAura
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_Perk_H_CorruptedAura_C::ExecuteUbergraph_GCNL_Perk_H_CorruptedAura(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCNL_Perk_H_CorruptedAura.GCNL_Perk_H_CorruptedAura_C.ExecuteUbergraph_GCNL_Perk_H_CorruptedAura");

	AGCNL_Perk_H_CorruptedAura_C_ExecuteUbergraph_GCNL_Perk_H_CorruptedAura_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
