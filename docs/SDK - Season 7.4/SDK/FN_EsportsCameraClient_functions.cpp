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

// Function EsportsCameraClient.EsportsCameraClient.SetDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* MaterialInstanceDynamic        (Parm, ZeroConstructor, IsPlainOldData)

void AEsportsCameraClient::SetDynamicMaterial(class UMaterialInstanceDynamic* MaterialInstanceDynamic)
{
	static auto fn = UObject::FindObject<UFunction>("Function EsportsCameraClient.EsportsCameraClient.SetDynamicMaterial");

	AEsportsCameraClient_SetDynamicMaterial_Params params;
	params.MaterialInstanceDynamic = MaterialInstanceDynamic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EsportsCameraClient.EsportsCameraClient.IsPlayingWebMovie
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEsportsCameraClient::IsPlayingWebMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function EsportsCameraClient.EsportsCameraClient.IsPlayingWebMovie");

	AEsportsCameraClient_IsPlayingWebMovie_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EsportsCameraClient.EsportsCameraClient.IsPlatformEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEsportsCameraClient::IsPlatformEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function EsportsCameraClient.EsportsCameraClient.IsPlatformEnabled");

	AEsportsCameraClient_IsPlatformEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EsportsCameraClient.EsportsCameraClient.HasDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEsportsCameraClient::HasDynamicMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function EsportsCameraClient.EsportsCameraClient.HasDynamicMaterial");

	AEsportsCameraClient_HasDynamicMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EsportsCameraClient.EsportsCameraStatusBase.FollowedPlayerChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEsportsCameraClient*    InEsportsCameraClient          (Parm, ZeroConstructor, IsPlainOldData)

void UEsportsCameraStatusBase::FollowedPlayerChanged(class AEsportsCameraClient* InEsportsCameraClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function EsportsCameraClient.EsportsCameraStatusBase.FollowedPlayerChanged");

	UEsportsCameraStatusBase_FollowedPlayerChanged_Params params;
	params.InEsportsCameraClient = InEsportsCameraClient;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
