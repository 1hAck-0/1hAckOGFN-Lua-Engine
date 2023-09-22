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

// Class LiveLink.LiveLinkBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkBlueprintLibrary");
		return ptr;
	}


	void STATIC_TransformNames(struct FSubjectFrameHandle* SubjectFrameHandle, TArray<struct FName>* TransformNames);
	void STATIC_TransformName(struct FLiveLinkTransform* LiveLinkTransform, struct FName* Name);
	bool STATIC_RequestShutdown(struct FLiveLinkSourceHandle* SourceHandle);
	void STATIC_ParentBoneSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform);
	int STATIC_NumberOfTransforms(struct FSubjectFrameHandle* SubjectFrameHandle);
	bool STATIC_IsSourceStillValid(struct FLiveLinkSourceHandle* SourceHandle);
	bool STATIC_HasParent(struct FLiveLinkTransform* LiveLinkTransform);
	void STATIC_GetTransformByName(struct FName TransformName, struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
	void STATIC_GetTransformByIndex(int TransformIndex, struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
	struct FText STATIC_GetSourceType(struct FLiveLinkSourceHandle* SourceHandle);
	struct FText STATIC_GetSourceStatus(struct FLiveLinkSourceHandle* SourceHandle);
	struct FText STATIC_GetSourceMachineName(struct FLiveLinkSourceHandle* SourceHandle);
	void STATIC_GetRootTransform(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
	void STATIC_GetParent(struct FLiveLinkTransform* LiveLinkTransform, struct FLiveLinkTransform* Parent);
	void STATIC_GetMetadata(struct FSubjectFrameHandle* SubjectFrameHandle, struct FSubjectMetadata* MetaData);
	void STATIC_GetCurves(struct FSubjectFrameHandle* SubjectFrameHandle, TMap<struct FName, float>* Curves);
	void STATIC_GetChildren(struct FLiveLinkTransform* LiveLinkTransform, TArray<struct FLiveLinkTransform>* Children);
	void STATIC_ComponentSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform);
	int STATIC_ChildCount(struct FLiveLinkTransform* LiveLinkTransform);
};


// Class LiveLink.LiveLinkComponent
// 0x0020 (0x0118 - 0x00F8)
class ULiveLinkComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty LiveLink.LiveLinkComponent.OnLiveLinkUpdated
	unsigned char                                      UnknownData01[0x10];                                      // 0x0108(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkComponent");
		return ptr;
	}


	void GetSubjectDataAtWorldTime(struct FName SubjectName, float WorldTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectDataAtSceneTime(struct FName SubjectName, struct FTimecode SceneTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectData(struct FName SubjectName, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetAvailableSubjectNames(TArray<struct FName>* SubjectNames);
};


// Class LiveLink.LiveLinkDrivenComponent
// 0x0020 (0x0118 - 0x00F8)
class ULiveLinkDrivenComponent : public UActorComponent
{
public:
	struct FLiveLinkSubjectName                        SubjectName;                                              // 0x00F8(0x0008) (Edit)
	struct FName                                       ActorTransformBone;                                       // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bModifyActorTransform;                                    // 0x0108(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSetRelativeLocation;                                     // 0x0109(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x010A(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkDrivenComponent");
		return ptr;
	}

};


// Class LiveLink.LiveLinkInstance
// 0x0000 (0x0270 - 0x0270)
class ULiveLinkInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkInstance");
		return ptr;
	}

};


// Class LiveLink.LiveLinkMessageBusFinder
// 0x0058 (0x0080 - 0x0028)
class ULiveLinkMessageBusFinder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkMessageBusFinder");
		return ptr;
	}


	void GetAvailableProviders(class UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, float Duration, TArray<struct FProviderPollResult>* AvailableProviders);
	class ULiveLinkMessageBusFinder* STATIC_ConstructMessageBusFinder();
	void STATIC_ConnectToProvider(struct FProviderPollResult* Provider, struct FLiveLinkSourceHandle* SourceHandle);
};


// Class LiveLink.LiveLinkRetargetAsset
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkRetargetAsset : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkRetargetAsset");
		return ptr;
	}

};


// Class LiveLink.LiveLinkRemapAsset
// 0x00A8 (0x00D0 - 0x0028)
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkRemapAsset");
		return ptr;
	}


	void RemapCurveElements(TMap<struct FName, float>* CurveItems);
	struct FName GetRemappedCurveName(struct FName CurveName);
	struct FName GetRemappedBoneName(struct FName BoneName);
};


// Class LiveLink.LiveLinkTimeSynchronizationSource
// 0x0060 (0x0090 - 0x0030)
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{
public:
	struct FName                                       SubjectName;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkTimeSynchronizationSource");
		return ptr;
	}

};


// Class LiveLink.MovieSceneLiveLinkSection
// 0x00C8 (0x01A8 - 0x00E0)
class UMovieSceneLiveLinkSection : public UMovieSceneSection
{
public:
	struct FName                                       SubjectName;                                              // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLiveLinkFrameData                          TemplateToPush;                                           // 0x00E8(0x0090)
	struct FLiveLinkRefSkeleton                        RefSkeleton;                                              // 0x0178(0x0020)
	TArray<struct FMovieSceneFloatChannel>             PropertyFloatChannels;                                    // 0x0198(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.MovieSceneLiveLinkSection");
		return ptr;
	}

};


// Class LiveLink.MovieSceneLiveLinkTrack
// 0x0000 (0x0080 - 0x0080)
class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.MovieSceneLiveLinkTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
