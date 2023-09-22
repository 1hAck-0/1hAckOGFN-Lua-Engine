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

// Function Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C.SetParams
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReadyUpTimerLength             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FTransform>      InteractSpawnLocation          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FText                   InteractText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            BluGloMissionActivationQty     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFightTheStorm                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGen_ReadyUp_StartObjective_C* ThisObject                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGen_ReadyUp_StartObjective_C::SetParams(float ReadyUpTimerLength, struct FText InteractText, int BluGloMissionActivationQty, bool IsFightTheStorm, TArray<struct FTransform>* InteractSpawnLocation, class UGen_ReadyUp_StartObjective_C** ThisObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C.SetParams");

	UGen_ReadyUp_StartObjective_C_SetParams_Params params;
	params.ReadyUpTimerLength = ReadyUpTimerLength;
	params.InteractText = InteractText;
	params.BluGloMissionActivationQty = BluGloMissionActivationQty;
	params.IsFightTheStorm = IsFightTheStorm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InteractSpawnLocation != nullptr)
		*InteractSpawnLocation = params.InteractSpawnLocation;
	if (ThisObject != nullptr)
		*ThisObject = params.ThisObject;
}


// Function Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C.BreakParams
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReadyUpTimerLength             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FTransform>      InteractSpawnLocation          (Parm, OutParm, ZeroConstructor)
// struct FText                   InteractText                   (Parm, OutParm)
// int                            BluGloMissionActivationQty     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsFightTheStorm                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGen_ReadyUp_StartObjective_C::BreakParams(float* ReadyUpTimerLength, TArray<struct FTransform>* InteractSpawnLocation, struct FText* InteractText, int* BluGloMissionActivationQty, bool* IsFightTheStorm)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C.BreakParams");

	UGen_ReadyUp_StartObjective_C_BreakParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReadyUpTimerLength != nullptr)
		*ReadyUpTimerLength = params.ReadyUpTimerLength;
	if (InteractSpawnLocation != nullptr)
		*InteractSpawnLocation = params.InteractSpawnLocation;
	if (InteractText != nullptr)
		*InteractText = params.InteractText;
	if (BluGloMissionActivationQty != nullptr)
		*BluGloMissionActivationQty = params.BluGloMissionActivationQty;
	if (IsFightTheStorm != nullptr)
		*IsFightTheStorm = params.IsFightTheStorm;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
