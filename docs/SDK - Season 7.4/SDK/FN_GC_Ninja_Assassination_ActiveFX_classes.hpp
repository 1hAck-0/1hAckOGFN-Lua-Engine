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

// BlueprintGeneratedClass GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C
// 0x0020 (0x0448 - 0x0428)
class AGC_Ninja_Assassination_ActiveFX_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       Assassination_Socket;                                     // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Large_FXActive_Lvl;                                       // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	class AActor*                                      MyTarget;                                                 // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C");
		return ptr;
	}


	void OnWhileActiveParticleSystemActivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, struct FGameplayCueParameters Parameters);
	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void ExecuteUbergraph_GC_Ninja_Assassination_ActiveFX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
