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

// Function MeshNetwork.MeshBeaconClient.ServerUpdateMultipleLevelsVisibility
// (Final, Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities              (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AMeshBeaconClient::ServerUpdateMultipleLevelsVisibility(TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshBeaconClient.ServerUpdateMultipleLevelsVisibility");

	AMeshBeaconClient_ServerUpdateMultipleLevelsVisibility_Params params;
	params.LevelVisibilities = LevelVisibilities;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshNetwork.MeshBeaconClient.ServerUpdateLevelVisibility
// (Final, Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FName                   PackageName                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsVisible                     (Parm, ZeroConstructor, IsPlainOldData)

void AMeshBeaconClient::ServerUpdateLevelVisibility(struct FName PackageName, bool bIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshBeaconClient.ServerUpdateLevelVisibility");

	AMeshBeaconClient_ServerUpdateLevelVisibility_Params params;
	params.PackageName = PackageName;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshNetwork.MeshBeaconClient.OnRep_ConnectedToRoot
// (Final, Native, Public)

void AMeshBeaconClient::OnRep_ConnectedToRoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshBeaconClient.OnRep_ConnectedToRoot");

	AMeshBeaconClient_OnRep_ConnectedToRoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshNetwork.MeshNetworkComponent.GetMeshNetworkNodeType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EMeshNetworkNodeType           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMeshNetworkNodeType UMeshNetworkComponent::GetMeshNetworkNodeType()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkComponent.GetMeshNetworkNodeType");

	UMeshNetworkComponent_GetMeshNetworkNodeType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshNetwork.MeshNetworkSubsystem.SetMetaData
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMeshMetaDataStruct     MetaData                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMeshNetworkSubsystem::SetMetaData(struct FMeshMetaDataStruct MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkSubsystem.SetMetaData");

	UMeshNetworkSubsystem_SetMetaData_Params params;
	params.MetaData = MetaData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshNetwork.MeshNetworkSubsystem.GetMetadata
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMeshMetaDataStruct     MetaData                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMeshNetworkSubsystem::GetMetadata(struct FMeshMetaDataStruct* MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkSubsystem.GetMetadata");

	UMeshNetworkSubsystem_GetMetadata_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MetaData != nullptr)
		*MetaData = params.MetaData;
}


// Function MeshNetwork.MeshNetworkSubsystem.GetMeshNetworkNodeType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EMeshNetworkNodeType           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMeshNetworkNodeType UMeshNetworkSubsystem::GetMeshNetworkNodeType()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkSubsystem.GetMeshNetworkNodeType");

	UMeshNetworkSubsystem_GetMeshNetworkNodeType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshNetwork.MeshNetworkSubsystem.GetGameServerNodeType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EMeshNetworkNodeType           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMeshNetworkNodeType UMeshNetworkSubsystem::GetGameServerNodeType()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkSubsystem.GetGameServerNodeType");

	UMeshNetworkSubsystem_GetGameServerNodeType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshNetwork.MeshNetworkSubsystem.GetConnectedToRoot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshNetworkSubsystem::GetConnectedToRoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkSubsystem.GetConnectedToRoot");

	UMeshNetworkSubsystem_GetConnectedToRoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
