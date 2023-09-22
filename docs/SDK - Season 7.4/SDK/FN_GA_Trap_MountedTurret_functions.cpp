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

// Function GA_Trap_MountedTurret.GA_Trap_MountedTurret_C.Removed
// (BlueprintCallable, BlueprintEvent)

void UGA_Trap_MountedTurret_C::Removed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Trap_MountedTurret.GA_Trap_MountedTurret_C.Removed");

	UGA_Trap_MountedTurret_C_Removed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Trap_MountedTurret.GA_Trap_MountedTurret_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Trap_MountedTurret_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Trap_MountedTurret.GA_Trap_MountedTurret_C.K2_ActivateAbility");

	UGA_Trap_MountedTurret_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Trap_MountedTurret.GA_Trap_MountedTurret_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Trap_MountedTurret_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Trap_MountedTurret.GA_Trap_MountedTurret_C.K2_OnEndAbility");

	UGA_Trap_MountedTurret_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Trap_MountedTurret.GA_Trap_MountedTurret_C.ExecuteUbergraph_GA_Trap_MountedTurret
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Trap_MountedTurret_C::ExecuteUbergraph_GA_Trap_MountedTurret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Trap_MountedTurret.GA_Trap_MountedTurret_C.ExecuteUbergraph_GA_Trap_MountedTurret");

	UGA_Trap_MountedTurret_C_ExecuteUbergraph_GA_Trap_MountedTurret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
