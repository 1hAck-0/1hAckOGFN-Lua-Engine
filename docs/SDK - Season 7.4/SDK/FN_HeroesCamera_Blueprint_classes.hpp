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

// BlueprintGeneratedClass HeroesCamera_Blueprint.HeroesCamera_Blueprint_C
// 0x0018 (0x0898 - 0x0880)
class AHeroesCamera_Blueprint_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               MouseDown;                                                // 0x0888(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0889(0x0007) MISSED OFFSET
	class AFortPlayerPawn*                             Cached_Pawn;                                              // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HeroesCamera_Blueprint.HeroesCamera_Blueprint_C");
		return ptr;
	}


	void HandleMousePress();
	void HandleMouseRelease();
	void UserConstructionScript();
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4(struct FKey Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(struct FKey Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2(struct FKey Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(struct FKey Key);
	void OnDeactivated();
	void ReceiveTick(float DeltaSeconds);
	void OnActivated();
	void ExecuteUbergraph_HeroesCamera_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
