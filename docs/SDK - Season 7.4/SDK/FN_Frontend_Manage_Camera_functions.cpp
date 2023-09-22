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

// Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFrontend_Manage_Camera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.UserConstructionScript");

	AFrontend_Manage_Camera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.OnActivated
// (Event, Public, BlueprintEvent)

void AFrontend_Manage_Camera_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.OnActivated");

	AFrontend_Manage_Camera_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.OnDeactivated
// (Event, Public, BlueprintEvent)

void AFrontend_Manage_Camera_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.OnDeactivated");

	AFrontend_Manage_Camera_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.CameraSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSensei                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontend_Manage_Camera_C::CameraSelected(bool IsSensei)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.CameraSelected");

	AFrontend_Manage_Camera_C_CameraSelected_Params params;
	params.IsSensei = IsSensei;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.CameraDeselected
// (BlueprintCallable, BlueprintEvent)

void AFrontend_Manage_Camera_C::CameraDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.CameraDeselected");

	AFrontend_Manage_Camera_C_CameraDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.ExecuteUbergraph_Frontend_Manage_Camera
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontend_Manage_Camera_C::ExecuteUbergraph_Frontend_Manage_Camera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.ExecuteUbergraph_Frontend_Manage_Camera");

	AFrontend_Manage_Camera_C_ExecuteUbergraph_Frontend_Manage_Camera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.CameraHasBeenDeselected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AFrontend_Manage_Camera_C::CameraHasBeenDeselected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.CameraHasBeenDeselected__DelegateSignature");

	AFrontend_Manage_Camera_C_CameraHasBeenDeselected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.CameraHasBeenSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSensei                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontend_Manage_Camera_C::CameraHasBeenSelected__DelegateSignature(bool IsSensei)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.CameraHasBeenSelected__DelegateSignature");

	AFrontend_Manage_Camera_C_CameraHasBeenSelected__DelegateSignature_Params params;
	params.IsSensei = IsSensei;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
