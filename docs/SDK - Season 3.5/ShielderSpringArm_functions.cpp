#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function ShielderSpringArm.ShielderSpringArm_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderSpringArm_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "UserConstructionScript");

	Params::AShielderSpringArm_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShielderSpringArm_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "ReceiveTick");

	Params::AShielderSpringArm_C_ReceiveTick_Params Parms;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.HitFlashFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderSpringArm_C::HitFlashFX()
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "HitFlashFX");

	Params::AShielderSpringArm_C_HitFlashFX_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void AShielderSpringArm_C::ReceiveDestroyed()
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "ReceiveDestroyed");

	Params::AShielderSpringArm_C_ReceiveDestroyed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.Beam_Removal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShielderSpringArm_C::Beam_Removal()
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "Beam_Removal");

	Params::AShielderSpringArm_C_Beam_Removal_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.Beam_Spawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Origin                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShielderSpringArm_C::Beam_Spawn(class AActor* Origin)
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "Beam_Spawn");

	Params::AShielderSpringArm_C_Beam_Spawn_Params Parms;
	Parms.Origin = Origin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShielderSpringArm.ShielderSpringArm_C.ExecuteUbergraph_ShielderSpringArm
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AShielderPawn_C*             K2Node_DynamicCast_AsShielder_Pawn                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue1                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue12                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue123                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue1                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult1                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue1234                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Origin                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AShielderPawn_C*             K2Node_DynamicCast_AsShielder_Pawn1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue123                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1234                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AShielderSpringArm_C::ExecuteUbergraph_ShielderSpringArm(int32 EntryPoint, class AShielderPawn_C* K2Node_DynamicCast_AsShielder_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue12, const struct FVector& CallFunc_GetSocketLocation_ReturnValue123, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult1, bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1234, bool CallFunc_IsValid_ReturnValue12, float K2Node_Event_DeltaSeconds, class AActor* K2Node_CustomEvent_Origin, class AShielderPawn_C* K2Node_DynamicCast_AsShielder_Pawn1, bool K2Node_DynamicCast_bSuccess1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, bool CallFunc_IsValid_ReturnValue123, bool CallFunc_IsValid_ReturnValue1234)
{
	static auto Func = Class->GetFunction("ShielderSpringArm_C", "ExecuteUbergraph_ShielderSpringArm");

	Params::AShielderSpringArm_C_ExecuteUbergraph_ShielderSpringArm_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsShielder_Pawn = K2Node_DynamicCast_AsShielder_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue1 = CallFunc_IsDedicatedServer_ReturnValue1;
	Parms.CallFunc_GetSocketLocation_ReturnValue1 = CallFunc_GetSocketLocation_ReturnValue1;
	Parms.CallFunc_GetSocketLocation_ReturnValue12 = CallFunc_GetSocketLocation_ReturnValue12;
	Parms.CallFunc_GetSocketLocation_ReturnValue123 = CallFunc_GetSocketLocation_ReturnValue123;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue1 = CallFunc_Add_VectorVector_ReturnValue1;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue = CallFunc_Divide_VectorFloat_ReturnValue;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue1 = CallFunc_Divide_VectorFloat_ReturnValue1;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult1 = CallFunc_K2_SetWorldLocation_SweepHitResult1;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue1234 = CallFunc_GetSocketLocation_ReturnValue1234;
	Parms.CallFunc_IsValid_ReturnValue12 = CallFunc_IsValid_ReturnValue12;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_Origin = K2Node_CustomEvent_Origin;
	Parms.K2Node_DynamicCast_AsShielder_Pawn1 = K2Node_DynamicCast_AsShielder_Pawn1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue1 = CallFunc_SpawnEmitterAttached_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue123 = CallFunc_IsValid_ReturnValue123;
	Parms.CallFunc_IsValid_ReturnValue1234 = CallFunc_IsValid_ReturnValue1234;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
