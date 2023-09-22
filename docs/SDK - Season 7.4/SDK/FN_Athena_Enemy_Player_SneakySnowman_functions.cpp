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

// Function Athena_Enemy_Player_SneakySnowman.Athena_Enemy_Player_SneakySnowman_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAthena_Enemy_Player_SneakySnowman_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Enemy_Player_SneakySnowman.Athena_Enemy_Player_SneakySnowman_C.UserConstructionScript");

	AAthena_Enemy_Player_SneakySnowman_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Enemy_Player_SneakySnowman.Athena_Enemy_Player_SneakySnowman_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AAthena_Enemy_Player_SneakySnowman_C::OnDamageServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Enemy_Player_SneakySnowman.Athena_Enemy_Player_SneakySnowman_C.OnDamageServer");

	AAthena_Enemy_Player_SneakySnowman_C_OnDamageServer_Params params;
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


// Function Athena_Enemy_Player_SneakySnowman.Athena_Enemy_Player_SneakySnowman_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAthena_Enemy_Player_SneakySnowman_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Enemy_Player_SneakySnowman.Athena_Enemy_Player_SneakySnowman_C.ReceiveBeginPlay");

	AAthena_Enemy_Player_SneakySnowman_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Enemy_Player_SneakySnowman.Athena_Enemy_Player_SneakySnowman_C.ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_Enemy_Player_SneakySnowman_C::ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Athena_Enemy_Player_SneakySnowman.Athena_Enemy_Player_SneakySnowman_C.ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman");

	AAthena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
