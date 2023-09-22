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

// BlueprintGeneratedClass B_Ranged_Generic.B_Ranged_Generic_C
// 0x01C8 (0x0DE8 - 0x0C20)
class AB_Ranged_Generic_C : public AFortWeaponRanged
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C20(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Reload_Empty_;                                            // 0x0C28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Shells_empty_;                                            // 0x0C30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ScopeMesh1P;                                              // 0x0C38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Muzzle_Empty_;                                            // 0x0C40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              AnimateScopePostProcess_DownSightPostProcessAmount;       // 0x0C48(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    AnimateScopePostProcess__Direction;                       // 0x0C4C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C4D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          AnimateScopePostProcess;                                  // 0x0C50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             MuzzleParticleSystem;                                     // 0x0C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WeaponDurabilityDestroyEffect;                            // 0x0C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WeaponDurabilityDestroyEffectIcon;                        // 0x0C68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseDestroyEffect;                                         // 0x0C70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Use_Reload_Particles;                                     // 0x0C71(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0C72(0x0006) MISSED OFFSET
	class UParticleSystem*                             Reload_ParticleSystem;                                    // 0x0C78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastPlayFXTime;                                           // 0x0C80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              MinPlayFXTime;                                            // 0x0C84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseShellsOnFire_;                                         // 0x0C88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseShellsOnReload_;                                       // 0x0C89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseShellsOnPump_;                                         // 0x0C8A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0C8B(0x0005) MISSED OFFSET
	class UParticleSystem*                             ShellsParticleSystemTemplate;                             // 0x0C90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReloadSocketName;                                         // 0x0C98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AFortAIPawn*>                         Array_Of_Active_Enemy_AI;                                 // 0x0CA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               Scope___Render_Enemies_To_Custom_Depth_Buffer;            // 0x0CB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0CB1(0x0003) MISSED OFFSET
	struct FName                                       Shells_Socket_Name;                                       // 0x0CB4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<En_ShellTypes>                         ShellTypeSelect;                                          // 0x0CBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0CBD(0x0003) MISSED OFFSET
	float                                              Shells_Spawn_Rate_Scale;                                  // 0x0CC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ShellsRotationRate;                                       // 0x0CC4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Shells_Velocity;                                          // 0x0CD0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Shells_Gravity;                                           // 0x0CDC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shells_Lifetime;                                          // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Shells_Size;                                              // 0x0CEC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shells_Time_Dilation;                                     // 0x0CF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Target_Scope_Vignette_Blur_Screen_Percentage;             // 0x0CFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scope_Camera_Offset_Amount;                               // 0x0D00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SmallShells;                                              // 0x0D04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MediumShells;                                             // 0x0D05(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LargeShells;                                              // 0x0D06(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShotgunShells;                                            // 0x0D07(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnergyShells;                                             // 0x0D08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0D09(0x0003) MISSED OFFSET
	float                                              Inherit_Parent_Velocity;                                  // 0x0D0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cylindrical_Radius;                                       // 0x0D10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cylindrical_Height;                                       // 0x0D14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugShellsSocket_;                                       // 0x0D18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Use_2_Post_Processes_For_the_Scope;                       // 0x0D19(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x0D1A(0x0006) MISSED OFFSET
	class USoundBase*                                  Sound_ScopeZoomIn;                                        // 0x0D20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_ScopeZoomOut;                                       // 0x0D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Alteration_Ambient_PS;                                    // 0x0D30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       ReticleHUDElementTags;                                    // 0x0D38(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Is_Wind_Enabled;                                          // 0x0D58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0D59(0x0007) MISSED OFFSET
	class UParticleSystem*                             MuzzleWindParticleSystem;                                 // 0x0D60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MuzzleParticleSystem1P;                                   // 0x0D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldHideReticleAfterDelay;                              // 0x0D70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0D71(0x0007) MISSED OFFSET
	class UPostProcessComponent*                       DownScopePostProcessSpawned;                              // 0x0D78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       DownScopePostProcessSpawned2;                             // 0x0D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    MuzzleWindParticleSpawned;                                // 0x0D88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                StencilBufferValue;                                       // 0x0D90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0D94(0x0004) MISSED OFFSET
	class UCurveFloat*                                 Curve_PitchOffset;                                        // 0x0D98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_ScopedInLoop;                                       // 0x0DA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             ScopeZoomInComp;                                          // 0x0DA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ScopedInLoopComp;                                         // 0x0DB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ScopeZoomOutComp;                                         // 0x0DB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              Alteration_Ambient_PS_Max_Draw_Distance;                  // 0x0DC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Muzzle_PS_Max_Draw_Distance;                              // 0x0DC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Beam_PS_Max_Draw_Distance;                                // 0x0DC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Reload_PS_Max_Draw_Distance;                              // 0x0DCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Shells_PS_Max_Draw_Distance;                              // 0x0DD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0DD4(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData11[0x10];                                      // 0x0DD4(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty B_Ranged_Generic.B_Ranged_Generic_C.onAimDownSightsChanged

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Ranged_Generic.B_Ranged_Generic_C");
		return ptr;
	}


	void StopScopedAudio();
	void StartScopedAudio();
	void SetPostProcessParams(float InputPin);
	void SetActiveAlterationIdleParticles(bool Active);
	void ShowReticle();
	void HideReticle();
	void ActivateOrDeactivateWindParticle(bool bNewActive);
	void DeactivateMuzzleFX();
	void DeactivateReloadSmokeFX();
	void ActivateReloadSmokeFX();
	void ActivateShellsFX(bool Bool);
	void DeactivateShellsFX();
	void SetupShellFX();
	void UpdateShellEmittersFX();
	void Muzzle_Play_Reload_FX(TEnumAsByte<EFortReloadFXState> Selection);
	void Muzzle_Flash_FX(bool Persistent_Fire);
	void SetWpnRarity();
	void AddRandomScale();
	void UserConstructionScript();
	void AnimateScopePostProcess__FinishedFunc();
	void AnimateScopePostProcess__UpdateFunc();
	void OnLoaded(class UObject* Loaded);
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnStopWeaponFireFX();
	void OnPlayReloadFX(TEnumAsByte<EFortReloadFXState> ReloadStage);
	void OnSetTargeting(bool bNewIsTargeting);
	void K2_OnUnEquip();
	void InitializeScopeVariables();
	void Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int StencilBufferValue);
	void OnWeaponAttached();
	void OnInitAlteration(class UFortAlterationItemDefinition* NewAlteration);
	void OnInitCosmeticAlterations(struct FFortCosmeticModification CosmeticMod, class UMaterialInstanceDynamic* DynamicMaterialInstance);
	void ShellsON__onPump_();
	void OnEquippedWeaponDestory();
	void SetWeaponPierceThrough(bool Enable, int TargetLimit);
	void SetWeaponPierceThrough_ClientRep(bool Enable, int TargetLimit);
	void ReceiveBeginPlay();
	void OnWeaponVisibilityChanged(bool bVisible);
	void HideWeaponMesh();
	void ShowWeaponMesh();
	void HideWeapon();
	void ShowWeapon();
	void ReverseScopePP();
	void ResetDoonceScopeSound();
	void UnhideThirdPersonStuff();
	void PlayScopePP();
	void HideFirstPersonStuff();
	void AbortScopeFX();
	void HideThirdPersonStuff();
	void UnhideFirstPersonStuffPart2(int Which_Call);
	void UnhideFirstPersonStuffPart1();
	void ForceScopeFX();
	void SetupScopePostProcess();
	void BindFireRateChange();
	void PitchUpOnRateOfFireChange(float NewRateOfFire);
	void ShellEjectionFixOn();
	void Bind_on_Effects_Quality();
	void ShellEjectionOff();
	void ForceScopeBackImmediatly();
	void ExecuteUbergraph_B_Ranged_Generic(int EntryPoint);
	void onAimDownSightsChanged__DelegateSignature(bool AimDownsights);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
