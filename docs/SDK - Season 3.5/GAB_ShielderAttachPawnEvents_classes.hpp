#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xB08 - 0xAE8)
// BlueprintGeneratedClass GAB_ShielderAttachPawnEvents.GAB_ShielderAttachPawnEvents_C
class UGAB_ShielderAttachPawnEvents_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_337E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)
	bool                                         Debug;                                             // 0xAF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_337F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShielderPawn_C*                       Shielder;                                          // 0xB00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_ShielderAttachPawnEvents_C");
		return Clss;
	}

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_ShielderAttachPawnEvents(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class UObject* CallFunc_GetCurrentSourceObject_ReturnValue, class AShielderPawn_C* K2Node_DynamicCast_AsShielder_Pawn, bool K2Node_DynamicCast_bSuccess, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_K2_CommitAbility_ReturnValue, bool Temp_bool_Variable);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
