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

// 0x0 (0x28 - 0x28)
// Class McpProfileSys.McpItemAware
class UMcpItemAware : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpItemAware");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class McpProfileSys.McpItemDefinitionBase
class UMcpItemDefinitionBase : public UPrimaryDataAsset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpItemDefinitionBase");
		return Clss;
	}

};

// 0x298 (0x2C0 - 0x28)
// Class McpProfileSys.McpProfile
class UMcpProfile : public UObject
{
public:
	enum class EServerClientFlag                 AllowSubscriptionToNotificationsService;           // 0x28(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F15[0xA7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DebugName;                                         // 0xD0(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bProfileLockOperationPending;                      // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bProfileUnlockOperationPending;                    // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableMocks;                                      // 0xE2(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F16[0x1D];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMcpProfileGroup*                      ProfileGroup;                                      // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ProfileId;                                         // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int64                                        ProfileRevision;                                   // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        FullProfileQueryQueued;                            // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShouldCreateInstances;                            // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bProfileWriteLocked;                               // 0x125(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F17[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             ProfileWriteLockExpireTime;                        // 0x128(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CommandRevision;                                   // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F18[0x18C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpProfile");
		return Clss;
	}

	void UnlockProfileForWrite(const class FString& Code, struct FDedicatedServerUrlContext* Context);
	void QueryPublicProfile(struct FBaseUrlContext* Context);
	void QueryProfile(struct FBaseUrlContext* Context);
	void LockProfileForWrite(const class FString& Code, int32 Timeout, struct FDedicatedServerUrlContext* Context);
	void DeleteProfile(struct FClientUrlContext* Context);
	void DeleteAllProfiles(struct FClientUrlContext* Context);
};

// 0x268 (0x290 - 0x28)
// Class McpProfileSys.McpProfileGroup
class UMcpProfileGroup : public UObject
{
public:
	uint8                                        Pad_F19[0xF0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DelayMcpResults;                                   // 0x118(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        WeeklyIntervalStartDay;                            // 0x11C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FProfileEntry>                 ProfileList;                                       // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bIsInitialized;                                    // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F1A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlayerName;                                        // 0x138(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsServer;                                         // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F1B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProfileNotificationsStompTopic;                    // 0x150(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F1C[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LastMcpVersion;                                    // 0x1A0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                LastContentVersion;                                // 0x1B0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimespan                             LocalTimeOffset;                                   // 0x1C0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FProfileHttpRequest>           PendingRequests;                                   // 0x1C8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F1D[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsProcessingRequestGenerator;                     // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F1E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LockCode;                                          // 0x1F0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMcpProfile*>                   LockedProfiles;                                    // 0x200(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                LockedProfilesString;                              // 0x210(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ProfileWriteLockTimeoutSecs;                       // 0x220(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSubscribedToNotifications;                        // 0x224(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F1F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ApplyStashEndPoint;                                // 0x228(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPendingInterceptedRequest;                        // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F20[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSendProfileCommandRevisions;                      // 0x248(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F21[0x47];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpProfileGroup");
		return Clss;
	}

};

// 0x30 (0x58 - 0x28)
// Class McpProfileSys.McpProfileManager
class UMcpProfileManager : public UObject
{
public:
	uint8                                        Pad_F22[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FProfileGroupEntry>            ServerProfileGroups;                               // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FProfileGroupEntry>            ClientProfileGroups;                               // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("McpProfileManager");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
