#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ReplicationGraph.ConnectionAlwaysRelevantNodePair
// 0x0010
struct FConnectionAlwaysRelevantNodePair
{
	class UNetConnection*                              NetConnection;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ReplicationGraph.TearOffActorInfo
// 0x0018
struct FTearOffActorInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      Actor;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
