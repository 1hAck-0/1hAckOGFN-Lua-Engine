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

// BlueprintGeneratedClass UpgradeMonitor.UpgradeMonitor_C
// 0x0030 (0x0360 - 0x0330)
class AUpgradeMonitor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Monitor;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              IconTransition_NoiseTrack;                                // 0x0348(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    IconTransition__Direction;                                // 0x034C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          IconTransition;                                           // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_MonitorScreen;                                        // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UpgradeMonitor.UpgradeMonitor_C");
		return ptr;
	}


	void SetMonitorDistort();
	void SetUtilities_Icon(class UTexture2D* Active_Icon);
	void UserConstructionScript();
	void IconTransition__FinishedFunc();
	void IconTransition__UpdateFunc();
	void Activate_Utilities();
	void Activate_Gadgets();
	void Activation_Distortion();
	void ExecuteUbergraph_UpgradeMonitor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
