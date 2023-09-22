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

// Function F_Med_Soldier.F_Med_Soldier.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UF_Med_Soldier::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function F_Med_Soldier.F_Med_Soldier.BlueprintInitializeAnimation");

	UF_Med_Soldier_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function F_Med_Soldier.F_Med_Soldier.ExecuteUbergraph_F_Med_Soldier
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UF_Med_Soldier::ExecuteUbergraph_F_Med_Soldier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function F_Med_Soldier.F_Med_Soldier.ExecuteUbergraph_F_Med_Soldier");

	UF_Med_Soldier_ExecuteUbergraph_F_Med_Soldier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
