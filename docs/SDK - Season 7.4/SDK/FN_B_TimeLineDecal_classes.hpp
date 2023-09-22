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

// BlueprintGeneratedClass B_TimeLineDecal.B_TimeLineDecal_C
// 0x0030 (0x0360 - 0x0330)
class AB_TimeLineDecal_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                             Decal;                                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline;                                                 // 0x0340(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline02;                                               // 0x0344(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline03;                                               // 0x0348(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline04;                                               // 0x034C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DecalMID;                                                 // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_TimeLineDecal.B_TimeLineDecal_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_TimeLineDecal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
