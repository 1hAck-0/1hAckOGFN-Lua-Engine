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

enum class EMovieScene3DPathSection_Axis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	NEG_X                          = 3,
	NEG_Y                          = 4,
	NEG_Z                          = 5,
	MovieScene3DPathSection_MAX    = 6,
};

enum class EFireEventsAtPosition : uint8
{
	AtStartOfEvaluation            = 0,
	AtEndOfEvaluation              = 1,
	AfterSpawn                     = 2,
	EFireEventsAtPosition_MAX      = 3,
};

enum class ELevelVisibility : uint8
{
	Visible                        = 0,
	Hidden                         = 1,
	ELevelVisibility_MAX           = 2,
};

enum class EParticleKey : uint8
{
	Activate                       = 0,
	Deactivate                     = 1,
	Trigger                        = 2,
	EParticleKey_MAX               = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x50 - 0x20)
// ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
struct FMovieScene3DAttachSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneObjectBindingID            AttachBindingID;                                   // 0x20(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachSocketName;                                  // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachComponentName;                               // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AttachmentLocationRule;                            // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AttachmentRotationRule;                            // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AttachmentScaleRule;                               // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDetachmentRule                   DetachmentLocationRule;                            // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDetachmentRule                   DetachmentRotationRule;                            // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDetachmentRule                   DetachmentScaleRule;                               // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_221D[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0xB0 - 0x20)
// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneObjectBindingID            PathBindingID;                                     // 0x20(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRichCurve                            TimingCurve;                                       // 0x38(0x70)(NativeAccessSpecifierPublic)
	enum class EMovieScene3DPathSection_Axis     FrontAxisEnum;                                     // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieScene3DPathSection_Axis     UpAxisEnum;                                        // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_221E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bFollow : 1;                                       // Mask: 0x1, PropSize: 0x10xAC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReverse : 1;                                      // Mask: 0x2, PropSize: 0x10xAC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bForceUpright : 1;                                 // Mask: 0x4, PropSize: 0x10xAC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_221F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
