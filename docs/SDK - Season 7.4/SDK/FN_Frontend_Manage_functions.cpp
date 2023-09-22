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

// Function Frontend_Manage.Frontend_Manage_C.CameraReturnTimeline__FinishedFunc
// (BlueprintEvent)

void AFrontend_Manage_C::CameraReturnTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Manage.Frontend_Manage_C.CameraReturnTimeline__FinishedFunc");

	AFrontend_Manage_C_CameraReturnTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Manage.Frontend_Manage_C.CameraReturnTimeline__UpdateFunc
// (BlueprintEvent)

void AFrontend_Manage_C::CameraReturnTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Manage.Frontend_Manage_C.CameraReturnTimeline__UpdateFunc");

	AFrontend_Manage_C_CameraReturnTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Manage.Frontend_Manage_C.CameraLerpTimeline__FinishedFunc
// (BlueprintEvent)

void AFrontend_Manage_C::CameraLerpTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Manage.Frontend_Manage_C.CameraLerpTimeline__FinishedFunc");

	AFrontend_Manage_C_CameraLerpTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Manage.Frontend_Manage_C.CameraLerpTimeline__UpdateFunc
// (BlueprintEvent)

void AFrontend_Manage_C::CameraLerpTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Manage.Frontend_Manage_C.CameraLerpTimeline__UpdateFunc");

	AFrontend_Manage_C_CameraLerpTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Manage.Frontend_Manage_C.ManageCameraSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSensei                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontend_Manage_C::ManageCameraSelected(bool IsSensei)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Manage.Frontend_Manage_C.ManageCameraSelected");

	AFrontend_Manage_C_ManageCameraSelected_Params params;
	params.IsSensei = IsSensei;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Manage.Frontend_Manage_C.CameraReturn
// (BlueprintCallable, BlueprintEvent)

void AFrontend_Manage_C::CameraReturn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Manage.Frontend_Manage_C.CameraReturn");

	AFrontend_Manage_C_CameraReturn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Manage.Frontend_Manage_C.LerpCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSensei                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontend_Manage_C::LerpCamera(bool IsSensei)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Manage.Frontend_Manage_C.LerpCamera");

	AFrontend_Manage_C_LerpCamera_Params params;
	params.IsSensei = IsSensei;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Manage.Frontend_Manage_C.CameraDeselected
// (BlueprintCallable, BlueprintEvent)

void AFrontend_Manage_C::CameraDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Manage.Frontend_Manage_C.CameraDeselected");

	AFrontend_Manage_C_CameraDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Manage.Frontend_Manage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFrontend_Manage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Manage.Frontend_Manage_C.ReceiveBeginPlay");

	AFrontend_Manage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend_Manage.Frontend_Manage_C.ExecuteUbergraph_Frontend_Manage
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontend_Manage_C::ExecuteUbergraph_Frontend_Manage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend_Manage.Frontend_Manage_C.ExecuteUbergraph_Frontend_Manage");

	AFrontend_Manage_C_ExecuteUbergraph_Frontend_Manage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
