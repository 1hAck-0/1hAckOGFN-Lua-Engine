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

// BlueprintGeneratedClass BP_ProjectileTrajectory.BP_ProjectileTrajectory_C
// 0x0058 (0x0388 - 0x0330)
class ABP_ProjectileTrajectory_C : public AFortProjectileTrajectory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Target;                                                   // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                MaxMeshCount;                                             // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	TArray<class USplineMeshComponent*>                SplineMeshComponents;                                     // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    SplineMID;                                                // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SplineFadeDistance;                                       // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SplineFadeStartDistance;                                  // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     Trajectory_Owner;                                         // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                Update_Timer_Handle;                                      // 0x0380(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileTrajectory.BP_ProjectileTrajectory_C");
		return ptr;
	}


	void SetShouldUpdateFromOwner(bool ShouldUpdate, class UObject* Owner, float Interval);
	void UpdateFromTrajectoryOwner();
	void SetTrajectorySpline(TArray<struct FVector>* SplinePoints, TArray<struct FVector>* SplineTangents);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetTrajectoryFromNative(TArray<struct FVector> SplinePoints, TArray<struct FVector> SplineTangents);
	void ExecuteUbergraph_BP_ProjectileTrajectory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
