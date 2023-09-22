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

// 0x18 (0xB00 - 0xAE8)
// BlueprintGeneratedClass GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C
class UGA_BoostJumpPack_Equip_C : public UFortGameplayAbility
{
public:
	uint8                                        Pad_4AB0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xAF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_BoostJumpPack_Equip_C");
		return Clss;
	}

	class UFortItem* GetGadgetItem(class AFortPlayerPawn* Pawn, bool CallFunc_IsValid_ReturnValue, const struct FGuid& CallFunc_GetInventoryGUID_ReturnValue, class AFortPlayerControllerZone* CallFunc_GetPlayerController_AsFort_Player_Controller_Zone, class UFortItem* CallFunc_K2_GetInventoryItemWithGuid_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void GetPlayerController(class AFortPlayerPawn* Pawn, class AFortPlayerControllerZone** AsFort_Player_Controller_Zone, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess);
	void IsAuthority(bool* bAuthority, bool CallFunc_HasAuthority_ReturnValue);
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags, class AFortPlayerPawn* LocalPlayerPawn, const struct FGameplayTagContainer& ErrorReasonGamepad, const struct FGameplayTagContainer& ErrorReason);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_BoostJumpPack_Equip(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
