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

// BlueprintGeneratedClass CornField_Rectangle.CornField_Rectangle_C
// 0x0038 (0x0C68 - 0x0C30)
class ACornField_Rectangle_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Hay_Destruction_CornField;                              // 0x0C38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               OverlapBox;                                               // 0x0C40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      GE_CornField_GC;                                          // 0x0C48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldWobble;                                             // 0x0C50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C51(0x0003) MISSED OFFSET
	struct FVector                                     PlayerVelocity;                                           // 0x0C54(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x0C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CornField_Rectangle.CornField_Rectangle_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__OverlapBox_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult);
	void ReceiveBeginPlay();
	void MaterialWobble(class AActor* Player);
	void ExecuteUbergraph_CornField_Rectangle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
