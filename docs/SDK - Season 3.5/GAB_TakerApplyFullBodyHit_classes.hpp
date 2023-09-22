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

// 0x8 (0xB50 - 0xB48)
// BlueprintGeneratedClass GAB_TakerApplyFullBodyHit.GAB_TakerApplyFullBodyHit_C
class UGAB_TakerApplyFullBodyHit_C : public UGAB_GenericApplyFullBodyHit_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB48(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_TakerApplyFullBodyHit_C");
		return Clss;
	}

	void PickFullBodyHitMontageSection();
	void ExecuteUbergraph_GAB_TakerApplyFullBodyHit(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class FName CallFunc_SetFNameBasedOnHitDirection_NameResult);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
