#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MeshNetwork.MeshBeaconClient.ServerUpdateMultipleLevelsVisibility
struct AMeshBeaconClient_ServerUpdateMultipleLevelsVisibility_Params
{
	TArray<struct FUpdateLevelVisibilityLevelInfo>     LevelVisibilities;                                        // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function MeshNetwork.MeshBeaconClient.ServerUpdateLevelVisibility
struct AMeshBeaconClient_ServerUpdateLevelVisibility_Params
{
	struct FName                                       PackageName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsVisible;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeshNetwork.MeshBeaconClient.OnRep_ConnectedToRoot
struct AMeshBeaconClient_OnRep_ConnectedToRoot_Params
{
};

// Function MeshNetwork.MeshNetworkComponent.GetMeshNetworkNodeType
struct UMeshNetworkComponent_GetMeshNetworkNodeType_Params
{
	EMeshNetworkNodeType                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshNetwork.MeshNetworkSubsystem.SetMetaData
struct UMeshNetworkSubsystem_SetMetaData_Params
{
	struct FMeshMetaDataStruct                         MetaData;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MeshNetwork.MeshNetworkSubsystem.GetMetadata
struct UMeshNetworkSubsystem_GetMetadata_Params
{
	struct FMeshMetaDataStruct                         MetaData;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MeshNetwork.MeshNetworkSubsystem.GetMeshNetworkNodeType
struct UMeshNetworkSubsystem_GetMeshNetworkNodeType_Params
{
	EMeshNetworkNodeType                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshNetwork.MeshNetworkSubsystem.GetGameServerNodeType
struct UMeshNetworkSubsystem_GetGameServerNodeType_Params
{
	EMeshNetworkNodeType                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeshNetwork.MeshNetworkSubsystem.GetConnectedToRoot
struct UMeshNetworkSubsystem_GetConnectedToRoot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
