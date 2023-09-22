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

// Function MissionVoteNotification.MissionVoteNotification_C.OnActionTaken
// (Event, Public, BlueprintEvent)

void UMissionVoteNotification_C::OnActionTaken()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVoteNotification.MissionVoteNotification_C.OnActionTaken");

	UMissionVoteNotification_C_OnActionTaken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionVoteNotification.MissionVoteNotification_C.ExecuteUbergraph_MissionVoteNotification
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionVoteNotification_C::ExecuteUbergraph_MissionVoteNotification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVoteNotification.MissionVoteNotification_C.ExecuteUbergraph_MissionVoteNotification");

	UMissionVoteNotification_C_ExecuteUbergraph_MissionVoteNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
