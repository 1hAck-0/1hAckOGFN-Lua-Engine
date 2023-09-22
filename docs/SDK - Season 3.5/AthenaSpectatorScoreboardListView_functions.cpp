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


// Function AthenaSpectatorScoreboardListView.AthenaSpectatorScoreboardListView_C.ResetFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSelectedIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorScoreboardListView_C::ResetFocus(class UObject* CallFunc_GetItemAt_ReturnValue, bool CallFunc_SetSelectedIndex_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSpectatorScoreboardListView_C", "ResetFocus");

	Params::UAthenaSpectatorScoreboardListView_C_ResetFocus_Params Parms;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.CallFunc_SetSelectedIndex_ReturnValue = CallFunc_SetSelectedIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
