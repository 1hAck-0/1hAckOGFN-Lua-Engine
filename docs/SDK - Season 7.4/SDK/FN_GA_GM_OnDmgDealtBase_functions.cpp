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

// Function GA_GM_OnDmgDealtBase.GA_GM_OnDmgDealtBase_C.DoOnDmgDealtBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_GM_OnDmgDealtBase_C::DoOnDmgDealtBehavior(struct FGameplayEventData EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_GM_OnDmgDealtBase.GA_GM_OnDmgDealtBase_C.DoOnDmgDealtBehavior");

	UGA_GM_OnDmgDealtBase_C_DoOnDmgDealtBehavior_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_GM_OnDmgDealtBase.GA_GM_OnDmgDealtBase_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_GM_OnDmgDealtBase_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_GM_OnDmgDealtBase.GA_GM_OnDmgDealtBase_C.K2_ActivateAbilityFromEvent");

	UGA_GM_OnDmgDealtBase_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_GM_OnDmgDealtBase.GA_GM_OnDmgDealtBase_C.ExecuteUbergraph_GA_GM_OnDmgDealtBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_GM_OnDmgDealtBase_C::ExecuteUbergraph_GA_GM_OnDmgDealtBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_GM_OnDmgDealtBase.GA_GM_OnDmgDealtBase_C.ExecuteUbergraph_GA_GM_OnDmgDealtBase");

	UGA_GM_OnDmgDealtBase_C_ExecuteUbergraph_GA_GM_OnDmgDealtBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
