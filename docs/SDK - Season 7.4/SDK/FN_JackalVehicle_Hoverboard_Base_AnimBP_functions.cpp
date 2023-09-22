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

// Function JackalVehicle_Hoverboard_Base_AnimBP.JackalVehicle_Hoverboard_Base_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJackalVehicle_Hoverboard_Base_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Hoverboard_Base_AnimBP.JackalVehicle_Hoverboard_Base_AnimBP_C.BlueprintUpdateAnimation");

	UJackalVehicle_Hoverboard_Base_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JackalVehicle_Hoverboard_Base_AnimBP.JackalVehicle_Hoverboard_Base_AnimBP_C.ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJackalVehicle_Hoverboard_Base_AnimBP_C::ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JackalVehicle_Hoverboard_Base_AnimBP.JackalVehicle_Hoverboard_Base_AnimBP_C.ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP");

	UJackalVehicle_Hoverboard_Base_AnimBP_C_ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
