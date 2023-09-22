#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnReadyStatusChanged
struct UTeamMemberPedestal_Nameplate_C_OnReadyStatusChanged_Params
{
	bool                                               bIsReadyForMatchmaking;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnTeamMemberEstablished
struct UTeamMemberPedestal_Nameplate_C_OnTeamMemberEstablished_Params
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.Construct
struct UTeamMemberPedestal_Nameplate_C_Construct_Params
{
};

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnFrontEndCameraChanged
struct UTeamMemberPedestal_Nameplate_C_OnFrontEndCameraChanged_Params
{
	EFrontEndCamera                                    NewCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFrontEndCamera                                    OldCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.OnPlayReadyAudio
struct UTeamMemberPedestal_Nameplate_C_OnPlayReadyAudio_Params
{
	bool                                               bIsReadyForMatchmaking;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C.ExecuteUbergraph_TeamMemberPedestal_Nameplate
struct UTeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
