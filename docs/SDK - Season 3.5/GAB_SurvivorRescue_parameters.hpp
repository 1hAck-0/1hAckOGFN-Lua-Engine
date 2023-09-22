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

// 0x28 (0x28 - 0x0)
// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.Completed_8BD132F745BDCD15EBF232861F392E7B
struct UGAB_SurvivorRescue_C_Completed_8BD132F745BDCD15EBF232861F392E7B_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.Cancelled_8BD132F745BDCD15EBF232861F392E7B
struct UGAB_SurvivorRescue_C_Cancelled_8BD132F745BDCD15EBF232861F392E7B_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.Triggered_8BD132F745BDCD15EBF232861F392E7B
struct UGAB_SurvivorRescue_C_Triggered_8BD132F745BDCD15EBF232861F392E7B_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.EventReceived_AE3E49574CEC70DFC62B01973CCF7515
struct UGAB_SurvivorRescue_C_EventReceived_AE3E49574CEC70DFC62B01973CCF7515_Params
{
public:
	struct FGameplayEventData                    Payload;                                           // 0x0(0xA8)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xA8 (0xA8 - 0x0)
// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.K2_ActivateAbilityFromEvent
struct UGAB_SurvivorRescue_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.SpawnVictoryDrone
struct UGAB_SurvivorRescue_C_SpawnVictoryDrone_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.RescueComplete
struct UGAB_SurvivorRescue_C_RescueComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.PlayRescueAnimation
struct UGAB_SurvivorRescue_C_PlayRescueAnimation_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.K2_OnEndAbility
struct UGAB_SurvivorRescue_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.WaitForFinishRescueEvent
struct UGAB_SurvivorRescue_C_WaitForFinishRescueEvent_Params
{
public:
};

// 0x438 (0x438 - 0x0)
// Function GAB_SurvivorRescue.GAB_SurvivorRescue_C.ExecuteUbergraph_GAB_SurvivorRescue
struct UGAB_SurvivorRescue_C_ExecuteUbergraph_GAB_SurvivorRescue_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivor_C*                           K2Node_DynamicCast_AsSurvivor;                     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData12;                   // 0x30(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag12;               // 0x50(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData1;                    // 0x58(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag1;                // 0x78(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x80(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData;                     // 0x90(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag;                 // 0xB0(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0xB8(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                          Temp_struct_Variable;                              // 0xC8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable1;                             // 0xD0(0x20)()
	struct FGameplayEventData                    K2Node_CustomEvent_Payload;                        // 0xF0(0xA8)()
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123;           // 0x198(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayEventData                    Temp_struct_Variable12;                            // 0x1A8(0xA8)()
	class UAbilityTask_WaitGameplayEvent*        CallFunc_WaitGameplayEvent_ReturnValue;            // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue1;           // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue12;          // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x278(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x284(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x288(0xC)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_31B7[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x2A0(0x30)(IsPlainOldData, NoDestructor)
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x2D0(0xA8)(ConstParm)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_FinishSpawningActor_ReturnValue;          // 0x380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue123;         // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn;                  // 0x3A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess12;                     // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x3A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31B9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue1234;        // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn1;                 // 0x3B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess123;                    // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x3C8(0x8)(NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1234;          // 0x3D0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31BB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x3E8(0x8)(NoDestructor)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x3F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateZone*                    K2Node_DynamicCast_AsFort_Game_State_Zone;         // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1234;                   // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue12345;       // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0x418(0x8)(NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetClassDisplayName_ReturnValue;          // 0x420(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_MatchesTag_ReturnValue;                   // 0x430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_MakeLiteralFloat_ReturnValue;             // 0x434(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
