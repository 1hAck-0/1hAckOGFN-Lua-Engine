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

// BlueprintGeneratedClass HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C
// 0x00B8 (0x04D0 - 0x0418)
class AHeroLoadoutItemPedestal_C : public AFortHeroLoadoutPedestal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagQuery                           AnimationTagQuery_Idle;                                   // 0x0428(0x0048) (Edit, BlueprintVisible)
	struct FTransform                                  CommandScreenTransform;                                   // 0x0470(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  HeroLoadoutScreenTransform;                               // 0x04A0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C");
		return ptr;
	}


	void UserConstructionScript();
	void HandleSlotFocusInUIChanged();
	void OnHeroPawnSetupCompleted();
	void ExecuteUbergraph_HeroLoadoutItemPedestal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
