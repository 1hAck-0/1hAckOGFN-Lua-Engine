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

// BlueprintGeneratedClass GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C
// 0x0020 (0x0958 - 0x0938)
class UGA_SurfaceChange_Ice_IceCheckOnTimer_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             FortPlayerPawn;                                           // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TraceTimer;                                               // 0x0948(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                OffIceTimer;                                              // 0x0950(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void TraceForTerrain();
	void RemoveIceGE();
	void ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
