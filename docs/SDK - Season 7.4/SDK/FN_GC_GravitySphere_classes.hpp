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

// BlueprintGeneratedClass GC_GravitySphere.GC_GravitySphere_C
// 0x0018 (0x0440 - 0x0428)
class AGC_GravitySphere_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Outlander_GravitySphere_Feet;                           // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      My_Target;                                                // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_GravitySphere.GC_GravitySphere_C");
		return ptr;
	}


	void OnWhileActiveParticleSystemDeactivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, struct FGameplayCueParameters Parameters);
	void OnWhileActiveParticleSystemActivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, struct FGameplayCueParameters Parameters);
	void UserConstructionScript();
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void ExecuteUbergraph_GC_GravitySphere(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
