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

// 0x49 (0x489 - 0x440)
// BlueprintGeneratedClass GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C
class AGCN_TakerMarkedForDeath_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              OverHeadEffect;                                    // 0x448(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMiniMapComponent*                 MiniMapCrosshair;                                  // 0x450(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMiniMapComponent*                 MiniMapIconBackground;                             // 0x458(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FFortFeedbackHandle                   TakerFeedbackEvent;                                // 0x460(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        TakerFeedbackRepeatDelay;                          // 0x478(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TakerFeedbackInitialDelay;                         // 0x47C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TC_GameplayStatusStun;                             // 0x480(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayerIsStunned;                                   // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_TakerMarkedForDeath_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SoulSuckCheck();
	void ExecuteUbergraph_GCN_TakerMarkedForDeath(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn1, bool K2Node_DynamicCast_bSuccess1, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
