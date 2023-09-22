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

// BlueprintGeneratedClass GCN_Loop_Ice_Wheels_Environmental.GCN_Loop_Ice_Wheels_Environmental_C
// 0x0060 (0x08E0 - 0x0880)
class AGCN_Loop_Ice_Wheels_Environmental_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UParticleSystemComponent*>            LoopingEmitters;                                          // 0x0888(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortCollisionAudioComponent*                CollisionAudioComp;                                       // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UAudioComponent*>                     SpawnedAudioComps;                                        // 0x08A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AFortAthenaSKVehicle*                        TargetVehicle;                                            // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShoppingCart;                                             // 0x08B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x08B9(0x0007) MISSED OFFSET
	TArray<struct FName>                               GolfSockets;                                              // 0x08C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               ShoppingSockets;                                          // 0x08D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Loop_Ice_Wheels_Environmental.GCN_Loop_Ice_Wheels_Environmental_C");
		return ptr;
	}


	void SpawnEmittersAttachedToWheels(class USceneComponent* AttachToComponent, bool ShoppingCart, class UParticleSystem* EmitterTemplate, TArray<struct FName>* Sockets, TArray<class UParticleSystemComponent*>* SpawnedEmitters1);
	void UserConstructionScript();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_GCN_Loop_Ice_Wheels_Environmental(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
