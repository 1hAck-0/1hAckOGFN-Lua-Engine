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


// Function SurvivorAnchorLocationsToAvoidContext.SurvivorAnchorLocationsToAvoidContext_C.ProvideLocationsSet
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      QuerierActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             ResultingLocationSet                                             (Parm, OutParm, ZeroConstructor)
// class AActor*                      Querier                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              ActorsToTest                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
// TArray<struct FVector>             LocationSet                                                      (Edit, BlueprintVisible, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASurvivor_C*                 K2Node_DynamicCast_AsSurvivor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_Origin                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetComponentBounds_SphereRadius                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorFloat_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X12                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y12                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z12                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         K2Node_DynamicCast_AsFort_Projectile_Base                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue12                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortAreaOfEffectCloud*      K2Node_DynamicCast_AsFort_Area_Of_Effect_Cloud                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess12                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABuildingGameplayActor*      K2Node_DynamicCast_AsBuilding_Gameplay_Actor                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess123                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortTeamAffiliation    CallFunc_GetTeamAffiliation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1234                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortProjectileBase*> CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// TArray<class ABuildingGameplayActor*>CallFunc_GetAllActorsOfClass_OutActors1                          (ZeroConstructor, ReferenceParm)
// TArray<class AFortAreaOfEffectCloud*>CallFunc_GetAllActorsOfClass_OutActors12                         (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USurvivorAnchorLocationsToAvoidContext_C::ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet, class AActor* Querier, const TArray<class AActor*>& ActorsToTest, const TArray<struct FVector>& LocationSet, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ASurvivor_C* K2Node_DynamicCast_AsSurvivor, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_Array_Get_Item1, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, float CallFunc_BreakVector_X12, float CallFunc_BreakVector_Y12, float CallFunc_BreakVector_Z12, class AFortProjectileBase* K2Node_DynamicCast_AsFort_Projectile_Base, bool K2Node_DynamicCast_bSuccess1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_Less_FloatFloat_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue12, float CallFunc_Add_FloatFloat_ReturnValue12, bool CallFunc_Greater_FloatFloat_ReturnValue12, bool CallFunc_Less_FloatFloat_ReturnValue12, class AFortAreaOfEffectCloud* K2Node_DynamicCast_AsFort_Area_Of_Effect_Cloud, bool K2Node_DynamicCast_bSuccess12, bool CallFunc_BooleanAND_ReturnValue, class ABuildingGameplayActor* K2Node_DynamicCast_AsBuilding_Gameplay_Actor, bool K2Node_DynamicCast_bSuccess123, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue12, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue123, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanAND_ReturnValue1234, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, TArray<class AFortProjectileBase*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<class ABuildingGameplayActor*>& CallFunc_GetAllActorsOfClass_OutActors1, TArray<class AFortAreaOfEffectCloud*>& CallFunc_GetAllActorsOfClass_OutActors12, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("SurvivorAnchorLocationsToAvoidContext_C", "ProvideLocationsSet");

	Params::USurvivorAnchorLocationsToAvoidContext_C_ProvideLocationsSet_Params Parms;
	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.Querier = Querier;
	Parms.ActorsToTest = ActorsToTest;
	Parms.LocationSet = LocationSet;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsSurvivor = K2Node_DynamicCast_AsSurvivor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_GetComponentBounds_Origin = CallFunc_GetComponentBounds_Origin;
	Parms.CallFunc_GetComponentBounds_BoxExtent = CallFunc_GetComponentBounds_BoxExtent;
	Parms.CallFunc_GetComponentBounds_SphereRadius = CallFunc_GetComponentBounds_SphereRadius;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorFloat_ReturnValue = CallFunc_Add_VectorFloat_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X1 = CallFunc_BreakVector_X1;
	Parms.CallFunc_BreakVector_Y1 = CallFunc_BreakVector_Y1;
	Parms.CallFunc_BreakVector_Z1 = CallFunc_BreakVector_Z1;
	Parms.CallFunc_BreakVector_X12 = CallFunc_BreakVector_X12;
	Parms.CallFunc_BreakVector_Y12 = CallFunc_BreakVector_Y12;
	Parms.CallFunc_BreakVector_Z12 = CallFunc_BreakVector_Z12;
	Parms.K2Node_DynamicCast_AsFort_Projectile_Base = K2Node_DynamicCast_AsFort_Projectile_Base;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue1 = CallFunc_Subtract_FloatFloat_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue1 = CallFunc_Greater_FloatFloat_ReturnValue1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue1 = CallFunc_Less_FloatFloat_ReturnValue1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue12 = CallFunc_Subtract_FloatFloat_ReturnValue12;
	Parms.CallFunc_Add_FloatFloat_ReturnValue12 = CallFunc_Add_FloatFloat_ReturnValue12;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue12 = CallFunc_Greater_FloatFloat_ReturnValue12;
	Parms.CallFunc_Less_FloatFloat_ReturnValue12 = CallFunc_Less_FloatFloat_ReturnValue12;
	Parms.K2Node_DynamicCast_AsFort_Area_Of_Effect_Cloud = K2Node_DynamicCast_AsFort_Area_Of_Effect_Cloud;
	Parms.K2Node_DynamicCast_bSuccess12 = K2Node_DynamicCast_bSuccess12;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_Gameplay_Actor = K2Node_DynamicCast_AsBuilding_Gameplay_Actor;
	Parms.K2Node_DynamicCast_bSuccess123 = K2Node_DynamicCast_bSuccess123;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue12 = CallFunc_BooleanAND_ReturnValue12;
	Parms.CallFunc_GetTeamAffiliation_ReturnValue = CallFunc_GetTeamAffiliation_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue123 = CallFunc_BooleanAND_ReturnValue123;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue1234 = CallFunc_BooleanAND_ReturnValue1234;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_GetAllActorsOfClass_OutActors1 = CallFunc_GetAllActorsOfClass_OutActors1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors12 = CallFunc_GetAllActorsOfClass_OutActors12;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingLocationSet != nullptr)
		*ResultingLocationSet = Parms.ResultingLocationSet;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
