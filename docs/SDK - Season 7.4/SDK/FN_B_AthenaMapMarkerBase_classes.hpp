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

// BlueprintGeneratedClass B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C
// 0x0040 (0x03D8 - 0x0398)
class AB_AthenaMapMarkerBase_C : public AFortPlayerMarkerBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Target;                                                // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            ProximitySphereCollision;                                 // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SpawnMarkerAnim_SpawnVerticalScale_D00BAF4B4CCD528A4D4E94BA8CAE97A2;// 0x03B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SpawnMarkerAnim_SpawnScale_D00BAF4B4CCD528A4D4E94BA8CAE97A2;// 0x03B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SpawnMarkerAnim_Opacity_D00BAF4B4CCD528A4D4E94BA8CAE97A2; // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SpawnMarkerAnim__Direction_D00BAF4B4CCD528A4D4E94BA8CAE97A2;// 0x03BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SpawnMarkerAnim;                                          // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Main;                                                 // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Target;                                               // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void SpawnMarkerAnim__FinishedFunc();
	void SpawnMarkerAnim__UpdateFunc();
	void BndEvt__Sphere1_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult);
	void OnSetupMarker(struct FPlayerMarkerData MarkerData);
	void OnMarkerPlaced();
	void ExecuteUbergraph_B_AthenaMapMarkerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
