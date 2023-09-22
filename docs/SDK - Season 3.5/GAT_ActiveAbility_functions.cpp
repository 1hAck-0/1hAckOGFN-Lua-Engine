#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAT_ActiveAbility_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GAT_ActiveAbility_C", "K2_ActivateAbility");

	Params::UGAT_ActiveAbility_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.ExecuteUbergraph_GAT_ActiveAbility
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_ActiveAbility_C::ExecuteUbergraph_GAT_ActiveAbility(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GAT_ActiveAbility_C", "ExecuteUbergraph_GAT_ActiveAbility");

	Params::UGAT_ActiveAbility_C_ExecuteUbergraph_GAT_ActiveAbility_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
