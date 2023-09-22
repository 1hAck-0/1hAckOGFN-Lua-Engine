#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GCN_Loop_SmokeBombShroud.GCN_Loop_SmokeBombShroud_C
// 0x0120 (0x09A0 - 0x0880)
class AGCN_Loop_SmokeBombShroud_C : public AFortGameplayCueNotify_Loop
{
public:
	class AFortPlayerPawn*                             TargetPlayer;                                             // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ExpirationSoundPeriod;                                    // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VelocityInterp;                                           // 0x088C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            AttachedFX;                                               // 0x0890(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>              PlayerSkeletalMeshes;                                     // 0x08A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               FriendlyPlayer;                                           // 0x08B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x08B1(0x0007) MISSED OFFSET
	struct FTimerHandle                                ExpireTellDelayTimer;                                     // 0x08B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                ExpirationSoundTimer;                                     // 0x08C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              VisbilityLevel;                                           // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkVisMultiplier;                                        // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintVisMultiplier;                                      // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinFriendlyOpacity;                                       // 0x08D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InteractVisibility;                                       // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08DC(0x0004) MISSED OFFSET
	struct FScalableFloat                              DataDuration;                                             // 0x08E0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DataTellDuration;                                         // 0x0900(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DataWalkVisMult;                                          // 0x0920(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DataSprintVisMult;                                        // 0x0940(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DataFriendlyVisMult;                                      // 0x0960(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DataShadowPlaneOpacity;                                   // 0x0980(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Loop_SmokeBombShroud.GCN_Loop_SmokeBombShroud_C");
		return ptr;
	}


	void GetSkeletalMeshes();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
