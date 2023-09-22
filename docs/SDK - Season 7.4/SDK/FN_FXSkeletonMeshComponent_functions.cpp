// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FXSkeletonMeshComponent.FXSkeletonMeshComponent_C.ApplyAwakenEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UFXSkeletonMeshComponent_C::ApplyAwakenEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function FXSkeletonMeshComponent.FXSkeletonMeshComponent_C.ApplyAwakenEffect");

	UFXSkeletonMeshComponent_C_ApplyAwakenEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FXSkeletonMeshComponent.FXSkeletonMeshComponent_C.ApplyEffect
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      SourceMaterial                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeInTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeOutTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFXSkeletonMeshComponent_C::ApplyEffect(class UMaterialInterface* SourceMaterial, float FadeInTime, float Duration, float FadeOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FXSkeletonMeshComponent.FXSkeletonMeshComponent_C.ApplyEffect");

	UFXSkeletonMeshComponent_C_ApplyEffect_Params params;
	params.SourceMaterial = SourceMaterial;
	params.FadeInTime = FadeInTime;
	params.Duration = Duration;
	params.FadeOutTime = FadeOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FXSkeletonMeshComponent.FXSkeletonMeshComponent_C.ApplyBuildingHitEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UFXSkeletonMeshComponent_C::ApplyBuildingHitEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function FXSkeletonMeshComponent.FXSkeletonMeshComponent_C.ApplyBuildingHitEffect");

	UFXSkeletonMeshComponent_C_ApplyBuildingHitEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
