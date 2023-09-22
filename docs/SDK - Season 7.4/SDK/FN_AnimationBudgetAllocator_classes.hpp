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

// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// 0x0030 (0x0BF0 - 0x0BC0)
class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0BC0(0x0020) MISSED OFFSET
	unsigned char                                      bAutoRegisterWithBudgetAllocator : 1;                     // 0x0BE0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAutoCalculateSignificance : 1;                           // 0x0BE0(0x0001) (Edit)
	unsigned char                                      bShouldUseActorRenderedFlag : 1;                          // 0x0BE0(0x0001) (Edit)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0BE1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted");
		return ptr;
	}


	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
