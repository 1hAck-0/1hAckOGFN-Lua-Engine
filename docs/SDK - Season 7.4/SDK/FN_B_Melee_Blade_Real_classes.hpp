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

// BlueprintGeneratedClass B_Melee_Blade_Real.B_Melee_Blade_Real_C
// 0x001C (0x0AD4 - 0x0AB8)
class AB_Melee_Blade_Real_C : public AB_Melee_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             SwordPos;                                                 // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ImpactTipLocation;                                        // 0x0AC8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Melee_Blade_Real.B_Melee_Blade_Real_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnPlayImpactFX(struct FHitResult HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, class UParticleSystemComponent* SpawnedPSC);
	void ExecuteUbergraph_B_Melee_Blade_Real(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
