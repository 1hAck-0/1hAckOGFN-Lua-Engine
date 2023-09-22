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

// BlueprintGeneratedClass GA_Blade_InitialEquip.GA_Blade_InitialEquip_C
// 0x0029 (0x0961 - 0x0938)
class UGA_Blade_InitialEquip_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             FortPawn;                                                 // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInitialEquip;                                           // 0x0948(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0949(0x0007) MISSED OFFSET
	class UFortWorldItemDefinition*                    Sword_Gadget_ID;                                          // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                FirstHolderTag;                                           // 0x0958(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bKeepBuildingMaterialsOnDropAll;                          // 0x0960(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Blade_InitialEquip.GA_Blade_InitialEquip_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Blade_InitialEquip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
