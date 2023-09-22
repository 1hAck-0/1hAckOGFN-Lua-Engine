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

// BlueprintGeneratedClass GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C
// 0x0060 (0x08E0 - 0x0880)
class AGCN_Loop_Ice_Feet_Environmental_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             TargetPlayer;                                             // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            SpawnedEmitters;                                          // 0x0890(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                                  SC_Footstep_Local;                                        // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SC_Footstep_Remote;                                       // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SC_Collision;                                             // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortCollisionAudioComponent*                CollisionAudioComp;                                       // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UAudioComponent*>                     SpawnedAudioComps;                                        // 0x08C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                                  SC_OnJumpOrBeginFalling;                                  // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SC_OnLand;                                                // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void On_Player_Step();
	void On_Target_Pawn_Hit_Event(class AActor* SelfActor, class AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult Hit);
	void ReceiveTick(float DeltaSeconds);
	void On_Target_Pawn_Landed(struct FHitResult Hit);
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void On_Target_Pawn_Movement_Mode_Changed(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit);
	void ExecuteUbergraph_GCN_Loop_Ice_Feet_Environmental(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
