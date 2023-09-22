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

// BlueprintGeneratedClass DA_Glider_Item.DA_Glider_Item_C
// 0x0068 (0x0A78 - 0x0A10)
class ADA_Glider_Item_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A10(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                       ErrorReason;                                              // 0x0A18(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       ErrorReasonGamepad;                                       // 0x0A38(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       ErrorCannotUse;                                           // 0x0A58(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DA_Glider_Item.DA_Glider_Item_C");
		return ptr;
	}


	void IsOnGround(bool* bOnGround);
	void RaiseUsageError(struct FGameplayTagContainer FailedReason);
	void UserConstructionScript();
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void ExecuteUbergraph_DA_Glider_Item(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
