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

// 0x838 (0x860 - 0x28)
// Class Account.OnlineAccountCommon
class UOnlineAccountCommon : public UObject
{
public:
	uint8                                        Pad_115C[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AvailabilityServiceGameName;                       // 0x38(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRequireLightswitchAtStartup;                      // 0x48(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_115D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EulaKey;                                           // 0x50(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FWebEnvUrl>                    WebCreateEpicAccountUrl;                           // 0x60(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	bool                                         bAllowLocalLogout;                                 // 0x70(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldGrantFreeAccess;                            // 0x71(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_115E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUseGameSubAccessRedemption;                       // 0x73(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowHomeSharingAccess;                           // 0x74(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_115F[0x283];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UWaitingRoomState*                     WaitingRoomState;                                  // 0x2F8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1160[0x560];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnlineAccountCommon");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class Account.ExternalAccountProvider
class UExternalAccountProvider : public UObject
{
public:
	TArray<struct FExternalAccountServiceConfig> Services;                                          // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ExternalAccountProvider");
		return Clss;
	}

};

// 0x98 (0xC0 - 0x28)
// Class Account.WaitingRoomState
class UWaitingRoomState : public UObject
{
public:
	uint8                                        Pad_1161[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GracePeriodMins;                                   // 0x5C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1162[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WaitingRoomState");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
