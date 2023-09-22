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

// 0x10 (0xB08 - 0xAF8)
// BlueprintGeneratedClass GAB_SmasherChargeDecelerate.GAB_SmasherChargeDecelerate_C
class UGAB_SmasherChargeDecelerate_C : public UGAB_AIBaseSimpleMontage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF8(0x8)(Transient, DuplicateTransient)
	struct FGameplayTag                          GC_GameplayCueNPCSmasherCharge;                    // 0xB00(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_SmasherChargeDecelerate_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GAB_SmasherChargeDecelerate(int32 EntryPoint, bool K2Node_Event_bWasCancelled, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class ASmasherPawn_C* K2Node_DynamicCast_AsSmasher_Pawn, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
