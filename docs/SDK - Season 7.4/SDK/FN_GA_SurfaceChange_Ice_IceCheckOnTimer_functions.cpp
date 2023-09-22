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

// Function GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_SurfaceChange_Ice_IceCheckOnTimer_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.K2_ActivateAbility");

	UGA_SurfaceChange_Ice_IceCheckOnTimer_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_SurfaceChange_Ice_IceCheckOnTimer_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.K2_OnEndAbility");

	UGA_SurfaceChange_Ice_IceCheckOnTimer_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.TraceForTerrain
// (BlueprintCallable, BlueprintEvent)

void UGA_SurfaceChange_Ice_IceCheckOnTimer_C::TraceForTerrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.TraceForTerrain");

	UGA_SurfaceChange_Ice_IceCheckOnTimer_C_TraceForTerrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.RemoveIceGE
// (BlueprintCallable, BlueprintEvent)

void UGA_SurfaceChange_Ice_IceCheckOnTimer_C::RemoveIceGE()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.RemoveIceGE");

	UGA_SurfaceChange_Ice_IceCheckOnTimer_C_RemoveIceGE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_SurfaceChange_Ice_IceCheckOnTimer_C::ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer");

	UGA_SurfaceChange_Ice_IceCheckOnTimer_C_ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
