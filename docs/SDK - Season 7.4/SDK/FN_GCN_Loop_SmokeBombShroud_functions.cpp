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

// Function GCN_Loop_SmokeBombShroud.GCN_Loop_SmokeBombShroud_C.GetSkeletalMeshes
// (Public, BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SmokeBombShroud_C::GetSkeletalMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SmokeBombShroud.GCN_Loop_SmokeBombShroud_C.GetSkeletalMeshes");

	AGCN_Loop_SmokeBombShroud_C_GetSkeletalMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Loop_SmokeBombShroud.GCN_Loop_SmokeBombShroud_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_Loop_SmokeBombShroud_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Loop_SmokeBombShroud.GCN_Loop_SmokeBombShroud_C.UserConstructionScript");

	AGCN_Loop_SmokeBombShroud_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
