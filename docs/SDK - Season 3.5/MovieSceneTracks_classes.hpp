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

// 0x0 (0x28 - 0x28)
// Class MovieSceneTracks.MovieSceneTransformOrigin
class UMovieSceneTransformOrigin : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneTransformOrigin");
		return Clss;
	}

	struct FTransform BP_GetTransformOrigin();
};

// 0x28 (0x138 - 0x110)
// Class MovieSceneTracks.MovieScene3DConstraintSection
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
	struct FGuid                                 ConstraintId;                                      // 0x110(0x10)(Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMovieSceneObjectBindingID            ConstraintBindingID;                               // 0x120(0x18)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DConstraintSection");
		return Clss;
	}

};

// 0x18 (0x150 - 0x138)
// Class MovieSceneTracks.MovieScene3DAttachSection
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:
	class FName                                  AttachSocketName;                                  // 0x138(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachComponentName;                               // 0x140(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AttachmentLocationRule;                            // 0x148(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AttachmentRotationRule;                            // 0x149(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AttachmentScaleRule;                               // 0x14A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDetachmentRule                   DetachmentLocationRule;                            // 0x14B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDetachmentRule                   DetachmentRotationRule;                            // 0x14C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDetachmentRule                   DetachmentScaleRule;                               // 0x14D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21E5[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DAttachSection");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MovieSceneTracks.MovieScene3DConstraintTrack
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>            ConstraintSections;                                // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_21E6[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DConstraintTrack");
		return Clss;
	}

};

// 0x0 (0xD0 - 0xD0)
// Class MovieSceneTracks.MovieScene3DAttachTrack
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DAttachTrack");
		return Clss;
	}

};

// 0x78 (0x1B0 - 0x138)
// Class MovieSceneTracks.MovieScene3DPathSection
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
	struct FRichCurve                            TimingCurve;                                       // 0x138(0x70)(Edit, NativeAccessSpecifierPrivate)
	enum class EMovieScene3DPathSection_Axis     FrontAxisEnum;                                     // 0x1A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EMovieScene3DPathSection_Axis     UpAxisEnum;                                        // 0x1A9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21E7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bFollow : 1;                                       // Mask: 0x1, PropSize: 0x10x1AC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bReverse : 1;                                      // Mask: 0x2, PropSize: 0x10x1AC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bForceUpright : 1;                                 // Mask: 0x4, PropSize: 0x10x1AC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21E8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DPathSection");
		return Clss;
	}

};

// 0x0 (0xD0 - 0xD0)
// Class MovieSceneTracks.MovieScene3DPathTrack
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DPathTrack");
		return Clss;
	}

};

// 0x470 (0x580 - 0x110)
// Class MovieSceneTracks.MovieScene3DTransformSection
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_21E9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneTransformMask              TransformMask;                                     // 0x118(0x4)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21EA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            Translation;                                       // 0x120(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_21EB[0xE0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            Rotation;                                          // 0x270(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_21EC[0xE0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            Scale;                                             // 0x3C0(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_21ED[0xE0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            ManualWeight;                                      // 0x510(0x70)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DTransformSection");
		return Clss;
	}

};

// 0x28 (0xE0 - 0xB8)
// Class MovieSceneTracks.MovieScenePropertyTrack
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
public:
	class FName                                  PropertyName;                                      // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                PropertyPath;                                      // 0xC0(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xD0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScenePropertyTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieScene3DTransformTrack
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene3DTransformTrack");
		return Clss;
	}

};

// 0xA0 (0x1B0 - 0x110)
// Class MovieSceneTracks.MovieSceneActorReferenceSection
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_21EE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntegralCurve                        ActorGuidIndexCurve;                               // 0x118(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_21EF[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        ActorGuidStrings;                                  // 0x198(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21F0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneActorReferenceSection");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneActorReferenceTrack
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneActorReferenceTrack");
		return Clss;
	}

};

