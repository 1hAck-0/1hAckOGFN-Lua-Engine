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

// Function RubberDuckStatic.RubberDuckStatic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARubberDuckStatic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RubberDuckStatic.RubberDuckStatic_C.UserConstructionScript");

	ARubberDuckStatic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RubberDuckStatic.RubberDuckStatic_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ARubberDuckStatic_C::OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function RubberDuckStatic.RubberDuckStatic_C.OnDeathServer");

	ARubberDuckStatic_C_OnDeathServer_Params params;
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


// Function RubberDuckStatic.RubberDuckStatic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARubberDuckStatic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function RubberDuckStatic.RubberDuckStatic_C.ReceiveBeginPlay");

	ARubberDuckStatic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RubberDuckStatic.RubberDuckStatic_C.ExecuteUbergraph_RubberDuckStatic
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARubberDuckStatic_C::ExecuteUbergraph_RubberDuckStatic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RubberDuckStatic.RubberDuckStatic_C.ExecuteUbergraph_RubberDuckStatic");

	ARubberDuckStatic_C_ExecuteUbergraph_RubberDuckStatic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
