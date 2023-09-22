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

// Function GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.CommitAbilityWithEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passed                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGAT_ActiveAbility_Hero_C::CommitAbilityWithEvent(bool* Passed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.CommitAbilityWithEvent");

	UGAT_ActiveAbility_Hero_C_CommitAbilityWithEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passed != nullptr)
		*Passed = params.Passed;
}


// Function GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAT_ActiveAbility_Hero_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.K2_ActivateAbility");

	UGAT_ActiveAbility_Hero_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.ExecuteUbergraph_GAT_ActiveAbility_Hero
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_ActiveAbility_Hero_C::ExecuteUbergraph_GAT_ActiveAbility_Hero(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.ExecuteUbergraph_GAT_ActiveAbility_Hero");

	UGAT_ActiveAbility_Hero_C_ExecuteUbergraph_GAT_ActiveAbility_Hero_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
