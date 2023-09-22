#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function FortReplayCameraOption.FortReplayCameraOption_C.OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortReplayCameraOption_C::OnClicked()
{
	static auto Func = Class->GetFunction("FortReplayCameraOption_C", "OnClicked");

	Params::UFortReplayCameraOption_C_OnClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraOption.FortReplayCameraOption_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFortReplayCameraOption_C::Construct()
{
	static auto Func = Class->GetFunction("FortReplayCameraOption_C", "Construct");

	Params::UFortReplayCameraOption_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraOption.FortReplayCameraOption_C.ExecuteUbergraph_FortReplayCameraOption
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerSpectating*K2Node_DynamicCast_AsFort_Player_Controller_Spectating           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortReplayCameraOption_C::ExecuteUbergraph_FortReplayCameraOption(int32 EntryPoint, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("FortReplayCameraOption_C", "ExecuteUbergraph_FortReplayCameraOption");

	Params::UFortReplayCameraOption_C_ExecuteUbergraph_FortReplayCameraOption_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Spectating = K2Node_DynamicCast_AsFort_Player_Controller_Spectating;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
