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

// 0x0 (0x0 - 0x0)
// Function GAB_SurvivorDBNORevive.GAB_SurvivorDBNORevive_C.OnCancelled_2491B74745BECED77F7B838860EC4602
struct UGAB_SurvivorDBNORevive_C_OnCancelled_2491B74745BECED77F7B838860EC4602_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_SurvivorDBNORevive.GAB_SurvivorDBNORevive_C.OnInterrupted_2491B74745BECED77F7B838860EC4602
struct UGAB_SurvivorDBNORevive_C_OnInterrupted_2491B74745BECED77F7B838860EC4602_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_SurvivorDBNORevive.GAB_SurvivorDBNORevive_C.OnBlendOut_2491B74745BECED77F7B838860EC4602
struct UGAB_SurvivorDBNORevive_C_OnBlendOut_2491B74745BECED77F7B838860EC4602_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_SurvivorDBNORevive.GAB_SurvivorDBNORevive_C.OnCompleted_2491B74745BECED77F7B838860EC4602
struct UGAB_SurvivorDBNORevive_C_OnCompleted_2491B74745BECED77F7B838860EC4602_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GAB_SurvivorDBNORevive.GAB_SurvivorDBNORevive_C.K2_OnEndAbility
struct UGAB_SurvivorDBNORevive_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function GAB_SurvivorDBNORevive.GAB_SurvivorDBNORevive_C.K2_ActivateAbilityFromEvent
struct UGAB_SurvivorDBNORevive_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x130 (0x130 - 0x0)
// Function GAB_SurvivorDBNORevive.GAB_SurvivorDBNORevive_C.ExecuteUbergraph_GAB_SurvivorDBNORevive
struct UGAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AB2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x30(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123;           // 0x40(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AB3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x58(0xA8)(ConstParm)
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue1;           // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue12;          // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn;                  // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AB4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue123;         // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
