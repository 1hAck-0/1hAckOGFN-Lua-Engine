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

// Function GA_GM_OnDmgDealt_LifeSteal.GA_GM_OnDmgDealt_LifeSteal_C.DoOnDmgDealtBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_GM_OnDmgDealt_LifeSteal_C::DoOnDmgDealtBehavior(struct FGameplayEventData EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_GM_OnDmgDealt_LifeSteal.GA_GM_OnDmgDealt_LifeSteal_C.DoOnDmgDealtBehavior");

	UGA_GM_OnDmgDealt_LifeSteal_C_DoOnDmgDealtBehavior_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_GM_OnDmgDealt_LifeSteal.GA_GM_OnDmgDealt_LifeSteal_C.ExecuteUbergraph_GA_GM_OnDmgDealt_LifeSteal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_GM_OnDmgDealt_LifeSteal_C::ExecuteUbergraph_GA_GM_OnDmgDealt_LifeSteal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_GM_OnDmgDealt_LifeSteal.GA_GM_OnDmgDealt_LifeSteal_C.ExecuteUbergraph_GA_GM_OnDmgDealt_LifeSteal");

	UGA_GM_OnDmgDealt_LifeSteal_C_ExecuteUbergraph_GA_GM_OnDmgDealt_LifeSteal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
