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

// AnimBlueprintGeneratedClass ShoppingCartVehicleSK_AnimBP.ShoppingCartVehicleSK_AnimBP_C
// 0x1098 (0x1308 - 0x0270)
class UShoppingCartVehicleSK_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x0278(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F89D0F4F47020ADDE62FB5919F7EECC0;// 0x0298(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x02B8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone02;                               // 0x03C0(0x0108)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody;                                  // 0x04D0(0x0550)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DE585B894EEDCED6D97829830D1FC06C;// 0x0A20(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D64F465247EA5F954458BF995216BCE2;// 0x0B28(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E3A0212F42252A3B35E387BD4E915843;// 0x0C30(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone03;                               // 0x0D38(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F1D8E9314864DADDBE8742B1B63F1178;// 0x0E40(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C91EA21B47AF3D14096DFFBF9DAB1219;// 0x0F48(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E647C0094FE076130E619996120F88BA;// 0x1050(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone04;                               // 0x1158(0x0108)
	struct FTransform                                  TruckTransformF;                                          // 0x1260(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  TruckTransformB;                                          // 0x1290(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              WheelSpinFR;                                              // 0x12C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WheelSpinFL;                                              // 0x12C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WheelSpinBR;                                              // 0x12C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WheelSpinBL;                                              // 0x12CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WheelRotationFR;                                          // 0x12D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WheelRotationFL;                                          // 0x12D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    SeatCoverRotation;                                        // 0x12D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SeatCoverForce;                                           // 0x12E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SeatBasePosition;                                         // 0x12F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    SeatBaseRotation;                                         // 0x12FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ShoppingCartVehicleSK_AnimBP.ShoppingCartVehicleSK_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_E3A0212F42252A3B35E387BD4E915843();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_F1D8E9314864DADDBE8742B1B63F1178();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_C91EA21B47AF3D14096DFFBF9DAB1219();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_DE585B894EEDCED6D97829830D1FC06C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_D64F465247EA5F954458BF995216BCE2();
	void ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
