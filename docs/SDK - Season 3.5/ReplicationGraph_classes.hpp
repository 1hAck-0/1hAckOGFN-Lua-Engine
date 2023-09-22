#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0xA0 - 0x28)
// Class ReplicationGraph.ReplicationGraphNode
class UReplicationGraphNode : public UObject
{
public:
	TArray<class UReplicationGraphNode*>         AllChildNodes;                                     // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_11B0[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode");
		return Clss;
	}

};

// 0xA8 (0x148 - 0xA0)
// Class ReplicationGraph.ReplicationGraphNode_ActorList
class UReplicationGraphNode_ActorList : public UReplicationGraphNode
{
public:
	uint8                                        Pad_11B1[0xA8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode_ActorList");
		return Clss;
	}

};

// 0xE0 (0x180 - 0xA0)
// Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
{
public:
	uint8                                        Pad_11B2[0xE0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode_ActorListFrequencyBuckets");
		return Clss;
	}

};

// 0x8 (0x150 - 0x148)
// Class ReplicationGraph.ReplicationGraphNode_ConnectionDormanyNode
class UReplicationGraphNode_ConnectionDormanyNode : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_11B3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode_ConnectionDormanyNode");
		return Clss;
	}

};

// 0x58 (0x1A0 - 0x148)
// Class ReplicationGraph.ReplicationGraphNode_DormancyNode
class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_11B4[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode_DormancyNode");
		return Clss;
	}

};

// 0x18 (0x160 - 0x148)
// Class ReplicationGraph.ReplicationGraphNode_GridCell
class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
{
public:
	class UReplicationGraphNode_ActorListFrequencyBuckets* DynamicNode;                                       // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UReplicationGraphNode_DormancyNode*    DormancyNode;                                      // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11B5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode_GridCell");
		return Clss;
	}

};

// 0x130 (0x1D0 - 0xA0)
// Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
{
public:
	uint8                                        Pad_11B6[0x130];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode_GridSpatialization2D");
		return Clss;
	}

};

// 0x60 (0x100 - 0xA0)
// Class ReplicationGraph.ReplicationGraphNode_ClassCategories
class UReplicationGraphNode_ClassCategories : public UReplicationGraphNode
{
public:
	uint8                                        Pad_11B7[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode_ClassCategories");
		return Clss;
	}

};

// 0x20 (0xC0 - 0xA0)
// Class ReplicationGraph.ReplicationGraphNode_FrequencyLimiter
class UReplicationGraphNode_FrequencyLimiter : public UReplicationGraphNode
{
public:
	uint8                                        Pad_11B8[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode_FrequencyLimiter");
		return Clss;
	}

};

// 0x20 (0xC0 - 0xA0)
// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
{
public:
	class UReplicationGraphNode*                 ChildNode;                                         // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11B9[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode_AlwaysRelevant");
		return Clss;
	}

};

// 0x10 (0xB0 - 0xA0)
// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode
{
public:
	class UReplicationGraphNode*                 ChildNode;                                         // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11BA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode_AlwaysRelevant_ForConnection");
		return Clss;
	}

};

// 0x30 (0xD0 - 0xA0)
// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
{
public:
	TArray<struct FTearOffActorInfo>             TearOffActors;                                     // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_11BB[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphNode_TearOff_ForConnection");
		return Clss;
	}

};

// 0x248 (0x298 - 0x50)
// Class ReplicationGraph.ReplicationGraph
class UReplicationGraph : public UReplicationDriver
{
public:
	TSubclassOf<class UNetReplicationGraphConnection> ReplicationConnectionManagerClass;                 // 0x50(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNetDriver*                            NetDriver;                                         // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNetReplicationGraphConnection*> Connections;                                       // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UNetReplicationGraphConnection*> PendingConnections;                                // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_11BC[0xB0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UReplicationGraphNode*>         GlobalGraphNodes;                                  // 0x130(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UReplicationGraphNode*>         PrepareForReplicationNodes;                        // 0x140(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_11BD[0x148];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraph");
		return Clss;
	}

};

// 0x1F8 (0x220 - 0x28)
// Class ReplicationGraph.NetReplicationGraphConnection
class UNetReplicationGraphConnection : public UReplicationConnectionDriver
{
public:
	class UNetConnection*                        NetConnection;                                     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11BE[0x1B0];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class AReplicationGraphDebugActor*           DebugActor;                                        // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11BF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UReplicationGraphNode*>         ConnectionGraphNodes;                              // 0x1F0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UReplicationGraphNode_TearOff_ForConnection* TearOffNode;                                       // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11C0[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NetReplicationGraphConnection");
		return Clss;
	}

};

// 0x10 (0x328 - 0x318)
// Class ReplicationGraph.ReplicationGraphDebugActor
class AReplicationGraphDebugActor : public AActor
{
public:
	class UReplicationGraph*                     ReplicationGraph;                                  // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNetReplicationGraphConnection*        ConnectionManager;                                 // 0x320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReplicationGraphDebugActor");
		return Clss;
	}

	void ServerStopDebugging();
	void ServerStartDebugging();
	void ServerPrintAllActorInfo(const class FString& Str);
	void ServerCellInfo();
	void ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, TArray<class AActor*>& Actors);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
