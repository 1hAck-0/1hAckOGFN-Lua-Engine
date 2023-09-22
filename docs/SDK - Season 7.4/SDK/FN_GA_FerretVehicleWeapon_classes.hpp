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

// BlueprintGeneratedClass GA_FerretVehicleWeapon.GA_FerretVehicleWeapon_C
// 0x0020 (0x0958 - 0x0938)
class UGA_FerretVehicleWeapon_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFortWeaponItemDefinition*                   FerretWeapon;                                             // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AFortWeapon*                                 PreviousWeapon;                                           // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             FortPawn;                                                 // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_FerretVehicleWeapon.GA_FerretVehicleWeapon_C");
		return ptr;
	}


	void Removed_CD5722AC44659FF60EA697B33A729C46();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_FerretVehicleWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
