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

// Function MatchmakingInputIndicator.MatchmakingInputIndicator_C.OnInputSourceTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// ECommonInputType               InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMatchmakingInputIndicator_C::OnInputSourceTypeChanged(ECommonInputType InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchmakingInputIndicator.MatchmakingInputIndicator_C.OnInputSourceTypeChanged");

	UMatchmakingInputIndicator_C_OnInputSourceTypeChanged_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchmakingInputIndicator.MatchmakingInputIndicator_C.ExecuteUbergraph_MatchmakingInputIndicator
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMatchmakingInputIndicator_C::ExecuteUbergraph_MatchmakingInputIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchmakingInputIndicator.MatchmakingInputIndicator_C.ExecuteUbergraph_MatchmakingInputIndicator");

	UMatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
