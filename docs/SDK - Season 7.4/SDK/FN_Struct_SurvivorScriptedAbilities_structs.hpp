#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_SurvivorScriptedAbilities.Struct_SurvivorScriptedAbilities
// 0x0044
struct FStruct_SurvivorScriptedAbilities
{
	float                                              SurvivorHelpReminderDuration;                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                NPC_Ability_NonAttack_CowerIndefiniteTrue;                // 0x0004(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                NPC_Ability_NonAttack_CowerIndefiniteFalse;               // 0x000C(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                NPC_Ability_NonAttack_RescueTrue;                         // 0x0014(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                NPC_Ability_NonAttack_RescueFalse;                        // 0x001C(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                NPC_Ability_NonAttack_LockInPlaceTrue;                    // 0x0024(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                NPC_Ability_NonAttack_LockInPlaceFalse;                   // 0x002C(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                NPC_Ability_NonAttack_RescueStart;                        // 0x0034(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                NPC_Ability_NonAttack_RescueFinish;                       // 0x003C(0x0008) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
