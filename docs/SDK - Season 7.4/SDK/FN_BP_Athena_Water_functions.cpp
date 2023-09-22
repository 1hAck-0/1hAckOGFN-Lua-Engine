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

// Function BP_Athena_Water.BP_Athena_Water_C.OnRep_BounceLake
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_Water_C::OnRep_BounceLake()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Water.BP_Athena_Water_C.OnRep_BounceLake");

	ABP_Athena_Water_C_OnRep_BounceLake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Water.BP_Athena_Water_C.OnRep_IsBouncy
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_Water_C::OnRep_IsBouncy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Water.BP_Athena_Water_C.OnRep_IsBouncy");

	ABP_Athena_Water_C_OnRep_IsBouncy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Water.BP_Athena_Water_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Athena_Water_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Water.BP_Athena_Water_C.UserConstructionScript");

	ABP_Athena_Water_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Water.BP_Athena_Water_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Athena_Water_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Water.BP_Athena_Water_C.ReceiveBeginPlay");

	ABP_Athena_Water_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Water.BP_Athena_Water_C.SetSpreadMaterial
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_Water_C::SetSpreadMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Water.BP_Athena_Water_C.SetSpreadMaterial");

	ABP_Athena_Water_C_SetSpreadMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Water.BP_Athena_Water_C.SetTurnedOnMaterial
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_Water_C::SetTurnedOnMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Water.BP_Athena_Water_C.SetTurnedOnMaterial");

	ABP_Athena_Water_C_SetTurnedOnMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Water.BP_Athena_Water_C.SetBouncy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Bouncy                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Athena_Water_C::SetBouncy(bool Bouncy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Water.BP_Athena_Water_C.SetBouncy");

	ABP_Athena_Water_C_SetBouncy_Params params;
	params.Bouncy = Bouncy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Water.BP_Athena_Water_C.BndEvt__Box_K2Node_ComponentBoundEvent
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Athena_Water_C::BndEvt__Box_K2Node_ComponentBoundEvent(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Water.BP_Athena_Water_C.BndEvt__Box_K2Node_ComponentBoundEvent");

	ABP_Athena_Water_C_BndEvt__Box_K2Node_ComponentBoundEvent_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Water.BP_Athena_Water_C.Bouncy
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_Water_C::Bouncy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Water.BP_Athena_Water_C.Bouncy");

	ABP_Athena_Water_C_Bouncy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Water.BP_Athena_Water_C.PlayBounceGC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Athena_Water_C::PlayBounceGC(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Water.BP_Athena_Water_C.PlayBounceGC");

	ABP_Athena_Water_C_PlayBounceGC_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Water.BP_Athena_Water_C.BounceVehicle
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_Water_C::BounceVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Water.BP_Athena_Water_C.BounceVehicle");

	ABP_Athena_Water_C_BounceVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Water.BP_Athena_Water_C.ClearRecentlyBounced
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_Water_C::ClearRecentlyBounced()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Water.BP_Athena_Water_C.ClearRecentlyBounced");

	ABP_Athena_Water_C_ClearRecentlyBounced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Water.BP_Athena_Water_C.SetDefaultMaterial
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_Water_C::SetDefaultMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Water.BP_Athena_Water_C.SetDefaultMaterial");

	ABP_Athena_Water_C_SetDefaultMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Water.BP_Athena_Water_C.ReplicateGCVehicles
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Athena_Water_C::ReplicateGCVehicles(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Water.BP_Athena_Water_C.ReplicateGCVehicles");

	ABP_Athena_Water_C_ReplicateGCVehicles_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Water.BP_Athena_Water_C.BouncePawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerPawn_Athena_C*    Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Athena_Water_C::BouncePawn(class APlayerPawn_Athena_C* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Water.BP_Athena_Water_C.BouncePawn");

	ABP_Athena_Water_C_BouncePawn_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Water.BP_Athena_Water_C.ExecuteUbergraph_BP_Athena_Water
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Athena_Water_C::ExecuteUbergraph_BP_Athena_Water(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Water.BP_Athena_Water_C.ExecuteUbergraph_BP_Athena_Water");

	ABP_Athena_Water_C_ExecuteUbergraph_BP_Athena_Water_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
