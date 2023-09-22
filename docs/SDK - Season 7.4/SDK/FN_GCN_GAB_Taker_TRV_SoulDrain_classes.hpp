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

// BlueprintGeneratedClass GCN_GAB_Taker_TRV_SoulDrain.GCN_GAB_Taker_TRV_SoulDrain_C
// 0x0010 (0x03B0 - 0x03A0)
class AGCN_GAB_Taker_TRV_SoulDrain_C : public AGameplayCueNotify_Actor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_GAB_Taker_TRV_SoulDrain.GCN_GAB_Taker_TRV_SoulDrain_C");
		return ptr;
	}


	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	void UserConstructionScript();
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void ExecuteUbergraph_GCN_GAB_Taker_TRV_SoulDrain(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
