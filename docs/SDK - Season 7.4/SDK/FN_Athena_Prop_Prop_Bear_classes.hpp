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

// BlueprintGeneratedClass Athena_Prop_Prop_Bear.Athena_Prop_Prop_Bear_C
// 0x0009 (0x0C39 - 0x0C30)
class AAthena_Prop_Prop_Bear_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Effects;                                                  // 0x0C38(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Athena_Prop_Prop_Bear.Athena_Prop_Prop_Bear_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void ExecuteUbergraph_Athena_Prop_Prop_Bear(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
