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

// Function GCN_RiftSpawner_DMG_Stage.GCN_RiftSpawner_DMG_Stage.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_RiftSpawner_DMG_Stage::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_RiftSpawner_DMG_Stage.GCN_RiftSpawner_DMG_Stage.UserConstructionScript");

	AGCN_RiftSpawner_DMG_Stage_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_RiftSpawner_DMG_Stage.GCN_RiftSpawner_DMG_Stage.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCN_RiftSpawner_DMG_Stage::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_RiftSpawner_DMG_Stage.GCN_RiftSpawner_DMG_Stage.ReceiveBeginPlay");

	AGCN_RiftSpawner_DMG_Stage_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_RiftSpawner_DMG_Stage.GCN_RiftSpawner_DMG_Stage.OnLoopingStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> ParticleComponents             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UAudioComponent*> AudioComponents                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGCN_RiftSpawner_DMG_Stage::OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_RiftSpawner_DMG_Stage.GCN_RiftSpawner_DMG_Stage.OnLoopingStart");

	AGCN_RiftSpawner_DMG_Stage_OnLoopingStart_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;
	params.ParticleComponents = ParticleComponents;
	params.AudioComponents = AudioComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_RiftSpawner_DMG_Stage.GCN_RiftSpawner_DMG_Stage.ExecuteUbergraph_GCN_RiftSpawner_DMG_Stage
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_RiftSpawner_DMG_Stage::ExecuteUbergraph_GCN_RiftSpawner_DMG_Stage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_RiftSpawner_DMG_Stage.GCN_RiftSpawner_DMG_Stage.ExecuteUbergraph_GCN_RiftSpawner_DMG_Stage");

	AGCN_RiftSpawner_DMG_Stage_ExecuteUbergraph_GCN_RiftSpawner_DMG_Stage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
