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

// 0x3A8 (0x3D0 - 0x28)
// Class Hotfix.OnlineHotfixManager
class UOnlineHotfixManager : public UObject
{
public:
	uint8                                        Pad_1017[0x368];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OssName;                                           // 0x390(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                HotfixManagerClassName;                            // 0x3A0(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DebugPrefix;                                       // 0x3B0(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       AssetsHotfixedFromIniFiles;                        // 0x3C0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnlineHotfixManager");
		return Clss;
	}

	void StartHotfixProcess();
};

// 0x258 (0x280 - 0x28)
// Class Hotfix.UpdateManager
class UUpdateManager : public UObject
{
public:
	uint8                                        Pad_1018[0x1C8];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HotfixCheckCompleteDelay;                          // 0x1F0(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UpdateCheckCompleteDelay;                          // 0x1F4(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HotfixAvailabilityCheckCompleteDelay;              // 0x1F8(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UpdateCheckAvailabilityCompleteDelay;              // 0x1FC(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AppSuspendedUpdateCheckTimeSeconds;                // 0x200(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1019[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bPlatformEnvironmentDetected;                      // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInitialUpdateFinished;                            // 0x211(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCheckHotfixAvailabilityOnly;                      // 0x212(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EUpdateState                      CurrentUpdateState;                                // 0x213(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        WorstNumFilesPendingLoadViewed;                    // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPatchCheckResult                 LastPatchCheckResult;                              // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHotfixResult                     LastHotfixResult;                                  // 0x219(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_101A[0x2E];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             LastUpdateCheck;                                   // 0x248(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_101B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EUpdateCompletionStatus           LastCompletionResult;                              // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_101C[0x17];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnum*                                 UpdateStateEnum;                                   // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEnum*                                 UpdateCompletionEnum;                              // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UpdateManager");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
