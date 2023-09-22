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

// BlueprintGeneratedClass StoreCamera_Blueprint.StoreCamera_Blueprint_C
// 0x0080 (0x0900 - 0x0880)
class AStoreCamera_Blueprint_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Mesh_DarkenBG;                                            // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            CameraPlaceholderGround;                                  // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ChoicePack_NewTrack;                                      // 0x0898(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ChoicePack__Direction_ACA3841D4D5084BE3482FA8EBB7CE9C0;   // 0x089C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x089D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ChoicePack;                                               // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline;                                                 // 0x08A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline02;                                               // 0x08AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     CameraGroundLoc;                                          // 0x08B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CameraGroundRot;                                          // 0x08C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraOriginalLoc;                                        // 0x08D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CameraOriginalRot;                                        // 0x08DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CameraInStartPos;                                         // 0x08E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MouseDown;                                                // 0x08E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x08EA(0x0006) MISSED OFFSET
	class AStorePinataMaster_Parent_C*                 PinataInLevel;                                            // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AStoreCardReveal_Parent_C*                   CardRevealInLevel;                                        // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StoreCamera_Blueprint.StoreCamera_Blueprint_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline();
	void ChoicePack__FinishedFunc();
	void ChoicePack__UpdateFunc();
	void OnActivated();
	void OnDeactivated();
	void OpeningCameraTransition();
	void ResetCamera();
	void DarkenBGVisibility(bool Enable);
	void ChoicePackFOV_Out();
	void ChoicePackFOV_In();
	void ExecuteUbergraph_StoreCamera_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
