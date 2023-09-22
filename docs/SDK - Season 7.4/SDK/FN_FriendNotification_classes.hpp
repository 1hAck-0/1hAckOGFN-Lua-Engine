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

// BlueprintGeneratedClass FriendNotification.FriendNotification_C
// 0x0008 (0x00E0 - 0x00D8)
class UFriendNotification_C : public UFortUIFriendNotification
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FriendNotification.FriendNotification_C");
		return ptr;
	}


	void JoinPartyInvite();
	void ShowFriendInvites();
	void ShowPartyInvites();
	void ExecuteUbergraph_FriendNotification(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