// 0x140 (0x250 - 0x110)
// Class MovieSceneTracks.MovieSceneAudioSection
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	class USoundBase*                            Sound;                                             // 0x110(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StartOffset;                                       // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AudioStartTime;                                    // 0x11C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AudioDilationFactor;                               // 0x120(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AudioVolume;                                       // 0x124(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRichCurve                            SoundVolume;                                       // 0x128(0x70)(Edit, NativeAccessSpecifierPrivate)
	struct FRichCurve                            PitchMultiplier;                                   // 0x198(0x70)(Edit, NativeAccessSpecifierPrivate)
	bool                                         bSuppressSubtitles;                                // 0x208(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOverrideAttenuation;                              // 0x209(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21F1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAttenuation*                     AttenuationSettings;                               // 0x210(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	UDelegateProperty_                           OnQueueSubtitles;                                  // 0x218(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  OnAudioFinished;                                   // 0x228(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  OnAudioPlaybackPercent;                            // 0x238(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21F2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneAudioSection");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MovieSceneTracks.MovieSceneAudioTrack
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            AudioSections;                                     // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21F3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneAudioTrack");
		return Clss;
	}

};

// 0x80 (0x190 - 0x110)
// Class MovieSceneTracks.MovieSceneBoolSection
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_21F4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         DefaultValue;                                      // 0x118(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntegralCurve                        BoolCurve;                                         // 0x120(0x70)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBoolSection");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneBoolTrack
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBoolTrack");
		return Clss;
	}

};

// 0x80 (0x190 - 0x110)
// Class MovieSceneTracks.MovieSceneByteSection
class UMovieSceneByteSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_21F6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntegralCurve                        ByteCurve;                                         // 0x118(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_21F7[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneByteSection");
		return Clss;
	}

};

// 0x10 (0xF0 - 0xE0)
// Class MovieSceneTracks.MovieSceneByteTrack
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                 Enum;                                              // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_21F8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneByteTrack");
		return Clss;
	}

};

// 0x40 (0x150 - 0x110)
// Class MovieSceneTracks.MovieSceneCameraAnimSection
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraAnimSectionData      AnimData;                                          // 0x110(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UCameraAnim*                           CameraAnim;                                        // 0x130(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PlayRate;                                          // 0x138(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PlayScale;                                         // 0x13C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BlendInTime;                                       // 0x140(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        BlendOutTime;                                      // 0x144(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLooping;                                          // 0x148(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21F9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraAnimSection");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MovieSceneTracks.MovieSceneCameraAnimTrack
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            CameraAnimSections;                                // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21FA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraAnimTrack");
		return Clss;
	}

};

// 0x30 (0x140 - 0x110)
// Class MovieSceneTracks.MovieSceneCameraCutSection
class UMovieSceneCameraCutSection : public UMovieSceneSection
{
public:
	struct FGuid                                 CameraGuid;                                        // 0x110(0x10)(Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneObjectBindingID            CameraBindingID;                                   // 0x120(0x18)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21FB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraCutSection");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MovieSceneTracks.MovieSceneCameraCutTrack
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21FC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraCutTrack");
		return Clss;
	}

};

// 0x40 (0x150 - 0x110)
// Class MovieSceneTracks.MovieSceneCameraShakeSection
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSectionData     ShakeData;                                         // 0x110(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShake>              ShakeClass;                                        // 0x130(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayScale;                                         // 0x138(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECameraAnimPlaySpace              PlaySpace;                                         // 0x13C(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              UserDefinedPlaySpace;                              // 0x140(0xC)(Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_21FE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraShakeSection");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MovieSceneTracks.MovieSceneCameraShakeTrack
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            CameraShakeSections;                               // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21FF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCameraShakeTrack");
		return Clss;
	}

};

// 0x28 (0x1A0 - 0x178)
// Class MovieSceneTracks.MovieSceneCinematicShotSection
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
public:
	class FString                                ShotDisplayName;                                   // 0x178(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                  DisplayName;                                       // 0x188(0x18)(Deprecated, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCinematicShotSection");
		return Clss;
	}

};

