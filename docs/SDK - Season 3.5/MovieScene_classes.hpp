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

// 0x88 (0xB0 - 0x28)
// Class MovieScene.MovieSceneSignedObject
class UMovieSceneSignedObject : public UObject
{
public:
	struct FGuid                                 Signature;                                         // 0x28(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FE3[0x78];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSignedObject");
		return Clss;
	}

};

// 0x80 (0x130 - 0xB0)
// Class MovieScene.MovieScene
class UMovieScene : public UMovieSceneSignedObject
{
public:
	TArray<struct FMovieSceneSpawnable>          Spawnables;                                        // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieScenePossessable>        Possessables;                                      // 0xC0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneBinding>            ObjectBindings;                                    // 0xD0(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>              MasterTracks;                                      // 0xE0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UMovieSceneTrack*                      CameraCutTrack;                                    // 0xF0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFloatRange                           SelectionRange;                                    // 0xF8(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFloatRange                           PlaybackRange;                                     // 0x108(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bForceFixedFrameIntervalPlayback;                  // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FE4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FixedFrameInterval;                                // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        InTime;                                            // 0x120(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        OutTime;                                           // 0x124(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StartTime;                                         // 0x128(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EndTime;                                           // 0x12C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene");
		return Clss;
	}

};

// 0x70 (0x98 - 0x28)
// Class MovieScene.MovieSceneBindingOverrides
class UMovieSceneBindingOverrides : public UObject
{
public:
	uint8                                        Pad_FE5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMovieSceneBindingOverrideData> BindingData;                                       // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FE6[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBindingOverrides");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneBindingOverridesInterface
class UMovieSceneBindingOverridesInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBindingOverridesInterface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneBindingOwnerInterface
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBindingOwnerInterface");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class MovieScene.MovieSceneBuiltInEasingFunction
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	uint8                                        Pad_FE7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMovieSceneBuiltInEasing          Type;                                              // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FE8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBuiltInEasingFunction");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class MovieScene.MovieSceneEasingExternalCurve
class UMovieSceneEasingExternalCurve : public UObject
{
public:
	uint8                                        Pad_FE9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           Curve;                                             // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEasingExternalCurve");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneEasingFunction
class UMovieSceneEasingFunction : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEasingFunction");
		return Clss;
	}

	float OnEvaluate(float Interp);
};

// 0x48 (0x70 - 0x28)
// Class MovieScene.MovieSceneFolder
class UMovieSceneFolder : public UObject
{
public:
	class FName                                  FolderName;                                        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneFolder*>             ChildFolders;                                      // 0x30(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>              ChildMasterTracks;                                 // 0x40(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class FString>                        ChildObjectBindingStrings;                         // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FEA[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFolder");
		return Clss;
	}

};

// 0x8 (0xB8 - 0xB0)
// Class MovieScene.MovieSceneTrack
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions           EvalOptions;                                       // 0xB0(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_FEB[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneTrack");
		return Clss;
	}

};

// 0x0 (0xB8 - 0xB8)
// Class MovieScene.MovieSceneNameableTrack
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNameableTrack");
		return Clss;
	}

};

// 0x60 (0x110 - 0xB0)
// Class MovieScene.MovieSceneSection
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions         EvalOptions;                                       // 0xB0(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_FEC[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneEasingSettings             Easing;                                            // 0xB8(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EndTime;                                           // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        RowIndex;                                          // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        OverlapPriority;                                   // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsActive : 1;                                     // Mask: 0x1, PropSize: 0x10x100(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsLocked : 1;                                     // Mask: 0x2, PropSize: 0x10x100(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsInfinite : 1;                                   // Mask: 0x4, PropSize: 0x10x100(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_161 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_FED[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PrerollTime;                                       // 0x104(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PostrollTime;                                      // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FOptionalMovieSceneBlendType          BlendType;                                         // 0x10C(0x2)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_FEE[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSection");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MovieScene.MovieSceneSegmentCompilerTestTrack
class UMovieSceneSegmentCompilerTestTrack : public UMovieSceneTrack
{
public:
	bool                                         bHighPassFilter;                                   // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FEF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            SectionArray;                                      // 0xC0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSegmentCompilerTestTrack");
		return Clss;
	}

};

// 0x0 (0x110 - 0x110)
// Class MovieScene.MovieSceneSegmentCompilerTestSection
class UMovieSceneSegmentCompilerTestSection : public UMovieSceneSection
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSegmentCompilerTestSection");
		return Clss;
	}

};

// 0x2F8 (0x3A8 - 0xB0)
// Class MovieScene.MovieSceneSequence
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneEvaluationTemplate         PrecompiledEvaluationTemplate;                     // 0xB0(0x2F0)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EMovieSceneCompletionMode         DefaultCompletionMode;                             // 0x3A0(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParentContextsAreSignificant;                     // 0x3A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FF0[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSequence");
		return Clss;
	}

};

// 0x7D0 (0x7F8 - 0x28)
// Class MovieScene.MovieSceneSequencePlayer
class UMovieSceneSequencePlayer : public UObject
{
public:
	uint8                                        Pad_FF1[0x348];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnPlay;                                            // 0x370(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayReverse;                                     // 0x380(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnStop;                                            // 0x390(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPause;                                           // 0x3A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFinished;                                        // 0x3B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EMovieScenePlayerStatus           Status;                                            // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FF2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bReversePlayback : 1;                              // Mask: 0x1, PropSize: 0x10x3C4(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bPendingFirstUpdate : 1;                           // Mask: 0x2, PropSize: 0x10x3C4(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_162 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_FF3[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneSequence*                   Sequence;                                          // 0x3D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimeCursorPosition;                                // 0x3D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StartTime;                                         // 0x3DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EndTime;                                           // 0x3E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentNumLoops;                                   // 0x3E4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FF4[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x3F8(0x30)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_FF5[0x3D0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSequencePlayer");
		return Clss;
	}

	void Stop();
	void StartPlayingNextTick();
	void SetPlayRate(float PlayRate);
	void SetPlaybackRange(float NewStartTime, float NewEndTime);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void SetDisableCameraCuts(bool bInDisableCameraCuts);
	void Scrub();
	void PlayReverse();
	void PlayLooping(int32 NumLoops);
	void Play();
	void Pause();
	void JumpToPosition(float NewPlaybackPosition);
	bool IsPlaying();
	bool IsPaused();
	void GoToEndAndStop();
	float GetPlayRate();
	float GetPlaybackStart();
	float GetPlaybackPosition();
	float GetPlaybackEnd();
	float GetLength();
	bool GetDisableCameraCuts();
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	void ChangePlaybackDirection();
};

// 0x68 (0x178 - 0x110)
// Class MovieScene.MovieSceneSubSection
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSectionParameters          Parameters;                                        // 0x110(0x14)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        StartOffset;                                       // 0x124(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TimeScale;                                         // 0x128(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PrerollTime;                                       // 0x12C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieSceneSequence*                   SubSequence;                                       // 0x130(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TLazyObjectPtr<class AActor>                 ActorToRecord;                                     // 0x138(0x1C)(Edit, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FF6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TargetSequenceName;                                // 0x158(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDirectoryPath                        TargetPathToRecordTo;                              // 0x168(0x10)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSubSection");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MovieScene.MovieSceneSubTrack
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_FF7[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSubTrack");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
