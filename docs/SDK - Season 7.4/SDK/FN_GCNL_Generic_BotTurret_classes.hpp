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

// BlueprintGeneratedClass GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C
// 0x0028 (0x0450 - 0x0428)
class AGCNL_Generic_BotTurret_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AB_BGA_BotTurret_Parent_C*                   BotTurret;                                                // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeftGunOffset;                                            // 0x0438(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RightGunOffset;                                           // 0x0444(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C");
		return ptr;
	}


	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	void UserConstructionScript();
	void BotFired(int Left);
	void Activated();
	void BindBotFired();
	void BindBotExplosionWarning();
	void BotExplosionWarning();
	void ExecuteUbergraph_GCNL_Generic_BotTurret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
