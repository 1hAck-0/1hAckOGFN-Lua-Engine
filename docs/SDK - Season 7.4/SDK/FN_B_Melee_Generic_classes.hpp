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

// BlueprintGeneratedClass B_Melee_Generic.B_Melee_Generic_C
// 0x0130 (0x0AB8 - 0x0988)
class AB_Melee_Generic_C : public AFortWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0988(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    IdleFX;                                                   // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    SwingFX;                                                  // 0x0998(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    AnimTrial;                                                // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    AnimTrail_PSC;                                            // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    MeleeHeavy_PSC;                                           // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             IdleFX_Template;                                          // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Has_Idle_Effect;                                          // 0x09C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x09C1(0x0007) MISSED OFFSET
	class UParticleSystem*                             Idle_Effect;                                              // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       IdleFXAttachSocket;                                       // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    IdleFX_Location_Rule;                                     // 0x09D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    Idle_FX_Rotation_Rule;                                    // 0x09D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    Idle_FX_Scale_Rule;                                       // 0x09DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x09DB(0x0005) MISSED OFFSET
	class UParticleSystem*                             Swing_FX_Template;                                        // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Has_Swing_Effect;                                         // 0x09E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x09E9(0x0007) MISSED OFFSET
	class UParticleSystem*                             Swing_Effect;                                             // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SwingFXSocket;                                            // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    SwingFX_Location_Rule;                                    // 0x0A00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    Swing_FX_Rotation_Rule;                                   // 0x0A01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    Swing_FX_Scale_Rule;                                      // 0x0A02(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseAnimTrails;                                            // 0x0A03(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0A04(0x0004) MISSED OFFSET
	class UParticleSystem*                             Anim_Trail_Template;                                      // 0x0A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             AnimTrailsParticles;                                      // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FirstSocketName;                                          // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Second_Socket_Name;                                       // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       OverrideFirstSocketName;                                  // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       OverrideSecond_Socket_Name;                               // 0x0A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // 0x0A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0A3C(0x0004) MISSED OFFSET
	class UParticleSystem*                             MeleeHeavy_ParticleSystem;                                // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             WeaponDurabilityDestroyEffect;                            // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WeaponDurabilityDestroyEffectIcon;                        // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseDestroyEffect;                                         // 0x0A58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0A59(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    Idle_Effect_Component;                                    // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UAnimMontage*>                        PokeAnimations;                                           // 0x0A68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    WeaponMID;                                                // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Alteration_Ambient_PS;                                    // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  MeleeHeavy_Sound;                                         // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                Melee_Heavy_Launch_Gameplay_Cue_Tag_Override;             // 0x0A90(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                Melee_Heavy_Impact_Gameplay_Cue_Tag_Override;             // 0x0A98(0x0008) (Edit, BlueprintVisible)
	struct FVector                                     Effects_Color_Level;                                      // 0x0AA0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0AAC(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    Swing_Effect_Component;                                   // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Melee_Generic.B_Melee_Generic_C");
		return ptr;
	}


	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	void SetActiveAlterationIdleParticles(bool Active, bool Reset);
	void SetWpnRarity();
	void UserConstructionScript();
	void OnLoaded_CB594210420542B302428F8181D85E48(class UObject* Loaded);
	void MeleeSwingRight();
	void MeleeSwingLeft();
	void FootStepLeft();
	void FootStepRight();
	void ReceiveBeginPlay();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void PlayRClickImpacts();
	void OnPlayImpactFX(struct FHitResult HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, class UParticleSystemComponent* SpawnedPSC);
	void OnEquippedWeaponDestory();
	void OnWeaponAttached();
	void OnInitCosmeticAlterations(struct FFortCosmeticModification CosmeticMod, class UMaterialInstanceDynamic* DynamicMaterialInstance);
	void OnWeaponVisibilityChanged(bool bVisible);
	void OnWeaponDetached();
	void ExecuteUbergraph_B_Melee_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
