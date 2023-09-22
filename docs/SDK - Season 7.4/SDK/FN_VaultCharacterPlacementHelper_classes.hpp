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

// BlueprintGeneratedClass VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C
// 0x0069 (0x0399 - 0x0330)
class AVaultCharacterPlacementHelper_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Floor;                                                    // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CharacterPlacement;                                       // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  OriginalTransform;                                        // 0x0350(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OffsetTranslate;                                          // 0x0380(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    OffsetRotate;                                             // 0x038C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Athena;                                                   // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C");
		return ptr;
	}


	void UpdatePosition_For_Camera(EFrontEndCamera FrontendCamera);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SubGameChanged_Event_1(ESubGame SubGame);
	void OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void ExecuteUbergraph_VaultCharacterPlacementHelper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
