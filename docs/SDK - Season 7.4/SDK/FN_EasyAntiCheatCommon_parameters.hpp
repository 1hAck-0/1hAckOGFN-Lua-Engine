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

// Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage
struct UEasyAntiCheatNetComponent_ServerMessage_Params
{
	TArray<unsigned char>                              MESSAGE;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage
struct UEasyAntiCheatNetComponent_ClientMessage_Params
{
	TArray<unsigned char>                              MESSAGE;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
