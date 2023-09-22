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

enum class ESlateVisibility : uint8
{
	Visible                        = 0,
	Collapsed                      = 1,
	Hidden                         = 2,
	HitTestInvisible               = 3,
	SelfHitTestInvisible           = 4,
	ESlateVisibility_MAX           = 5,
};

enum class EVirtualKeyboardType : uint8
{
	Default                        = 0,
	Number                         = 1,
	Web                            = 2,
	Email                          = 3,
	Password                       = 4,
	AlphaNumeric                   = 5,
	EVirtualKeyboardType_MAX       = 6,
};

enum class EUMGSequencePlayMode : uint8
{
	Forward                        = 0,
	Reverse                        = 1,
	PingPong                       = 2,
	EUMGSequencePlayMode_MAX       = 3,
};

enum class EWidgetTickFrequency : uint8
{
	Never                          = 0,
	Auto                           = 1,
	EWidgetTickFrequency_MAX       = 2,
};

enum class EDragPivot : uint8
{
	MouseDown                      = 0,
	TopLeft                        = 1,
	TopCenter                      = 2,
	TopRight                       = 3,
	CenterLeft                     = 4,
	CenterCenter                   = 5,
	CenterRight                    = 6,
	BottomLeft                     = 7,
	BottomCenter                   = 8,
	BottomRight                    = 9,
	EDragPivot_MAX                 = 10,
};

enum class ESlateSizeRule : uint8
{
	Automatic                      = 0,
	Fill                           = 1,
	ESlateSizeRule_MAX             = 2,
};

enum class EWidgetDesignFlags : uint8
{
	None                           = 0,
	Designing                      = 1,
	ShowOutline                    = 2,
	ExecutePreConstruct            = 4,
	EWidgetDesignFlags_MAX         = 5,
};

enum class EBindingKind : uint8
{
	Function                       = 0,
	Property                       = 1,
	EBindingKind_MAX               = 2,
};

enum class EWidgetGeometryMode : uint8
{
	Plane                          = 0,
	Cylinder                       = 1,
	EWidgetGeometryMode_MAX        = 2,
};

enum class EWidgetBlendMode : uint8
{
	Opaque                         = 0,
	Masked                         = 1,
	Transparent                    = 2,
	EWidgetBlendMode_MAX           = 3,
};

enum class EWidgetTimingPolicy : uint8
{
	RealTime                       = 0,
	GameTime                       = 1,
	EWidgetTimingPolicy_MAX        = 2,
};

enum class EWidgetSpace : uint8
{
	World                          = 0,
	Screen                         = 1,
	EWidgetSpace_MAX               = 2,
};

enum class EWidgetInteractionSource : uint8
{
	World                          = 0,
	Mouse                          = 1,
	CenterScreen                   = 2,
	Custom                         = 3,
	EWidgetInteractionSource_MAX   = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0xB8 - 0x0)
// ScriptStruct UMG.EventReply
struct FEventReply
{
public:
	uint8                                        Pad_C76[0xB8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct UMG.WidgetTransform
struct FWidgetTransform
{
public:
	struct FVector2D                             Translation;                                       // 0x0(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Scale;                                             // 0x8(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Shear;                                             // 0x10(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct UMG.PaintContext
struct FPaintContext
{
public:
	uint8                                        Pad_C77[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct UMG.ShapedTextOptions
struct FShapedTextOptions
{
public:
	uint8                                        bOverride_TextShapingMethod : 1;                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_TextFlowDirection : 1;                   // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_158 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_C78[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETextShapingMethod                TextShapingMethod;                                 // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextFlowDirection                TextFlowDirection;                                 // 0x5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C79[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct UMG.NamedSlotBinding
struct FNamedSlotBinding
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               Content;                                           // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct UMG.AnchorData
struct FAnchorData
{
public:
	struct FMargin                               Offsets;                                           // 0x0(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAnchors                              Anchors;                                           // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             Alignment;                                         // 0x20(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct UMG.PropertyPathSegment
struct FPropertyPathSegment
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArrayIndex;                                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C7A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStruct*                               Struct;                                            // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UField*                                Field;                                             // 0x18(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct UMG.DynamicPropertyPath
struct FDynamicPropertyPath
{
public:
	TArray<struct FPropertyPathSegment>          Segments;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x318 (0x360 - 0x48)
// ScriptStruct UMG.MovieScene2DTransformSectionTemplate
struct FMovieScene2DTransformSectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FRichCurve                            Translation;                                       // 0x48(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_C7B[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            Rotation;                                          // 0x128(0x70)(NativeAccessSpecifierPrivate)
	struct FRichCurve                            Scale;                                             // 0x198(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_C7C[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            Shear;                                             // 0x278(0x70)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_C7D[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMovieSceneBlendType              BlendType;                                         // 0x358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C7E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C8 (0x210 - 0x48)
// ScriptStruct UMG.MovieSceneMarginSectionTemplate
struct FMovieSceneMarginSectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FRichCurve                            TopCurve;                                          // 0x48(0x70)(NativeAccessSpecifierPrivate)
	struct FRichCurve                            LeftCurve;                                         // 0xB8(0x70)(NativeAccessSpecifierPrivate)
	struct FRichCurve                            RightCurve;                                        // 0x128(0x70)(NativeAccessSpecifierPrivate)
	struct FRichCurve                            BottomCurve;                                       // 0x198(0x70)(NativeAccessSpecifierPrivate)
	enum class EMovieSceneBlendType              BlendType;                                         // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C7F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x60 - 0x50)
// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
public:
	TArray<class FName>                          BrushPropertyNamePath;                             // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x1E8 (0x1F0 - 0x8)
// ScriptStruct UMG.RichTextStyleRow
struct FRichTextStyleRow : public FTableRowBase
{
public:
	struct FTextBlockStyle                       TextStyle;                                         // 0x8(0x1E8)(Edit, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct UMG.RichImageRow
struct FRichImageRow : public FTableRowBase
{
public:
	struct FSlateBrush                           Brush;                                             // 0x8(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0x3C (0x3C - 0x0)
// ScriptStruct UMG.SlateMeshVertex
struct FSlateMeshVertex
{
public:
	struct FVector2D                             Position;                                          // 0x0(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color;                                             // 0x8(0x4)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UV0;                                               // 0xC(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UV1;                                               // 0x14(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UV2;                                               // 0x1C(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UV3;                                               // 0x24(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UV4;                                               // 0x2C(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UV5;                                               // 0x34(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct UMG.SlateChildSize
struct FSlateChildSize
{
public:
	float                                        Value;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateSizeRule                    SizeRule;                                          // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C80[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct UMG.WidgetAnimationBinding
struct FWidgetAnimationBinding
{
public:
	class FName                                  WidgetName;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotWidgetName;                                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 AnimationGuid;                                     // 0x10(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRootWidget;                                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C81[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct UMG.DelegateRuntimeBinding
struct FDelegateRuntimeBinding
{
public:
	class FString                                ObjectName;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FunctionName;                                      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicPropertyPath                  SourcePath;                                        // 0x20(0x10)(NativeAccessSpecifierPublic)
	enum class EBindingKind                      Kind;                                              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C82[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct UMG.WidgetNavigationData
struct FWidgetNavigationData
{
public:
	enum class EUINavigationRule                 Rule;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C83[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  WidgetToFocus;                                     // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UWidget>                Widget;                                            // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           CustomDelegate;                                    // 0x18(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
