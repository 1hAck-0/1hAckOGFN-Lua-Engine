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

// BlueprintGeneratedClass GCN_Loop_Ice_Feet_AoE.GCN_Loop_Ice_Feet_AoE_C
// 0x00A8 (0x0928 - 0x0880)
class AGCN_Loop_Ice_Feet_AoE_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Duration;                                                 // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExpirationTellDuration;                                   // 0x088C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             TargetPlayer;                                             // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                ExpireTellDelayTimer;                                     // 0x0898(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                ExpirationSoundTimer;                                     // 0x08A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ExpirationSoundPeriod;                                    // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08AC(0x0004) MISSED OFFSET
	TArray<class UParticleSystemComponent*>            SpawnedEmitters;                                          // 0x08B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Crack;                                                    // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08C4(0x0004) MISSED OFFSET
	struct FScalableFloat                              DataTellDuration;                                         // 0x08C8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  SC_Footstep_Local;                                        // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SC_Footstep_Remote;                                       // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SC_Collision;                                             // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortCollisionAudioComponent*                CollisionAudioComp;                                       // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UAudioComponent*>                     SpawnedAudioComps;                                        // 0x0908(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                                  SC_OnJumpOrBeginFalling;                                  // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SC_OnLand;                                                // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Loop_Ice_Feet_AoE.GCN_Loop_Ice_Feet_AoE_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void BeginExpireTell();
	void ClearExpireTell();
	void ExpireWarningTick();
	void On_Player_Step();
	void On_Target_Pawn_Hit_Event(class AActor* SelfActor, class AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult Hit);
	void ReceiveTick(float DeltaSeconds);
	void On_Target_Pawn_Landed(struct FHitResult Hit);
	void On_Target_Pawn_Movement_Mode_Changed(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit);
	void ExecuteUbergraph_GCN_Loop_Ice_Feet_AoE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
