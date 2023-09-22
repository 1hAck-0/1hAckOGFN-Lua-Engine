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

// Function Announce_Gen_Conversation.Announce_Gen_Conversation_C.UserConstructionScript
struct AAnnounce_Gen_Conversation_C_UserConstructionScript_Params
{
};

// Function Announce_Gen_Conversation.Announce_Gen_Conversation_C.OnConversationFinished
struct AAnnounce_Gen_Conversation_C_OnConversationFinished_Params
{
	struct FFortConversationSentence                   FinishingSentence;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                FinishingSentenceSentenceIndex;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announce_Gen_Conversation.Announce_Gen_Conversation_C.ExecuteUbergraph_Announce_Gen_Conversation
struct AAnnounce_Gen_Conversation_C_ExecuteUbergraph_Announce_Gen_Conversation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
