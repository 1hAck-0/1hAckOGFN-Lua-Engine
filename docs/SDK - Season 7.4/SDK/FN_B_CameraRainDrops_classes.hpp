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

// BlueprintGeneratedClass B_CameraRainDrops.B_CameraRainDrops
// 0x0018 (0x0408 - 0x03F0)
class AB_CameraRainDrops : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Alpha_Alpha;                                              // 0x03F8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Alpha__Direction;                                         // 0x03FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Alpha;                                                    // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_CameraRainDrops.B_CameraRainDrops");
		return ptr;
	}


	void UserConstructionScript();
	void Alpha__FinishedFunc();
	void Alpha__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_CameraRainDrops(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
