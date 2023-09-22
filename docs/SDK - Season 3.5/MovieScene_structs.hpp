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

enum class EMovieSceneKeyInterpolation : uint8
{
	Auto                           = 0,
	User                           = 1,
	Break                          = 2,
	Linear                         = 3,
	Constant                       = 4,
	EMovieSceneKeyInterpolation_MAX = 5,
};

enum class EMovieSceneBlendType : uint8
{
	Absolute                       = 1,
	Additive                       = 2,
	Relative                       = 4,
	EMovieSceneBlendType_MAX       = 5,
};

enum class EMovieSceneBuiltInEasing : uint8
{
	Linear                         = 0,
	SinIn                          = 1,
	SinOut                         = 2,
	SinInOut                       = 3,
	QuadIn                         = 4,
	QuadOut                        = 5,
	QuadInOut                      = 6,
	CubicIn                        = 7,
	CubicOut                       = 8,
	CubicInOut                     = 9,
	QuartIn                        = 10,
	QuartOut                       = 11,
	QuartInOut                     = 12,
	QuintIn                        = 13,
	QuintOut                       = 14,
	QuintInOut                     = 15,
	ExpoIn                         = 16,
	ExpoOut                        = 17,
	ExpoInOut                      = 18,
	CircIn                         = 19,
	CircOut                        = 20,
	CircInOut                      = 21,
	EMovieSceneBuiltInEasing_MAX   = 22,
};

enum class EEvaluationMethod : uint8
{
	Static                         = 0,
	Swept                          = 1,
	EEvaluationMethod_MAX          = 2,
};

enum class EMovieScenePlayerStatus : uint8
{
	Stopped                        = 0,
	Playing                        = 1,
	Recording                      = 2,
	Scrubbing                      = 3,
	Jumping                        = 4,
	Stepping                       = 5,
	Paused                         = 6,
	MAX                            = 7,
};

enum class EMovieSceneObjectBindingSpace : uint8
{
	Local                          = 0,
	Root                           = 1,
	EMovieSceneObjectBindingSpace_MAX = 2,
};

enum class EMovieSceneCompletionMode : uint8
{
	KeepState                      = 0,
	RestoreState                   = 1,
	ProjectDefault                 = 2,
	EMovieSceneCompletionMode_MAX  = 3,
};

enum class ESectionEvaluationFlags : uint8
{
	None                           = 0,
	PreRoll                        = 1,
	PostRoll                       = 2,
	ESectionEvaluationFlags_MAX    = 3,
};

