#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESimulationSpace : int32
{
	ComponentSpace                 = 0,
	WorldSpace                     = 1,
	RootBoneSpace                  = 2,
	ESimulationSpace_MAX           = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x3A0 (0x490 - 0xF0)
// ScriptStruct ImmediatePhysics.AnimNode_RigidBody
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
public:
	class UPhysicsAsset*                         OverridePhysicsAsset;                              // 0xF0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OverrideWorldGravity;                              // 0xF8(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ExternalForce;                                     // 0x104(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 OverlapChannel;                                    // 0x110(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableWorldGeometry;                              // 0x111(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28FD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ESimulationSpace                  SimulationSpace;                                   // 0x114(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideWorldGravity;                             // 0x118(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CachedBoundsScale;                                 // 0x11C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransferBoneVelocities;                           // 0x120(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFreezeIncomingPoseOnStart;                        // 0x121(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bComponentSpaceSimulation;                         // 0x122(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_28FF[0x36D];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
