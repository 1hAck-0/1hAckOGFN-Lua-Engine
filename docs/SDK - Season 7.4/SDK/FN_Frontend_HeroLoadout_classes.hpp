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

// BlueprintGeneratedClass Frontend_HeroLoadout.Frontend_HeroLoadout_C
// 0x0080 (0x03C8 - 0x0348)
class AFrontend_HeroLoadout_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FTransform                                  Transform___HeroLoadOut;                                  // 0x0350(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Transform___Command;                                      // 0x0380(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class AHeroLoadoutItemPedestal_C*                  HL_Pedestal;                                              // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Command_Pedestal_Placement_ExecuteUbergraph_Frontend_HeroLoadout_RefProperty;// 0x03B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      HeroLoadout_Pedestal_Placement_ExecuteUbergraph_Frontend_HeroLoadout_RefProperty;// 0x03C0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Frontend_HeroLoadout.Frontend_HeroLoadout_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void HeroLoadout___Transfrom();
	void Command___Transform();
	void HandleFrontendCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void ExecuteUbergraph_Frontend_HeroLoadout(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
