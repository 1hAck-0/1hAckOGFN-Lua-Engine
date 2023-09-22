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

// 0x1F8 (0x528 - 0x330)
// BlueprintGeneratedClass Frontend.FrontEnd_C
class AFrontEnd_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Transient, DuplicateTransient)
	bool                                         CameraTargetMovementUnlocked;                      // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFrontEndCamera>           UnlockedCameraTypes;                               // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         MouseDown;                                         // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemType>             UnlockedItemTypes;                                 // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         ItemMovementUnlocked;                              // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemType>             WorldRotationAllowed;                              // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	enum class EFortItemType                     CurrentType;                                       // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshComponent*                        PreviewMesh;                                       // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ThumbstickTolerance;                               // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              SpawnerRotation;                                   // 0x394(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bStoredInitialRotation;                            // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, struct FVector>                  CurrentTouches;                                    // 0x3A8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int32, struct FVector>                  PreviousTouches;                                   // 0x3F8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                               TouchDragDelta;                                    // 0x448(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TouchPinchDirection;                               // 0x454(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentZoomStep;                                   // 0x458(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxZoomSteps;                                      // 0x45C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EFrontEndCamera, struct FVector> TotalZoomOffsets;                                  // 0x460(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	enum class EFrontEndCamera                   CurrentCameraType;                                 // 0x4B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemType>             ZoomAllowed;                                       // 0x4B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                               VaultCameraZoomOffset;                             // 0x4C8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUpdateThumbstickRot;                              // 0x4D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ThumbstickRotSpeedScalar;                          // 0x4D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              DesiredRot;                                        // 0x4DC(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bAllowDrift;                                       // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48D9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DriftInterpSpeed;                                  // 0x4EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UpdateRotInterpSpeed;                              // 0x4F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MouseRotSpeedScalar;                               // 0x4F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TouchRotSpeedScalar;                               // 0x4F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APartyDisplayManagerBP_C*              PartyDisplayManagerBP_574_ExecuteUbergraph_Frontend_RefProperty; // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHBOnboardingFlow_C*                   HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty; // 0x508(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFrontendCamera_Manage_C*              FrontendCamera_StoreItemInspect_EdGraph_1_RefProperty; // 0x510(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFrontendCamera_Manage_C*              FrontendCamera_Cosmetics_EdGraph_1_RefProperty;    // 0x518(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFrontendCamera_Manage_C*              FrontendCamera_SmallCosmetics_EdGraph_1_RefProperty; // 0x520(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FrontEnd_C");
		return Clss;
	}

	void UpdateVaultCameraZoom(enum class EFrontEndCamera InCameraType, class AFrontendCamera_Manage_C* CameraToUpdate, const struct FVector& OldZoomOffset, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_NotEqual_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_AddWorldTransform_SweepHitResult, const struct FVector& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FVector& CallFunc_Divide_VectorInt_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue1);
	void ProcessTouchInput(TArray<int32>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Get_Item1, const struct FVector& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FVector& CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, const struct FVector& CallFunc_Map_Find_Value12, bool CallFunc_Map_Find_ReturnValue12, float CallFunc_DistanceBetweenTwoVectors_Distance, const struct FVector& CallFunc_Map_Find_Value123, bool CallFunc_Map_Find_ReturnValue123, float CallFunc_DistanceBetweenTwoVectors_Distance1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_SignOfFloat_ReturnValue, TArray<int32>& CallFunc_Map_Keys_Keys1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Array_Get_Item12, const struct FVector& CallFunc_Map_Find_Value1234, bool CallFunc_Map_Find_ReturnValue1234, const struct FVector& CallFunc_Map_Find_Value12345, bool CallFunc_Map_Find_ReturnValue12345, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpTchEvt_Moved(enum class ETouchIndex FingerIndex, const struct FVector& Location);
	void InpTchEvt_Released(enum class ETouchIndex FingerIndex, const struct FVector& Location);
	void InpTchEvt_Pressed(enum class ETouchIndex FingerIndex, const struct FVector& Location);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_4(float AxisValue);
	void ResetRotation();
	void StoreInitialRotation();
	void ReceiveTick(float DeltaSeconds);
	void OnMatchStarted();
	void EnableTutorial();
	void ReceiveBeginPlay();
	void UnlockCameraTargetMovement(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera);
	void UnlockItemMovement(class UFortItem* Item);
	void BindFrontendEvents();
	void ExecuteUbergraph_FrontEnd(int32 EntryPoint, class UCommonInputContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float K2Node_InputAxisKeyEvent_AxisValue, float CallFunc_Abs_ReturnValue, float CallFunc_GetInputAxisKeyValue_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetInputMouseDelta_DeltaX, float CallFunc_GetInputMouseDelta_DeltaY, float CallFunc_GetInputAxisKeyValue_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, class UCommonInputContext* CallFunc_GetContext_ReturnValue1234, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue12, const struct FKey& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue12, bool CallFunc_Array_Contains_ReturnValue1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue123, const struct FKey& K2Node_InputKeyEvent_Key12, const struct FRotator& CallFunc_SelectRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class UCommonInputContext* CallFunc_GetContext_ReturnValue12345, bool CallFunc_IsBROnly_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue12, bool CallFunc_NotEqual_ByteByte_ReturnValue1, const struct FVector& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue123, bool CallFunc_Array_Contains_ReturnValue12, bool CallFunc_BooleanAND_ReturnValue1234, bool CallFunc_IsValid_ReturnValue12, class APlayerController* CallFunc_GetPlayerController_ReturnValue1, float CallFunc_GetInputMouseDelta_DeltaX1, float CallFunc_GetInputMouseDelta_DeltaY1, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue123456, class UMeshComponent* CallFunc_GetMeshForCurrentDisplayedItem_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key123, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, int32 CallFunc_Map_Length_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_Map_Length_ReturnValue12, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, int32 CallFunc_Clamp_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue12, bool CallFunc_Array_Contains_ReturnValue123, bool CallFunc_BooleanAND_ReturnValue12345, const struct FKey& Temp_struct_Variable1, float CallFunc_GetWorldDeltaSeconds_ReturnValue12, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue1234, float CallFunc_GetWorldDeltaSeconds_ReturnValue123, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult1, const struct FRotator& CallFunc_RInterpTo_ReturnValue1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FKey& K2Node_InputKeyEvent_Key, float CallFunc_Multiply_FloatFloat_ReturnValue123, float CallFunc_Multiply_FloatFloat_ReturnValue1234, float CallFunc_Multiply_FloatFloat_ReturnValue12345, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue1, float CallFunc_SelectFloat_ReturnValue12, float CallFunc_SelectFloat_ReturnValue123, float CallFunc_Multiply_FloatFloat_ReturnValue123456, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue1, const struct FRotator& CallFunc_RInterpTo_ReturnValue12, const struct FRotator& CallFunc_RInterpTo_ReturnValue123, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult12, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult1, const struct FKey& K2Node_InputKeyEvent_Key1, const struct FVector& Temp_struct_Variable12, enum class ETouchIndex Temp_byte_Variable, enum class ETouchIndex K2Node_InputTouchEvent_FingerIndex, const struct FVector& K2Node_InputTouchEvent_Location, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1234567, bool CallFunc_IsValid_ReturnValue123, class UMeshComponent* CallFunc_GetMeshForCurrentDisplayedItem_ReturnValue1, bool CallFunc_IsBROnly_ReturnValue1, enum class EFrontEndCamera K2Node_CustomEvent_NewCamera, enum class EFrontEndCamera K2Node_CustomEvent_OldCamera, bool CallFunc_BooleanOR_ReturnValue1, enum class ETouchIndex K2Node_InputTouchEvent_FingerIndex1, const struct FVector& K2Node_InputTouchEvent_Location1, bool CallFunc_Array_Contains_ReturnValue1234, class UFortItem* K2Node_CustomEvent_Item, bool CallFunc_IsValid_ReturnValue1234, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_Array_Contains_ReturnValue12345, enum class ETouchIndex K2Node_InputTouchEvent_FingerIndex12, const struct FVector& K2Node_InputTouchEvent_Location12);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
