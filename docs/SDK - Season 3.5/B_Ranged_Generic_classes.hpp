#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x184 (0xE4C - 0xCC8)
// BlueprintGeneratedClass B_Ranged_Generic.B_Ranged_Generic_C
class AB_Ranged_Generic_C : public AFortWeaponRanged
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xCC8(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              Reload_Empty_;                                     // 0xCD0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Shells_empty_;                                     // 0xCD8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ScopeMesh1P;                                       // 0xCE0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Muzzle_Empty_;                                     // 0xCE8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642; // 0xCF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642; // 0xCF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3194[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    AnimateScopePostProcess;                           // 0xCF8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       MuzzleParticleSystem;                              // 0xD00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       WeaponDurabilityDestroyEffect;                     // 0xD08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       WeaponDurabilityDestroyEffectIcon;                 // 0xD10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseDestroyEffect;                                  // 0xD18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Use_Reload_Particles;                              // 0xD19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3195[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       Reload_ParticleSystem;                             // 0xD20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastPlayFXTime;                                    // 0xD28(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinPlayFXTime;                                     // 0xD2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseShellsOnFire_;                                  // 0xD30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseShellsOnReload_;                                // 0xD31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseShellsOnPump_;                                  // 0xD32(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3196[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       ShellsParticleSystemTemplate;                      // 0xD38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ReloadSocketName;                                  // 0xD40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortAIPawn*>                   Array_Of_Active_Enemy_AI;                          // 0xD48(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FWeightedBlendable>            ScopePostProcessMaterial;                          // 0xD58(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	bool                                         Scope___Render_Enemies_To_Custom_Depth_Buffer;     // 0xD68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3197[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Shells_Socket_Name;                                // 0xD70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class En_ShellTypes_01                  ShellTypeSelect;                                   // 0xD78(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3198[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Shells_Spawn_Rate_Scale;                           // 0xD7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ShellsRotationRate;                                // 0xD80(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Shells_Velocity;                                   // 0xD8C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Shells_Gravity;                                    // 0xD98(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Shells_Lifetime;                                   // 0xDA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Shells_Size;                                       // 0xDA8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Shells_Time_Dilation;                              // 0xDB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Target_Scope_Vignette_Blur_Screen_Percentage;      // 0xDB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Scope_Camera_Offset_Amount;                        // 0xDBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         SmallShells;                                       // 0xDC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MediumShells;                                      // 0xDC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LargeShells;                                       // 0xDC2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShotgunShells;                                     // 0xDC3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnergyShells;                                      // 0xDC4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3199[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Inherit_Parent_Velocity;                           // 0xDC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Cylindrical_Radius;                                // 0xDCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Cylindrical_Height;                                // 0xDD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugShellsSocket_;                                // 0xDD4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Use_2_Post_Processes_For_the_Scope;                // 0xDD5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_319A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Sound_ScopeZoomIn;                                 // 0xDD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_ScopeZoomOut;                                // 0xDE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Alteration_Ambient_PS;                             // 0xDE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 ReticleHUDElementTags;                             // 0xDF0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Is_Wind_Enabled;                                   // 0xE10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_319B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       MuzzleWindParticleSystem;                          // 0xE18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       MuzzleParticleSystem1P;                            // 0xE20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldHideReticleAfterDelay;                       // 0xE28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_319C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPostProcessComponent*                 DownScopePostProcessSpawned;                       // 0xE30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 DownScopePostProcessSpawned2;                      // 0xE38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              MuzzleWindParticleSpawned;                         // 0xE40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StencilBufferValue;                                // 0xE48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Ranged_Generic_C");
		return Clss;
	}

	void SetPostProcessParams(float InputPin, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Lerp_ReturnValue);
	void SetActiveAlterationIdleParticles(bool Active, bool Reset, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ShowReticle(class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess);
	void HideReticle(class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess);
	void ActivateOrDeactivateWindParticle(bool bNewActive);
	void DeactivateMuzzleFX();
	void DeactivateReloadSmokeFX(bool CallFunc_IsValid_ReturnValue);
	void ActivateReloadSmokeFX(bool CallFunc_IsValid_ReturnValue);
	void ActivateShellsFX(bool Bool);
	void DeactivateShellsFX(bool CallFunc_IsActive_ReturnValue);
	void SetupShellFX(bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void UpdateShellEmittersFX(bool Temp_bool_Variable, int32 Temp_int_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue12, bool CallFunc_Not_PreBool_ReturnValue123, bool CallFunc_Not_PreBool_ReturnValue1234, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue12, bool CallFunc_BooleanAND_ReturnValue123, bool CallFunc_BooleanAND_ReturnValue1234, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue12345, bool CallFunc_BooleanAND_ReturnValue123456, bool CallFunc_BooleanAND_ReturnValue1234567, bool CallFunc_BooleanAND_ReturnValue12345678);
	void Muzzle_Play_Reload_FX(enum class EFortReloadFXState Selection, bool K2Node_SwitchEnum_CmpSuccess);
	void Muzzle_Flash_FX(bool Persistent_Fire, bool CallFunc_IsUsingScope_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue);
	void SetWpnRarity();
	void AddRandomScale(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue12, const struct FVector& CallFunc_MakeVector_ReturnValue1);
	void UserConstructionScript(float CallFunc_GetScalarParameterValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue1, const struct FTransform& Temp_struct_Variable, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_K2_AttachToComponent_ReturnValue12);
	void AnimateScopePostProcess__FinishedFunc();
	void AnimateScopePostProcess__UpdateFunc();
	void OnLoaded_4DE6158742ED7EE528BC98A240A81632(class UObject* Loaded);
	void OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(class UObject* Loaded);
	void OnLoaded_83457BA843174AC6288682A342EBEAD9(class UObject* Loaded);
	void OnLoaded_5B08633343C4DA6FF40449A8A36357E4(class UObject* Loaded);
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnStopWeaponFireFX();
	void OnPlayReloadFX(enum class EFortReloadFXState ReloadStage);
	void OnSetTargeting(bool bNewIsTargeting);
	void K2_OnUnEquip();
	void InitializeScopeVariables();
	void Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int32 StencilBufferValue);
	void OnWeaponAttached();
	void OnInitAlteration(class UFortAlterationItemDefinition* NewAlteration);
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod, class UMaterialInstanceDynamic* DynamicMaterialInstance);
	void ShellsON__onPump_();
	void OnEquippedWeaponDestory();
	void SetWeaponPierceThrough(bool Enable, int32 TargetLimit);
	void SetWeaponPierceThrough_ClientRep(bool Enable, int32 TargetLimit);
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
	void UnhideFirstPersonStuffPart2();
	void UnhideFirstPersonStuffPart1();
	void ForceScopeFX();
	void SetupScopePostProcess();
	void ExecuteUbergraph_B_Ranged_Generic(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetPI_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* Temp_object_Variable, class UObject* K2Node_CustomEvent_Loaded, class UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess, class UObject* Temp_object_Variable1, class UParticleSystem* K2Node_DynamicCast_AsParticle_System1, bool K2Node_DynamicCast_bSuccess1, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, class UObject* K2Node_CustomEvent_Loaded1, enum class EFortReloadFXState K2Node_Event_ReloadStage, float CallFunc_GetGameTimeInSeconds_ReturnValue, float K2Node_MathExpression_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_MathExpression_ReturnValue1, bool K2Node_Event_bNewIsTargeting, bool CallFunc_IsDedicatedServer_ReturnValue1, TArray<class AFortAIPawn*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Array_Index_Variable, class AFortAIPawn* CallFunc_Array_Get_Item, bool K2Node_CustomEvent_Enable_Or_Disable, int32 K2Node_CustomEvent_StencilBufferValue, bool CallFunc_IsValid_ReturnValue1, class UFortAlterationItemDefinition* K2Node_Event_NewAlteration, const struct FFortCosmeticModification& K2Node_Event_CosmeticMod, class UMaterialInstanceDynamic* K2Node_Event_DynamicMaterialInstance, bool CallFunc_IsAssetNull_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue12, bool CallFunc_IsAssetNull_ReturnValue123, int32 CallFunc_GetLocalMagazineAmmoCount_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class UObject* Temp_object_Variable12, bool CallFunc_UseScopeTargeting_ReturnValue, class UParticleSystem* K2Node_DynamicCast_AsParticle_System12, bool K2Node_DynamicCast_bSuccess12, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UObject* K2Node_CustomEvent_Loaded12, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess123, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess1234, class UObject* Temp_object_Variable123, class UParticleSystem* K2Node_DynamicCast_AsParticle_System123, bool K2Node_DynamicCast_bSuccess12345, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool K2Node_CustomEvent_Enable1, int32 K2Node_CustomEvent_TargetLimit1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class UObject* K2Node_CustomEvent_Loaded123, bool K2Node_CustomEvent_Enable, int32 K2Node_CustomEvent_TargetLimit, int32 CallFunc_SelectInt_ReturnValue1, bool CallFunc_IsUsingFirstPersonCamera_ReturnValue, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_IsUsingScopeOrFirstPersonCamera_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess123456, class AFortWindManager* CallFunc_GetWindManager_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn1, bool K2Node_DynamicCast_bSuccess1234567, bool CallFunc_UseScopeTargeting_ReturnValue1, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue123, class APawn* CallFunc_GetInstigator_ReturnValue12, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn12, bool K2Node_DynamicCast_bSuccess12345678, class APawn* CallFunc_GetInstigator_ReturnValue123, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn123, bool K2Node_DynamicCast_bSuccess123456789, bool CallFunc_IsValid_ReturnValue1234, class APawn* CallFunc_GetInstigator_ReturnValue1234, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn1234, bool K2Node_DynamicCast_bSuccess12345678910, bool CallFunc_IsValid_ReturnValue12345, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue12, bool CallFunc_IsValid_ReturnValue123456, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue12, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_UseScopeTargeting_ReturnValue12, bool K2Node_Event_bVisible, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetRenderingDetailMode_ReturnValue, int32 CallFunc_GetRenderingDetailMode_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue12, bool CallFunc_IsValid_ReturnValue1234567, bool CallFunc_IsValid_ReturnValue12345678, bool CallFunc_IsValid_ReturnValue123456789, float CallFunc_GetFiringRate_ReturnValue, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1, class APawn* CallFunc_GetInstigator_ReturnValue12345, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn12345, bool K2Node_DynamicCast_bSuccess1234567891011, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue12345678910, const struct FTransform& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_BooleanAND_ReturnValue12, const struct FTransform& Temp_struct_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue1, bool CallFunc_IsValid_ReturnValue1234567891011, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue123456789101112, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue123, float CallFunc_Divide_FloatFloat_ReturnValue1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1234, float CallFunc_Multiply_FloatFloat_ReturnValue12, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_VSize_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue123, float CallFunc_Divide_FloatFloat_ReturnValue12, float CallFunc_Divide_FloatFloat_ReturnValue123, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1234, float CallFunc_Divide_FloatFloat_ReturnValue12345, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue12, bool CallFunc_DoesSocketExist_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue123);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
