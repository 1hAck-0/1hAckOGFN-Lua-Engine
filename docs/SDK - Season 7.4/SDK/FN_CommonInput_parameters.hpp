#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys
struct UCommonInputSubsystem_ShouldShowInputKeys_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonInput.CommonInputSubsystem.SetGamepadInputType
struct UCommonInputSubsystem_SetGamepadInputType_Params
{
	ECommonGamepadType                                 InGamepadInputType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonInput.CommonInputSubsystem.SetCurrentInputType
struct UCommonInputSubsystem_SetCurrentInputType_Params
{
	ECommonInputType                                   NewInputType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonInput.CommonInputSubsystem.IsUsingPointerInput
struct UCommonInputSubsystem_IsUsingPointerInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction CommonInput.CommonInputSubsystem.InputMethodChangedDelegate__DelegateSignature
struct UCommonInputSubsystem_InputMethodChangedDelegate__DelegateSignature_Params
{
	ECommonInputType                                   bNewInputType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonInput.CommonInputSubsystem.GetDefaultInputType
struct UCommonInputSubsystem_GetDefaultInputType_Params
{
	ECommonInputType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonInput.CommonInputSubsystem.GetCurrentInputType
struct UCommonInputSubsystem_GetCurrentInputType_Params
{
	ECommonInputType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonInput.CommonInputSubsystem.GetCurrentGamepadType
struct UCommonInputSubsystem_GetCurrentGamepadType_Params
{
	ECommonGamepadType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
