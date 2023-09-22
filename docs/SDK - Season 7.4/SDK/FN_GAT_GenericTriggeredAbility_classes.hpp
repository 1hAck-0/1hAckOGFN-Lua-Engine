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

// BlueprintGeneratedClass GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C
// 0x00C1 (0x0A0A - 0x0949)
class UGAT_GenericTriggeredAbility_C : public UGAT_TriggeredAbility_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0949(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0950(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                          EventData;                                                // 0x0958(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             FortPlayerPawn;                                           // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               isAutoCommitted;                                          // 0x0A08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isStaminaLockedOut;                                       // 0x0A09(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C");
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void ExecuteUbergraph_GAT_GenericTriggeredAbility(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
