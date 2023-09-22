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

// BlueprintGeneratedClass FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C
// 0x0020 (0x08A0 - 0x0880)
class AFortnitePartyHeroSelect_Camera_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            CameraActor_1;                                            // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               MouseDown;                                                // 0x0890(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0891(0x0007) MISSED OFFSET
	class AFortPlayerPawn*                             CachedPawn;                                               // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C");
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
	void ExecuteUbergraph_FortnitePartyHeroSelect_Camera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
