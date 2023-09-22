#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// Class Party.Chatroom
class UChatroom : public UObject
{
public:
	class FString                                CurrentChatRoomId;                                 // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxChatRoomRetries;                                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumChatRoomRetries;                                // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F86[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Chatroom");
		return Clss;
	}

};

// 0x478 (0x4A0 - 0x28)
// Class Party.Party
class UParty : public UObject
{
public:
	uint8                                        Pad_F87[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DefaultMaxPartySize;                               // 0x98(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F88[0x14];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bLeavingPersistentParty;                           // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F89[0x3EF];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Party");
		return Clss;
	}

};

// 0x500 (0x528 - 0x28)
// Class Party.PartyGameState
class UPartyGameState : public UObject
{
public:
	class UScriptStruct*                         PartyStateRefDef;                                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F8A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      OwningUserId;                                      // 0x38(0x28)(Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F8B[0x58];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bDebugAcceptingMembers;                            // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F8C[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bStayWithPartyOnDisconnect;                        // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F8D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UPartyMemberState>         PartyMemberStateClass;                             // 0xD8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F8E[0x108];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class APartyBeaconClient>        ReservationBeaconClientClass;                      // 0x1E8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APartyBeaconClient*                    ReservationBeaconClient;                           // 0x1F0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F8F[0x330];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PartyGameState");
		return Clss;
	}

};

// 0x60 (0x88 - 0x28)
// Class Party.PartyMemberState
class UPartyMemberState : public UObject
{
public:
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x28(0x28)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	class UScriptStruct*                         MemberStateRefDef;                                 // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F90[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bHasAnnouncedJoin;                                 // 0x80(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F91[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PartyMemberState");
		return Clss;
	}

	bool IsPartyLeader();
	bool IsLocalPlayer();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
