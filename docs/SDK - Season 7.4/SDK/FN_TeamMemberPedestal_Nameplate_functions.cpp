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

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnReadyStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsReadyForMatchmaking         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamMemberPedestal_Nameplate_C::OnReadyStatusChanged(bool bIsReadyForMatchmaking)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnReadyStatusChanged");

	UTeamMemberPedestal_Nameplate_C_OnReadyStatusChanged_Params params;
	params.bIsReadyForMatchmaking = bIsReadyForMatchmaking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnTeamMemberEstablished
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        UniqueId                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTeamMemberPedestal_Nameplate_C::OnTeamMemberEstablished(struct FUniqueNetIdRepl UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnTeamMemberEstablished");

	UTeamMemberPedestal_Nameplate_C_OnTeamMemberEstablished_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTeamMemberPedestal_Nameplate_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.Construct");

	UTeamMemberPedestal_Nameplate_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnFrontEndCameraChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndCamera                NewCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFrontEndCamera                OldCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamMemberPedestal_Nameplate_C::OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnFrontEndCameraChanged");

	UTeamMemberPedestal_Nameplate_C_OnFrontEndCameraChanged_Params params;
	params.NewCamera = NewCamera;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnPlayReadyAudio
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsReadyForMatchmaking         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamMemberPedestal_Nameplate_C::OnPlayReadyAudio(bool bIsReadyForMatchmaking)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnPlayReadyAudio");

	UTeamMemberPedestal_Nameplate_C_OnPlayReadyAudio_Params params;
	params.bIsReadyForMatchmaking = bIsReadyForMatchmaking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.ExecuteUbergraph_TeamMemberPedestal_Nameplate
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamMemberPedestal_Nameplate_C::ExecuteUbergraph_TeamMemberPedestal_Nameplate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.ExecuteUbergraph_TeamMemberPedestal_Nameplate");

	UTeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
