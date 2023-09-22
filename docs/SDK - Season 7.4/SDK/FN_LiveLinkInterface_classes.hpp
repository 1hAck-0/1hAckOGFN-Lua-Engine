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

// Class LiveLinkInterface.LiveLinkSourceFactory
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkSourceFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSourceFactory");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkSourceSettings
// 0x0010 (0x0038 - 0x0028)
class ULiveLinkSourceSettings : public UObject
{
public:
	ELiveLinkSourceMode                                Mode;                                                     // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FLiveLinkInterpolationSettings              InterpolationSettings;                                    // 0x002C(0x0004) (Edit)
	struct FLiveLinkTimeSynchronizationSettings        TimeSynchronizationSettings;                              // 0x0030(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSourceSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
