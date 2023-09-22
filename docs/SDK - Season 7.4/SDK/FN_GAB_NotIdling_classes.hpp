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

// BlueprintGeneratedClass GAB_NotIdling.GAB_NotIdling_C
// 0x0008 (0x0940 - 0x0938)
class UGAB_NotIdling_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_NotIdling.GAB_NotIdling_C");
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void ExecuteUbergraph_GAB_NotIdling(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
