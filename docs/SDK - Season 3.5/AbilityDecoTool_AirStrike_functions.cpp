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


// Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.HideMeshAndPlacement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InHide                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_Placement_Preview_AirStrike_C*K2Node_DynamicCast_AsB_Placement_Preview_Air_Strike              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityDecoTool_AirStrike_C::HideMeshAndPlacement(bool InHide, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, class AB_Placement_Preview_AirStrike_C* K2Node_DynamicCast_AsB_Placement_Preview_Air_Strike, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("AbilityDecoTool_AirStrike_C", "HideMeshAndPlacement");

	Params::AAbilityDecoTool_AirStrike_C_HideMeshAndPlacement_Params Parms;
	Parms.InHide = InHide;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Placement_Preview_Air_Strike = K2Node_DynamicCast_AsB_Placement_Preview_Air_Strike;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.PopulatePositionArrays
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable123                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable123                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1234                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1234                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable1234                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Array_Get_Item1                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item12                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item123                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue123                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue12                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue123                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item1234                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item12345                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1234                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue1234                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAirStrikesPatterns         CallFunc_Array_Get_Item123456                                    (HasGetValueTypeHash)
// struct FStrikePatternVectorStruct  CallFunc_Array_Get_Item1234567                                   (HasGetValueTypeHash)

