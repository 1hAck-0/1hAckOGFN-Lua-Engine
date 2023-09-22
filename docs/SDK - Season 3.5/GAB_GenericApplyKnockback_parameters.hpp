#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x63 (0x63 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.DoesUseInstagorInsteadOfImpulseDirection
struct UGAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection_Params
{
public:
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               OptionalObject;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Value;                                             // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CF9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          GT_IgnoreImpulseDirection;                         // 0x28(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CFA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameplayEffect*                       K2Node_DynamicCast_AsGameplay_Effect;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CFB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_EffectContextGetSourceObject_ReturnValue; // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UInterfaceProperty_                          K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface; // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.GetPawnFromInstigator
struct UGAB_GenericApplyKnockback_C_GetPawnFromInstigator_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       OutPawn;                                           // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerStateZone*                  K2Node_DynamicCast_AsFort_Player_State_Zone;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CFC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       CallFunc_GetCurrentPawn_ReturnValue;               // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA9 (0xA9 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.CalculateImpulseDirection
struct UGAB_GenericApplyKnockback_C_CalculateImpulseDirection_Params
{
public:
	class AFortPlayerPawn*                       InPawn;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ReturnValue;                                       // 0x8(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CFD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x20(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x2C(0xC)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CFE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x3C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue1;           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x50(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue1;         // 0x5C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x74(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x80(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x8C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Normal_ReturnValue1;                      // 0x98(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize_ReturnValue;                        // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_D744890E4C485F1C80B3E7864AE506FF
struct UGAB_GenericApplyKnockback_C_OnCancelled_D744890E4C485F1C80B3E7864AE506FF_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_D744890E4C485F1C80B3E7864AE506FF
struct UGAB_GenericApplyKnockback_C_OnInterrupted_D744890E4C485F1C80B3E7864AE506FF_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_D744890E4C485F1C80B3E7864AE506FF
struct UGAB_GenericApplyKnockback_C_OnBlendOut_D744890E4C485F1C80B3E7864AE506FF_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_D744890E4C485F1C80B3E7864AE506FF
struct UGAB_GenericApplyKnockback_C_OnCompleted_D744890E4C485F1C80B3E7864AE506FF_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_1F181048470CEB2EB6CC648039C5913C
struct UGAB_GenericApplyKnockback_C_OnCancelled_1F181048470CEB2EB6CC648039C5913C_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_1F181048470CEB2EB6CC648039C5913C
struct UGAB_GenericApplyKnockback_C_OnInterrupted_1F181048470CEB2EB6CC648039C5913C_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_1F181048470CEB2EB6CC648039C5913C
struct UGAB_GenericApplyKnockback_C_OnBlendOut_1F181048470CEB2EB6CC648039C5913C_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_1F181048470CEB2EB6CC648039C5913C
struct UGAB_GenericApplyKnockback_C_OnCompleted_1F181048470CEB2EB6CC648039C5913C_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_BA9188C34C234A4C47306FA73AAF0583
struct UGAB_GenericApplyKnockback_C_OnCancelled_BA9188C34C234A4C47306FA73AAF0583_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_BA9188C34C234A4C47306FA73AAF0583
struct UGAB_GenericApplyKnockback_C_OnInterrupted_BA9188C34C234A4C47306FA73AAF0583_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_BA9188C34C234A4C47306FA73AAF0583
struct UGAB_GenericApplyKnockback_C_OnBlendOut_BA9188C34C234A4C47306FA73AAF0583_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_BA9188C34C234A4C47306FA73AAF0583
struct UGAB_GenericApplyKnockback_C_OnCompleted_BA9188C34C234A4C47306FA73AAF0583_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0
struct UGAB_GenericApplyKnockback_C_OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0
struct UGAB_GenericApplyKnockback_C_OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0
struct UGAB_GenericApplyKnockback_C_OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0
struct UGAB_GenericApplyKnockback_C_OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF
struct UGAB_GenericApplyKnockback_C_OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF
struct UGAB_GenericApplyKnockback_C_OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF
struct UGAB_GenericApplyKnockback_C_OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF
struct UGAB_GenericApplyKnockback_C_OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnReachedJumpApex
struct UGAB_GenericApplyKnockback_C_OnReachedJumpApex_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.SetupMontageSectionsAndOrientDirection
struct UGAB_GenericApplyKnockback_C_SetupMontageSectionsAndOrientDirection_Params
{
public:
};

// 0x88 (0x88 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnPawnLanded
struct UGAB_GenericApplyKnockback_C_OnPawnLanded_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0xA8 (0xA8 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnHitPawn
struct UGAB_GenericApplyKnockback_C_OnHitPawn_Params
{
public:
	class AActor*                                SelfActor;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               NormalImpulse;                                     // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CFF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            Hit;                                               // 0x20(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0xA8 (0xA8 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.K2_ActivateAbilityFromEvent
struct UGAB_GenericApplyKnockback_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.K2_OnEndAbility
struct UGAB_GenericApplyKnockback_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.DebugLine
struct UGAB_GenericApplyKnockback_C_DebugLine_Params
{
public:
};

// 0x580 (0x580 - 0x0)
// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.ExecuteUbergraph_GAB_GenericApplyKnockback
struct UGAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D00[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x28(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123;           // 0x38(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234;          // 0x48(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345;         // 0x58(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456;        // 0x68(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567;       // 0x78(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678;      // 0x88(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456789;     // 0x98(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678910;   // 0xA8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567891011; // 0xB8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D01[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456789101112; // 0xD0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue12;                    // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D02[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue;            // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue1;           // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xF8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D03[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue12;          // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678910111213; // 0x110(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsFalling_ReturnValue;                    // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D04[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue123;         // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue1234;        // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue12345;       // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x148(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x154(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue123;                   // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D05[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue1; // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue12; // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1234;                  // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue12345;                 // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D06[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakVector_X;                            // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567891011121314; // 0x188(0x10)(ZeroConstructor, NoDestructor)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x198(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x1A4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue1;        // 0x1B0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D07[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            K2Node_CustomEvent_Hit1;                           // 0x1C0(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                K2Node_CustomEvent_SelfActor;                      // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_OtherActor;                     // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_NormalImpulse;                  // 0x258(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D08[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            K2Node_CustomEvent_Hit;                            // 0x268(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromHitResult_ReturnValue; // 0x2F0(0x20)()
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x310(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x318(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue123456;                // 0x324(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D09[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_VSize_ReturnValue;                        // 0x328(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D0A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue123456;      // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue1234567;     // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UInterfaceProperty_                          CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x340(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D0B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue12345678;    // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilitySystemComponent*           CallFunc_GetActivatingAbilityComponent_ReturnValue; // 0x360(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveActiveGameplayEffect_ReturnValue;   // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D0C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456789101112131415; // 0x370(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678910111213141516; // 0x380(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567891011121314151617; // 0x390(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456789101112131415161718; // 0x3A0(0x10)(ZeroConstructor, NoDestructor)
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue123456789;   // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0x3BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D0D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x3BC(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D0E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue12345678910; // 0x3C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819; // 0x3D0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234567891011121314151617181920; // 0x3E0(0x10)(ZeroConstructor, NoDestructor)
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue123; // 0x3F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1234567;               // 0x3F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue12345678;              // 0x3F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D0F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue1234; // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilitySystemComponent*           CallFunc_GetActivatingAbilityComponent_ReturnValue1; // 0x408(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue123456789;             // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D10[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1; // 0x414(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue1234567891011; // 0x420(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum1_CmpSuccess;                     // 0x428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue12;                // 0x429(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x42A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue1;                    // 0x42B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue12; // 0x42C(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D12[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123456789101112131415161718192021; // 0x438(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12345678910111213141516171819202122; // 0x448(0x10)(ZeroConstructor, NoDestructor)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue123; // 0x458(0x8)(NoDestructor, HasGetValueTypeHash)
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x460(0x10)(ZeroConstructor, ReferenceParm)
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x470(0xA8)(ConstParm)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DoesUseInstagorInsteadOfImpulseDirection_Value; // 0x519(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D13[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetImpulseData_ImpulseDirection;          // 0x51C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetImpulseData_KnockbackMagnitude;        // 0x528(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetImpulseData_KnockbackZAngle;           // 0x52C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x530(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue1;                 // 0x534(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetPawnFromInstigator_OutPawn;            // 0x538(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_CalculateImpulseDirection_ReturnValue;    // 0x540(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D14[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAbilitySystemComponent*           CallFunc_GetActivatingAbilityComponent_ReturnValue12; // 0x550(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x558(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveActiveGameplayEffect_ReturnValue1;  // 0x559(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D15[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue123456789101112; // 0x560(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue1;         // 0x568(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D16[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x578(0x8)(NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
