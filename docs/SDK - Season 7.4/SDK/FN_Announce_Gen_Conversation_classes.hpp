#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Announce_Gen_Conversation.Announce_Gen_Conversation_C
// 0x0008 (0x0418 - 0x0410)
class AAnnounce_Gen_Conversation_C : public AFortClientAnnouncement_Conversation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_Gen_Conversation.Announce_Gen_Conversation_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnConversationFinished(struct FFortConversationSentence FinishingSentence, int FinishingSentenceSentenceIndex);
	void ExecuteUbergraph_Announce_Gen_Conversation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
