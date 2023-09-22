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

// Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
// 0x0008 (0x0100 - 0x00F8)
class UEasyAntiCheatNetComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EasyAntiCheatCommon.EasyAntiCheatNetComponent");
		return ptr;
	}


	void ServerMessage(TArray<unsigned char> MESSAGE);
	void ClientMessage(TArray<unsigned char> MESSAGE);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
