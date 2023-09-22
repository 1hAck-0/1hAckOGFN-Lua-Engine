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

// Function F_MED_Weaponsmith_AnimBP.F_MED_Weaponsmith_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UF_MED_Weaponsmith_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function F_MED_Weaponsmith_AnimBP.F_MED_Weaponsmith_AnimBP_C.BlueprintUpdateAnimation");

	UF_MED_Weaponsmith_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function F_MED_Weaponsmith_AnimBP.F_MED_Weaponsmith_AnimBP_C.ExecuteUbergraph_F_MED_Weaponsmith_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UF_MED_Weaponsmith_AnimBP_C::ExecuteUbergraph_F_MED_Weaponsmith_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function F_MED_Weaponsmith_AnimBP.F_MED_Weaponsmith_AnimBP_C.ExecuteUbergraph_F_MED_Weaponsmith_AnimBP");

	UF_MED_Weaponsmith_AnimBP_C_ExecuteUbergraph_F_MED_Weaponsmith_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
