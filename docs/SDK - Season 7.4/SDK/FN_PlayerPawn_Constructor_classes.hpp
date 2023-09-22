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

// BlueprintGeneratedClass PlayerPawn_Constructor.PlayerPawn_Constructor_C
// 0x012C (0x2764 - 0x2638)
class APlayerPawn_Constructor_C : public APlayerPawn_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2638(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               ShieldCollider;                                           // 0x2640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ShieldCollisionAttachLocation;                            // 0x2648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ServerShieldMesh;                                         // 0x2650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ShieldMesh;                                               // 0x2658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    IFFShield_Light;                                          // 0x2660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BullRushPoke;                                             // 0x2668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TakeDamageTimeline_LineBrightness_E993138E4A26ED909055A89FDA7BCA47;// 0x2670(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TakeDamageTimeline_DamageFlash_E993138E4A26ED909055A89FDA7BCA47;// 0x2674(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TakeDamageTimeline__Direction_E993138E4A26ED909055A89FDA7BCA47;// 0x2678(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x2679(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TakeDamageTimeline;                                       // 0x2680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             P_Activate;                                               // 0x2688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      ShieldPlayerMesh;                                         // 0x2690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_IFF_ShieldFlicker;                                    // 0x2698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DamageFlash;                                              // 0x26A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LineBrightness;                                           // 0x26A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             P_TIABExplosion;                                          // 0x26B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_TIAB;                                               // 0x26B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Kinetic_Overload;                                   // 0x26C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_Start;                                       // 0x26C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_Stop;                                        // 0x26D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_Impact_1;                                    // 0x26D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Finalized_IFF_BackPack_Offset;                            // 0x26E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     IFF_Local_Offset_Without_Backpack;                        // 0x26EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     IFF_Local_Offset_With_Back_Pack;                          // 0x26F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2704(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x2704(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty PlayerPawn_Constructor.PlayerPawn_Constructor_C.PlayArmAnim
	TArray<class UPrimitiveComponent*>                 AllIFFMeshes;                                             // 0x2718(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          IFFMaterialParent;                                        // 0x2728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FIFFBoneConfig>                      IFFBoneConfigs;                                           // 0x2730(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AB_Constructor_BASE_C*                       SavedBase;                                                // 0x2740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AB_Perk_C_Constructor_BASE_C*                SavedBASE2;                                               // 0x2748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortProjectileBase*                         NewVar_1;                                                 // 0x2750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Plasma_Pulse_Location;                                    // 0x2758(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Constructor.PlayerPawn_Constructor_C");
		return ptr;
	}


	void OnRep_SavedBase();
	void SetIFFMeshesEnabled(bool IsEnabled);
	void UserConstructionScript();
	void TakeDamageTimeline__FinishedFunc();
	void TakeDamageTimeline__UpdateFunc();
	void GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void GameplayCue_Constructor_PlasmaPulse_IFFCoding(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void GameplayCue_Constructor_ToInfinityAndBeyond_ActiveFX(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void ReceiveBeginPlay();
	void testIFF();
	void OnCharacterPartsReinitialized();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void PlayArm();
	void testEndIFF();
	void SetMenuScreenClassName();
	void MultiToggleShield(bool Toggle);
	void ToggleShield(bool Toggle);
	void SetBase(class AB_Constructor_BASE_C* SavedBase);
	void SetBase2(class AB_Perk_C_Constructor_BASE_C* SavedBASE2);
	void SetPlasmaPulseLocation(struct FVector Plasma_Pulse_Location);
	void ExecuteUbergraph_PlayerPawn_Constructor(int EntryPoint);
	void PlayArmAnim__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
