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

// BlueprintGeneratedClass WM_Camera.WM_Camera_C
// 0x00B0 (0x0930 - 0x0880)
class AWM_Camera_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TL_CameraDeactivateAnim_OutCurve;                         // 0x0888(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CameraDeactivateAnim__Direction;                       // 0x088C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x088D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_CameraDeactivateAnim;                                  // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_CameraActivateAnim_NewTrack;                           // 0x0898(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_CameraActivateAnim__Direction_ED6153E9442CF8BBFC62D28E1B56763B;// 0x089C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x089D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_CameraActivateAnim;                                    // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CameraNoise_Noise3_CAC0C7484A50FFB26B3B348FCDF148B0;      // 0x08A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CameraNoise_Noise2_CAC0C7484A50FFB26B3B348FCDF148B0;      // 0x08AC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CameraNoise_Noise1_CAC0C7484A50FFB26B3B348FCDF148B0;      // 0x08B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CameraNoise__Direction_CAC0C7484A50FFB26B3B348FCDF148B0;  // 0x08B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CameraNoise;                                              // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  InitialPosition;                                          // 0x08C0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  ZoomPosition;                                             // 0x08F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<class AWorldMapPin*>                        AllPinsArray;                                             // 0x0920(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WM_Camera.WM_Camera_C");
		return ptr;
	}


	void UserConstructionScript();
	void TL_CameraActivateAnim__FinishedFunc();
	void TL_CameraActivateAnim__UpdateFunc();
	void TL_CameraDeactivateAnim__FinishedFunc();
	void TL_CameraDeactivateAnim__UpdateFunc();
	void CameraNoise__FinishedFunc();
	void CameraNoise__UpdateFunc();
	void CameraActivateAnim();
	void StopWiggle();
	void CameraDeactivateAnim();
	void CameraWiggle();
	void OnDeactivated();
	void OnActivated();
	void ExecuteUbergraph_WM_Camera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
