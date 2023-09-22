#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.SetPostProcessParams
struct AB_Ranged_Dual_Generic_MountedTurret_C_SetPostProcessParams_Params
{
	float                                              InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.SetActiveAlterationIdleParticles
struct AB_Ranged_Dual_Generic_MountedTurret_C_SetActiveAlterationIdleParticles_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.ShowReticle
struct AB_Ranged_Dual_Generic_MountedTurret_C_ShowReticle_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.HideReticle
struct AB_Ranged_Dual_Generic_MountedTurret_C_HideReticle_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.ActivateOrDeactivateWindParticle
struct AB_Ranged_Dual_Generic_MountedTurret_C_ActivateOrDeactivateWindParticle_Params
{
	bool                                               bNewActive;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.DeactivateMuzzleFX
struct AB_Ranged_Dual_Generic_MountedTurret_C_DeactivateMuzzleFX_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.DeactivateReloadSmokeFX
struct AB_Ranged_Dual_Generic_MountedTurret_C_DeactivateReloadSmokeFX_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.ActivateReloadSmokeFX
struct AB_Ranged_Dual_Generic_MountedTurret_C_ActivateReloadSmokeFX_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.ActivateShellsFX
struct AB_Ranged_Dual_Generic_MountedTurret_C_ActivateShellsFX_Params
{
	bool                                               Bool;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OffHand;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.DeactivateShellsFX
struct AB_Ranged_Dual_Generic_MountedTurret_C_DeactivateShellsFX_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.SetupShellFX
struct AB_Ranged_Dual_Generic_MountedTurret_C_SetupShellFX_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.UpdateShellEmittersFX
struct AB_Ranged_Dual_Generic_MountedTurret_C_UpdateShellEmittersFX_Params
{
	class UParticleSystemComponent*                    PS;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.Muzzle Play Reload FX
struct AB_Ranged_Dual_Generic_MountedTurret_C_Muzzle_Play_Reload_FX_Params
{
	TEnumAsByte<EFortReloadFXState>                    Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.Muzzle Flash FX
struct AB_Ranged_Dual_Generic_MountedTurret_C_Muzzle_Flash_FX_Params
{
	bool                                               Persistent_Fire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OffHand;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.SetWpnRarity
struct AB_Ranged_Dual_Generic_MountedTurret_C_SetWpnRarity_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.AddRandomScale
struct AB_Ranged_Dual_Generic_MountedTurret_C_AddRandomScale_Params
{
	bool                                               OffHand;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.UserConstructionScript
struct AB_Ranged_Dual_Generic_MountedTurret_C_UserConstructionScript_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnLoaded_A62EBF3C40D050102770839C33BDCD2B
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnLoaded_A62EBF3C40D050102770839C33BDCD2B_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnLoaded
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnLoaded_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnLoaded_BCE7AA6D424444D979EECCB29BA62459
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnLoaded_BCE7AA6D424444D979EECCB29BA62459_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnPlayWeaponFireFX
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnPlayWeaponFireFX_Params
{
	bool                                               bPersistentFire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSecondaryFire;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnStopWeaponFireFX
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnStopWeaponFireFX_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnPlayReloadFX
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnPlayReloadFX_Params
{
	TEnumAsByte<EFortReloadFXState>                    ReloadStage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnSetTargeting
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnSetTargeting_Params
{
	bool                                               bNewIsTargeting;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.K2_OnUnEquip
struct AB_Ranged_Dual_Generic_MountedTurret_C_K2_OnUnEquip_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.Update Enemy Custom Depths
struct AB_Ranged_Dual_Generic_MountedTurret_C_Update_Enemy_Custom_Depths_Params
{
	bool                                               Enable_Or_Disable;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StencilBufferValue;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnWeaponAttached
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnWeaponAttached_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnInitAlteration
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnInitAlteration_Params
{
	class UFortAlterationItemDefinition*               NewAlteration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnInitCosmeticAlterations
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnInitCosmeticAlterations_Params
{
	struct FFortCosmeticModification                   CosmeticMod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UMaterialInstanceDynamic*                    DynamicMaterialInstance;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.SetWeaponPierceThrough
struct AB_Ranged_Dual_Generic_MountedTurret_C_SetWeaponPierceThrough_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetLimit;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.SetWeaponPierceThrough_ClientRep
struct AB_Ranged_Dual_Generic_MountedTurret_C_SetWeaponPierceThrough_ClientRep_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetLimit;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.ReceiveBeginPlay
struct AB_Ranged_Dual_Generic_MountedTurret_C_ReceiveBeginPlay_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnWeaponVisibilityChanged
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnWeaponVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.HideWeaponMesh
struct AB_Ranged_Dual_Generic_MountedTurret_C_HideWeaponMesh_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.ShowWeaponMesh
struct AB_Ranged_Dual_Generic_MountedTurret_C_ShowWeaponMesh_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.HideWeapon
struct AB_Ranged_Dual_Generic_MountedTurret_C_HideWeapon_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.ShowWeapon
struct AB_Ranged_Dual_Generic_MountedTurret_C_ShowWeapon_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.HandFired
struct AB_Ranged_Dual_Generic_MountedTurret_C_HandFired_Params
{
	EDualWeaponHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPersistantFire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.BindOnHandFired
struct AB_Ranged_Dual_Generic_MountedTurret_C_BindOnHandFired_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnStartOverheated
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnStartOverheated_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnStartHeating
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnStartHeating_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnStartCooling
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnStartCooling_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnFinishedCooling
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnFinishedCooling_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.OnLocalFailedToFireWhenOverheated
struct AB_Ranged_Dual_Generic_MountedTurret_C_OnLocalFailedToFireWhenOverheated_Params
{
};

// Function B_Ranged_Dual_Generic_MountedTurret.B_Ranged_Dual_Generic_MountedTurret_C.ExecuteUbergraph_B_Ranged_Dual_Generic_MountedTurret
struct AB_Ranged_Dual_Generic_MountedTurret_C_ExecuteUbergraph_B_Ranged_Dual_Generic_MountedTurret_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
