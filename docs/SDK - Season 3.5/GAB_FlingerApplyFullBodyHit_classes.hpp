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

// 0x18 (0xB60 - 0xB48)
// BlueprintGeneratedClass GAB_FlingerApplyFullBodyHit.GAB_FlingerApplyFullBodyHit_C
class UGAB_FlingerApplyFullBodyHit_C : public UGAB_GenericApplyFullBodyHit_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB48(0x8)(Transient, DuplicateTransient)
	class FName                                  HitReactBack;                                      // 0xB50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  HitReactSectionName;                               // 0xB58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_FlingerApplyFullBodyHit_C");
		return Clss;
	}

	void PickFullBodyHitMontageSection();
	void ExecuteUbergraph_GAB_FlingerApplyFullBodyHit(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class FName CallFunc_SetFNameBasedOnHitDirection_NameResult);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
