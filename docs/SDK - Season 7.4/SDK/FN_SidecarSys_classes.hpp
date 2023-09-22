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

// Class SidecarSys.SidecarSys
// 0x00B0 (0x00D8 - 0x0028)
class USidecarSys : public UObject
{
public:
	TMap<struct FString, struct FSidecarFileInfo>      FileInfoMap;                                              // 0x0028(0x0050) (ZeroConstructor)
	struct FString                                     DssDownloadUrl;                                           // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     DssCheckoutUrl;                                           // 0x0088(0x0010) (ZeroConstructor)
	struct FString                                     DssUploadUrl;                                             // 0x0098(0x0010) (ZeroConstructor)
	struct FString                                     DssRestoreUrl;                                            // 0x00A8(0x0010) (ZeroConstructor)
	struct FString                                     DssCheckinUrl;                                            // 0x00B8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SidecarSys.SidecarSys");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
