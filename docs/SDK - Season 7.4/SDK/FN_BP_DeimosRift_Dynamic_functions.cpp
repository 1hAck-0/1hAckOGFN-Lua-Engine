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

// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.OnRep_ServerSpawnTime
// (BlueprintCallable, BlueprintEvent)

void ABP_DeimosRift_Dynamic_C::OnRep_ServerSpawnTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.OnRep_ServerSpawnTime");

	ABP_DeimosRift_Dynamic_C_OnRep_ServerSpawnTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DeimosRift_Dynamic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.UserConstructionScript");

	ABP_DeimosRift_Dynamic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DeimosRift_Dynamic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.ReceiveBeginPlay");

	ABP_DeimosRift_Dynamic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DeimosRift_Dynamic_C::OnDamageServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.OnDamageServer");

	ABP_DeimosRift_Dynamic_C_OnDamageServer_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.SetLifeTimeTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_DeimosRift_Dynamic_C::SetLifeTimeTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.SetLifeTimeTimer");

	ABP_DeimosRift_Dynamic_C_SetLifeTimeTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.LifeTimeExpired
// (BlueprintCallable, BlueprintEvent)

void ABP_DeimosRift_Dynamic_C::LifeTimeExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.LifeTimeExpired");

	ABP_DeimosRift_Dynamic_C_LifeTimeExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_Intro
// (Event, Protected, BlueprintEvent)

void ABP_DeimosRift_Dynamic_C::BP_Cosmetic_Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_Intro");

	ABP_DeimosRift_Dynamic_C_BP_Cosmetic_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_Idle
// (Event, Protected, BlueprintEvent)

void ABP_DeimosRift_Dynamic_C::BP_Cosmetic_Idle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_Idle");

	ABP_DeimosRift_Dynamic_C_BP_Cosmetic_Idle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_RampUp
// (Event, Protected, BlueprintEvent)

void ABP_DeimosRift_Dynamic_C::BP_Cosmetic_RampUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_RampUp");

	ABP_DeimosRift_Dynamic_C_BP_Cosmetic_RampUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_ShouldDie
// (Event, Protected, BlueprintEvent)

void ABP_DeimosRift_Dynamic_C::BP_Cosmetic_ShouldDie()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_ShouldDie");

	ABP_DeimosRift_Dynamic_C_BP_Cosmetic_ShouldDie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.ExecuteUbergraph_BP_DeimosRift_Dynamic
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DeimosRift_Dynamic_C::ExecuteUbergraph_BP_DeimosRift_Dynamic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.ExecuteUbergraph_BP_DeimosRift_Dynamic");

	ABP_DeimosRift_Dynamic_C_ExecuteUbergraph_BP_DeimosRift_Dynamic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
