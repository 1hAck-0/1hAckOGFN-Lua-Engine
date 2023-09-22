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

// BlueprintGeneratedClass ImpactNumbers.ImpactNumbers_C
// 0x0024 (0x0584 - 0x0560)
class AImpactNumbers_C : public AFortDamageNumbersActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Spacing_percentage_for_1s;                                // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FontYSize_1;                                              // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FontXSize_1;                                              // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Number_Spacing_Multiplier;                                // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Number_of_number_rotations;                               // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ImpactNumbers.ImpactNumbers_C");
		return ptr;
	}


	void init_a_new_number_set(struct FFortDamageNumberInfo* NewDamageHitInfoStruct, struct FTransform* OutCameraTransform, struct FVector* OutNumberLocation);
	void UserConstructionScript();
	void OnNewDamageNumber(struct FFortDamageNumberInfo NewDamageNumberInfo);
	void ExecuteUbergraph_ImpactNumbers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
