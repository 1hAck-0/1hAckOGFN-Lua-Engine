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

// Function LocalUserEntry.LocalUserEntry_C.HandleOnlineIndicatorView
struct ULocalUserEntry_C_HandleOnlineIndicatorView_Params
{
	ELocalUserOnlineStatus                             InLocalUserOnlineStatus;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LocalUserEntry.LocalUserEntry_C.BP_OnHovered
struct ULocalUserEntry_C_BP_OnHovered_Params
{
};

// Function LocalUserEntry.LocalUserEntry_C.BP_OnUnhovered
struct ULocalUserEntry_C_BP_OnUnhovered_Params
{
};

// Function LocalUserEntry.LocalUserEntry_C.OnOnlineStatusChanged
struct ULocalUserEntry_C_OnOnlineStatusChanged_Params
{
	ELocalUserOnlineStatus                             OnlineStatus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LocalUserEntry.LocalUserEntry_C.ExecuteUbergraph_LocalUserEntry
struct ULocalUserEntry_C_ExecuteUbergraph_LocalUserEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
