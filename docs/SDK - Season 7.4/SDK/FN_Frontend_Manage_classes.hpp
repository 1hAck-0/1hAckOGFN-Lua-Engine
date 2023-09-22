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

// BlueprintGeneratedClass Frontend_Manage.Frontend_Manage_C
// 0x0080 (0x03C8 - 0x0348)
class AFrontend_Manage_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CameraReturnTimeline_Time;                                // 0x0350(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CameraReturnTimeline__Direction;                          // 0x0354(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CameraReturnTimeline;                                     // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CameraLerpTimeline_Time;                                  // 0x0360(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CameraLerpTimeline__Direction;                            // 0x0364(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CameraLerpTimeline;                                       // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFrontend_Manage_Camera_C*                   Camera;                                                   // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0378(0x0008) MISSED OFFSET
	struct FTransform                                  CameraStartingTransform;                                  // 0x0380(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                CameraReturnTimer;                                        // 0x03B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      CAMERA_Sensei_ExecuteUbergraph_Frontend_Manage_RefProperty;// 0x03B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      CAMERA_Director_ExecuteUbergraph_Frontend_Manage_RefProperty;// 0x03C0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Frontend_Manage.Frontend_Manage_C");
		return ptr;
	}


	void CameraReturnTimeline__FinishedFunc();
	void CameraReturnTimeline__UpdateFunc();
	void CameraLerpTimeline__FinishedFunc();
	void CameraLerpTimeline__UpdateFunc();
	void ManageCameraSelected(bool IsSensei);
	void CameraReturn();
	void LerpCamera(bool IsSensei);
	void CameraDeselected();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Frontend_Manage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
