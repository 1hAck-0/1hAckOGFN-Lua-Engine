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

// Class NetUI.BadNetworkIndicator
// 0x0050 (0x0280 - 0x0230)
class UBadNetworkIndicator : public UUserWidget
{
public:
	float                                              BadPingThreshold;                                         // 0x0230(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              SeverePingThreshold;                                      // 0x0234(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              BadPacketLossThreshold;                                   // 0x0238(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              SeverePacketLossThreshold;                                // 0x023C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0240(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0241(0x0003) MISSED OFFSET
	float                                              MinimumDisplayTime;                                       // 0x0244(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              UpdateTime;                                               // 0x0248(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x34];                                      // 0x024C(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NetUI.BadNetworkIndicator");
		return ptr;
	}


	void UpdateDisplay();
	bool ShouldDisplay();
	bool HasSeverePing();
	bool HasSeverePacketLoss();
	bool HasBadPing();
	bool HasBadPacketLoss();
	float GetPing();
	float GetPacketLoss();
};


// Class NetUI.NetDebugWidget
// 0x0100 (0x0330 - 0x0230)
class UNetDebugWidget : public UUserWidget
{
public:
	class UCommonTextBlock*                            PingUI;                                                   // 0x0230(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            PacketInRateUI;                                           // 0x0238(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            PacketOutRateUI;                                          // 0x0240(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            PacketInLossUI;                                           // 0x0248(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            PacketOutLossUI;                                          // 0x0250(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            UpBandwidthUI;                                            // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            DownBandwidthUI;                                          // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0268(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NetUI.NetDebugWidget");
		return ptr;
	}


	void StopTimer();
	void StartTimer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
