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

// BlueprintGeneratedClass GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C
// 0x00C1 (0x0A32 - 0x0971)
class UGAT_CommandoActiveAbility_C : public UGAT_ActiveAbility_Hero_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0971(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0978(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                          Event_Data;                                               // 0x0980(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPawn*                                   CommandoPlayerPawn;                                       // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               isAutoCommitted;                                          // 0x0A30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isStaminaLockedOut;                                       // 0x0A31(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_CommandoActiveAbility(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
