#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HeadMountedDisplayFunctionLibrary");
		return Clss;
	}

	void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
	void SetTrackingOrigin(enum class EHMDTrackingOrigin Origin);
	void SetSpectatorScreenTexture(class UTexture* InTexture);
	void SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack);
	void SetSpectatorScreenMode(enum class ESpectatorScreenMode Mode);
	void SetClippingPlanes(float Near, float Far);
	void ResetOrientationAndPosition(float Yaw, enum class EOrientPositionSelector Options);
	bool IsSpectatorScreenModeControllable();
	bool IsInLowPersistenceMode();
	bool IsHeadMountedDisplayEnabled();
	bool IsHeadMountedDisplayConnected();
	bool HasValidTrackingPosition();
	float GetWorldToMetersScale(class UObject* WorldContext);
	void GetVRFocusState(bool* bUseFocus, bool* bHasFocus);
	struct FTransform GetTrackingToWorldTransform(class UObject* WorldContext);
	void GetTrackingSensorParameters(struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive, int32 Index);
	enum class EHMDTrackingOrigin GetTrackingOrigin();
	float GetScreenPercentage();
	void GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);
	float GetPixelDensity();
	void GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
	int32 GetNumOfTrackingSensors();
	enum class EHMDWornState GetHMDWornState();
	class FName GetHMDDeviceName();
	void GetDeviceWorldPose(class UObject* WorldContext, struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	void GetDevicePose(struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	TArray<struct FXRDeviceId> EnumerateTrackedDevices(class FName SystemId, enum class EXRTrackedDeviceType DeviceType);
	void EnableLowPersistenceMode(bool bEnable);
	bool EnableHMD(bool bEnable);
	class UPrimitiveComponent* AddDeviceVisualizationComponent(class AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform);
};

// 0xC0 (0x710 - 0x650)
// Class HeadMountedDisplay.MotionControllerComponent
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	int32                                        PlayerIndex;                                       // 0x650(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControllerHand                   Hand;                                              // 0x654(0x1)(BlueprintVisible, ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D20[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  MotionSource;                                      // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisableLowLatencyUpdate : 1;                      // Mask: 0x1, PropSize: 0x10x660(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_159 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_D21[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETrackingStatus                   CurrentTrackingStatus;                             // 0x664(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisplayDeviceModel;                               // 0x665(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D22[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DisplayModelSource;                                // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           CustomDisplayMesh;                                 // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            DisplayMeshMaterialOverrides;                      // 0x678(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D23[0x68];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   DisplayComponent;                                  // 0x6F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D24[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MotionControllerComponent");
		return Clss;
	}

	void SetTrackingSource(enum class EControllerHand NewSource);
	void SetTrackingMotionSource(class FName NewSource);
	void SetShowDeviceModel(bool bShowControllerModel);
	void SetDisplayModelSource(class FName NewDisplayModelSource);
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
	void SetAssociatedPlayerIndex(int32 NewPlayer);
	void OnMotionControllerUpdated();
	bool IsTracked();
	enum class EControllerHand GetTrackingSource();
	float GetParameterValue(class FName InName, bool* bValueFound);
};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MotionTrackedDeviceFunctionLibrary");
		return Clss;
	}

	void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
	bool IsMotionTrackingEnabledForSource(int32 PlayerIndex, class FName SourceName);
	bool IsMotionTrackingEnabledForDevice(int32 PlayerIndex, enum class EControllerHand Hand);
	bool IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);
	bool IsMotionTrackedDeviceCountManagementNecessary();
	int32 GetMotionTrackingEnabledControllerCount();
	int32 GetMaximumMotionTrackedControllerCount();
	TArray<class FName> EnumerateMotionSources();
	bool EnableMotionTrackingOfSource(int32 PlayerIndex, class FName SourceName);
	bool EnableMotionTrackingOfDevice(int32 PlayerIndex, enum class EControllerHand Hand);
	bool EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
	void DisableMotionTrackingOfSource(int32 PlayerIndex, class FName SourceName);
	void DisableMotionTrackingOfDevice(int32 PlayerIndex, enum class EControllerHand Hand);
	void DisableMotionTrackingOfControllersForPlayer(int32 PlayerIndex);
	void DisableMotionTrackingOfAllControllers();
	void DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
};

// 0x90 (0x180 - 0xF0)
// Class HeadMountedDisplay.VRNotificationsComponent
class UVRNotificationsComponent : public UActorComponent
{
public:
	UMulticastDelegateProperty_                  HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  HMDTrackingInitializedDelegate;                    // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  HMDRecenteredDelegate;                             // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  HMDLostDelegate;                                   // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  HMDReconnectedDelegate;                            // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  HMDConnectCanceledDelegate;                        // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  HMDPutOnHeadDelegate;                              // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  HMDRemovedFromHeadDelegate;                        // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  VRControllerRecenteredDelegate;                    // 0x170(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VRNotificationsComponent");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
