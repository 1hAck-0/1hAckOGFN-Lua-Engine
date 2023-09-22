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
// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.Completed_0DEF95174D4614F4567B4E8B836FDE6F
struct UGAB_AIConversationOrScriptedAnimation_C_Completed_0DEF95174D4614F4567B4E8B836FDE6F_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.Cancelled_0DEF95174D4614F4567B4E8B836FDE6F
struct UGAB_AIConversationOrScriptedAnimation_C_Cancelled_0DEF95174D4614F4567B4E8B836FDE6F_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.Triggered_0DEF95174D4614F4567B4E8B836FDE6F
struct UGAB_AIConversationOrScriptedAnimation_C_Triggered_0DEF95174D4614F4567B4E8B836FDE6F_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.K2_ActivateAbilityFromEvent
struct UGAB_AIConversationOrScriptedAnimation_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1A1 (0x1A1 - 0x0)
// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation
struct UGAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x8(0xA8)(ConstParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xB0(0x10)(ZeroConstructor, NoDestructor)
	class UAnimMontage*                          K2Node_DynamicCast_AsAnim_Montage;                 // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData12;                   // 0xD0(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag12;               // 0xF0(0x8)(NoDestructor, HasGetValueTypeHash)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue;        // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x100(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData1;                    // 0x118(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag1;                // 0x138(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData;                     // 0x140(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag;                 // 0x160(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x168(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x178(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable1;                             // 0x180(0x20)()
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
