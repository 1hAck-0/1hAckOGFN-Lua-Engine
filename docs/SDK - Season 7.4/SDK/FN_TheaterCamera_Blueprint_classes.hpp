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

// BlueprintGeneratedClass TheaterCamera_Blueprint.TheaterCamera_Blueprint_C
// 0x019C (0x0A1C - 0x0880)
class ATheaterCamera_Blueprint_C : public AFortTheaterCamera
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              FocusTimeline_Float_Curve_ADC98EA5D14E24EC78DD4F80C5102578;// 0x0888(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FocusTimeline__Direction_ADC98EA5D14E24EC78DD4F80C5102578;// 0x088C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x088D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FocusTimeline;                                            // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DebugZoomTL_CameraRotLevelMax;                            // 0x0898(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DebugZoomTL_CameraRotLevelZero;                           // 0x089C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DebugZoomTL_CameraOffsetX___LevelMax;                     // 0x08A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DebugZoomTL_CameraOffsetX___LevelZero;                    // 0x08A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DebugZoomTL_TotalNumberOfZoomLevels;                      // 0x08A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DebugZoomTL_CameraHeight_LevelMax;                        // 0x08AC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DebugZoomTL_CameraHeight_LevelZero;                       // 0x08B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DebugZoomTL_FOV_In;                                       // 0x08B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DebugZoomTL_FOV_Out;                                      // 0x08B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DebugZoomTL__Direction;                                   // 0x08BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          DebugZoomTL;                                              // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              WorldLocSnapSize;                                         // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraZHeightLevelZero;                                   // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraXOffsetLevelZero;                                   // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x08D4(0x0004) MISSED OFFSET
	class AFortTheaterMapTile*                         TargetTile;                                               // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentZoomPercentage;                                    // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NumberOfZoomLevels;                                       // 0x08E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoomDistanceUnitZ;                                        // 0x08E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentZoomLevel;                                         // 0x08EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FocusedTileLocWithOffset;                                 // 0x08F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MouseDown;                                                // 0x08FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x08FD(0x0003) MISSED OFFSET
	float                                              CurrentOffsetAmountX;                                     // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraXOffsetLevelMax;                                    // 0x0904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InitialZoomLevels;                                        // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ForwardVector;                                            // 0x090C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraYRotationLevelZero;                                 // 0x0918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetTileLoc;                                            // 0x091C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OldOffsetAmountX;                                         // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentFOV;                                               // 0x092C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FOVLevelZero;                                             // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FOVLevelMax;                                              // 0x0934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraZHeightLevelMax;                                    // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoomDistanceUnitX;                                        // 0x093C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugCameraZoom;                                          // 0x0940(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0941(0x0003) MISSED OFFSET
	float                                              CameraYRotationLevelMax;                                  // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SnapCameraToFocusedTile;                                  // 0x0948(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0949(0x0007) MISSED OFFSET
	TArray<struct FVector2D>                           CloudMaskLocations;                                       // 0x0950(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CloudMaskScale;                                           // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReadyForPings;                                            // 0x0964(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0965(0x0003) MISSED OFFSET
	TArray<class ABP_Hex_PARENT_C*>                    AllHexesArray;                                            // 0x0968(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<unsigned char>                              HexesPinged;                                              // 0x0978(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               AllHexesHavePingedOnce;                                   // 0x0988(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WaitForForceFocus;                                        // 0x0989(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AQuestIsPinned;                                           // 0x098A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5];                                       // 0x098B(0x0005) MISSED OFFSET
	TArray<bool>                                       PinnedQuestsArray;                                        // 0x0990(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               WaitForPinned;                                            // 0x09A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x09A1(0x0003) MISSED OFFSET
	struct FVector                                     HexWorldLocFromBP_Hex_PARENT;                             // 0x09A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxCameraDistance;                                        // 0x09B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HighestX_Value;                                           // 0x09B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HighestY_Value;                                           // 0x09B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalWidthOfHexPlane;                                     // 0x09BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HexPlaneBufferSize;                                       // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CenterLocOfAllHexes;                                      // 0x09C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector2D>                           RoadMaskLocations;                                        // 0x09D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                           TileType0_Locs;                                           // 0x09E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                           TileType1_Locs;                                           // 0x09F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                           TileType2_Locs;                                           // 0x0A00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TileTypeMaskScale;                                        // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSuspendInput;                                            // 0x0A14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0A15(0x0003) MISSED OFFSET
	float                                              LastZoomButtonHeldTime;                                   // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TheaterCamera_Blueprint.TheaterCamera_Blueprint_C");
		return ptr;
	}


	void ZoomCameraWithHeldGamepadInput();
	void SetSuspendInput(bool SuspendInput);
	bool IsInputSuspended();
	struct FVector2D NewFunction_1(class AActor* self2);
	void PanCamera(float DeltaX, float DeltaY);
	void HandleTheaterSelected(struct FString TheaterId);
	void ZoomCameraStep(bool Forward);
	void UserConstructionScript();
	void FocusTimeline__FinishedFunc();
	void FocusTimeline__UpdateFunc();
	void DebugZoomTL__FinishedFunc();
	void DebugZoomTL__UpdateFunc();
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_2(struct FKey Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_1(struct FKey Key);
	void OnActivated();
	void OnDeactivated();
	void SetTileFocus(class AFortTheaterMapTile* TargetTile);
	void ReceiveTick(float DeltaSeconds);
	void OnDragBegin();
	void OnDragEnd();
	void StopFocusTimeline();
	void ForceTileFocus(struct FVector HexWorldLoc);
	void PingFromHex();
	void RefreshCloudMask();
	void MaskFinished();
	void PinnedPing();
	void ExecuteUbergraph_TheaterCamera_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
