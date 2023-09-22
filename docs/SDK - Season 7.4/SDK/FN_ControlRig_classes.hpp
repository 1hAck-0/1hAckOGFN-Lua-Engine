#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ControlRig.ControlRig
// 0x0128 (0x0150 - 0x0028)
class UControlRig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0028(0x0014) MISSED OFFSET
	ERigExecutionType                                  ExecutionType;                                            // 0x003C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FRigHierarchyContainer                      Hierarchy;                                                // 0x0040(0x00C0) (Edit, DisableEditOnInstance, EditConst)
	TArray<struct FControlRigOperator>                 Operators;                                                // 0x0100(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x40];                                      // 0x0110(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ControlRig.ControlRig");
		return ptr;
	}


	void SetGlobalTransform(struct FName JointName, struct FTransform InTransform);
	struct FTransform GetGlobalTransform(struct FName JointName);
	float GetDeltaTime();
};


// Class ControlRig.ControlRigBindingTrack
// 0x0000 (0x0078 - 0x0078)
class UControlRigBindingTrack : public UMovieSceneSpawnTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ControlRig.ControlRigBindingTrack");
		return ptr;
	}

};


// Class ControlRig.ControlRigBlueprintGeneratedClass
// 0x0000 (0x02E0 - 0x02E0)
class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ControlRig.ControlRigBlueprintGeneratedClass");
		return ptr;
	}

};


// Class ControlRig.ControlRigComponent
// 0x0048 (0x0140 - 0x00F8)
class UControlRigComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty ControlRig.ControlRigComponent.OnPreInitializeDelegate
	unsigned char                                      UnknownData01[0x10];                                      // 0x0108(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty ControlRig.ControlRigComponent.OnPostInitializeDelegate
	unsigned char                                      UnknownData02[0x10];                                      // 0x0118(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty ControlRig.ControlRigComponent.OnPreEvaluateDelegate
	unsigned char                                      UnknownData03[0x10];                                      // 0x0128(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty ControlRig.ControlRigComponent.OnPostEvaluateDelegate
	class UControlRig*                                 ControlRig;                                               // 0x0138(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ControlRig.ControlRigComponent");
		return ptr;
	}


	void OnPreInitialize();
	void OnPreEvaluate();
	void OnPostInitialize();
	void OnPostEvaluate();
	class UControlRig* BP_GetControlRig();
};


// Class ControlRig.ControlRigControl
// 0x0050 (0x0380 - 0x0330)
class AControlRigControl : public AActor
{
public:
	struct FString                                     PropertyPath;                                             // 0x0330(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FTransform                                  Transform;                                                // 0x0340(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	unsigned char                                      bEnabled : 1;                                             // 0x0370(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bSelected : 1;                                            // 0x0370(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bHovered : 1;                                             // 0x0370(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      bManipulating : 1;                                        // 0x0370(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0371(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ControlRig.ControlRigControl");
		return ptr;
	}


	void OnTransformChanged(struct FTransform NewTransform);
	void OnSelectionChanged(bool bIsSelected);
	void OnManipulatingChanged(bool bIsManipulating);
	void OnHoveredChanged(bool bIsSelected);
	void OnEnabledChanged(bool bIsEnabled);
};


// Class ControlRig.ControlRigLibrary
// 0x0000 (0x0028 - 0x0028)
class UControlRigLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ControlRig.ControlRigLibrary");
		return ptr;
	}

};


// Class ControlRig.ControlRigObjectHolder
// 0x0010 (0x0038 - 0x0028)
class UControlRigObjectHolder : public UObject
{
public:
	TArray<class UObject*>                             Objects;                                                  // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ControlRig.ControlRigObjectHolder");
		return ptr;
	}

};


// Class ControlRig.ControlRigSequence
// 0x0058 (0x04F0 - 0x0498)
class UControlRigSequence : public ULevelSequence
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0498(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ControlRig.ControlRigSequence.LastExportedToAnimationSequence
	unsigned char                                      UnknownData01[0x28];                                      // 0x04C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ControlRig.ControlRigSequence.LastExportedUsingSkeletalMesh
	float                                              LastExportedFrameRate;                                    // 0x04E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ControlRig.ControlRigSequence");
		return ptr;
	}

};


// Class ControlRig.ControlRigSequencerAnimInstance
// 0x0000 (0x0270 - 0x0270)
class UControlRigSequencerAnimInstance : public UAnimSequencerInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ControlRig.ControlRigSequencerAnimInstance");
		return ptr;
	}

};


// Class ControlRig.ControlRigStaticMeshControl
// 0x0010 (0x0390 - 0x0380)
class AControlRigStaticMeshControl : public AControlRigControl
{
public:
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0380(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ControlRig.ControlRigStaticMeshControl");
		return ptr;
	}

};


// Class ControlRig.MovieSceneControlRigSection
// 0x00B8 (0x0208 - 0x0150)
class UMovieSceneControlRigSection : public UMovieSceneSubSection
{
public:
	bool                                               bAdditive;                                                // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyBoneFilter;                                         // 0x0151(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0152(0x0006) MISSED OFFSET
	struct FInputBlendPose                             BoneFilter;                                               // 0x0158(0x0010) (Edit)
	struct FMovieSceneFloatChannel                     Weight;                                                   // 0x0168(0x00A0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ControlRig.MovieSceneControlRigSection");
		return ptr;
	}

};


// Class ControlRig.MovieSceneControlRigTrack
// 0x0000 (0x0068 - 0x0068)
class UMovieSceneControlRigTrack : public UMovieSceneSubTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ControlRig.MovieSceneControlRigTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
