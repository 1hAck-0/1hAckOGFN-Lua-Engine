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
// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnCancelled_30185FB0432AA030CE779FBAA5AE1A56
struct UGAB_SurvivorDBNO_C_OnCancelled_30185FB0432AA030CE779FBAA5AE1A56_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnInterrupted_30185FB0432AA030CE779FBAA5AE1A56
struct UGAB_SurvivorDBNO_C_OnInterrupted_30185FB0432AA030CE779FBAA5AE1A56_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnBlendOut_30185FB0432AA030CE779FBAA5AE1A56
struct UGAB_SurvivorDBNO_C_OnBlendOut_30185FB0432AA030CE779FBAA5AE1A56_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.OnCompleted_30185FB0432AA030CE779FBAA5AE1A56
struct UGAB_SurvivorDBNO_C_OnCompleted_30185FB0432AA030CE779FBAA5AE1A56_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.K2_OnEndAbility
struct UGAB_SurvivorDBNO_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.K2_ActivateAbilityFromEvent
struct UGAB_SurvivorDBNO_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.PlayDownedSpeech
struct UGAB_SurvivorDBNO_C_PlayDownedSpeech_Params
{
public:
};

// 0x129 (0x129 - 0x0)
// Function GAB_SurvivorDBNO.GAB_SurvivorDBNO_C.ExecuteUbergraph_GAB_SurvivorDBNO
struct UGAB_SurvivorDBNO_C_ExecuteUbergraph_GAB_SurvivorDBNO_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3145[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x28(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123;           // 0x38(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3146[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x50(0xA8)(ConstParm)
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x100(0x8)(NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3147[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue;            // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue1;           // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn;                  // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
