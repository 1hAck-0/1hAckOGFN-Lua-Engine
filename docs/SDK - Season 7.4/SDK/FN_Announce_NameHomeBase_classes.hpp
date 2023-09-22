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

// BlueprintGeneratedClass Announce_NameHomeBase.Announce_NameHomeBase_C
// 0x0008 (0x0590 - 0x0588)
class AAnnounce_NameHomeBase_C : public AAnnounce_TutorialConversation_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0588(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_NameHomeBase.Announce_NameHomeBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void InitAnnouncement();
	void HandleSentenceStart_UI(int SentenceIdx);
	void HandleSentenceStop_UI(int SentenceIdx);
	void ExecuteUbergraph_Announce_NameHomeBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
