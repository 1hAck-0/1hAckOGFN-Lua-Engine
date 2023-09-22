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


// Function RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C.Set Canvas Material Scale and Position
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Position                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Screen_Position                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Screen_Size                                                      (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_Vector2DToVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DFloat_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue1                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_Vector2DToVector_ReturnValue1                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue12                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URenderToTextureFunctionLibrary_C::Set_Canvas_Material_Scale_and_Position(const struct FVector2D& Size, const struct FVector2D& Position, float Scale, class UObject* __WorldContext, struct FVector2D* Screen_Position, struct FVector2D* Screen_Size, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue1, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue12, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue)
{
	static auto Func = Class->GetFunction("RenderToTextureFunctionLibrary_C", "Set Canvas Material Scale and Position");

	Params::URenderToTextureFunctionLibrary_C_Set_Canvas_Material_Scale_and_Position_Params Parms;
	Parms.Size = Size;
	Parms.Position = Position;
	Parms.Scale = Scale;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_Vector2DToVector_ReturnValue = CallFunc_Conv_Vector2DToVector_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DFloat_ReturnValue = CallFunc_Subtract_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue1 = CallFunc_Multiply_Vector2DFloat_ReturnValue1;
	Parms.CallFunc_Conv_Vector2DToVector_ReturnValue1 = CallFunc_Conv_Vector2DToVector_ReturnValue1;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue12 = CallFunc_Multiply_Vector2DFloat_ReturnValue12;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Screen_Position != nullptr)
		*Screen_Position = Parms.Screen_Position;

	if (Screen_Size != nullptr)
		*Screen_Size = Parms.Screen_Size;

}


// Function RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C.Array to HLSL Int Array
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EIntTypes               Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Variable_Name                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// TArray<int32>                      Int                                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>           Int2                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>             Int3                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FLinearColor>        Int4                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      String                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Curstring                                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue123                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1234                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue1                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue12345                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue123456                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue12                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue123                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1234567                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue123                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue12                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue123                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1234                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue12345                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue123456                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1234567                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue12345678                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue123456789                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue12345678910                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1234567891011                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue12                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Array_Get_Item1                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            ()
// class FText                        CallFunc_Conv_FloatToText_ReturnValue1                           ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue1                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue123456789101112                (ZeroConstructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item12                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue12                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue12                          ()
// class FText                        CallFunc_Conv_FloatToText_ReturnValue123                         ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue12                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue123                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue1234                        ()
// class FText                        CallFunc_Conv_FloatToText_ReturnValue12345                       ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue1234                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue12345                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue12345678910111213              (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable123                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1234567891011121314            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue123456789101112131415          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue123                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue12345678910111213141516        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617      (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718    (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue12345678910111213141516171819  (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617181920(ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable123                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item123                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718192021(ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue123                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue123456                      ()
// class FText                        CallFunc_Conv_FloatToText_ReturnValue1234567                     ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue123456                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue1234567                    (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue12345678                    ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue12345678                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue12345678910111213141516171819202122(ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617181920212223(ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718192021222324(ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue12345678910111213141516171819202122232425(ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617181920212223242526(ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718192021222324252627(ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue12345678910111213141516171819202122232425262728(ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617181920212223242526272829(ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718192021222324252627282930(ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue12345678910111213141516171819202122232425262728293031(ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue1234                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617181920212223242526272829303132(ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718192021222324252627282930313233(ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select1_Default                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue12345                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select12_Default                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select123_Default                                         (ZeroConstructor, HasGetValueTypeHash)

