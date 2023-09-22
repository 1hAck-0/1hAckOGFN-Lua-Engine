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

// BlueprintGeneratedClass Recreation_SportingGoods_Soccerball.Recreation_SportingGoods_Soccerball_C
// 0x0010 (0x0888 - 0x0878)
class ARecreation_SportingGoods_Soccerball_C : public APhysicsBall_Master_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0878(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USoundBase*                                  Ball_Hit_Sound;                                           // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Recreation_SportingGoods_Soccerball.Recreation_SportingGoods_Soccerball_C");
		return ptr;
	}


	void UserConstructionScript();
	void Reset_Ball_Hit_Sound();
	void BndEvt__SphereCollision_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult);
	void ExecuteUbergraph_Recreation_SportingGoods_Soccerball(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
