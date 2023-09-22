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

// BlueprintGeneratedClass B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C
// 0x0080 (0x07E8 - 0x0768)
class AB_BGA_BotTurret_Parent_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0768(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ExplosionBuildUP_Flashes;                                 // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Bot_Self_Destruct_Beep;                                   // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SK_Bot_Turret;                                            // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0790(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotFired
	class AFortAIPawn*                                 Target;                                                   // 0x07A0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FFBotTurretData                             BotData;                                                  // 0x07A8(0x0018) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Left_Right_Gun;                                           // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07C4(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x07C4(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotExplosionWarning
	unsigned char                                      UnknownData03[0x10];                                      // 0x07D8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotExplode

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C");
		return ptr;
	}


	void GetPlayerPawn(class AFortPlayerPawn** AsFort_Player_Pawn);
	void OnRep_BotData();
	void LeftOrRightGunFired(int A);
	void SetGunSpawnRotFromSocket(struct FName SocketName, struct FVector InVect);
	void UserConstructionScript();
	void PassBotInfo(float WarmupTime, float BotDuration, float FireRate, float Radius, float RadiusDefault, bool ExplosionUpgrade);
	void SetTarget(class AFortAIPawn* Target);
	void Ready();
	void Destroyed(class AActor* DestroyedActor);
	void BindOnDestroyed();
	void ExecuteUbergraph_B_BGA_BotTurret_Parent(int EntryPoint);
	void BotExplode__DelegateSignature();
	void BotExplosionWarning__DelegateSignature();
	void BotFired__DelegateSignature(int Left);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
