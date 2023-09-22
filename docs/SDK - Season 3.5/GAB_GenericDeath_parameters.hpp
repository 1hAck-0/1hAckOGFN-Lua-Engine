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

// 0x78 (0x78 - 0x0)
// Function GAB_GenericDeath.GAB_GenericDeath_C.GetRandomSectionName
struct UGAB_GenericDeath_C_GetRandomSectionName_Params
{
public:
	int32                                        MaxNumberOfSections;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D31[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  OriginalSectionName;                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SectionName;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomInteger_ReturnValue;                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D32[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue1;               // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_MakeLiteralString_ReturnValue;            // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x154 (0x154 - 0x0)
// Function GAB_GenericDeath.GAB_GenericDeath_C.InitializeDeathHitDirection
struct UGAB_GenericDeath_C_InitializeDeathHitDirection_Params
{
public:
	struct FGameplayEventData                    EventHitData;                                      // 0x0(0xA8)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                               CallFunc_GetImpulseData_ImpulseDirection;          // 0xA8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetImpulseData_KnockbackMagnitude;        // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetImpulseData_KnockbackZAngle;           // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D33[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_EffectContextGetHitResult_ReturnValue;    // 0xC0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x148(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericDeath.GAB_GenericDeath_C.OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4
struct UGAB_GenericDeath_C_OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericDeath.GAB_GenericDeath_C.OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4
struct UGAB_GenericDeath_C_OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericDeath.GAB_GenericDeath_C.OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4
struct UGAB_GenericDeath_C_OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericDeath.GAB_GenericDeath_C.OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4
struct UGAB_GenericDeath_C_OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GAB_GenericDeath.GAB_GenericDeath_C.K2_OnEndAbility
struct UGAB_GenericDeath_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericDeath.GAB_GenericDeath_C.PickDeathMontageSection
struct UGAB_GenericDeath_C_PickDeathMontageSection_Params
{
public:
};

// 0xA8 (0xA8 - 0x0)
// Function GAB_GenericDeath.GAB_GenericDeath_C.K2_ActivateAbilityFromEvent
struct UGAB_GenericDeath_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x2B8 (0x2B8 - 0x0)
// Function GAB_GenericDeath.GAB_GenericDeath_C.ExecuteUbergraph_GAB_GenericDeath
struct UGAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D34[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D35[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue1;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                K2Node_MakeStruct_GameplayCueParameters;           // 0x30(0xB8)(ContainsInstancedReference)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D36[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D37[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x100(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UInterfaceProperty_                          CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x138(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D38[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_VictoryDrone_C*                    CallFunc_FinishSpawningActor_ReturnValue;          // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x15A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue1;         // 0x15B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue12;        // 0x15C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue123;       // 0x15D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D39[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x160(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  CallFunc_GetRandomSectionName_SectionName;         // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetRandomSectionName_SectionName1;        // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetRandomSectionName_SectionName12;       // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetRandomSectionName_SectionName123;      // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue1234;      // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue12345;     // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue123456;    // 0x192(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue1234567;   // 0x193(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D3A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D3B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetRandomSectionName_SectionName1234;     // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetRandomSectionName_SectionName12345;    // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetRandomSectionName_SectionName123456;   // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetRandomSectionName_SectionName1234567;  // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x1C8(0x10)(ZeroConstructor, NoDestructor)
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue12;          // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn;                  // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortDamageZone                   CallFunc_GetDamageZone_ReturnValue;                // 0x1E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1EA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D3C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x1F0(0xA8)(ConstParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123;           // 0x298(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  CallFunc_SetFNameBasedOnHitDirection_NameResult;   // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_SetFNameBasedOnHitDirection_NameResult1;  // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
