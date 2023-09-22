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

// Function GA_SpookyMist_EMPTYABILITY.GA_SpookyMist_EMPTYABILITY_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_SpookyMist_EMPTYABILITY_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_EMPTYABILITY.GA_SpookyMist_EMPTYABILITY_C.K2_ActivateAbility");

	UGA_SpookyMist_EMPTYABILITY_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SpookyMist_EMPTYABILITY.GA_SpookyMist_EMPTYABILITY_C.ExecuteUbergraph_GA_SpookyMist_EMPTYABILITY
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_SpookyMist_EMPTYABILITY_C::ExecuteUbergraph_GA_SpookyMist_EMPTYABILITY(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SpookyMist_EMPTYABILITY.GA_SpookyMist_EMPTYABILITY_C.ExecuteUbergraph_GA_SpookyMist_EMPTYABILITY");

	UGA_SpookyMist_EMPTYABILITY_C_ExecuteUbergraph_GA_SpookyMist_EMPTYABILITY_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
