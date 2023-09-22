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

// ScriptStruct AnimationSharing.AnimationSetup
// 0x0038
struct FAnimationSetup
{
	class UClass*                                      AnimBlueprint;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AnimationSharing.AnimationSetup.AnimSequence
	struct FPerPlatformInt                             NumRandomizedInstances;                                   // 0x0030(0x0004) (Edit)
	struct FPerPlatformBool                            Enabled;                                                  // 0x0034(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct AnimationSharing.AnimationStateEntry
// 0x0030
struct FAnimationStateEntry
{
	unsigned char                                      State;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FAnimationSetup>                     AnimationSetups;                                          // 0x0008(0x0010) (Edit, ZeroConstructor)
	bool                                               bOnDemand;                                                // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAdditive;                                                // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	float                                              BlendTime;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReturnToPreviousState;                                   // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSetNextState;                                            // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NextState;                                                // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
	struct FPerPlatformInt                             MaximumNumberOfConcurrentInstances;                       // 0x0024(0x0004) (Edit)
	float                                              WiggleTimePercentage;                                     // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRequiresCurves;                                          // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup
// 0x0078
struct FPerSkeletonAnimationSharingSetup
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AnimationSharing.PerSkeletonAnimationSharingSetup.Skeleton
	TArray<struct FAnimationStateEntry>                AnimationStates;                                          // 0x0028(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      StateProcessorClass;                                      // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AnimationSharing.PerSkeletonAnimationSharingSetup.SkeletalMesh
	class UClass*                                      BlendAnimBlueprint;                                       // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AdditiveAnimBlueprint;                                    // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AnimationSharing.AnimationSharingScalability
// 0x0010
struct FAnimationSharingScalability
{
	struct FPerPlatformBool                            UseBlendTransitions;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FPerPlatformFloat                           BlendSignificanceValue;                                   // 0x0004(0x0004) (Edit)
	struct FPerPlatformInt                             MaximumNumberConcurrentBlends;                            // 0x0008(0x0004) (Edit)
	struct FPerPlatformFloat                           TickSignificanceValue;                                    // 0x000C(0x0004) (Edit)
};

// ScriptStruct AnimationSharing.TickAnimationSharingFunction
// 0x0008 (0x0058 - 0x0050)
struct FTickAnimationSharingFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
