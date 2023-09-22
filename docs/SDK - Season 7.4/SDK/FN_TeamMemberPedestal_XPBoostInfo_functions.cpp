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

// Function TeamMemberPedestal_XPBoostInfo.TeamMemberPedestal_XPBoostInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTeamMemberPedestal_XPBoostInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal_XPBoostInfo.TeamMemberPedestal_XPBoostInfo_C.Construct");

	UTeamMemberPedestal_XPBoostInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal_XPBoostInfo.TeamMemberPedestal_XPBoostInfo_C.OnCameraChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndCamera                NewCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFrontEndCamera                OldCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamMemberPedestal_XPBoostInfo_C::OnCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal_XPBoostInfo.TeamMemberPedestal_XPBoostInfo_C.OnCameraChanged");

	UTeamMemberPedestal_XPBoostInfo_C_OnCameraChanged_Params params;
	params.NewCamera = NewCamera;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal_XPBoostInfo.TeamMemberPedestal_XPBoostInfo_C.ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamMemberPedestal_XPBoostInfo_C::ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal_XPBoostInfo.TeamMemberPedestal_XPBoostInfo_C.ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo");

	UTeamMemberPedestal_XPBoostInfo_C_ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
