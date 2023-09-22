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

// Function GA_Athena_Fly.GA_Athena_Fly_C.Added
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Fly_C::Added()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Fly.GA_Athena_Fly_C.Added");

	UGA_Athena_Fly_C_Added_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Fly.GA_Athena_Fly_C.Removed_AAD5AA1645BDC2889C719BBCB8694960
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Fly_C::Removed_AAD5AA1645BDC2889C719BBCB8694960()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Fly.GA_Athena_Fly_C.Removed_AAD5AA1645BDC2889C719BBCB8694960");

	UGA_Athena_Fly_C_Removed_AAD5AA1645BDC2889C719BBCB8694960_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Fly.GA_Athena_Fly_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Fly_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Fly.GA_Athena_Fly_C.K2_ActivateAbility");

	UGA_Athena_Fly_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Fly.GA_Athena_Fly_C.ExecuteUbergraph_GA_Athena_Fly
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Fly_C::ExecuteUbergraph_GA_Athena_Fly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Fly.GA_Athena_Fly_C.ExecuteUbergraph_GA_Athena_Fly");

	UGA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
