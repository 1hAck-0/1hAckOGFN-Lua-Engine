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

// Function GA_Blade_InitialEquip.GA_Blade_InitialEquip_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Blade_InitialEquip_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Blade_InitialEquip.GA_Blade_InitialEquip_C.K2_ActivateAbility");

	UGA_Blade_InitialEquip_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Blade_InitialEquip.GA_Blade_InitialEquip_C.ExecuteUbergraph_GA_Blade_InitialEquip
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Blade_InitialEquip_C::ExecuteUbergraph_GA_Blade_InitialEquip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Blade_InitialEquip.GA_Blade_InitialEquip_C.ExecuteUbergraph_GA_Blade_InitialEquip");

	UGA_Blade_InitialEquip_C_ExecuteUbergraph_GA_Blade_InitialEquip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