// 0x0 (0xD0 - 0xD0)
// Class MovieSceneTracks.MovieSceneCinematicShotTrack
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneCinematicShotTrack");
		return Clss;
	}

};

// 0x1D0 (0x2E0 - 0x110)
// Class MovieSceneTracks.MovieSceneColorSection
class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_2200[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            RedCurve;                                          // 0x118(0x70)(NativeAccessSpecifierPrivate)
	struct FRichCurve                            GreenCurve;                                        // 0x188(0x70)(NativeAccessSpecifierPrivate)
	struct FRichCurve                            BlueCurve;                                         // 0x1F8(0x70)(NativeAccessSpecifierPrivate)
	struct FRichCurve                            AlphaCurve;                                        // 0x268(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_2201[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneColorSection");
		return Clss;
	}

};

// 0x10 (0xF0 - 0xE0)
// Class MovieSceneTracks.MovieSceneColorTrack
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:
	bool                                         bIsSlateColor;                                     // 0xE0(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2202[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneColorTrack");
		return Clss;
	}

};

// 0x80 (0x190 - 0x110)
// Class MovieSceneTracks.MovieSceneEnumSection
class UMovieSceneEnumSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_2203[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntegralCurve                        EnumCurve;                                         // 0x118(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_2204[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEnumSection");
		return Clss;
	}

};

// 0x10 (0xF0 - 0xE0)
// Class MovieSceneTracks.MovieSceneEnumTrack
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                 Enum;                                              // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2205[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEnumTrack");
		return Clss;
	}

};

// 0x110 (0x220 - 0x110)
// Class MovieSceneTracks.MovieSceneEventSection
class UMovieSceneEventSection : public UMovieSceneSection
{
public:
	struct FNameCurve                            Events;                                            // 0x110(0x68)(Deprecated, NativeAccessSpecifierPrivate)
	struct FMovieSceneEventSectionData           EventData;                                         // 0x178(0x20)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_2206[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEventSection");
		return Clss;
	}

};

// 0x28 (0xE0 - 0xB8)
// Class MovieSceneTracks.MovieSceneEventTrack
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        bFireEventsWhenForwards : 1;                       // Mask: 0x1, PropSize: 0x10xB8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFireEventsWhenBackwards : 1;                      // Mask: 0x2, PropSize: 0x10xB8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_216 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2207[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFireEventsAtPosition             EventPosition;                                     // 0xBC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2208[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMovieSceneObjectBindingID>    EventReceivers;                                    // 0xC0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xD0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEventTrack");
		return Clss;
	}

};

// 0x78 (0x188 - 0x110)
// Class MovieSceneTracks.MovieSceneFloatSection
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_2209[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            FloatCurve;                                        // 0x118(0x70)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFloatSection");
		return Clss;
	}

};

// 0x18 (0x1A0 - 0x188)
// Class MovieSceneTracks.MovieSceneFadeSection
class UMovieSceneFadeSection : public UMovieSceneFloatSection
{
public:
	struct FLinearColor                          FadeColor;                                         // 0x188(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFadeAudio : 1;                                    // Mask: 0x1, PropSize: 0x10x198(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_220A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFadeSection");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneFloatTrack
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFloatTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneFadeTrack
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFadeTrack");
		return Clss;
	}

};

// 0x80 (0x190 - 0x110)
// Class MovieSceneTracks.MovieSceneIntegerSection
class UMovieSceneIntegerSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_220B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntegralCurve                        IntegerCurve;                                      // 0x118(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_220C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneIntegerSection");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneIntegerTrack
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneIntegerTrack");
		return Clss;
	}

};

// 0x20 (0x130 - 0x110)
// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
public:
	enum class ELevelVisibility                  Visibility;                                        // 0x110(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_220D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          LevelNames;                                        // 0x118(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_220E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLevelVisibilitySection");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_220F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLevelVisibilityTrack");
		return Clss;
	}

};