void URenderToTextureFunctionLibrary_C::Array_to_HLSL_Int_Array(enum class EIntTypes Type, class FString& Variable_Name, TArray<int32>& Int, TArray<struct FVector2D>& Int2, TArray<struct FVector>& Int3, TArray<struct FLinearColor>& Int4, class UObject* __WorldContext, class FString* String, const class FString& Curstring, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue12, const class FString& CallFunc_BuildString_Int_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue123, int32 CallFunc_Array_Length_ReturnValue1234, const class FString& CallFunc_BuildString_Int_ReturnValue1, int32 CallFunc_Array_LastIndex_ReturnValue12, int32 CallFunc_Array_Length_ReturnValue12345, int32 CallFunc_Array_Length_ReturnValue123456, const class FString& CallFunc_BuildString_Int_ReturnValue12, int32 CallFunc_Array_LastIndex_ReturnValue123, int32 CallFunc_Array_Length_ReturnValue1234567, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_BuildString_Int_ReturnValue123, const class FString& CallFunc_Concat_StrStr_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue12, const class FString& CallFunc_Concat_StrStr_ReturnValue123, const class FString& CallFunc_Concat_StrStr_ReturnValue1234, const class FString& CallFunc_Concat_StrStr_ReturnValue12345, const class FString& CallFunc_Concat_StrStr_ReturnValue123456, const class FString& CallFunc_Concat_StrStr_ReturnValue1234567, const class FString& CallFunc_Concat_StrStr_ReturnValue12345678, const class FString& CallFunc_Concat_StrStr_ReturnValue123456789, const class FString& CallFunc_Concat_StrStr_ReturnValue12345678910, const class FString& CallFunc_Concat_StrStr_ReturnValue1234567891011, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable1, int32 Temp_int_Loop_Counter_Variable12, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue12, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue12, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, const struct FVector2D& CallFunc_Array_Get_Item1, bool CallFunc_EqualEqual_IntInt_ReturnValue1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class FText CallFunc_Conv_FloatToText_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue1, int32 Temp_int_Array_Index_Variable12, const class FString& CallFunc_Concat_StrStr_ReturnValue123456789101112, const struct FLinearColor& CallFunc_Array_Get_Item12, bool CallFunc_EqualEqual_IntInt_ReturnValue12, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, class FText CallFunc_Conv_FloatToText_ReturnValue12, class FText CallFunc_Conv_FloatToText_ReturnValue123, const class FString& CallFunc_Conv_TextToString_ReturnValue12, const class FString& CallFunc_Conv_TextToString_ReturnValue123, class FText CallFunc_Conv_FloatToText_ReturnValue1234, class FText CallFunc_Conv_FloatToText_ReturnValue12345, const class FString& CallFunc_Conv_TextToString_ReturnValue1234, const class FString& CallFunc_Conv_TextToString_ReturnValue12345, const class FString& CallFunc_Concat_StrStr_ReturnValue12345678910111213, int32 Temp_int_Loop_Counter_Variable123, const class FString& CallFunc_Concat_StrStr_ReturnValue1234567891011121314, const class FString& CallFunc_Concat_StrStr_ReturnValue123456789101112131415, bool CallFunc_Less_IntInt_ReturnValue123, const class FString& CallFunc_Concat_StrStr_ReturnValue12345678910111213141516, const class FString& CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617, int32 CallFunc_Add_IntInt_ReturnValue123, const class FString& CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718, const class FString& CallFunc_Concat_StrStr_ReturnValue12345678910111213141516171819, const class FString& CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617181920, int32 Temp_int_Array_Index_Variable123, const struct FVector& CallFunc_Array_Get_Item123, const class FString& CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718192021, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_EqualEqual_IntInt_ReturnValue123, class FText CallFunc_Conv_FloatToText_ReturnValue123456, class FText CallFunc_Conv_FloatToText_ReturnValue1234567, const class FString& CallFunc_Conv_TextToString_ReturnValue123456, const class FString& CallFunc_Conv_TextToString_ReturnValue1234567, class FText CallFunc_Conv_FloatToText_ReturnValue12345678, const class FString& CallFunc_Conv_TextToString_ReturnValue12345678, const class FString& CallFunc_Concat_StrStr_ReturnValue12345678910111213141516171819202122, const class FString& CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617181920212223, bool Temp_bool_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718192021222324, const class FString& CallFunc_Concat_StrStr_ReturnValue12345678910111213141516171819202122232425, bool Temp_bool_Variable1, const class FString& CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617181920212223242526, const class FString& CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718192021222324252627, bool Temp_bool_Variable12, const class FString& CallFunc_Concat_StrStr_ReturnValue12345678910111213141516171819202122232425262728, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617181920212223242526272829, const class FString& CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718192021222324252627282930, const class FString& CallFunc_Concat_StrStr_ReturnValue12345678910111213141516171819202122232425262728293031, const class FString& CallFunc_BuildString_Int_ReturnValue1234, const class FString& CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617181920212223242526272829303132, const class FString& CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718192021222324252627282930313233, const class FString& K2Node_Select1_Default, const class FString& CallFunc_BuildString_Int_ReturnValue12345, const class FString& K2Node_Select12_Default, bool Temp_bool_Variable123, const class FString& K2Node_Select123_Default)
{
	static auto Func = Class->GetFunction("RenderToTextureFunctionLibrary_C", "Array to HLSL Int Array");

	Params::URenderToTextureFunctionLibrary_C_Array_to_HLSL_Int_Array_Params Parms;
	Parms.Type = Type;
	Parms.Variable_Name = Variable_Name;
	Parms.Int = Int;
	Parms.Int2 = Int2;
	Parms.Int3 = Int3;
	Parms.Int4 = Int4;
	Parms.__WorldContext = __WorldContext;
	Parms.Curstring = Curstring;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Array_Length_ReturnValue12 = CallFunc_Array_Length_ReturnValue12;
	Parms.CallFunc_BuildString_Int_ReturnValue = CallFunc_BuildString_Int_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue1 = CallFunc_Array_LastIndex_ReturnValue1;
	Parms.CallFunc_Array_Length_ReturnValue123 = CallFunc_Array_Length_ReturnValue123;
	Parms.CallFunc_Array_Length_ReturnValue1234 = CallFunc_Array_Length_ReturnValue1234;
	Parms.CallFunc_BuildString_Int_ReturnValue1 = CallFunc_BuildString_Int_ReturnValue1;
	Parms.CallFunc_Array_LastIndex_ReturnValue12 = CallFunc_Array_LastIndex_ReturnValue12;
	Parms.CallFunc_Array_Length_ReturnValue12345 = CallFunc_Array_Length_ReturnValue12345;
	Parms.CallFunc_Array_Length_ReturnValue123456 = CallFunc_Array_Length_ReturnValue123456;
	Parms.CallFunc_BuildString_Int_ReturnValue12 = CallFunc_BuildString_Int_ReturnValue12;
	Parms.CallFunc_Array_LastIndex_ReturnValue123 = CallFunc_Array_LastIndex_ReturnValue123;
	Parms.CallFunc_Array_Length_ReturnValue1234567 = CallFunc_Array_Length_ReturnValue1234567;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_BuildString_Int_ReturnValue123 = CallFunc_BuildString_Int_ReturnValue123;
	Parms.CallFunc_Concat_StrStr_ReturnValue1 = CallFunc_Concat_StrStr_ReturnValue1;
	Parms.CallFunc_Concat_StrStr_ReturnValue12 = CallFunc_Concat_StrStr_ReturnValue12;
	Parms.CallFunc_Concat_StrStr_ReturnValue123 = CallFunc_Concat_StrStr_ReturnValue123;
	Parms.CallFunc_Concat_StrStr_ReturnValue1234 = CallFunc_Concat_StrStr_ReturnValue1234;
	Parms.CallFunc_Concat_StrStr_ReturnValue12345 = CallFunc_Concat_StrStr_ReturnValue12345;
	Parms.CallFunc_Concat_StrStr_ReturnValue123456 = CallFunc_Concat_StrStr_ReturnValue123456;
	Parms.CallFunc_Concat_StrStr_ReturnValue1234567 = CallFunc_Concat_StrStr_ReturnValue1234567;
	Parms.CallFunc_Concat_StrStr_ReturnValue12345678 = CallFunc_Concat_StrStr_ReturnValue12345678;
	Parms.CallFunc_Concat_StrStr_ReturnValue123456789 = CallFunc_Concat_StrStr_ReturnValue123456789;
	Parms.CallFunc_Concat_StrStr_ReturnValue12345678910 = CallFunc_Concat_StrStr_ReturnValue12345678910;
	Parms.CallFunc_Concat_StrStr_ReturnValue1234567891011 = CallFunc_Concat_StrStr_ReturnValue1234567891011;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.Temp_int_Loop_Counter_Variable12 = Temp_int_Loop_Counter_Variable12;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue12 = CallFunc_Less_IntInt_ReturnValue12;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue12 = CallFunc_Add_IntInt_ReturnValue12;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue1 = CallFunc_EqualEqual_IntInt_ReturnValue1;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue1 = CallFunc_Conv_FloatToText_ReturnValue1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue1 = CallFunc_Conv_TextToString_ReturnValue1;
	Parms.Temp_int_Array_Index_Variable12 = Temp_int_Array_Index_Variable12;
	Parms.CallFunc_Concat_StrStr_ReturnValue123456789101112 = CallFunc_Concat_StrStr_ReturnValue123456789101112;
	Parms.CallFunc_Array_Get_Item12 = CallFunc_Array_Get_Item12;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue12 = CallFunc_EqualEqual_IntInt_ReturnValue12;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_Conv_FloatToText_ReturnValue12 = CallFunc_Conv_FloatToText_ReturnValue12;
	Parms.CallFunc_Conv_FloatToText_ReturnValue123 = CallFunc_Conv_FloatToText_ReturnValue123;
	Parms.CallFunc_Conv_TextToString_ReturnValue12 = CallFunc_Conv_TextToString_ReturnValue12;
	Parms.CallFunc_Conv_TextToString_ReturnValue123 = CallFunc_Conv_TextToString_ReturnValue123;
	Parms.CallFunc_Conv_FloatToText_ReturnValue1234 = CallFunc_Conv_FloatToText_ReturnValue1234;
	Parms.CallFunc_Conv_FloatToText_ReturnValue12345 = CallFunc_Conv_FloatToText_ReturnValue12345;
	Parms.CallFunc_Conv_TextToString_ReturnValue1234 = CallFunc_Conv_TextToString_ReturnValue1234;
	Parms.CallFunc_Conv_TextToString_ReturnValue12345 = CallFunc_Conv_TextToString_ReturnValue12345;
	Parms.CallFunc_Concat_StrStr_ReturnValue12345678910111213 = CallFunc_Concat_StrStr_ReturnValue12345678910111213;
	Parms.Temp_int_Loop_Counter_Variable123 = Temp_int_Loop_Counter_Variable123;
	Parms.CallFunc_Concat_StrStr_ReturnValue1234567891011121314 = CallFunc_Concat_StrStr_ReturnValue1234567891011121314;
	Parms.CallFunc_Concat_StrStr_ReturnValue123456789101112131415 = CallFunc_Concat_StrStr_ReturnValue123456789101112131415;
	Parms.CallFunc_Less_IntInt_ReturnValue123 = CallFunc_Less_IntInt_ReturnValue123;
	Parms.CallFunc_Concat_StrStr_ReturnValue12345678910111213141516 = CallFunc_Concat_StrStr_ReturnValue12345678910111213141516;
	Parms.CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617 = CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617;
	Parms.CallFunc_Add_IntInt_ReturnValue123 = CallFunc_Add_IntInt_ReturnValue123;
	Parms.CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718 = CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718;
	Parms.CallFunc_Concat_StrStr_ReturnValue12345678910111213141516171819 = CallFunc_Concat_StrStr_ReturnValue12345678910111213141516171819;
	Parms.CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617181920 = CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617181920;
	Parms.Temp_int_Array_Index_Variable123 = Temp_int_Array_Index_Variable123;
	Parms.CallFunc_Array_Get_Item123 = CallFunc_Array_Get_Item123;
	Parms.CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718192021 = CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718192021;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue123 = CallFunc_EqualEqual_IntInt_ReturnValue123;
	Parms.CallFunc_Conv_FloatToText_ReturnValue123456 = CallFunc_Conv_FloatToText_ReturnValue123456;
	Parms.CallFunc_Conv_FloatToText_ReturnValue1234567 = CallFunc_Conv_FloatToText_ReturnValue1234567;
	Parms.CallFunc_Conv_TextToString_ReturnValue123456 = CallFunc_Conv_TextToString_ReturnValue123456;
	Parms.CallFunc_Conv_TextToString_ReturnValue1234567 = CallFunc_Conv_TextToString_ReturnValue1234567;
	Parms.CallFunc_Conv_FloatToText_ReturnValue12345678 = CallFunc_Conv_FloatToText_ReturnValue12345678;
	Parms.CallFunc_Conv_TextToString_ReturnValue12345678 = CallFunc_Conv_TextToString_ReturnValue12345678;
	Parms.CallFunc_Concat_StrStr_ReturnValue12345678910111213141516171819202122 = CallFunc_Concat_StrStr_ReturnValue12345678910111213141516171819202122;
	Parms.CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617181920212223 = CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617181920212223;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718192021222324 = CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718192021222324;
	Parms.CallFunc_Concat_StrStr_ReturnValue12345678910111213141516171819202122232425 = CallFunc_Concat_StrStr_ReturnValue12345678910111213141516171819202122232425;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617181920212223242526 = CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617181920212223242526;
	Parms.CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718192021222324252627 = CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718192021222324252627;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.CallFunc_Concat_StrStr_ReturnValue12345678910111213141516171819202122232425262728 = CallFunc_Concat_StrStr_ReturnValue12345678910111213141516171819202122232425262728;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617181920212223242526272829 = CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617181920212223242526272829;
	Parms.CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718192021222324252627282930 = CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718192021222324252627282930;
	Parms.CallFunc_Concat_StrStr_ReturnValue12345678910111213141516171819202122232425262728293031 = CallFunc_Concat_StrStr_ReturnValue12345678910111213141516171819202122232425262728293031;
	Parms.CallFunc_BuildString_Int_ReturnValue1234 = CallFunc_BuildString_Int_ReturnValue1234;
	Parms.CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617181920212223242526272829303132 = CallFunc_Concat_StrStr_ReturnValue1234567891011121314151617181920212223242526272829303132;
	Parms.CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718192021222324252627282930313233 = CallFunc_Concat_StrStr_ReturnValue123456789101112131415161718192021222324252627282930313233;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_BuildString_Int_ReturnValue12345 = CallFunc_BuildString_Int_ReturnValue12345;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.Temp_bool_Variable123 = Temp_bool_Variable123;
	Parms.K2Node_Select123_Default = K2Node_Select123_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (String != nullptr)
		*String = Parms.String;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
