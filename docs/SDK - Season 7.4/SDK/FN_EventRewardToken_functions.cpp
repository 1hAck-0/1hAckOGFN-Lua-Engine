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

// Function EventRewardToken.EventRewardToken_C.SetEventTokenRewarded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventToken                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UEventRewardToken_C::SetEventTokenRewarded(struct FString EventToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventRewardToken.EventRewardToken_C.SetEventTokenRewarded");

	UEventRewardToken_C_SetEventTokenRewarded_Params params;
	params.EventToken = EventToken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventRewardToken.EventRewardToken_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UEventRewardToken_C::RefreshDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventRewardToken.EventRewardToken_C.RefreshDataBP");

	UEventRewardToken_C_RefreshDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventRewardToken.EventRewardToken_C.ExecuteUbergraph_EventRewardToken
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventRewardToken_C::ExecuteUbergraph_EventRewardToken(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventRewardToken.EventRewardToken_C.ExecuteUbergraph_EventRewardToken");

	UEventRewardToken_C_ExecuteUbergraph_EventRewardToken_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
