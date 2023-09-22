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

// BlueprintGeneratedClass GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C
// 0x00B8 (0x0938 - 0x0880)
class AGCN_Loop_Ice_Wheels_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Duration;                                                 // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExpirationTellDuration;                                   // 0x088C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                ExpireTellDelayTimer;                                     // 0x0890(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                ExpirationSoundTimer;                                     // 0x0898(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DataTellDuration;                                         // 0x08A0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ExpirationSoundPeriod;                                    // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Crack;                                                    // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            LoopingEmitters;                                          // 0x08C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortCollisionAudioComponent*                CollisionAudioComp;                                       // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UAudioComponent*>                     SpawnedAudioComps;                                        // 0x08E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AFortAthenaSKVehicle*                        TargetVehicle;                                            // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShoppingCart;                                             // 0x08F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x08F9(0x0007) MISSED OFFSET
	TArray<struct FName>                               GolfSockets;                                              // 0x0900(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               ShoppingSockets;                                          // 0x0910(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               PlaneSockets;                                             // 0x0920(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                Timer_SoundModulation;                                    // 0x0930(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C");
		return ptr;
	}


	void SpawnEmittersAttachedToWheels(class USceneComponent* AttachToComponent, bool NoOffsets, class UParticleSystem* EmitterTemplate, float ScaleMult, TArray<struct FName>* Sockets, TArray<class UParticleSystemComponent*>* SpawnedEmitters1);
	void UserConstructionScript();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void BeginExpireTell();
	void ClearExpireTell();
	void ExpireWarningTick();
	void Event_ModulateSound();
	void ExecuteUbergraph_GCN_Loop_Ice_Wheels(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
