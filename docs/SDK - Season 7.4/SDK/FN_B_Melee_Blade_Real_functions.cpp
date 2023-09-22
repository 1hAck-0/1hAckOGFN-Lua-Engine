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

// Function B_Melee_Blade_Real.B_Melee_Blade_Real_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Melee_Blade_Real_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Blade_Real.B_Melee_Blade_Real_C.UserConstructionScript");

	AB_Melee_Blade_Real_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Blade_Real.B_Melee_Blade_Real_C.OnPlayImpactFX
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>  ImpactPhysicalSurface          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* SpawnedPSC                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_Melee_Blade_Real_C::OnPlayImpactFX(struct FHitResult HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, class UParticleSystemComponent* SpawnedPSC)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Blade_Real.B_Melee_Blade_Real_C.OnPlayImpactFX");

	AB_Melee_Blade_Real_C_OnPlayImpactFX_Params params;
	params.HitResult = HitResult;
	params.ImpactPhysicalSurface = ImpactPhysicalSurface;
	params.SpawnedPSC = SpawnedPSC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Blade_Real.B_Melee_Blade_Real_C.ExecuteUbergraph_B_Melee_Blade_Real
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Melee_Blade_Real_C::ExecuteUbergraph_B_Melee_Blade_Real(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Blade_Real.B_Melee_Blade_Real_C.ExecuteUbergraph_B_Melee_Blade_Real");

	AB_Melee_Blade_Real_C_ExecuteUbergraph_B_Melee_Blade_Real_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
