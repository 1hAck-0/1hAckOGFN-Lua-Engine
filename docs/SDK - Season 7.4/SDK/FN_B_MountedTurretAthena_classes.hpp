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

// BlueprintGeneratedClass B_MountedTurretAthena.B_MountedTurretAthena_C
// 0x0008 (0x0E90 - 0x0E88)
class AB_MountedTurretAthena_C : public AB_Ranged_Dual_Generic_MountedTurret_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E88(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_MountedTurretAthena.B_MountedTurretAthena_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnHostVehicleSetup();
	void MountedTurretSnowmanCheck();
	void K2_OnUnEquip();
	void ExecuteUbergraph_B_MountedTurretAthena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
