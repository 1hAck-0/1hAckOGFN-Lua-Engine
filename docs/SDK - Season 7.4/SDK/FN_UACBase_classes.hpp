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

// Class UACBase.UACNetworkComponent
// 0x0100 (0x01F8 - 0x00F8)
class UUACNetworkComponent : public UActorComponent
{
public:
	int                                                PlayerID;                                                 // 0x00F8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xFC];                                      // 0x00FC(0x00FC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UACBase.UACNetworkComponent");
		return ptr;
	}


	void SendPacketToServer(unsigned char Type, TArray<unsigned char> Packet);
	void SendPacketToClient(unsigned char Type, TArray<unsigned char> Packet);
	void SendClientHello(uint32_t SessionKey);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
