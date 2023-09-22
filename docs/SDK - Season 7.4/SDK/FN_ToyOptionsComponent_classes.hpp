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

// BlueprintGeneratedClass ToyOptionsComponent.ToyOptionsComponent_C
// 0x0011 (0x0269 - 0x0258)
class UToyOptionsComponent_C : public UFortActorOptionsComponent
{
public:
	class UClass*                                      OptionsWidgetClass;                                       // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MyIslandTabList;                                          // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMachine;                                                // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ToyOptionsComponent.ToyOptionsComponent_C");
		return ptr;
	}


	void OnLocalInteract(class AFortPlayerPawn* InteractingPawn, bool* bResult, class UFortMatchmakingKnobsModal** ModalWidget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
