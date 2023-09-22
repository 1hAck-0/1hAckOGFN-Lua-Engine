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

// Function FXSkeletonMeshComponent.FXSkeletonMeshComponent_C.ApplyAwakenEffect
struct UFXSkeletonMeshComponent_C_ApplyAwakenEffect_Params
{
};

// Function FXSkeletonMeshComponent.FXSkeletonMeshComponent_C.ApplyEffect
struct UFXSkeletonMeshComponent_C_ApplyEffect_Params
{
	class UMaterialInterface*                          SourceMaterial;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeInTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FXSkeletonMeshComponent.FXSkeletonMeshComponent_C.ApplyBuildingHitEffect
struct UFXSkeletonMeshComponent_C_ApplyBuildingHitEffect_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
