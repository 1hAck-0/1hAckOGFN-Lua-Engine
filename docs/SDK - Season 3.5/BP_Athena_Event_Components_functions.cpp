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


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.RandomizeSpawnLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Athena_Event_Components_C::RandomizeSpawnLocation(int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_Athena_Event_Components_C", "RandomizeSpawnLocation");

	Params::ABP_Athena_Event_Components_C_RandomizeSpawnLocation_Params Parms;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.OnRep_CometPosition
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Athena_Event_Components_C::OnRep_CometPosition()
{
	static auto Func = Class->GetFunction("BP_Athena_Event_Components_C", "OnRep_CometPosition");

	Params::ABP_Athena_Event_Components_C_OnRep_CometPosition_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.SetupRiverTint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableTint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                TintColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Athena_Event_Components_C::SetupRiverTint(bool EnableTint, const struct FLinearColor& TintColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static auto Func = Class->GetFunction("BP_Athena_Event_Components_C", "SetupRiverTint");

	Params::ABP_Athena_Event_Components_C_SetupRiverTint_Params Parms;
	Parms.EnableTint = EnableTint;
	Parms.TintColor = TintColor;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.SetupComet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_TLerp_ReturnValue                                       (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Athena_Event_Components_C::SetupComet(float CallFunc_GetFloatValue_ReturnValue, const struct FTransform& CallFunc_TLerp_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult)
{
	static auto Func = Class->GetFunction("BP_Athena_Event_Components_C", "SetupComet");

	Params::ABP_Athena_Event_Components_C_SetupComet_Params Parms;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_TLerp_ReturnValue = CallFunc_TLerp_ReturnValue;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Athena_Event_Components_C::UserConstructionScript(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult)
{
	static auto Func = Class->GetFunction("BP_Athena_Event_Components_C", "UserConstructionScript");

	Params::ABP_Athena_Event_Components_C_UserConstructionScript_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.CometMovementTest__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Athena_Event_Components_C::CometMovementTest__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_Athena_Event_Components_C", "CometMovementTest__FinishedFunc");

	Params::ABP_Athena_Event_Components_C_CometMovementTest__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.CometMovementTest__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Athena_Event_Components_C::CometMovementTest__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_Athena_Event_Components_C", "CometMovementTest__UpdateFunc");

	Params::ABP_Athena_Event_Components_C_CometMovementTest__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Athena_Event_Components_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_Athena_Event_Components_C", "ReceiveBeginPlay");

	Params::ABP_Athena_Event_Components_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.UpdateComet
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Athena_Event_Components_C::UpdateComet()
{
	static auto Func = Class->GetFunction("BP_Athena_Event_Components_C", "UpdateComet");

	Params::ABP_Athena_Event_Components_C_UpdateComet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.SpawnShootingStars
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Athena_Event_Components_C::SpawnShootingStars()
{
	static auto Func = Class->GetFunction("BP_Athena_Event_Components_C", "SpawnShootingStars");

	Params::ABP_Athena_Event_Components_C_SpawnShootingStars_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.SpawnMeteor
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Athena_Event_Components_C::SpawnMeteor()
{
	static auto Func = Class->GetFunction("BP_Athena_Event_Components_C", "SpawnMeteor");

	Params::ABP_Athena_Event_Components_C_SpawnMeteor_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.ExecuteUbergraph_BP_Athena_Event_Components
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEvaluateCurveTableResultCallFunc_EvaluateCurveTableRow_OutResult                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_OutXY                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEvaluateCurveTableResultCallFunc_EvaluateCurveTableRow_OutResult1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_OutXY1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_UtcNow_ReturnValue                                      (NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_MakeDateTime_ReturnValue                                (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_Subtract_DateTimeDateTime_ReturnValue                   (NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Days                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Hours                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Minutes                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Seconds                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Milliseconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEvaluateCurveTableResultCallFunc_EvaluateCurveTableRow_OutResult12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_OutXY12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue12                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum12_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue1                    (IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEvaluateCurveTableResultCallFunc_EvaluateCurveTableRow_OutResult123                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateCurveTableRow_OutXY123                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue12                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum123_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue123                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item1                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Athena_Event_Components_C::ExecuteUbergraph_BP_Athena_Event_Components(int32 EntryPoint, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult1, float CallFunc_EvaluateCurveTableRow_OutXY1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, const struct FDateTime& CallFunc_UtcNow_ReturnValue, const struct FDateTime& CallFunc_MakeDateTime_ReturnValue, int32 Temp_int_Variable, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, int32 CallFunc_Round_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue1, float CallFunc_MapRangeClamped_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue1, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult12, float CallFunc_EvaluateCurveTableRow_OutXY12, bool CallFunc_EqualEqual_FloatFloat_ReturnValue12, bool K2Node_SwitchEnum12_CmpSuccess, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue1, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult123, float CallFunc_EvaluateCurveTableRow_OutXY123, float CallFunc_RandomFloatInRange_ReturnValue12, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue12, float CallFunc_Multiply_FloatFloat_ReturnValue12, bool K2Node_SwitchEnum123_CmpSuccess, float CallFunc_RandomFloatInRange_ReturnValue123, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_Array_Get_Item1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1)
{
	static auto Func = Class->GetFunction("BP_Athena_Event_Components_C", "ExecuteUbergraph_BP_Athena_Event_Components");

	Params::ABP_Athena_Event_Components_C_ExecuteUbergraph_BP_Athena_Event_Components_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EvaluateCurveTableRow_OutResult = CallFunc_EvaluateCurveTableRow_OutResult;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY = CallFunc_EvaluateCurveTableRow_OutXY;
	Parms.CallFunc_EvaluateCurveTableRow_OutResult1 = CallFunc_EvaluateCurveTableRow_OutResult1;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY1 = CallFunc_EvaluateCurveTableRow_OutXY1;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue1 = CallFunc_EqualEqual_FloatFloat_ReturnValue1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_UtcNow_ReturnValue = CallFunc_UtcNow_ReturnValue;
	Parms.CallFunc_MakeDateTime_ReturnValue = CallFunc_MakeDateTime_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_DateTimeDateTime_ReturnValue = CallFunc_Subtract_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_BreakTimespan_Days = CallFunc_BreakTimespan_Days;
	Parms.CallFunc_BreakTimespan_Hours = CallFunc_BreakTimespan_Hours;
	Parms.CallFunc_BreakTimespan_Minutes = CallFunc_BreakTimespan_Minutes;
	Parms.CallFunc_BreakTimespan_Seconds = CallFunc_BreakTimespan_Seconds;
	Parms.CallFunc_BreakTimespan_Milliseconds = CallFunc_BreakTimespan_Milliseconds;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue1 = CallFunc_LessEqual_IntInt_ReturnValue1;
	Parms.CallFunc_MapRangeClamped_ReturnValue1 = CallFunc_MapRangeClamped_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_EvaluateCurveTableRow_OutResult12 = CallFunc_EvaluateCurveTableRow_OutResult12;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY12 = CallFunc_EvaluateCurveTableRow_OutXY12;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue12 = CallFunc_EqualEqual_FloatFloat_ReturnValue12;
	Parms.K2Node_SwitchEnum12_CmpSuccess = K2Node_SwitchEnum12_CmpSuccess;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue1 = CallFunc_K2_GetComponentRotation_ReturnValue1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue1 = CallFunc_RandomFloatInRange_ReturnValue1;
	Parms.CallFunc_EvaluateCurveTableRow_OutResult123 = CallFunc_EvaluateCurveTableRow_OutResult123;
	Parms.CallFunc_EvaluateCurveTableRow_OutXY123 = CallFunc_EvaluateCurveTableRow_OutXY123;
	Parms.CallFunc_RandomFloatInRange_ReturnValue12 = CallFunc_RandomFloatInRange_ReturnValue12;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue12 = CallFunc_MapRangeClamped_ReturnValue12;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue12 = CallFunc_Multiply_FloatFloat_ReturnValue12;
	Parms.K2Node_SwitchEnum123_CmpSuccess = K2Node_SwitchEnum123_CmpSuccess;
	Parms.CallFunc_RandomFloatInRange_ReturnValue123 = CallFunc_RandomFloatInRange_ReturnValue123;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue1 = CallFunc_SpawnEmitterAtLocation_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