void AAbilityDecoTool_AirStrike_C::PopulatePositionArrays(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, int32 Temp_int_Loop_Counter_Variable12, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue12, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable1, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable12, int32 Temp_int_Loop_Counter_Variable123, int32 CallFunc_Add_IntInt_ReturnValue123, int32 Temp_int_Array_Index_Variable123, int32 Temp_int_Loop_Counter_Variable1234, int32 CallFunc_Add_IntInt_ReturnValue1234, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, int32 Temp_int_Array_Index_Variable1234, bool CallFunc_Less_IntInt_ReturnValue1, const struct FVector& CallFunc_Array_Get_Item1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_Array_Get_Item12, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_Array_Get_Item123, int32 CallFunc_Array_Length_ReturnValue12, int32 CallFunc_Array_Length_ReturnValue123, bool CallFunc_Less_IntInt_ReturnValue12, bool CallFunc_Less_IntInt_ReturnValue123, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue1, int32 CallFunc_Array_Get_Item1234, const struct FVector& CallFunc_Array_Get_Item12345, int32 CallFunc_Array_Length_ReturnValue1234, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1234, const struct FAirStrikesPatterns& CallFunc_Array_Get_Item123456, const struct FStrikePatternVectorStruct& CallFunc_Array_Get_Item1234567)
{
	static auto Func = Class->GetFunction("AbilityDecoTool_AirStrike_C", "PopulatePositionArrays");

	Params::AAbilityDecoTool_AirStrike_C_PopulatePositionArrays_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.Temp_int_Loop_Counter_Variable12 = Temp_int_Loop_Counter_Variable12;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue12 = CallFunc_Add_IntInt_ReturnValue12;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable12 = Temp_int_Array_Index_Variable12;
	Parms.Temp_int_Loop_Counter_Variable123 = Temp_int_Loop_Counter_Variable123;
	Parms.CallFunc_Add_IntInt_ReturnValue123 = CallFunc_Add_IntInt_ReturnValue123;
	Parms.Temp_int_Array_Index_Variable123 = Temp_int_Array_Index_Variable123;
	Parms.Temp_int_Loop_Counter_Variable1234 = Temp_int_Loop_Counter_Variable1234;
	Parms.CallFunc_Add_IntInt_ReturnValue1234 = CallFunc_Add_IntInt_ReturnValue1234;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.Temp_int_Array_Index_Variable1234 = Temp_int_Array_Index_Variable1234;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue1 = CallFunc_Multiply_VectorFloat_ReturnValue1;
	Parms.CallFunc_Array_Get_Item12 = CallFunc_Array_Get_Item12;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item123 = CallFunc_Array_Get_Item123;
	Parms.CallFunc_Array_Length_ReturnValue12 = CallFunc_Array_Length_ReturnValue12;
	Parms.CallFunc_Array_Length_ReturnValue123 = CallFunc_Array_Length_ReturnValue123;
	Parms.CallFunc_Less_IntInt_ReturnValue12 = CallFunc_Less_IntInt_ReturnValue12;
	Parms.CallFunc_Less_IntInt_ReturnValue123 = CallFunc_Less_IntInt_ReturnValue123;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue1 = CallFunc_Array_AddUnique_ReturnValue1;
	Parms.CallFunc_Array_Get_Item1234 = CallFunc_Array_Get_Item1234;
	Parms.CallFunc_Array_Get_Item12345 = CallFunc_Array_Get_Item12345;
	Parms.CallFunc_Array_Length_ReturnValue1234 = CallFunc_Array_Length_ReturnValue1234;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue1234 = CallFunc_Less_IntInt_ReturnValue1234;
	Parms.CallFunc_Array_Get_Item123456 = CallFunc_Array_Get_Item123456;
	Parms.CallFunc_Array_Get_Item1234567 = CallFunc_Array_Get_Item1234567;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbilityDecoTool_AirStrike_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("AbilityDecoTool_AirStrike_C", "UserConstructionScript");

	Params::AAbilityDecoTool_AirStrike_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAbilityDecoTool_AirStrike_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("AbilityDecoTool_AirStrike_C", "ReceiveBeginPlay");

	Params::AAbilityDecoTool_AirStrike_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.BPOnSetDecoObjectPreview
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*             FortDecoHelper                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityDecoTool_AirStrike_C::BPOnSetDecoObjectPreview(class AFortDecoHelper* FortDecoHelper)
{
	static auto Func = Class->GetFunction("AbilityDecoTool_AirStrike_C", "BPOnSetDecoObjectPreview");

	Params::AAbilityDecoTool_AirStrike_C_BPOnSetDecoObjectPreview_Params Parms;
	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.BPPressSecondaryFire
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*             FortDecoHelper                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityDecoTool_AirStrike_C::BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper)
{
	static auto Func = Class->GetFunction("AbilityDecoTool_AirStrike_C", "BPPressSecondaryFire");

	Params::AAbilityDecoTool_AirStrike_C_BPPressSecondaryFire_Params Parms;
	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.PassInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Power_Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityDecoTool_AirStrike_C::PassInfo(int32 Power_Level)
{
	static auto Func = Class->GetFunction("AbilityDecoTool_AirStrike_C", "PassInfo");

	Params::AAbilityDecoTool_AirStrike_C_PassInfo_Params Parms;
	Parms.Power_Level = Power_Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.HideFor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InTime                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityDecoTool_AirStrike_C::HideFor(float InTime)
{
	static auto Func = Class->GetFunction("AbilityDecoTool_AirStrike_C", "HideFor");

	Params::AAbilityDecoTool_AirStrike_C_HideFor_Params Parms;
	Parms.InTime = InTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbilityDecoTool_AirStrike_C::Show()
{
	static auto Func = Class->GetFunction("AbilityDecoTool_AirStrike_C", "Show");

	Params::AAbilityDecoTool_AirStrike_C_Show_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.ExecuteUbergraph_AbilityDecoTool_AirStrike
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortDecoHelper*             K2Node_Event_FortDecoHelper1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_Placement_Preview_AirStrike_C*K2Node_DynamicCast_AsB_Placement_Preview_Air_Strike              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAirStrikesPatterns         CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortDecoHelper*             K2Node_Event_FortDecoHelper                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_Placement_Preview_AirStrike_C*K2Node_DynamicCast_AsB_Placement_Preview_Air_Strike1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Power_Level                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess12                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable12                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable123                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable1234                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_InTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// int32                              Temp_int_Variable12345                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface1_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface12_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue12                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select12_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityDecoTool_AirStrike_C::ExecuteUbergraph_AbilityDecoTool_AirStrike(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AFortDecoHelper* K2Node_Event_FortDecoHelper1, bool CallFunc_IsValid_ReturnValue, class AB_Placement_Preview_AirStrike_C* K2Node_DynamicCast_AsB_Placement_Preview_Air_Strike, bool K2Node_DynamicCast_bSuccess, const struct FAirStrikesPatterns& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class AFortDecoHelper* K2Node_Event_FortDecoHelper, class AB_Placement_Preview_AirStrike_C* K2Node_DynamicCast_AsB_Placement_Preview_Air_Strike1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue1, class APawn* CallFunc_GetInstigator_ReturnValue, int32 K2Node_CustomEvent_Power_Level, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess12, bool Temp_bool_Variable1, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Variable12, int32 Temp_int_Variable123, bool Temp_bool_Variable12, int32 Temp_int_Variable1234, float K2Node_CustomEvent_InTime, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Variable12345, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface1_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue1, int32 K2Node_Select_Default, int32 K2Node_Select1_Default, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface12_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue12, int32 K2Node_Select12_Default, int32 CallFunc_Add_IntInt_ReturnValue12, int32 CallFunc_Add_IntInt_ReturnValue123)
{
	static auto Func = Class->GetFunction("AbilityDecoTool_AirStrike_C", "ExecuteUbergraph_AbilityDecoTool_AirStrike");

	Params::AAbilityDecoTool_AirStrike_C_ExecuteUbergraph_AbilityDecoTool_AirStrike_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Event_FortDecoHelper1 = K2Node_Event_FortDecoHelper1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Placement_Preview_Air_Strike = K2Node_DynamicCast_AsB_Placement_Preview_Air_Strike;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.K2Node_Event_FortDecoHelper = K2Node_Event_FortDecoHelper;
	Parms.K2Node_DynamicCast_AsB_Placement_Preview_Air_Strike1 = K2Node_DynamicCast_AsB_Placement_Preview_Air_Strike1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_CustomEvent_Power_Level = K2Node_CustomEvent_Power_Level;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess12 = K2Node_DynamicCast_bSuccess12;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_int_Variable12 = Temp_int_Variable12;
	Parms.Temp_int_Variable123 = Temp_int_Variable123;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.Temp_int_Variable1234 = Temp_int_Variable1234;
	Parms.K2Node_CustomEvent_InTime = K2Node_CustomEvent_InTime;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_int_Variable12345 = Temp_int_Variable12345;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue = CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface1_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface1_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue1 = CallFunc_HasAllMatchingGameplayTags_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface12_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface12_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue12 = CallFunc_HasAllMatchingGameplayTags_ReturnValue12;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue12 = CallFunc_Add_IntInt_ReturnValue12;
	Parms.CallFunc_Add_IntInt_ReturnValue123 = CallFunc_Add_IntInt_ReturnValue123;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
