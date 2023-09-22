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

// BlueprintGeneratedClass GCL_Athena_Blade_Jumping.GCL_Athena_Blade_Jumping_C
// 0x0020 (0x08A0 - 0x0880)
class AGCL_Athena_Blade_Jumping_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            Spawned_Emitters;                                         // 0x0890(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCL_Athena_Blade_Jumping.GCL_Athena_Blade_Jumping_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void ExecuteUbergraph_GCL_Athena_Blade_Jumping(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
