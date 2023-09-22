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

// BlueprintGeneratedClass GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C
// 0x0010 (0x0971 - 0x0961)
class UGAT_ActiveAbility_Hero_C : public UGAT_ActiveAbility_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0961(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0968(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               UseHeroLoadoutSystem;                                     // 0x0970(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C");
		return ptr;
	}


	void CommitAbilityWithEvent(bool* Passed);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_ActiveAbility_Hero(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
