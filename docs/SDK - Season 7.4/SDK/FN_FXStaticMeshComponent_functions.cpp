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

// Function FXStaticMeshComponent.FXStaticMeshComponent_C.ApplyAwakenEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UFXStaticMeshComponent_C::ApplyAwakenEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function FXStaticMeshComponent.FXStaticMeshComponent_C.ApplyAwakenEffect");

	UFXStaticMeshComponent_C_ApplyAwakenEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FXStaticMeshComponent.FXStaticMeshComponent_C.ApplyEffect
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Source_Material                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeInTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeOutTimer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFXStaticMeshComponent_C::ApplyEffect(class UMaterialInterface* Source_Material, float FadeInTime, float Duration, float FadeOutTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function FXStaticMeshComponent.FXStaticMeshComponent_C.ApplyEffect");

	UFXStaticMeshComponent_C_ApplyEffect_Params params;
	params.Source_Material = Source_Material;
	params.FadeInTime = FadeInTime;
	params.Duration = Duration;
	params.FadeOutTimer = FadeOutTimer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FXStaticMeshComponent.FXStaticMeshComponent_C.ApplyBuildingHitEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UFXStaticMeshComponent_C::ApplyBuildingHitEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function FXStaticMeshComponent.FXStaticMeshComponent_C.ApplyBuildingHitEffect");

	UFXStaticMeshComponent_C_ApplyBuildingHitEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
