// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAutoRegisterWithBudgetAllocator (Parm, ZeroConstructor, IsPlainOldData)

void USkeletalMeshComponentBudgeted::SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator");

	USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Params params;
	params.bInAutoRegisterWithBudgetAllocator = bInAutoRegisterWithBudgetAllocator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
