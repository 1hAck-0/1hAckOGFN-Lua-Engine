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

// BlueprintGeneratedClass B_Ranged_Dual_Generic_FerretVehicle.B_Ranged_Dual_Generic_FerretVehicle_C
// 0x01A0 (0x0E88 - 0x0CE8)
class AB_Ranged_Dual_Generic_FerretVehicle_C : public AFortWeaponRangedDualFerret
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    LeftReload_Empty_;                                        // 0x0CF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    LeftShells_Empty_;                                        // 0x0CF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    LeftMuzzle_Empty_;                                        // 0x0D00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Reload_Empty_;                                            // 0x0D08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Shells_empty_;                                            // 0x0D10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ScopeMesh1P;                                              // 0x0D18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Muzzle_Empty_;                                            // 0x0D20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             MuzzleParticleSystem;                                     // 0x0D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WeaponDurabilityDestroyEffect;                            // 0x0D30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WeaponDurabilityDestroyEffectIcon;                        // 0x0D38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseDestroyEffect;                                         // 0x0D40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Use_Reload_Particles;                                     // 0x0D41(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0D42(0x0006) MISSED OFFSET
	class UParticleSystem*                             Reload_ParticleSystem;                                    // 0x0D48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastPlayFXTime;                                           // 0x0D50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              MinPlayFXTime;                                            // 0x0D54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseShellsOnFire_;                                         // 0x0D58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseShellsOnReload_;                                       // 0x0D59(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseShellsOnPump_;                                         // 0x0D5A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0D5B(0x0005) MISSED OFFSET
	class UParticleSystem*                             ShellsParticleSystemTemplate;                             // 0x0D60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReloadSocketName;                                         // 0x0D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AFortAIPawn*>                         Array_Of_Active_Enemy_AI;                                 // 0x0D70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               Scope___Render_Enemies_To_Custom_Depth_Buffer;            // 0x0D80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0D81(0x0003) MISSED OFFSET
	struct FName                                       Shells_Socket_Name;                                       // 0x0D84(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<En_ShellTypes>                         ShellTypeSelect;                                          // 0x0D8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0D8D(0x0003) MISSED OFFSET
	float                                              Shells_Spawn_Rate_Scale;                                  // 0x0D90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ShellsRotationRate;                                       // 0x0D94(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Shells_Velocity;                                          // 0x0DA0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Shells_Gravity;                                           // 0x0DAC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shells_Lifetime;                                          // 0x0DB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Shells_Size;                                              // 0x0DBC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shells_Time_Dilation;                                     // 0x0DC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Target_Scope_Vignette_Blur_Screen_Percentage;             // 0x0DCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scope_Camera_Offset_Amount;                               // 0x0DD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SmallShells;                                              // 0x0DD4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MediumShells;                                             // 0x0DD5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LargeShells;                                              // 0x0DD6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShotgunShells;                                            // 0x0DD7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnergyShells;                                             // 0x0DD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0DD9(0x0003) MISSED OFFSET
	float                                              Inherit_Parent_Velocity;                                  // 0x0DDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cylindrical_Radius;                                       // 0x0DE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cylindrical_Height;                                       // 0x0DE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugShellsSocket_;                                       // 0x0DE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Use_2_Post_Processes_For_the_Scope;                       // 0x0DE9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0DEA(0x0006) MISSED OFFSET
	class USoundBase*                                  Sound_ScopeZoomIn;                                        // 0x0DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_ScopeZoomOut;                                       // 0x0DF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Alteration_Ambient_PS;                                    // 0x0E00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       ReticleHUDElementTags;                                    // 0x0E08(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Is_Wind_Enabled;                                          // 0x0E28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0E29(0x0007) MISSED OFFSET
	class UParticleSystem*                             MuzzleWindParticleSystem;                                 // 0x0E30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MuzzleParticleSystem1P;                                   // 0x0E38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPostProcessComponent*                       DownScopePostProcessSpawned;                              // 0x0E40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       DownScopePostProcessSpawned2;                             // 0x0E48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    MuzzleWindParticleSpawned;                                // 0x0E50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	EDualWeaponHand                                    LastHandFired;                                            // 0x0E58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0E59(0x0007) MISSED OFFSET
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0E60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                StartHeatingTimer;                                        // 0x0E68(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                StartCoolingTimer;                                        // 0x0E70(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<E_MountedTurret_FireStates>            FireState;                                                // 0x0E78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0E79(0x0007) MISSED OFFSET
	class USoundBase*                                  Sound_OnFailToFireWhenOverheated;                         // 0x0E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Ranged_Dual_Generic_FerretVehicle.B_Ranged_Dual_Generic_FerretVehicle_C");
		return ptr;
	}


	void SetPostProcessParams(float InputPin);
	void SetActiveAlterationIdleParticles(bool Active, bool Reset);
	void ShowReticle();
	void HideReticle();
	void ActivateOrDeactivateWindParticle(bool bNewActive);
	void DeactivateMuzzleFX();
	void DeactivateReloadSmokeFX();
	void ActivateReloadSmokeFX();
	void ActivateShellsFX(bool Bool, bool OffHand);
	void DeactivateShellsFX();
	void SetupShellFX();
	void UpdateShellEmittersFX(class UParticleSystemComponent* PS);
	void Muzzle_Play_Reload_FX(TEnumAsByte<EFortReloadFXState> Selection);
	void Muzzle_Flash_FX(bool Persistent_Fire, bool OffHand);
	void SetWpnRarity();
	void AddRandomScale(bool OffHand);
	void UserConstructionScript();
	void OnLoaded_CA78C0DE4D818E45A12F6FAF524A1859(class UObject* Loaded);
	void OnLoaded(class UObject* Loaded);
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnStopWeaponFireFX();
	void OnPlayReloadFX(TEnumAsByte<EFortReloadFXState> ReloadStage);
	void OnSetTargeting(bool bNewIsTargeting);
	void K2_OnUnEquip();
	void Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int StencilBufferValue);
	void OnWeaponAttached();
	void OnInitAlteration(class UFortAlterationItemDefinition* NewAlteration);
	void OnInitCosmeticAlterations(struct FFortCosmeticModification CosmeticMod, class UMaterialInstanceDynamic* DynamicMaterialInstance);
	void SetWeaponPierceThrough(bool Enable, int TargetLimit);
	void SetWeaponPierceThrough_ClientRep(bool Enable, int TargetLimit);
	void ReceiveBeginPlay();
	void OnWeaponVisibilityChanged(bool bVisible);
	void HideWeaponMesh();
	void ShowWeaponMesh();
	void HideWeapon();
	void ShowWeapon();
	void HandFired(EDualWeaponHand Hand, bool bPersistantFire);
	void BindOnHandFired();
	void OnStartOverheated();
	void OnStartHeating();
	void OnStartCooling();
	void OnFinishedCooling();
	void OnLocalFailedToFireWhenOverheated();
	void ExecuteUbergraph_B_Ranged_Dual_Generic_FerretVehicle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
