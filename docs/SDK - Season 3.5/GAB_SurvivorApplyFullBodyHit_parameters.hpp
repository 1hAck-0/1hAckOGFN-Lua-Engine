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
// Function GAB_SurvivorApplyFullBodyHit.GAB_SurvivorApplyFullBodyHit_C.PickFullBodyHitMontageSection
struct UGAB_SurvivorApplyFullBodyHit_C_PickFullBodyHitMontageSection_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function GAB_SurvivorApplyFullBodyHit.GAB_SurvivorApplyFullBodyHit_C.ExecuteUbergraph_GAB_SurvivorApplyFullBodyHit
struct UGAB_SurvivorApplyFullBodyHit_C_ExecuteUbergraph_GAB_SurvivorApplyFullBodyHit_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_SetFNameBasedOnHitDirection_NameResult;   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
