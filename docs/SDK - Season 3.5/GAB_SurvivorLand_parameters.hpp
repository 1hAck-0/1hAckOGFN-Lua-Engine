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
// Function GAB_SurvivorLand.GAB_SurvivorLand_C.OnCancelled_7174BD024E3A05F4D5E859B97A1D076C
struct UGAB_SurvivorLand_C_OnCancelled_7174BD024E3A05F4D5E859B97A1D076C_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_SurvivorLand.GAB_SurvivorLand_C.OnInterrupted_7174BD024E3A05F4D5E859B97A1D076C
struct UGAB_SurvivorLand_C_OnInterrupted_7174BD024E3A05F4D5E859B97A1D076C_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_SurvivorLand.GAB_SurvivorLand_C.OnBlendOut_7174BD024E3A05F4D5E859B97A1D076C
struct UGAB_SurvivorLand_C_OnBlendOut_7174BD024E3A05F4D5E859B97A1D076C_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_SurvivorLand.GAB_SurvivorLand_C.OnCompleted_7174BD024E3A05F4D5E859B97A1D076C
struct UGAB_SurvivorLand_C_OnCompleted_7174BD024E3A05F4D5E859B97A1D076C_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_SurvivorLand.GAB_SurvivorLand_C.K2_ActivateAbility
struct UGAB_SurvivorLand_C_K2_ActivateAbility_Params
{
public:
};

// 0x59 (0x59 - 0x0)
// Function GAB_SurvivorLand.GAB_SurvivorLand_C.ExecuteUbergraph_GAB_SurvivorLand
struct UGAB_SurvivorLand_C_ExecuteUbergraph_GAB_SurvivorLand_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3143[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x28(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate123;           // 0x38(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3144[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
