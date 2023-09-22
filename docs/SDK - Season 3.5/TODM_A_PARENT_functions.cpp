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


// Function TODM_A_PARENT.TODM_A_PARENT_C.EmptyTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

void ATODM_A_PARENT_C::EmptyTransform(struct FTransform* Transform, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static auto Func = Class->GetFunction("TODM_A_PARENT_C", "EmptyTransform");

	Params::ATODM_A_PARENT_C_EmptyTransform_Params Parms;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = Parms.Transform;

}


// Function TODM_A_PARENT.TODM_A_PARENT_C.SetHeavySSAO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetNumericCVar_OutValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNumericCVar_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATODM_A_PARENT_C::SetHeavySSAO(float CallFunc_GetNumericCVar_OutValue, bool CallFunc_GetNumericCVar_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("TODM_A_PARENT_C", "SetHeavySSAO");

	Params::ATODM_A_PARENT_C_SetHeavySSAO_Params Parms;
	Parms.CallFunc_GetNumericCVar_OutValue = CallFunc_GetNumericCVar_OutValue;
	Parms.CallFunc_GetNumericCVar_ReturnValue = CallFunc_GetNumericCVar_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_A_PARENT.TODM_A_PARENT_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue1                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue12                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue123                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue123                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue12                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue123                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue1234                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1234                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue12345                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue12345                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue1234                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue12345                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue123456                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue123456                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue1234567                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1234567                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue123456                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue1234567                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATODM_A_PARENT_C::UserConstructionScript(float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue1, float CallFunc_FClamp_ReturnValue12, float CallFunc_Add_FloatFloat_ReturnValue12, float CallFunc_FClamp_ReturnValue123, float CallFunc_Add_FloatFloat_ReturnValue123, const struct FLinearColor& CallFunc_MakeColor_ReturnValue12, const struct FLinearColor& CallFunc_MakeColor_ReturnValue123, float CallFunc_FClamp_ReturnValue1234, float CallFunc_Add_FloatFloat_ReturnValue1234, float CallFunc_FClamp_ReturnValue12345, float CallFunc_Add_FloatFloat_ReturnValue12345, const struct FLinearColor& CallFunc_MakeColor_ReturnValue1234, const struct FLinearColor& CallFunc_MakeColor_ReturnValue12345, float CallFunc_FClamp_ReturnValue123456, float CallFunc_Add_FloatFloat_ReturnValue123456, float CallFunc_FClamp_ReturnValue1234567, float CallFunc_Add_FloatFloat_ReturnValue1234567, const struct FLinearColor& CallFunc_MakeColor_ReturnValue123456, const struct FLinearColor& CallFunc_MakeColor_ReturnValue1234567)
{
	static auto Func = Class->GetFunction("TODM_A_PARENT_C", "UserConstructionScript");

	Params::ATODM_A_PARENT_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue1 = CallFunc_FClamp_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_MakeColor_ReturnValue1 = CallFunc_MakeColor_ReturnValue1;
	Parms.CallFunc_FClamp_ReturnValue12 = CallFunc_FClamp_ReturnValue12;
	Parms.CallFunc_Add_FloatFloat_ReturnValue12 = CallFunc_Add_FloatFloat_ReturnValue12;
	Parms.CallFunc_FClamp_ReturnValue123 = CallFunc_FClamp_ReturnValue123;
	Parms.CallFunc_Add_FloatFloat_ReturnValue123 = CallFunc_Add_FloatFloat_ReturnValue123;
	Parms.CallFunc_MakeColor_ReturnValue12 = CallFunc_MakeColor_ReturnValue12;
	Parms.CallFunc_MakeColor_ReturnValue123 = CallFunc_MakeColor_ReturnValue123;
	Parms.CallFunc_FClamp_ReturnValue1234 = CallFunc_FClamp_ReturnValue1234;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1234 = CallFunc_Add_FloatFloat_ReturnValue1234;
	Parms.CallFunc_FClamp_ReturnValue12345 = CallFunc_FClamp_ReturnValue12345;
	Parms.CallFunc_Add_FloatFloat_ReturnValue12345 = CallFunc_Add_FloatFloat_ReturnValue12345;
	Parms.CallFunc_MakeColor_ReturnValue1234 = CallFunc_MakeColor_ReturnValue1234;
	Parms.CallFunc_MakeColor_ReturnValue12345 = CallFunc_MakeColor_ReturnValue12345;
	Parms.CallFunc_FClamp_ReturnValue123456 = CallFunc_FClamp_ReturnValue123456;
	Parms.CallFunc_Add_FloatFloat_ReturnValue123456 = CallFunc_Add_FloatFloat_ReturnValue123456;
	Parms.CallFunc_FClamp_ReturnValue1234567 = CallFunc_FClamp_ReturnValue1234567;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1234567 = CallFunc_Add_FloatFloat_ReturnValue1234567;
	Parms.CallFunc_MakeColor_ReturnValue123456 = CallFunc_MakeColor_ReturnValue123456;
	Parms.CallFunc_MakeColor_ReturnValue1234567 = CallFunc_MakeColor_ReturnValue1234567;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_A_PARENT.TODM_A_PARENT_C.FlashLightning__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATODM_A_PARENT_C::FlashLightning__FinishedFunc()
{
	static auto Func = Class->GetFunction("TODM_A_PARENT_C", "FlashLightning__FinishedFunc");

	Params::ATODM_A_PARENT_C_FlashLightning__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_A_PARENT.TODM_A_PARENT_C.FlashLightning__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATODM_A_PARENT_C::FlashLightning__UpdateFunc()
{
	static auto Func = Class->GetFunction("TODM_A_PARENT_C", "FlashLightning__UpdateFunc");

	Params::ATODM_A_PARENT_C_FlashLightning__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_A_PARENT.TODM_A_PARENT_C.New Storm Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATODM_A_PARENT_C::New_Storm_Timeline__FinishedFunc()
{
	static auto Func = Class->GetFunction("TODM_A_PARENT_C", "New Storm Timeline__FinishedFunc");

	Params::ATODM_A_PARENT_C_New_Storm_Timeline__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_A_PARENT.TODM_A_PARENT_C.New Storm Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATODM_A_PARENT_C::New_Storm_Timeline__UpdateFunc()
{
	static auto Func = Class->GetFunction("TODM_A_PARENT_C", "New Storm Timeline__UpdateFunc");

	Params::ATODM_A_PARENT_C_New_Storm_Timeline__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_A_PARENT.TODM_A_PARENT_C.New Storm Timeline__FireOffRain__EventFunc
// (BlueprintEvent)
// Parameters:

void ATODM_A_PARENT_C::New_Storm_Timeline__FireOffRain__EventFunc()
{
	static auto Func = Class->GetFunction("TODM_A_PARENT_C", "New Storm Timeline__FireOffRain__EventFunc");

	Params::ATODM_A_PARENT_C_New_Storm_Timeline__FireOffRain__EventFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_A_PARENT.TODM_A_PARENT_C.StartStorm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATODM_A_PARENT_C::StartStorm()
{
	static auto Func = Class->GetFunction("TODM_A_PARENT_C", "StartStorm");

	Params::ATODM_A_PARENT_C_StartStorm_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_A_PARENT.TODM_A_PARENT_C.OnStormStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ATODM_A_PARENT_C::OnStormStart()
{
	static auto Func = Class->GetFunction("TODM_A_PARENT_C", "OnStormStart");

	Params::ATODM_A_PARENT_C_OnStormStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_A_PARENT.TODM_A_PARENT_C.OnStormEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ATODM_A_PARENT_C::OnStormEnd()
{
	static auto Func = Class->GetFunction("TODM_A_PARENT_C", "OnStormEnd");

	Params::ATODM_A_PARENT_C_OnStormEnd_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_A_PARENT.TODM_A_PARENT_C.LightningStrike
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATODM_A_PARENT_C::LightningStrike()
{
	static auto Func = Class->GetFunction("TODM_A_PARENT_C", "LightningStrike");

	Params::ATODM_A_PARENT_C_LightningStrike_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_A_PARENT.TODM_A_PARENT_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATODM_A_PARENT_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("TODM_A_PARENT_C", "ReceiveBeginPlay");

	Params::ATODM_A_PARENT_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_A_PARENT.TODM_A_PARENT_C.DisableLightAndFog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATODM_A_PARENT_C::DisableLightAndFog(bool Enable)
{
	static auto Func = Class->GetFunction("TODM_A_PARENT_C", "DisableLightAndFog");

	Params::ATODM_A_PARENT_C_DisableLightAndFog_Params Parms;
	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_A_PARENT.TODM_A_PARENT_C.EnableHDRRendering
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATODM_A_PARENT_C::EnableHDRRendering()
{
	static auto Func = Class->GetFunction("TODM_A_PARENT_C", "EnableHDRRendering");

	Params::ATODM_A_PARENT_C_EnableHDRRendering_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_A_PARENT.TODM_A_PARENT_C.UpdateSSAO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATODM_A_PARENT_C::UpdateSSAO()
{
	static auto Func = Class->GetFunction("TODM_A_PARENT_C", "UpdateSSAO");

	Params::ATODM_A_PARENT_C_UpdateSSAO_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TODM_A_PARENT.TODM_A_PARENT_C.ExecuteUbergraph_TODM_A_PARENT
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// float                              CallFunc_Square_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStormStrength_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLightColor_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enable                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue123                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1234                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue12345                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue123456                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1234567                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue12345678                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue123456789                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue123                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1234                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue12345                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue123456                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1234567                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue1                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue12                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue12                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue12345678                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue123                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue123456789                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue123                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue1234                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue1234                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue12345678910                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue12345                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1234567891011                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue12345                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue123456                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue123456                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue123456789101112               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue1234567                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue12345678910111213             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue1234567                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue12345678910              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Athena_Event_Components_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_EmptyTransform_Transform                                (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Athena_Event_Components_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATODM_A_PARENT_C::ExecuteUbergraph_TODM_A_PARENT(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float CallFunc_Square_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_FFloor_ReturnValue, float CallFunc_GetStormStrength_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, const struct FLinearColor& CallFunc_GetLightColor_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, bool K2Node_CustomEvent_Enable, float CallFunc_Multiply_FloatFloat_ReturnValue12, bool CallFunc_Not_PreBool_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue123, float CallFunc_Multiply_FloatFloat_ReturnValue1234, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue12345, float CallFunc_BreakColor_R1, float CallFunc_BreakColor_G1, float CallFunc_BreakColor_B1, float CallFunc_BreakColor_A1, float CallFunc_Multiply_FloatFloat_ReturnValue123456, float CallFunc_Multiply_FloatFloat_ReturnValue1234567, float CallFunc_Add_FloatFloat_ReturnValue12, float CallFunc_Multiply_FloatFloat_ReturnValue12345678, float CallFunc_Multiply_FloatFloat_ReturnValue123456789, float CallFunc_Add_FloatFloat_ReturnValue123, float CallFunc_Add_FloatFloat_ReturnValue1234, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue12345, float CallFunc_Divide_FloatFloat_ReturnValue1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue123456, float CallFunc_FClamp_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue1234567, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue12, float CallFunc_FClamp_ReturnValue12, float CallFunc_Add_FloatFloat_ReturnValue12345678, float CallFunc_FClamp_ReturnValue123, float CallFunc_Add_FloatFloat_ReturnValue123456789, const struct FLinearColor& CallFunc_MakeColor_ReturnValue123, const struct FLinearColor& CallFunc_MakeColor_ReturnValue1234, float CallFunc_FClamp_ReturnValue1234, float CallFunc_Add_FloatFloat_ReturnValue12345678910, float CallFunc_FClamp_ReturnValue12345, float CallFunc_Add_FloatFloat_ReturnValue1234567891011, const struct FLinearColor& CallFunc_MakeColor_ReturnValue12345, const struct FLinearColor& CallFunc_MakeColor_ReturnValue123456, float CallFunc_FClamp_ReturnValue123456, float CallFunc_Add_FloatFloat_ReturnValue123456789101112, float CallFunc_FClamp_ReturnValue1234567, float CallFunc_Add_FloatFloat_ReturnValue12345678910111213, const struct FLinearColor& CallFunc_MakeColor_ReturnValue1234567, float CallFunc_Multiply_FloatFloat_ReturnValue12345678910, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue1, TArray<class ABP_Athena_Event_Components_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FTransform& CallFunc_EmptyTransform_Transform, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Athena_Event_Components_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static auto Func = Class->GetFunction("TODM_A_PARENT_C", "ExecuteUbergraph_TODM_A_PARENT");

	Params::ATODM_A_PARENT_C_ExecuteUbergraph_TODM_A_PARENT_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_Square_ReturnValue = CallFunc_Square_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_GetStormStrength_ReturnValue = CallFunc_GetStormStrength_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_GetLightColor_ReturnValue = CallFunc_GetLightColor_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.K2Node_CustomEvent_Enable = K2Node_CustomEvent_Enable;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue12 = CallFunc_Multiply_FloatFloat_ReturnValue12;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue123 = CallFunc_Multiply_FloatFloat_ReturnValue123;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1234 = CallFunc_Multiply_FloatFloat_ReturnValue1234;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue1 = CallFunc_RandomFloatInRange_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue12345 = CallFunc_Multiply_FloatFloat_ReturnValue12345;
	Parms.CallFunc_BreakColor_R1 = CallFunc_BreakColor_R1;
	Parms.CallFunc_BreakColor_G1 = CallFunc_BreakColor_G1;
	Parms.CallFunc_BreakColor_B1 = CallFunc_BreakColor_B1;
	Parms.CallFunc_BreakColor_A1 = CallFunc_BreakColor_A1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue123456 = CallFunc_Multiply_FloatFloat_ReturnValue123456;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1234567 = CallFunc_Multiply_FloatFloat_ReturnValue1234567;
	Parms.CallFunc_Add_FloatFloat_ReturnValue12 = CallFunc_Add_FloatFloat_ReturnValue12;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue12345678 = CallFunc_Multiply_FloatFloat_ReturnValue12345678;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue123456789 = CallFunc_Multiply_FloatFloat_ReturnValue123456789;
	Parms.CallFunc_Add_FloatFloat_ReturnValue123 = CallFunc_Add_FloatFloat_ReturnValue123;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1234 = CallFunc_Add_FloatFloat_ReturnValue1234;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue12345 = CallFunc_Add_FloatFloat_ReturnValue12345;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue1 = CallFunc_Divide_FloatFloat_ReturnValue1;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue123456 = CallFunc_Add_FloatFloat_ReturnValue123456;
	Parms.CallFunc_FClamp_ReturnValue1 = CallFunc_FClamp_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1234567 = CallFunc_Add_FloatFloat_ReturnValue1234567;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeColor_ReturnValue1 = CallFunc_MakeColor_ReturnValue1;
	Parms.CallFunc_MakeColor_ReturnValue12 = CallFunc_MakeColor_ReturnValue12;
	Parms.CallFunc_FClamp_ReturnValue12 = CallFunc_FClamp_ReturnValue12;
	Parms.CallFunc_Add_FloatFloat_ReturnValue12345678 = CallFunc_Add_FloatFloat_ReturnValue12345678;
	Parms.CallFunc_FClamp_ReturnValue123 = CallFunc_FClamp_ReturnValue123;
	Parms.CallFunc_Add_FloatFloat_ReturnValue123456789 = CallFunc_Add_FloatFloat_ReturnValue123456789;
	Parms.CallFunc_MakeColor_ReturnValue123 = CallFunc_MakeColor_ReturnValue123;
	Parms.CallFunc_MakeColor_ReturnValue1234 = CallFunc_MakeColor_ReturnValue1234;
	Parms.CallFunc_FClamp_ReturnValue1234 = CallFunc_FClamp_ReturnValue1234;
	Parms.CallFunc_Add_FloatFloat_ReturnValue12345678910 = CallFunc_Add_FloatFloat_ReturnValue12345678910;
	Parms.CallFunc_FClamp_ReturnValue12345 = CallFunc_FClamp_ReturnValue12345;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1234567891011 = CallFunc_Add_FloatFloat_ReturnValue1234567891011;
	Parms.CallFunc_MakeColor_ReturnValue12345 = CallFunc_MakeColor_ReturnValue12345;
	Parms.CallFunc_MakeColor_ReturnValue123456 = CallFunc_MakeColor_ReturnValue123456;
	Parms.CallFunc_FClamp_ReturnValue123456 = CallFunc_FClamp_ReturnValue123456;
	Parms.CallFunc_Add_FloatFloat_ReturnValue123456789101112 = CallFunc_Add_FloatFloat_ReturnValue123456789101112;
	Parms.CallFunc_FClamp_ReturnValue1234567 = CallFunc_FClamp_ReturnValue1234567;
	Parms.CallFunc_Add_FloatFloat_ReturnValue12345678910111213 = CallFunc_Add_FloatFloat_ReturnValue12345678910111213;
	Parms.CallFunc_MakeColor_ReturnValue1234567 = CallFunc_MakeColor_ReturnValue1234567;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue12345678910 = CallFunc_Multiply_FloatFloat_ReturnValue12345678910;
	Parms.CallFunc_GetGameUserSettings_ReturnValue1 = CallFunc_GetGameUserSettings_ReturnValue1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EmptyTransform_Transform = CallFunc_EmptyTransform_Transform;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
