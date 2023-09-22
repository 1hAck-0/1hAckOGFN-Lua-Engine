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


// Function SurvivorAnchorOutOfBoundsLocationContext.SurvivorAnchorOutOfBoundsLocationContext_C.ProvideSingleLocation
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      QuerierActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ResultingLocation                                                (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ZGridSnapSize                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SurvivorAnchor_C*        SurvivorAnchor                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Debug                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              GeneratorZOffset                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Result                                                           (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SurvivorAnchor_C*        K2Node_DynamicCast_AsBP_Survivor_Anchor                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASurvivor_C*                 K2Node_DynamicCast_AsSurvivor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue12                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue123                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue1234                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GridSnap_Float_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue1                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue12345                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USurvivorAnchorOutOfBoundsLocationContext_C::ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation, float ZGridSnapSize, class ABP_SurvivorAnchor_C* SurvivorAnchor, bool Debug, float GeneratorZOffset, const struct FVector& Result, class ABP_SurvivorAnchor_C* K2Node_DynamicCast_AsBP_Survivor_Anchor, bool K2Node_DynamicCast_bSuccess, class ASurvivor_C* K2Node_DynamicCast_AsSurvivor, bool K2Node_DynamicCast_bSuccess1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue12, const struct FVector& CallFunc_Add_VectorVector_ReturnValue123, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1234, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GridSnap_Float_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue12345)
{
	static auto Func = Class->GetFunction("SurvivorAnchorOutOfBoundsLocationContext_C", "ProvideSingleLocation");

	Params::USurvivorAnchorOutOfBoundsLocationContext_C_ProvideSingleLocation_Params Parms;
	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.ZGridSnapSize = ZGridSnapSize;
	Parms.SurvivorAnchor = SurvivorAnchor;
	Parms.Debug = Debug;
	Parms.GeneratorZOffset = GeneratorZOffset;
	Parms.Result = Result;
	Parms.K2Node_DynamicCast_AsBP_Survivor_Anchor = K2Node_DynamicCast_AsBP_Survivor_Anchor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsSurvivor = K2Node_DynamicCast_AsSurvivor;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue1 = CallFunc_Add_VectorVector_ReturnValue1;
	Parms.CallFunc_Add_VectorVector_ReturnValue12 = CallFunc_Add_VectorVector_ReturnValue12;
	Parms.CallFunc_Add_VectorVector_ReturnValue123 = CallFunc_Add_VectorVector_ReturnValue123;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue1234 = CallFunc_Add_VectorVector_ReturnValue1234;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue1 = CallFunc_K2_GetComponentLocation_ReturnValue1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X1 = CallFunc_BreakVector_X1;
	Parms.CallFunc_BreakVector_Y1 = CallFunc_BreakVector_Y1;
	Parms.CallFunc_BreakVector_Z1 = CallFunc_BreakVector_Z1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GridSnap_Float_ReturnValue = CallFunc_GridSnap_Float_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue1 = CallFunc_MakeVector_ReturnValue1;
	Parms.CallFunc_Add_VectorVector_ReturnValue12345 = CallFunc_Add_VectorVector_ReturnValue12345;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingLocation != nullptr)
		*ResultingLocation = Parms.ResultingLocation;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
