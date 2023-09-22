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


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.Is Tranfsorm Button Enabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRequiredItemQuantity_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  CallFunc_GetRequiredItemDefinition_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumInInventory_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UItemTransformResultInfo_C::Is_Tranfsorm_Button_Enabled(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_GetRequiredItemQuantity_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetRequiredItemDefinition_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetNumInInventory_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransformResultInfo_C", "Is Tranfsorm Button Enabled");

	Params::UItemTransformResultInfo_C_Is_Tranfsorm_Button_Enabled_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetRequiredItemQuantity_ReturnValue = CallFunc_GetRequiredItemQuantity_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetRequiredItemDefinition_ReturnValue = CallFunc_GetRequiredItemDefinition_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetNumInInventory_ReturnValue = CallFunc_GetNumInInventory_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue1 = CallFunc_GreaterEqual_IntInt_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.Get Transform Data
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentSacrificePoints                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentTier                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformResultInfo_C::Get_Transform_Data(int32* CurrentSacrificePoints, int32* CurrentTier)
{
	static auto Func = Class->GetFunction("ItemTransformResultInfo_C", "Get Transform Data");

	Params::UItemTransformResultInfo_C_Get_Transform_Data_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentSacrificePoints != nullptr)
		*CurrentSacrificePoints = Parms.CurrentSacrificePoints;

	if (CurrentTier != nullptr)
		*CurrentTier = Parms.CurrentTier;

}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.CalculateNextTier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UItemTransformResultInfo_C::CalculateNextTier(bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemTransformResultInfo_C", "CalculateNextTier");

	Params::UItemTransformResultInfo_C_CalculateNextTier_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.GetPointsForTier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Tier                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Points                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPointsForTier_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformResultInfo_C::GetPointsForTier(int32 Tier, int32* Points, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_GetPointsForTier_ReturnValue, int32 CallFunc_Max_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemTransformResultInfo_C", "GetPointsForTier");

	Params::UItemTransformResultInfo_C_GetPointsForTier_Params Parms;
	Parms.Tier = Tier;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetPointsForTier_ReturnValue = CallFunc_GetPointsForTier_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Points != nullptr)
		*Points = Parms.Points;

}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.UpdateTierProgressPercentage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CalculatedPercent                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AdjustedNextPoints                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AdjustedCurrentPoints                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPointsForTier_Points                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue123                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue1234                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue12345                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue123456                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue1234567                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue12345678                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue123456789                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue12345678910                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue1234567891011                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue123456789101112              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue12345678910111213            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue1234567891011121314          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue123456789101112131415        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue12345678910111213141516      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718192021(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819202122(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920212223(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718192021222324(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819202122232425(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920212223242526(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718192021222324252627(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819202122232425262728(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920212223242526272829(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718192021222324252627282930(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819202122232425262728293031(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920212223242526272829303132(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718192021222324252627282930313233(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819202122232425262728293031323334(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920212223242526272829303132333435(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPointsForTier_Points1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue123                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue1234                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalculateNextTier_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue12345                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPointsForTier_Points12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPointsForTier_Points123                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPointsForTier_Points1234                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformResultInfo_C::UpdateTierProgressPercentage(float CalculatedPercent, int32 AdjustedNextPoints, int32 AdjustedCurrentPoints, int32 CallFunc_GetPointsForTier_Points, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue1, class FName CallFunc_MakeLiteralName_ReturnValue12, class FName CallFunc_MakeLiteralName_ReturnValue123, class FName CallFunc_MakeLiteralName_ReturnValue1234, class FName CallFunc_MakeLiteralName_ReturnValue12345, class FName CallFunc_MakeLiteralName_ReturnValue123456, class FName CallFunc_MakeLiteralName_ReturnValue1234567, class FName CallFunc_MakeLiteralName_ReturnValue12345678, class FName CallFunc_MakeLiteralName_ReturnValue123456789, class FName CallFunc_MakeLiteralName_ReturnValue12345678910, class FName CallFunc_MakeLiteralName_ReturnValue1234567891011, class FName CallFunc_MakeLiteralName_ReturnValue123456789101112, class FName CallFunc_MakeLiteralName_ReturnValue12345678910111213, class FName CallFunc_MakeLiteralName_ReturnValue1234567891011121314, class FName CallFunc_MakeLiteralName_ReturnValue123456789101112131415, class FName CallFunc_MakeLiteralName_ReturnValue12345678910111213141516, class FName CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617, class FName CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718, class FName CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819, class FName CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920, class FName CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718192021, class FName CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819202122, class FName CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920212223, class FName CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718192021222324, class FName CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819202122232425, class FName CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920212223242526, class FName CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718192021222324252627, class FName CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819202122232425262728, class FName CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920212223242526272829, class FName CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718192021222324252627282930, class FName CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819202122232425262728293031, class FName CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920212223242526272829303132, class FName CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718192021222324252627282930313233, class FName CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819202122232425262728293031323334, class FName CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920212223242526272829303132333435, bool CallFunc_EqualEqual_IntInt_ReturnValue1, int32 CallFunc_GetPointsForTier_Points1, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Conv_IntToFloat_ReturnValue12, float CallFunc_Conv_IntToFloat_ReturnValue123, float CallFunc_Conv_IntToFloat_ReturnValue1234, int32 CallFunc_CalculateNextTier_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue12345, int32 CallFunc_GetPointsForTier_Points12, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, int32 CallFunc_GetPointsForTier_Points123, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetPointsForTier_Points1234, int32 CallFunc_Subtract_IntInt_ReturnValue1)
{
	static auto Func = Class->GetFunction("ItemTransformResultInfo_C", "UpdateTierProgressPercentage");

	Params::UItemTransformResultInfo_C_UpdateTierProgressPercentage_Params Parms;
	Parms.CalculatedPercent = CalculatedPercent;
	Parms.AdjustedNextPoints = AdjustedNextPoints;
	Parms.AdjustedCurrentPoints = AdjustedCurrentPoints;
	Parms.CallFunc_GetPointsForTier_Points = CallFunc_GetPointsForTier_Points;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue1 = CallFunc_Conv_IntToFloat_ReturnValue1;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue1 = CallFunc_MakeLiteralName_ReturnValue1;
	Parms.CallFunc_MakeLiteralName_ReturnValue12 = CallFunc_MakeLiteralName_ReturnValue12;
	Parms.CallFunc_MakeLiteralName_ReturnValue123 = CallFunc_MakeLiteralName_ReturnValue123;
	Parms.CallFunc_MakeLiteralName_ReturnValue1234 = CallFunc_MakeLiteralName_ReturnValue1234;
	Parms.CallFunc_MakeLiteralName_ReturnValue12345 = CallFunc_MakeLiteralName_ReturnValue12345;
	Parms.CallFunc_MakeLiteralName_ReturnValue123456 = CallFunc_MakeLiteralName_ReturnValue123456;
	Parms.CallFunc_MakeLiteralName_ReturnValue1234567 = CallFunc_MakeLiteralName_ReturnValue1234567;
	Parms.CallFunc_MakeLiteralName_ReturnValue12345678 = CallFunc_MakeLiteralName_ReturnValue12345678;
	Parms.CallFunc_MakeLiteralName_ReturnValue123456789 = CallFunc_MakeLiteralName_ReturnValue123456789;
	Parms.CallFunc_MakeLiteralName_ReturnValue12345678910 = CallFunc_MakeLiteralName_ReturnValue12345678910;
	Parms.CallFunc_MakeLiteralName_ReturnValue1234567891011 = CallFunc_MakeLiteralName_ReturnValue1234567891011;
	Parms.CallFunc_MakeLiteralName_ReturnValue123456789101112 = CallFunc_MakeLiteralName_ReturnValue123456789101112;
	Parms.CallFunc_MakeLiteralName_ReturnValue12345678910111213 = CallFunc_MakeLiteralName_ReturnValue12345678910111213;
	Parms.CallFunc_MakeLiteralName_ReturnValue1234567891011121314 = CallFunc_MakeLiteralName_ReturnValue1234567891011121314;
	Parms.CallFunc_MakeLiteralName_ReturnValue123456789101112131415 = CallFunc_MakeLiteralName_ReturnValue123456789101112131415;
	Parms.CallFunc_MakeLiteralName_ReturnValue12345678910111213141516 = CallFunc_MakeLiteralName_ReturnValue12345678910111213141516;
	Parms.CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617 = CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617;
	Parms.CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718 = CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718;
	Parms.CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819 = CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819;
	Parms.CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920 = CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920;
	Parms.CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718192021 = CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718192021;
	Parms.CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819202122 = CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819202122;
	Parms.CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920212223 = CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920212223;
	Parms.CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718192021222324 = CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718192021222324;
	Parms.CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819202122232425 = CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819202122232425;
	Parms.CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920212223242526 = CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920212223242526;
	Parms.CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718192021222324252627 = CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718192021222324252627;
	Parms.CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819202122232425262728 = CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819202122232425262728;
	Parms.CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920212223242526272829 = CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920212223242526272829;
	Parms.CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718192021222324252627282930 = CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718192021222324252627282930;
	Parms.CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819202122232425262728293031 = CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819202122232425262728293031;
	Parms.CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920212223242526272829303132 = CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920212223242526272829303132;
	Parms.CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718192021222324252627282930313233 = CallFunc_MakeLiteralName_ReturnValue123456789101112131415161718192021222324252627282930313233;
	Parms.CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819202122232425262728293031323334 = CallFunc_MakeLiteralName_ReturnValue12345678910111213141516171819202122232425262728293031323334;
	Parms.CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920212223242526272829303132333435 = CallFunc_MakeLiteralName_ReturnValue1234567891011121314151617181920212223242526272829303132333435;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue1 = CallFunc_EqualEqual_IntInt_ReturnValue1;
	Parms.CallFunc_GetPointsForTier_Points1 = CallFunc_GetPointsForTier_Points1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue12 = CallFunc_Conv_IntToFloat_ReturnValue12;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue123 = CallFunc_Conv_IntToFloat_ReturnValue123;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue1234 = CallFunc_Conv_IntToFloat_ReturnValue1234;
	Parms.CallFunc_CalculateNextTier_ReturnValue = CallFunc_CalculateNextTier_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue12345 = CallFunc_Conv_IntToFloat_ReturnValue12345;
	Parms.CallFunc_GetPointsForTier_Points12 = CallFunc_GetPointsForTier_Points12;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_GetPointsForTier_Points123 = CallFunc_GetPointsForTier_Points123;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetPointsForTier_Points1234 = CallFunc_GetPointsForTier_Points1234;
	Parms.CallFunc_Subtract_IntInt_ReturnValue1 = CallFunc_Subtract_IntInt_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.CalculateCurrentSacrificePoints
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TotalSacrificePoints                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalPoints                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransmogSacrifice          CallFunc_GetTransmogSacrificeDataFromItemDefintion_OutTransmogData()
// bool                               CallFunc_GetTransmogSacrificeDataFromItemDefintion_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformResultInfo_C::CalculateCurrentSacrificePoints(int32* TotalSacrificePoints, int32 TotalPoints, int32 Temp_int_Array_Index_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, const struct FTransmogSacrifice& CallFunc_GetTransmogSacrificeDataFromItemDefintion_OutTransmogData, bool CallFunc_GetTransmogSacrificeDataFromItemDefintion_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1)
{
	static auto Func = Class->GetFunction("ItemTransformResultInfo_C", "CalculateCurrentSacrificePoints");

	Params::UItemTransformResultInfo_C_CalculateCurrentSacrificePoints_Params Parms;
	Parms.TotalPoints = TotalPoints;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetTransmogSacrificeDataFromItemDefintion_OutTransmogData = CallFunc_GetTransmogSacrificeDataFromItemDefintion_OutTransmogData;
	Parms.CallFunc_GetTransmogSacrificeDataFromItemDefintion_ReturnValue = CallFunc_GetTransmogSacrificeDataFromItemDefintion_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (TotalSacrificePoints != nullptr)
		*TotalSacrificePoints = Parms.TotalSacrificePoints;

}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.UpdateSacrificeInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>           SacrificeItems                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Is_Tranfsorm_Button_Enabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CalculateCurrentSacrificePoints_TotalSacrificePoints    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformResultInfo_C::UpdateSacrificeInfo(TArray<class UFortItem*>& SacrificeItems, bool CallFunc_Is_Tranfsorm_Button_Enabled_ReturnValue, int32 CallFunc_CalculateCurrentSacrificePoints_TotalSacrificePoints)
{
	static auto Func = Class->GetFunction("ItemTransformResultInfo_C", "UpdateSacrificeInfo");

	Params::UItemTransformResultInfo_C_UpdateSacrificeInfo_Params Parms;
	Parms.SacrificeItems = SacrificeItems;
	Parms.CallFunc_Is_Tranfsorm_Button_Enabled_ReturnValue = CallFunc_Is_Tranfsorm_Button_Enabled_ReturnValue;
	Parms.CallFunc_CalculateCurrentSacrificePoints_TotalSacrificePoints = CallFunc_CalculateCurrentSacrificePoints_TotalSacrificePoints;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.UpdateSacrificePointsBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortRarity             CallFunc_GetTierFromSacrificePoints_CalculatedTier               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTierFromSacrificePoints_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             CallFunc_GetMaxConversionTier_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetFirstConversionTier_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformResultInfo_C::UpdateSacrificePointsBar(enum class EFortRarity CallFunc_GetTierFromSacrificePoints_CalculatedTier, bool CallFunc_GetTierFromSacrificePoints_ReturnValue, enum class EFortRarity CallFunc_GetMaxConversionTier_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue1, enum class EFortRarity CallFunc_GetFirstConversionTier_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue12, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, bool Temp_bool_Variable, int32 K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemTransformResultInfo_C", "UpdateSacrificePointsBar");

	Params::UItemTransformResultInfo_C_UpdateSacrificePointsBar_Params Parms;
	Parms.CallFunc_GetTierFromSacrificePoints_CalculatedTier = CallFunc_GetTierFromSacrificePoints_CalculatedTier;
	Parms.CallFunc_GetTierFromSacrificePoints_ReturnValue = CallFunc_GetTierFromSacrificePoints_ReturnValue;
	Parms.CallFunc_GetMaxConversionTier_ReturnValue = CallFunc_GetMaxConversionTier_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue1 = CallFunc_Conv_ByteToInt_ReturnValue1;
	Parms.CallFunc_GetFirstConversionTier_ReturnValue = CallFunc_GetFirstConversionTier_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue12 = CallFunc_Conv_ByteToInt_ReturnValue12;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.SetKeyToRepresent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortConversionControlItemDefinition*K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformResultInfo_C::SetKeyToRepresent(class UFortItem* Key, class FText CallFunc_GetDisplayName_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortConversionControlItemDefinition* K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ItemTransformResultInfo_C", "SetKeyToRepresent");

	Params::UItemTransformResultInfo_C_SetKeyToRepresent_Params Parms;
	Parms.Key = Key;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition = K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.BndEvt__TransformButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformResultInfo_C::BndEvt__TransformButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemTransformResultInfo_C", "BndEvt__TransformButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	Params::UItemTransformResultInfo_C_BndEvt__TransformButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemTransformResultInfo_C::Construct()
{
	static auto Func = Class->GetFunction("ItemTransformResultInfo_C", "Construct");

	Params::UItemTransformResultInfo_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.ExecuteUbergraph_ItemTransformResultInfo
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformResultInfo_C::ExecuteUbergraph_ItemTransformResultInfo(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("ItemTransformResultInfo_C", "ExecuteUbergraph_ItemTransformResultInfo");

	Params::UItemTransformResultInfo_C_ExecuteUbergraph_ItemTransformResultInfo_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.OnUpdateSacrificeInfo__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TransformActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformResultInfo_C::OnUpdateSacrificeInfo__DelegateSignature(bool TransformActive)
{
	static auto Func = Class->GetFunction("ItemTransformResultInfo_C", "OnUpdateSacrificeInfo__DelegateSignature");

	Params::UItemTransformResultInfo_C_OnUpdateSacrificeInfo__DelegateSignature_Params Parms;
	Parms.TransformActive = TransformActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemTransformResultInfo.ItemTransformResultInfo_C.OnTransformConfirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SacrificePoints                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentTier                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformResultInfo_C::OnTransformConfirmed__DelegateSignature(int32 SacrificePoints, int32 CurrentTier)
{
	static auto Func = Class->GetFunction("ItemTransformResultInfo_C", "OnTransformConfirmed__DelegateSignature");

	Params::UItemTransformResultInfo_C_OnTransformConfirmed__DelegateSignature_Params Parms;
	Parms.SacrificePoints = SacrificePoints;
	Parms.CurrentTier = CurrentTier;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