// 0x10 (0xC8 - 0xB8)
// Class MovieSceneTracks.MovieSceneMaterialTrack
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneMaterialTrack");
		return Clss;
	}

};

// 0x8 (0xD0 - 0xC8)
// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
public:
	class UMaterialParameterCollection*          MPC;                                               // 0xC8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneMaterialParameterCollectionTrack");
		return Clss;
	}

};

// 0x8 (0xD0 - 0xC8)
// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	int32                                        MaterialIndex;                                     // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2210[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneComponentMaterialTrack");
		return Clss;
	}

};

// 0x30 (0x140 - 0x110)
// Class MovieSceneTracks.MovieSceneParameterSection
class UMovieSceneParameterSection : public UMovieSceneSection
{
public:
	TArray<struct FScalarParameterNameAndCurve>  ScalarParameterNamesAndCurves;                     // 0x110(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;                     // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FColorParameterNameAndCurves>  ColorParameterNamesAndCurves;                      // 0x130(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneParameterSection");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MovieSceneTracks.MovieSceneParticleParameterTrack
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2211[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneParticleParameterTrack");
		return Clss;
	}

};

// 0x70 (0x180 - 0x110)
// Class MovieSceneTracks.MovieSceneParticleSection
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	struct FIntegralCurve                        ParticleKeys;                                      // 0x110(0x70)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneParticleSection");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MovieSceneTracks.MovieSceneParticleTrack
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            ParticleSections;                                  // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2212[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneParticleTrack");
		return Clss;
	}

};

// 0xC0 (0x1D0 - 0x110)
// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSkeletalAnimationParams    Params;                                            // 0x110(0x90)(Edit, NativeAccessSpecifierPublic)
	class UAnimSequence*                         AnimSequence;                                      // 0x1A0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimSequenceBase*                     Animation;                                         // 0x1A8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StartOffset;                                       // 0x1B0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EndOffset;                                         // 0x1B4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PlayRate;                                          // 0x1B8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x1BC(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_217 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2213[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SlotName;                                          // 0x1C0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2214[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSkeletalAnimationSection");
		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            AnimationSections;                                 // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	bool                                         bUseLegacySectionIndexBlend;                       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2215[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSkeletalAnimationTrack");
		return Clss;
	}

};

// 0x8 (0x190 - 0x188)
// Class MovieSceneTracks.MovieSceneSlomoSection
class UMovieSceneSlomoSection : public UMovieSceneFloatSection
{
public:
	uint8                                        Pad_2216[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSlomoSection");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneSlomoTrack
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSlomoTrack");
		return Clss;
	}

};

// 0x0 (0x190 - 0x190)
// Class MovieSceneTracks.MovieSceneSpawnSection
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSpawnSection");
		return Clss;
	}

};

// 0x28 (0xE0 - 0xB8)
// Class MovieSceneTracks.MovieSceneSpawnTrack
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FGuid                                 ObjectGuid;                                        // 0xC8(0x10)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2217[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSpawnTrack");
		return Clss;
	}

};

// 0x80 (0x190 - 0x110)
// Class MovieSceneTracks.MovieSceneStringSection
class UMovieSceneStringSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_2218[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStringCurve                          StringCurve;                                       // 0x118(0x78)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneStringSection");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneStringTrack
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneStringTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneTransformTrack
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneTransformTrack");
		return Clss;
	}

};

// 0x1D0 (0x2E0 - 0x110)
// Class MovieSceneTracks.MovieSceneVectorSection
class UMovieSceneVectorSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_2219[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            Curves;                                            // 0x118(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_221A[0x150];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ChannelsUsed;                                      // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_221B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneVectorSection");
		return Clss;
	}

};

// 0x10 (0xF0 - 0xE0)
// Class MovieSceneTracks.MovieSceneVectorTrack
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
public:
	int32                                        NumChannelsUsed;                                   // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_221C[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneVectorTrack");
		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneTracks.MovieSceneVisibilityTrack
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneVisibilityTrack");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
