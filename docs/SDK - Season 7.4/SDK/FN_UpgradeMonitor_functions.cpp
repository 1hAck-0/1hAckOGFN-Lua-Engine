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

// Function UpgradeMonitor.UpgradeMonitor_C.SetMonitorDistort
// (Public, BlueprintCallable, BlueprintEvent)

void AUpgradeMonitor_C::SetMonitorDistort()
{
	static auto fn = UObject::FindObject<UFunction>("Function UpgradeMonitor.UpgradeMonitor_C.SetMonitorDistort");

	AUpgradeMonitor_C_SetMonitorDistort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UpgradeMonitor.UpgradeMonitor_C.SetUtilities-Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Active_Icon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUpgradeMonitor_C::SetUtilities_Icon(class UTexture2D* Active_Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UpgradeMonitor.UpgradeMonitor_C.SetUtilities-Icon");

	AUpgradeMonitor_C_SetUtilities_Icon_Params params;
	params.Active_Icon = Active_Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UpgradeMonitor.UpgradeMonitor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AUpgradeMonitor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function UpgradeMonitor.UpgradeMonitor_C.UserConstructionScript");

	AUpgradeMonitor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UpgradeMonitor.UpgradeMonitor_C.IconTransition__FinishedFunc
// (BlueprintEvent)

void AUpgradeMonitor_C::IconTransition__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function UpgradeMonitor.UpgradeMonitor_C.IconTransition__FinishedFunc");

	AUpgradeMonitor_C_IconTransition__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UpgradeMonitor.UpgradeMonitor_C.IconTransition__UpdateFunc
// (BlueprintEvent)

void AUpgradeMonitor_C::IconTransition__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function UpgradeMonitor.UpgradeMonitor_C.IconTransition__UpdateFunc");

	AUpgradeMonitor_C_IconTransition__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UpgradeMonitor.UpgradeMonitor_C.Activate-Utilities
// (BlueprintCallable, BlueprintEvent)

void AUpgradeMonitor_C::Activate_Utilities()
{
	static auto fn = UObject::FindObject<UFunction>("Function UpgradeMonitor.UpgradeMonitor_C.Activate-Utilities");

	AUpgradeMonitor_C_Activate_Utilities_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UpgradeMonitor.UpgradeMonitor_C.Activate-Gadgets
// (BlueprintCallable, BlueprintEvent)

void AUpgradeMonitor_C::Activate_Gadgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function UpgradeMonitor.UpgradeMonitor_C.Activate-Gadgets");

	AUpgradeMonitor_C_Activate_Gadgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UpgradeMonitor.UpgradeMonitor_C.Activation-Distortion
// (BlueprintCallable, BlueprintEvent)

void AUpgradeMonitor_C::Activation_Distortion()
{
	static auto fn = UObject::FindObject<UFunction>("Function UpgradeMonitor.UpgradeMonitor_C.Activation-Distortion");

	AUpgradeMonitor_C_Activation_Distortion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UpgradeMonitor.UpgradeMonitor_C.ExecuteUbergraph_UpgradeMonitor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUpgradeMonitor_C::ExecuteUbergraph_UpgradeMonitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UpgradeMonitor.UpgradeMonitor_C.ExecuteUbergraph_UpgradeMonitor");

	AUpgradeMonitor_C_ExecuteUbergraph_UpgradeMonitor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