enum class ESpawnOwnership : uint8
{
	InnerSequence                  = 0,
	MasterSequence                 = 1,
	External                       = 2,
	ESpawnOwnership_MAX            = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackLabels
struct FMovieSceneTrackLabels
{
public:
	TArray<class FString>                        Strings;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneExpansionState
struct FMovieSceneExpansionState
{
public:
	bool                                         bExpanded;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct MovieScene.MovieSceneEditorData
struct FMovieSceneEditorData
{
public:
	TMap<class FString, struct FMovieSceneExpansionState> ExpansionStates;                                   // 0x0(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFloatRange                           WorkingRange;                                      // 0x50(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                           ViewRange;                                         // 0x60(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieScene.MovieSceneBinding
struct FMovieSceneBinding
{
public:
	struct FGuid                                 ObjectGuid;                                        // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                BindingName;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>              Tracks;                                            // 0x20(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneObjectBindingID
struct FMovieSceneObjectBindingID
{
public:
	int32                                        SequenceID;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EMovieSceneObjectBindingSpace     Space;                                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FF8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 Guid;                                              // 0x8(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct MovieScene.MovieSceneBindingOverrideData
struct FMovieSceneBindingOverrideData
{
public:
	struct FMovieSceneObjectBindingID            ObjectBindingId;                                   // 0x0(0x18)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                Object;                                            // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverridesDefault;                                 // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FF9[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct MovieScene.OptionalMovieSceneBlendType
struct FOptionalMovieSceneBlendType
{
public:
	enum class EMovieSceneBlendType              BlendType;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsValid;                                          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
struct FMovieSceneEvalTemplatePtr
{
public:
	uint8                                        Pad_FFA[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
struct FMovieSceneEvalTemplateBase
{
public:
	uint8                                        Pad_FFB[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x20 - 0x10)
// ScriptStruct MovieScene.MovieSceneEvalTemplate
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
public:
	enum class EMovieSceneCompletionMode         CompletionMode;                                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FFC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneSection*                    SourceSection;                                     // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneEmptyStruct
struct FMovieSceneEmptyStruct
{
public:
	uint8                                        Pad_FFD[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
struct FMovieSceneEvaluationGroupLUTIndex
{
public:
	int32                                        LUTOffset;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumInitPtrs;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumEvalPtrs;                                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceID
struct FMovieSceneSequenceID
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackIdentifier
struct FMovieSceneTrackIdentifier
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
struct FMovieSceneEvaluationFieldTrackPtr
{
public:
	struct FMovieSceneSequenceID                 SequenceID;                                        // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneTrackIdentifier            TrackIdentifier;                                   // 0x4(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneSegmentIdentifier
struct FMovieSceneSegmentIdentifier
{
public:
	int32                                        IdentifierIndex;                                   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x4 (0xC - 0x8)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{
public:
	struct FMovieSceneSegmentIdentifier          SegmentID;                                         // 0x8(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationGroup
struct FMovieSceneEvaluationGroup
{
public:
	TArray<struct FMovieSceneEvaluationGroupLUTIndex> LUTIndices;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT;                                     // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationKey
struct FMovieSceneEvaluationKey
{
public:
	struct FMovieSceneSequenceID                 SequenceID;                                        // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneTrackIdentifier            TrackIdentifier;                                   // 0x4(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       SectionIndex;                                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
struct FMovieSceneOrderedEvaluationKey
{
public:
	struct FMovieSceneEvaluationKey              Key;                                               // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       EvaluationIndex;                                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
struct FMovieSceneEvaluationMetaData
{
public:
	TArray<struct FMovieSceneSequenceID>         ActiveSequences;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneOrderedEvaluationKey> ActiveEntities;                                    // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FMovieSceneSequenceID, struct FGuid> SubSequenceSignatures;                             // 0x20(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationField
struct FMovieSceneEvaluationField
{
public:
	TArray<struct FFloatRange>                   Ranges;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneEvaluationGroup>    Groups;                                            // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneEvaluationMetaData> MetaData;                                          // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationOperand
struct FMovieSceneEvaluationOperand
{
public:
	struct FGuid                                 ObjectBindingId;                                   // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceID                 SequenceID;                                        // 0x10(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct MovieScene.SectionEvaluationDataTree
struct FSectionEvaluationDataTree
{
public:
	uint8                                        Pad_FFE[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct MovieScene.MovieSceneSegment
struct FMovieSceneSegment
{
public:
	uint8                                        Pad_FFF[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationTrackSegments
struct FMovieSceneEvaluationTrackSegments
{
public:
	TArray<int32>                                SegmentIdentifierToIndex;                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneSegment>            SortedSegments;                                    // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
struct FMovieSceneTrackImplementationPtr
{
public:
	uint8                                        Pad_1000[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationTrack
struct FMovieSceneEvaluationTrack
{
public:
	struct FGuid                                 ObjectBindingId;                                   // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       EvaluationPriority;                                // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EEvaluationMethod                 EvaluationMethod;                                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1001[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneEvaluationTrackSegments    Segments;                                          // 0x18(0x20)(NativeAccessSpecifierPrivate)
	class UMovieSceneTrack*                      SourceTrack;                                       // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSectionEvaluationDataTree            EvaluationTree;                                    // 0x40(0x60)(NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneEvalTemplatePtr>    ChildTemplates;                                    // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneTrackImplementationPtr     TrackTemplate;                                     // 0xB0(0x38)(NativeAccessSpecifierPrivate)
	class FName                                  EvaluationGroup;                                   // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bEvaluateInPreroll : 1;                            // Mask: 0x1, PropSize: 0x10xF0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bEvaluateInPostroll : 1;                           // Mask: 0x2, PropSize: 0x10xF0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1002[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackFieldData
struct FMovieSceneTrackFieldData
{
public:
	uint8                                        Pad_1003[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
struct FMovieSceneSequenceInstanceDataPtr
{
public:
	uint8                                        Pad_1004[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceTransform
struct FMovieSceneSequenceTransform
{
public:
	float                                        TimeScale;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Offset;                                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct MovieScene.MovieSceneSubSequenceData
struct FMovieSceneSubSequenceData
{
public:
	struct FSoftObjectPath                       Sequence;                                          // 0x0(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceTransform          RootToSequenceTransform;                           // 0x18(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceID                 DeterministicSequenceID;                           // 0x20(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                           PlayRange;                                         // 0x24(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                           PreRollRange;                                      // 0x34(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                           PostRollRange;                                     // 0x44(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HierarchicalBias;                                  // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceInstanceDataPtr    InstanceData;                                      // 0x58(0x18)(NativeAccessSpecifierPublic)
	uint8                                        Pad_1005[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
struct FMovieSceneSequenceHierarchyNode
{
public:
	struct FMovieSceneSequenceID                 ParentID;                                          // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1006[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMovieSceneSequenceID>         Children;                                          // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
struct FMovieSceneSequenceHierarchy
{
public:
	TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences;                                      // 0x0(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy;                                         // 0x50(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
struct FMovieSceneTemplateGenerationLedger
{
public:
	struct FMovieSceneTrackIdentifier            LastTrackIdentifier;                               // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1007[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGuid, struct FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier;                   // 0x8(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FGuid, struct FFloatRange>       SubSectionRanges;                                  // 0x58(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct MovieScene.MovieSceneSubSectionFieldData
struct FMovieSceneSubSectionFieldData
{
public:
	uint8                                        Pad_1008[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2F0 (0x2F0 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
struct FMovieSceneEvaluationTemplate
{
public:
	TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks;                                            // 0x0(0x50)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1009[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneEvaluationField            EvaluationField;                                   // 0xA0(0x30)(NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceHierarchy          Hierarchy;                                         // 0xD0(0xA0)(NativeAccessSpecifierPublic)
	struct FGuid                                 SequenceSignature;                                 // 0x170(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneTemplateGenerationLedger   TemplateLedger;                                    // 0x180(0xA8)(NativeAccessSpecifierPrivate)
	struct FMovieSceneTrackFieldData             TrackFieldData;                                    // 0x228(0x60)(NativeAccessSpecifierPrivate)
	struct FMovieSceneSubSectionFieldData        SubSectionFieldData;                               // 0x288(0x60)(NativeAccessSpecifierPrivate)
	uint8                                        bKeepStaleTracks : 1;                              // Mask: 0x1, PropSize: 0x10x2E8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_100A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct MovieScene.MovieSceneSubSectionData
struct FMovieSceneSubSectionData
{
public:
	TWeakObjectPtr<class UMovieSceneSubSection>  Section;                                           // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ObjectBindingId;                                   // 0x8(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESectionEvaluationFlags           Flags;                                             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_100B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneKeyStruct
struct FMovieSceneKeyStruct
{
public:
	uint8                                        Pad_100C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieScenePossessable
struct FMovieScenePossessable
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                Name;                                              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                PossessedObjectClass;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 ParentGuid;                                        // 0x28(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieScene.MovieScenePropertySectionData
struct FMovieScenePropertySectionData
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PropertyPath;                                      // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FunctionName;                                      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NotifyFunctionName;                                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x48 - 0x20)
// ScriptStruct MovieScene.MovieScenePropertySectionTemplate
struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData        PropertyData;                                      // 0x20(0x28)(Protected, NativeAccessSpecifierProtected)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneEasingSettings
struct FMovieSceneEasingSettings
{
public:
	float                                        AutoEaseInTime;                                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AutoEaseOutTime;                                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UInterfaceProperty_                          EaseIn;                                            // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bManualEaseIn;                                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_100D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ManualEaseInTime;                                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UInterfaceProperty_                          EaseOut;                                           // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bManualEaseOut;                                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_100E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ManualEaseOutTime;                                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
struct FMovieSceneSectionEvalOptions
{
public:
	bool                                         bCanEditCompletionMode;                            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieSceneCompletionMode         CompletionMode;                                    // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieSceneSectionParameters
struct FMovieSceneSectionParameters
{
public:
	float                                        StartOffset;                                       // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeScale;                                         // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HierarchicalBias;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PrerollTime;                                       // 0xC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PostrollTime;                                      // 0x10(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.SectionEvaluationData
struct FSectionEvaluationData
{
public:
	int32                                        ImplIndex;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForcedTime;                                        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESectionEvaluationFlags           Flags;                                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_100F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x20 - 0x20)
// ScriptStruct MovieScene.TestMovieSceneEvalTemplate
struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceInstanceData
struct FMovieSceneSequenceInstanceData
{
public:
	uint8                                        Pad_1010[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
struct FMovieSceneSequencePlaybackSettings
{
public:
	int32                                        LoopCount;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRandomStartTime;                                  // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1011[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartTime;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestoreState;                                     // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableMovementInput;                             // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableLookAtInput;                               // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHidePlayer;                                       // 0x13(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideHud;                                          // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableCameraCuts;                                // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1012[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               InstanceData;                                      // 0x18(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UInterfaceProperty_                          BindingOverrides;                                  // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct MovieScene.MovieSceneSpawnable
struct FMovieSceneSpawnable
{
public:
	struct FTransform                            SpawnTransform;                                    // 0x0(0x30)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FGuid                                 Guid;                                              // 0x30(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                Name;                                              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObject*                               ObjectTemplate;                                    // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FGuid>                         ChildPossessables;                                 // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	enum class ESpawnOwnership                   Ownership;                                         // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1013[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
struct FMovieSceneTrackEvalOptions
{
public:
	uint8                                        bCanEvaluateNearestSection : 1;                    // Mask: 0x1, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvalNearestSection : 1;                           // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvaluateInPreroll : 1;                            // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvaluateInPostroll : 1;                           // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvaluateNearestSection : 1;                       // Mask: 0x10, PropSize: 0x10x0(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1014[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct MovieScene.MovieSceneTrackImplementation
struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{
public:
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
