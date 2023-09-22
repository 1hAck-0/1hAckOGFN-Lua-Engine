#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2998 - 0x2990)
// BlueprintGeneratedClass BP_SpectatorPC.BP_SpectatorPC_C
class ABP_SpectatorPC_C : public AFortPlayerControllerSpectating
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2990(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_SpectatorPC_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SpectatorPC(int32 EntryPoint, bool CallFunc_IsLocalPlayerController_ReturnValue, const struct FTransform& Temp_struct_Variable, class UAmbientControllerComponent_Athena_C* CallFunc_AddComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
