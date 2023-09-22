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

// Class McpProfileSys.McpItemAware
// 0x0000 (0x0028 - 0x0028)
class UMcpItemAware : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class McpProfileSys.McpItemAware");
		return ptr;
	}

};


// Class McpProfileSys.McpItemDefinitionBase
// 0x0000 (0x0030 - 0x0030)
class UMcpItemDefinitionBase : public UPrimaryDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class McpProfileSys.McpItemDefinitionBase");
		return ptr;
	}

};


// Class McpProfileSys.McpProfile
// 0x0160 (0x0188 - 0x0028)
class UMcpProfile : public UObject
{
public:
	EServerClientFlag                                  AllowSubscriptionToNotificationsService;                  // 0x0028(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x57];                                      // 0x0029(0x0057) MISSED OFFSET
	struct FString                                     DebugName;                                                // 0x0080(0x0010) (ZeroConstructor)
	bool                                               bProfileLockOperationPending;                             // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bProfileUnlockOperationPending;                           // 0x0091(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableMocks;                                             // 0x0092(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1D];                                      // 0x0093(0x001D) MISSED OFFSET
	class UMcpProfileGroup*                            ProfileGroup;                                             // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ProfileId;                                                // 0x00B8(0x0010) (ZeroConstructor)
	int64_t                                            ProfileRevision;                                          // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                FullProfileQueryQueued;                                   // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bProfileWriteLocked;                                      // 0x00D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	struct FDateTime                                   ProfileWriteLockExpireTime;                               // 0x00D8(0x0008) (ZeroConstructor)
	int                                                CommandRevision;                                          // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xA4];                                      // 0x00E4(0x00A4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class McpProfileSys.McpProfile");
		return ptr;
	}


	void UnlockProfileForWrite(struct FString Code, struct FDedicatedServerUrlContext* Context);
	void QueryPublicProfile(struct FBaseUrlContext* Context);
	void QueryProfile(struct FBaseUrlContext* Context);
	void LockProfileForWrite(struct FString Code, int Timeout, struct FDedicatedServerUrlContext* Context);
	void DeleteProfile(struct FClientUrlContext* Context);
	void DeleteAllProfiles(struct FClientUrlContext* Context);
};


// Class McpProfileSys.McpProfileGroup
// 0x01E8 (0x0210 - 0x0028)
class UMcpProfileGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET
	int                                                DelayMcpResults;                                          // 0x00C8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                WeeklyIntervalStartDay;                                   // 0x00CC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FProfileEntry>                       ProfileList;                                              // 0x00D0(0x0010) (ZeroConstructor)
	bool                                               bIsInitialized;                                           // 0x00E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x00E8(0x0010) (ZeroConstructor)
	bool                                               bIsServer;                                                // 0x00F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	struct FString                                     ProfileNotificationsStompTopic;                           // 0x0100(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData03[0x40];                                      // 0x0110(0x0040) MISSED OFFSET
	struct FString                                     LastMcpVersion;                                           // 0x0150(0x0010) (ZeroConstructor)
	struct FString                                     LastContentVersion;                                       // 0x0160(0x0010) (ZeroConstructor)
	struct FTimespan                                   LocalTimeOffset;                                          // 0x0170(0x0008) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0178(0x0010) MISSED OFFSET
	bool                                               bIsProcessingRequestGenerator;                            // 0x0188(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0189(0x0007) MISSED OFFSET
	struct FString                                     LockCode;                                                 // 0x0190(0x0010) (ZeroConstructor)
	TArray<class UMcpProfile*>                         LockedProfiles;                                           // 0x01A0(0x0010) (ZeroConstructor)
	struct FString                                     LockedProfilesString;                                     // 0x01B0(0x0010) (ZeroConstructor)
	int                                                ProfileWriteLockTimeoutSecs;                              // 0x01C0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSubscribedToNotifications;                               // 0x01C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x01C5(0x0003) MISSED OFFSET
	struct FString                                     ApplyStashEndPoint;                                       // 0x01C8(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData07[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET
	bool                                               bSendProfileCommandRevisions;                             // 0x01E0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAsyncParseProfileUpdates;                                // 0x01E1(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2E];                                      // 0x01E2(0x002E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class McpProfileSys.McpProfileGroup");
		return ptr;
	}

};


// Class McpProfileSys.McpProfileManager
// 0x0030 (0x0058 - 0x0028)
class UMcpProfileManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TArray<struct FProfileGroupEntry>                  ServerProfileGroups;                                      // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FProfileGroupEntry>                  ClientProfileGroups;                                      // 0x0048(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class McpProfileSys.McpProfileManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
