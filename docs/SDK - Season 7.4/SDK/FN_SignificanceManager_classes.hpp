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

// Class SignificanceManager.SignificanceManager
// 0x0118 (0x0140 - 0x0028)
class USignificanceManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0028(0x00D8) MISSED OFFSET
	struct FSoftClassPath                              SignificanceManagerClassName;                             // 0x0100(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig, NoClear)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0118(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SignificanceManager.SignificanceManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