struct FMovieSceneTransformMask
{
public:
	uint32                                       Mask;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x70 (0x78 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FVector                               Location;                                          // 0x8(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x14(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x20(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2220[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FVector                               Scale;                                             // 0x8(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2221[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FRotator                              Rotation;                                          // 0x8(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2222[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FVector                               Location;                                          // 0x8(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2223[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x468 (0x468 - 0x0)
// ScriptStruct MovieSceneTracks.MovieScene3DTransformTemplateData
struct FMovieScene3DTransformTemplateData
{
public:
	struct FRichCurve                            TranslationCurve;                                  // 0x0(0x70)(NativeAccessSpecifierPublic)
	uint8                                        Pad_2224[0xE0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            RotationCurve;                                     // 0x150(0x70)(NativeAccessSpecifierPublic)
	uint8                                        Pad_2225[0xE0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            ScaleCurve;                                        // 0x2A0(0x70)(NativeAccessSpecifierPublic)
	uint8                                        Pad_2226[0xE0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            ManualWeight;                                      // 0x3F0(0x70)(NativeAccessSpecifierPublic)
	enum class EMovieSceneBlendType              BlendType;                                         // 0x460(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2227[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneTransformMask              Mask;                                              // 0x464(0x4)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x468 (0x488 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneComponentTransformSectionTemplate
struct FMovieSceneComponentTransformSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScene3DTransformTemplateData    TemplateData;                                      // 0x20(0x468)(NativeAccessSpecifierPublic)
};

// 0xA8 (0xC8 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData        PropertyData;                                      // 0x20(0x28)(NativeAccessSpecifierPrivate)
	struct FIntegralCurve                        ActorGuidIndexCurve;                               // 0x48(0x70)(NativeAccessSpecifierPrivate)
	TArray<struct FGuid>                         ActorGuids;                                        // 0xB8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplateData
struct FMovieSceneAudioSectionTemplateData
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AudioStartOffset;                                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                           AudioRange;                                        // 0xC(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2228[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            AudioPitchMultiplierCurve;                         // 0x20(0x70)(NativeAccessSpecifierPublic)
	struct FRichCurve                            AudioVolumeCurve;                                  // 0x90(0x70)(NativeAccessSpecifierPublic)
	int32                                        RowIndex;                                          // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideAttenuation;                              // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2229[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAttenuation*                     AttenuationSettings;                               // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnQueueSubtitles;                                  // 0x110(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAudioFinished;                                   // 0x120(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAudioPlaybackPercent;                            // 0x130(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
};

// 0x140 (0x160 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneAudioSectionTemplateData   AudioData;                                         // 0x20(0x140)(ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
struct FMovieSceneCameraAnimSectionData
{
public:
	class UCameraAnim*                           CameraAnim;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayScale;                                         // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendInTime;                                       // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendOutTime;                                      // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLooping;                                          // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_222A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x20 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
struct FMovieSceneAdditiveCameraAnimationTemplate : public FMovieSceneEvalTemplate
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
struct FMovieSceneCameraShakeSectionData
{
public:
	TSubclassOf<class UCameraShake>              ShakeClass;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayScale;                                         // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECameraAnimPlaySpace              PlaySpace;                                         // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_222B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              UserDefinedPlaySpace;                              // 0x10(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_222C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x48 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
public:
	struct FMovieSceneCameraShakeSectionData     SourceData;                                        // 0x20(0x20)(NoDestructor, NativeAccessSpecifierPrivate)
	float                                        SectionStartTime;                                  // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_222D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x48 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
public:
	struct FMovieSceneCameraAnimSectionData      SourceData;                                        // 0x20(0x20)(NoDestructor, NativeAccessSpecifierPrivate)
	float                                        SectionStartTime;                                  // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_222E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x80 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
struct FMovieSceneCameraCutSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneObjectBindingID            CameraBindingID;                                   // 0x20(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_222F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CutTransform;                                      // 0x40(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bHasCutTransform;                                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2230[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x60 - 0x8)
// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FLinearColor                          Color;                                             // 0x8(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2231[0x44];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C8 (0x210 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FRichCurve                            Curves;                                            // 0x48(0x70)(NativeAccessSpecifierPublic)
	uint8                                        Pad_2232[0x150];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMovieSceneBlendType              BlendType;                                         // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2233[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
struct FMovieSceneEventParameters
{
public:
	uint8                                        Pad_2234[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieSceneTracks.EventPayload
struct FEventPayload
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneEventParameters            Parameters;                                        // 0x8(0x28)(Edit, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
struct FMovieSceneEventSectionData
{
public:
	TArray<float>                                KeyTimes;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEventPayload>                 KeyValues;                                         // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x58 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneEventSectionData           EventData;                                         // 0x20(0x20)(NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneObjectBindingID>    EventReceivers;                                    // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bFireEventsWhenForwards : 1;                       // Mask: 0x1, PropSize: 0x10x50(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFireEventsWhenBackwards : 1;                      // Mask: 0x2, PropSize: 0x10x50(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2235[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0xA8 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FRichCurve                            FadeCurve;                                         // 0x20(0x70)(NativeAccessSpecifierPrivate)
	struct FLinearColor                          FadeColor;                                         // 0x90(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bFadeAudio : 1;                                    // Mask: 0x1, PropSize: 0x10xA0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2236[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x38 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
struct FMovieSceneLevelVisibilitySectionTemplate : public FMovieSceneEvalTemplate
{
public:
	enum class ELevelVisibility                  Visibility;                                        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2237[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          LevelNames;                                        // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
struct FScalarParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2238[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            ParameterCurve;                                    // 0x10(0x70)(NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
struct FVectorParameterNameAndCurves
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2239[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            XCurve;                                            // 0x10(0x70)(NativeAccessSpecifierPublic)
	struct FRichCurve                            YCurve;                                            // 0x80(0x70)(NativeAccessSpecifierPublic)
	struct FRichCurve                            ZCurve;                                            // 0xF0(0x70)(NativeAccessSpecifierPublic)
};

// 0x1D0 (0x1D0 - 0x0)
// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
struct FColorParameterNameAndCurves
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_223A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            RedCurve;                                          // 0x10(0x70)(NativeAccessSpecifierPublic)
	struct FRichCurve                            GreenCurve;                                        // 0x80(0x70)(NativeAccessSpecifierPublic)
	struct FRichCurve                            BlueCurve;                                         // 0xF0(0x70)(NativeAccessSpecifierPublic)
	struct FRichCurve                            AlphaCurve;                                        // 0x160(0x70)(NativeAccessSpecifierPublic)
};

// 0x30 (0x50 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	TArray<struct FScalarParameterNameAndCurve>  Scalars;                                           // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FVectorParameterNameAndCurves> Vectors;                                           // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FColorParameterNameAndCurves>  Colors;                                            // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x8 (0x58 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
struct FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate
{
public:
	class UMaterialParameterCollection*          MPC;                                               // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x8 (0x58 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
public:
	int32                                        MaterialIndex;                                     // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_223B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x50 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{
public:
};

// 0x70 (0x90 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FIntegralCurve                        ParticleKeys;                                      // 0x20(0x70)(NativeAccessSpecifierPublic)
};

// 0x468 (0x4B0 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneTransformPropertySectionTemplate
struct FMovieSceneTransformPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieScene3DTransformTemplateData    TemplateData;                                      // 0x48(0x468)(Protected, NativeAccessSpecifierProtected)
};

// 0x1C8 (0x210 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
struct FMovieSceneVectorPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FRichCurve                            ComponentCurves;                                   // 0x48(0x70)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_223C[0x150];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumChannelsUsed;                                   // 0x208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMovieSceneBlendType              BlendType;                                         // 0x20C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_223D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0xC0 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FStringCurve                          StringCurve;                                       // 0x48(0x78)(Protected, NativeAccessSpecifierProtected)
};

// 0x78 (0xC0 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
struct FMovieSceneIntegerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FIntegralCurve                        IntegerCurve;                                      // 0x48(0x70)(Protected, NativeAccessSpecifierProtected)
	enum class EMovieSceneBlendType              BlendType;                                         // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_223E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0xB8 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
struct FMovieSceneEnumPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FIntegralCurve                        EnumCurve;                                         // 0x48(0x70)(Protected, NativeAccessSpecifierProtected)
};

// 0x70 (0xB8 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
struct FMovieSceneBytePropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FIntegralCurve                        ByteCurve;                                         // 0x48(0x70)(Protected, NativeAccessSpecifierProtected)
};

// 0x78 (0xC0 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
struct FMovieSceneFloatPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FRichCurve                            FloatCurve;                                        // 0x48(0x70)(Protected, NativeAccessSpecifierProtected)
	enum class EMovieSceneBlendType              BlendType;                                         // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_223F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0xB8 - 0x48)
// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FIntegralCurve                        BoolCurve;                                         // 0x48(0x70)(Protected, NativeAccessSpecifierProtected)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
struct FMovieSceneSkeletalAnimationParams
{
public:
	class UAnimSequenceBase*                     Animation;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartOffset;                                       // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndOffset;                                         // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x14(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_218 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2240[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SlotName;                                          // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRichCurve                            Weight;                                            // 0x20(0x70)(Edit, NativeAccessSpecifierPublic)
};

// 0x8 (0x98 - 0x90)
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{
public:
	float                                        SectionStartTime;                                  // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SectionEndTime;                                    // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xB8 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params;                                            // 0x20(0x98)(NativeAccessSpecifierPublic)
};

// 0x70 (0x90 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FRichCurve                            SlomoCurve;                                        // 0x20(0x70)(NativeAccessSpecifierPrivate)
};

// 0x70 (0x90 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
struct FMovieSceneSpawnSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FIntegralCurve                        Curve;                                             // 0x20(0x70)(Protected, NativeAccessSpecifierProtected)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{
public:
	uint8                                        Pad_2241[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Time;                                              // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2242[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x60 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase
{
public:
	struct FVector4                              Vector;                                            // 0x50(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x60 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase
{
public:
	struct FVector                               Vector;                                            // 0x50(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2243[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x58 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase
{
public:
	struct FVector2D                             Vector;                                            // 0x50(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xC0 - 0xB8)
// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{
public:
	bool                                         bTemporarilyHiddenInGame;                          // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2244[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
