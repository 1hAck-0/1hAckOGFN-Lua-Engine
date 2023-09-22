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

// BlueprintGeneratedClass QuestScanningRobot.QuestScanningRobot_C
// 0x0020 (0x0788 - 0x0768)
class AQuestScanningRobot_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0768(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        BaseBotGame;                                              // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass QuestScanningRobot.QuestScanningRobot_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void animdone(class UAnimMontage* Montage, bool bInterrupted);
	void ExecuteUbergraph_QuestScanningRobot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
