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

// Function FXStaticMeshComponent.FXStaticMeshComponent_C.ApplyAwakenEffect
struct UFXStaticMeshComponent_C_ApplyAwakenEffect_Params
{
};

// Function FXStaticMeshComponent.FXStaticMeshComponent_C.ApplyEffect
struct UFXStaticMeshComponent_C_ApplyEffect_Params
{
	class UMaterialInterface*                          Source_Material;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeInTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutTimer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FXStaticMeshComponent.FXStaticMeshComponent_C.ApplyBuildingHitEffect
struct UFXStaticMeshComponent_C_ApplyBuildingHitEffect_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
