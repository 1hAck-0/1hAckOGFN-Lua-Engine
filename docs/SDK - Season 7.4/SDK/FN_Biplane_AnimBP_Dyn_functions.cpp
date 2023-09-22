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

// Function Biplane_AnimBP_Dyn.Biplane_AnimBP_Dyn_C.ExecuteUbergraph_Biplane_AnimBP_Dyn
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBiplane_AnimBP_Dyn_C::ExecuteUbergraph_Biplane_AnimBP_Dyn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Biplane_AnimBP_Dyn.Biplane_AnimBP_Dyn_C.ExecuteUbergraph_Biplane_AnimBP_Dyn");

	UBiplane_AnimBP_Dyn_C_ExecuteUbergraph_Biplane_AnimBP_Dyn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
