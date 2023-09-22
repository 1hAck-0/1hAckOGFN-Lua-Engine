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

// BlueprintGeneratedClass RubberDuckStatic.RubberDuckStatic_C
// 0x0014 (0x0C44 - 0x0C30)
class ARubberDuckStatic_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     StartLoc;                                                 // 0x0C38(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RubberDuckStatic.RubberDuckStatic_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_RubberDuckStatic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
