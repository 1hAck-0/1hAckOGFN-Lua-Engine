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

// BlueprintGeneratedClass FXSkeletonMeshComponent.FXSkeletonMeshComponent_C
// 0x0000 (0x0BE0 - 0x0BE0)
class UFXSkeletonMeshComponent_C : public UFortFXSkeletonMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FXSkeletonMeshComponent.FXSkeletonMeshComponent_C");
		return ptr;
	}


	void ApplyAwakenEffect();
	void ApplyEffect(class UMaterialInterface* SourceMaterial, float FadeInTime, float Duration, float FadeOutTime);
	void ApplyBuildingHitEffect();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
