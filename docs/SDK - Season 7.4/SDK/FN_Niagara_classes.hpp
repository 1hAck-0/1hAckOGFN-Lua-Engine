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

// Class Niagara.MovieSceneNiagaraTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraParameterTrack
// 0x0030 (0x0098 - 0x0068)
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
public:
	struct FNiagaraVariable                            Parameter;                                                // 0x0068(0x0030)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// 0x0000 (0x0098 - 0x0098)
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraBoolParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraColorParameterTrack
// 0x0000 (0x0098 - 0x0098)
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraColorParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// 0x0000 (0x0098 - 0x0098)
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraFloatParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// 0x0000 (0x0098 - 0x0098)
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraIntegerParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemSpawnSection");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraSystemTrack
// 0x0000 (0x0068 - 0x0068)
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// 0x0008 (0x00A0 - 0x0098)
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	int                                                ChannelsUsed;                                             // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraVectorParameterTrack");
		return ptr;
	}

};


// Class Niagara.NiagaraActor
// 0x0008 (0x0338 - 0x0330)
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                           NiagaraComponent;                                         // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraActor");
		return ptr;
	}

};


// Class Niagara.NiagaraComponent
// 0x01D0 (0x0740 - 0x0570)
class UNiagaraComponent : public UPrimitiveComponent
{
public:
	class UNiagaraSystem*                              Asset;                                                    // 0x0570(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraUserRedirectionParameterStore       OverrideParameters;                                       // 0x0578(0x0138) (Edit)
	unsigned char                                      bForceSolo : 1;                                           // 0x06B0(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x27];                                      // 0x06B1(0x0027) MISSED OFFSET
	unsigned char                                      bAutoDestroy : 1;                                         // 0x06D8(0x0001)
	unsigned char                                      bRenderingEnabled : 1;                                    // 0x06D8(0x0001)
	unsigned char                                      bAutoManageAttachment : 1;                                // 0x06D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x7];                                       // 0x06D9(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x06D9(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty Niagara.NiagaraComponent.OnSystemFinished
	TWeakObjectPtr<class USceneComponent>              AutoAttachParent;                                         // 0x06F0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       AutoAttachSocketName;                                     // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AutoAttachLocationRule;                                   // 0x0700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AutoAttachRotationRule;                                   // 0x0701(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AutoAttachScaleRule;                                      // 0x0702(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3D];                                      // 0x0703(0x003D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraComponent");
		return ptr;
	}


	void SetSeekDelta(float InSeekDelta);
	void SetRenderingEnabled(bool bInRenderingEnabled);
	void SetPaused(bool bInPaused);
	void SetNiagaraVariableVec4(struct FString InVariableName, struct FVector4 InValue);
	void SetNiagaraVariableVec3(struct FString InVariableName, struct FVector InValue);
	void SetNiagaraVariableVec2(struct FString InVariableName, struct FVector2D InValue);
	void SetNiagaraVariableQuat(struct FString InVariableName, struct FQuat InValue);
	void SetNiagaraVariableLinearColor(struct FString InVariableName, struct FLinearColor InValue);
	void SetNiagaraVariableInt(struct FString InVariableName, int InValue);
	void SetNiagaraVariableFloat(struct FString InVariableName, float InValue);
	void SetNiagaraVariableBool(struct FString InVariableName, bool InValue);
	void SetNiagaraVariableActor(struct FString InVariableName, class AActor* Actor);
	void SetMaxSimTime(float InMaxTime);
	void SetForceSolo(bool bInForceSolo);
	void SetDesiredAge(float InDesiredAge);
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
	void SetAutoDestroy(bool bInAutoDestroy);
	void SetAutoAttachmentParameters(class USceneComponent* Parent, struct FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule);
	void SetAsset(class UNiagaraSystem* InAsset);
	void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);
	void SeekToDesiredAge(float InDesiredAge);
	void ResetSystem();
	void ReinitializeSystem();
	bool IsPaused();
	float GetSeekDelta();
	TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(struct FString InEmitterName, struct FString InValueName);
	TArray<float> GetNiagaraParticleValues_DebugOnly(struct FString InEmitterName, struct FString InValueName);
	TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(struct FString InEmitterName);
	float GetMaxSimTime();
	bool GetForceSolo();
	float GetDesiredAge();
	class UNiagaraSystem* GetAsset();
	ENiagaraAgeUpdateMode GetAgeUpdateMode();
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
	void AdvanceSimulation(int TickCount, float TickDeltaSeconds);
};


// Class Niagara.NiagaraDataInterface
// 0x0000 (0x0028 - 0x0028)
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterface");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurveBase
// 0x0040 (0x0068 - 0x0028)
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:
	bool                                               GPUBufferDirty;                                           // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<float>                                      ShaderLUT;                                                // 0x0030(0x0010) (ZeroConstructor)
	float                                              LUTMinTime;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LUTMaxTime;                                               // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LUTInvTimeRange;                                          // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseLUT : 1;                                              // 0x004C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x1B];                                      // 0x004D(0x001B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurveBase");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCollisionQuery
// 0x0010 (0x0038 - 0x0028)
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCollisionQuery");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceColorCurve
// 0x0200 (0x0268 - 0x0068)
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  RedCurve;                                                 // 0x0068(0x0080) (Edit)
	struct FRichCurve                                  GreenCurve;                                               // 0x00E8(0x0080) (Edit)
	struct FRichCurve                                  BlueCurve;                                                // 0x0168(0x0080) (Edit)
	struct FRichCurve                                  AlphaCurve;                                               // 0x01E8(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceColorCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurlNoise
// 0x0010 (0x0038 - 0x0028)
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:
	uint32_t                                           Seed;                                                     // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x002C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurlNoise");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurve
// 0x0080 (0x00E8 - 0x0068)
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  Curve;                                                    // 0x0068(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSimpleCounter
// 0x0000 (0x0028 - 0x0028)
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSimpleCounter");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// 0x0058 (0x0080 - 0x0028)
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
public:
	class USkeletalMesh*                               DefaultMesh;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Source;                                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENDISkeletalMesh_SkinningMode                      SkinningMode;                                             // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	TArray<struct FName>                               SamplingRegions;                                          // 0x0040(0x0010) (Edit, ZeroConstructor)
	int                                                WholeMeshLOD;                                             // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FName>                               SpecificBones;                                            // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               SpecificSockets;                                          // 0x0068(0x0010) (Edit, ZeroConstructor)
	bool                                               bUseTriangleSampling;                                     // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseVertexSampling;                                       // 0x0079(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseSkeletonSampling;                                     // 0x007A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x007B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSkeletalMesh");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSpline
// 0x0008 (0x0030 - 0x0028)
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:
	class AActor*                                      Source;                                                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSpline");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceStaticMesh
// 0x0028 (0x0050 - 0x0028)
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
	class UStaticMesh*                                 DefaultMesh;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Source;                                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNDIStaticMeshSectionFilter                 SectionFilter;                                            // 0x0038(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceStaticMesh");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceTexture
// 0x0010 (0x0038 - 0x0028)
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UTexture*                                    Texture;                                                  // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceTexture");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVector2DCurve
// 0x0100 (0x0168 - 0x0068)
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0068(0x0080) (Edit)
	struct FRichCurve                                  YCurve;                                                   // 0x00E8(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector2DCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVector4Curve
// 0x0200 (0x0268 - 0x0068)
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0068(0x0080) (Edit)
	struct FRichCurve                                  YCurve;                                                   // 0x00E8(0x0080) (Edit)
	struct FRichCurve                                  ZCurve;                                                   // 0x0168(0x0080) (Edit)
	struct FRichCurve                                  WCurve;                                                   // 0x01E8(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector4Curve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVectorCurve
// 0x0180 (0x01E8 - 0x0068)
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0068(0x0080) (Edit)
	struct FRichCurve                                  YCurve;                                                   // 0x00E8(0x0080) (Edit)
	struct FRichCurve                                  ZCurve;                                                   // 0x0168(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVectorField
// 0x0010 (0x0038 - 0x0028)
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
public:
	class UVectorField*                                Field;                                                    // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTileX;                                                   // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTileY;                                                   // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTileZ;                                                   // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0033(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorField");
		return ptr;
	}

};


// Class Niagara.NiagaraEditorDataBase
// 0x0000 (0x0028 - 0x0028)
class UNiagaraEditorDataBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEditorDataBase");
		return ptr;
	}

};


// Class Niagara.NiagaraEmitter
// 0x0128 (0x0150 - 0x0028)
class UNiagaraEmitter : public UObject
{
public:
	bool                                               bLocalSpace;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDeterminism;                                             // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                RandomSeed;                                               // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraEmitterScriptProperties             UpdateScriptProps;                                        // 0x0030(0x0028)
	struct FNiagaraEmitterScriptProperties             SpawnScriptProps;                                         // 0x0058(0x0028)
	struct FNiagaraEmitterScriptProperties             EmitterSpawnScriptProps;                                  // 0x0080(0x0028)
	struct FNiagaraEmitterScriptProperties             EmitterUpdateScriptProps;                                 // 0x00A8(0x0028)
	ENiagaraSimTarget                                  SimTarget;                                                // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	struct FBox                                        FixedBounds;                                              // 0x00D4(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinDetailLevel;                                           // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxDetailLevel;                                           // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInterpolatedSpawning : 1;                                // 0x00F8(0x0001) (Edit)
	unsigned char                                      bFixedBounds : 1;                                         // 0x00F8(0x0001) (Edit)
	unsigned char                                      bUseMinDetailLevel : 1;                                   // 0x00F8(0x0001) (Edit)
	unsigned char                                      bUseMaxDetailLevel : 1;                                   // 0x00F8(0x0001) (Edit)
	unsigned char                                      bRequiresPersistentIDs : 1;                               // 0x00F8(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	float                                              MaxDeltaTimePerTick;                                      // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLimitDeltaTime : 1;                                      // 0x0100(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	struct FString                                     UniqueEmitterName;                                        // 0x0108(0x0010) (ZeroConstructor)
	TArray<class UNiagaraRendererProperties*>          RendererProperties;                                       // 0x0118(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraEventScriptProperties>       EventHandlerScriptProps;                                  // 0x0128(0x0010) (Edit, ZeroConstructor)
	class UNiagaraScript*                              GPUComputeScript;                                         // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SharedEventGeneratorIds;                                  // 0x0140(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEmitter");
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction
// 0x0000 (0x0028 - 0x0028)
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction");
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// 0x0008 (0x0030 - 0x0028)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32_t                                           NumParticles;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles");
		return ptr;
	}

};


// Class Niagara.NiagaraFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraFunctionLibrary");
		return ptr;
	}


	class UNiagaraComponent* STATIC_SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy);
	class UNiagaraComponent* STATIC_SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, struct FVector Location, struct FRotator Rotation, bool bAutoDestroy);
	class UNiagaraParameterCollectionInstance* STATIC_GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
};


// Class Niagara.NiagaraRendererProperties
// 0x0008 (0x0030 - 0x0028)
class UNiagaraRendererProperties : public UNiagaraMergeable
{
public:
	int                                                SortOrderHint;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEnabled;                                               // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraLightRendererProperties
// 0x0378 (0x03A8 - 0x0030)
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
public:
	unsigned char                                      bUseInverseSquaredFalloff : 1;                            // 0x0030(0x0001) (Edit)
	unsigned char                                      bAffectsTranslucency : 1;                                 // 0x0030(0x0001) (Edit)
	unsigned char                                      bOverrideRenderingEnabled : 1;                            // 0x0030(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              RadiusScale;                                              // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ColorAdd;                                                 // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FNiagaraVariableAttributeBinding            LightRenderingEnabledBinding;                             // 0x0048(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            LightExponentBinding;                                     // 0x00D8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x0168(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x01F8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            RadiusBinding;                                            // 0x0288(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            VolumetricScatteringBinding;                              // 0x0318(0x0090) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraLightRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraMeshRendererProperties
// 0x06F0 (0x0720 - 0x0030)
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
public:
	class UStaticMesh*                                 ParticleMesh;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraSortMode                                   SortMode;                                                 // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	unsigned char                                      bOverrideMaterials : 1;                                   // 0x003C(0x0001) (Edit)
	unsigned char                                      bSortOnlyWhenTranslucent : 1;                             // 0x003C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x0040(0x0010) (Edit, ZeroConstructor)
	ENiagaraMeshFacingMode                             FacingMode;                                               // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x0058(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x00E8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          // 0x0178(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            MeshOrientationBinding;                                   // 0x0208(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            ScaleBinding;                                             // 0x0298(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   // 0x0328(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  // 0x03B8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  // 0x0448(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  // 0x04D8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    // 0x0568(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            CustomSortingBinding;                                     // 0x05F8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     // 0x0688(0x0090) (Edit)
	int                                                SyncId;                                                   // 0x0718(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x071C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraMeshRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraParameterCollectionInstance
// 0x0100 (0x0128 - 0x0028)
class UNiagaraParameterCollectionInstance : public UObject
{
public:
	class UNiagaraParameterCollection*                 Collection;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraVariable>                    OverridenParameters;                                      // 0x0030(0x0010) (ZeroConstructor)
	struct FNiagaraParameterStore                      ParameterStorage;                                         // 0x0040(0x00E8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraParameterCollectionInstance");
		return ptr;
	}


	void SetVectorParameter(struct FString InVariableName, struct FVector InValue);
	void SetVector4Parameter(struct FString InVariableName, struct FVector4 InValue);
	void SetVector2DParameter(struct FString InVariableName, struct FVector2D InValue);
	void SetQuatParameter(struct FString InVariableName, struct FQuat InValue);
	void SetIntParameter(struct FString InVariableName, int InValue);
	void SetFloatParameter(struct FString InVariableName, float InValue);
	void SetColorParameter(struct FString InVariableName, struct FLinearColor InValue);
	void SetBoolParameter(struct FString InVariableName, bool InValue);
	struct FVector GetVectorParameter(struct FString InVariableName);
	struct FVector4 GetVector4Parameter(struct FString InVariableName);
	struct FVector2D GetVector2DParameter(struct FString InVariableName);
	struct FQuat GetQuatParameter(struct FString InVariableName);
	int GetIntParameter(struct FString InVariableName);
	float GetFloatParameter(struct FString InVariableName);
	struct FLinearColor GetColorParameter(struct FString InVariableName);
	bool GetBoolParameter(struct FString InVariableName);
};


// Class Niagara.NiagaraParameterCollection
// 0x0030 (0x0058 - 0x0028)
class UNiagaraParameterCollection : public UObject
{
public:
	struct FName                                       Namespace;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraVariable>                    Parameters;                                               // 0x0030(0x0010) (ZeroConstructor)
	class UNiagaraParameterCollectionInstance*         DefaultInstance;                                          // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CompileId;                                                // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraParameterCollection");
		return ptr;
	}

};


// Class Niagara.NiagaraRibbonRendererProperties
// 0x0828 (0x0858 - 0x0030)
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraRibbonFacingMode                           FacingMode;                                               // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              UV0TilingDistance;                                        // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV0Scale;                                                 // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV0Offset;                                                // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraRibbonAgeOffsetMode                        UV0AgeOffsetMode;                                         // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              UV1TilingDistance;                                        // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV1Scale;                                                 // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV1Offset;                                                // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraRibbonAgeOffsetMode                        UV1AgeOffsetMode;                                         // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraRibbonDrawDirection                        DrawDirection;                                            // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x006A(0x0006) MISSED OFFSET
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x0070(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x0100(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          // 0x0190(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     // 0x0220(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonTwistBinding;                                       // 0x02B0(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonWidthBinding;                                       // 0x0340(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonFacingBinding;                                      // 0x03D0(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonIdBinding;                                          // 0x0460(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonLinkOrderBinding;                                   // 0x04F0(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    // 0x0580(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   // 0x0610(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  // 0x06A0(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  // 0x0730(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  // 0x07C0(0x0090) (Edit)
	int                                                SyncId;                                                   // 0x0850(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0854(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraRibbonRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraScript
// 0x06C0 (0x06E8 - 0x0028)
class UNiagaraScript : public UObject
{
public:
	ENiagaraScriptUsage                                Usage;                                                    // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                UsageIndex;                                               // 0x002C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FGuid                                       UsageId;                                                  // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                ModuleUsageBitmask;                                       // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FNiagaraParameterStore                      RapidIterationParameters;                                 // 0x0048(0x00E8)
	ENiagaraNumericOutputTypeSelectionMode             NumericOutputTypeSelectionMode;                           // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	struct FNiagaraScriptExecutionParameterStore       ScriptExecutionParamStoreCPU;                             // 0x0138(0x0108) (Transient)
	struct FNiagaraScriptExecutionParameterStore       ScriptExecutionParamStoreGPU;                             // 0x0240(0x0108) (Transient)
	struct FNiagaraVMExecutableDataId                  CachedScriptVMId;                                         // 0x0348(0x0068)
	struct FNiagaraVMExecutableDataId                  LastGeneratedVMId;                                        // 0x03B0(0x0068)
	unsigned char                                      UnknownData03[0x148];                                     // 0x0418(0x0148) MISSED OFFSET
	struct FNiagaraVMExecutableData                    CachedScriptVM;                                           // 0x0560(0x0168)
	TArray<class UNiagaraParameterCollection*>         CachedParameterCollectionReferences;                      // 0x06C8(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraScriptDataInterfaceInfo>     CachedDefaultDataInterfaces;                              // 0x06D8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraScript");
		return ptr;
	}


	void OnCompilationComplete();
};


// Class Niagara.NiagaraScriptSourceBase
// 0x0020 (0x0048 - 0x0028)
class UNiagaraScriptSourceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraScriptSourceBase");
		return ptr;
	}

};


// Class Niagara.NiagaraSettings
// 0x0030 (0x0068 - 0x0038)
class UNiagaraSettings : public UDeveloperSettings
{
public:
	TArray<struct FSoftObjectPath>                     AdditionalParameterTypes;                                 // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FSoftObjectPath>                     AdditionalPayloadTypes;                                   // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FSoftObjectPath>                     AdditionalParameterEnums;                                 // 0x0058(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSettings");
		return ptr;
	}

};


// Class Niagara.NiagaraSpriteRendererProperties
// 0x09D0 (0x0A00 - 0x0030)
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraSpriteAlignment                            Alignment;                                                // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraSpriteFacingMode                           FacingMode;                                               // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	struct FVector                                     CustomFacingVectorMask;                                   // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PivotInUVSpace;                                           // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraSortMode                                   SortMode;                                                 // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FVector2D                                   SubImageSize;                                             // 0x0054(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSubImageBlend : 1;                                       // 0x005C(0x0001) (Edit)
	unsigned char                                      bRemoveHMDRollInVR : 1;                                   // 0x005C(0x0001) (Edit)
	unsigned char                                      bSortOnlyWhenTranslucent : 1;                             // 0x005C(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	float                                              MinFacingCameraBlendDistance;                             // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxFacingCameraBlendDistance;                             // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x0068(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x00F8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          // 0x0188(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteRotationBinding;                                    // 0x0218(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteSizeBinding;                                        // 0x02A8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteFacingBinding;                                      // 0x0338(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteAlignmentBinding;                                   // 0x03C8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            SubImageIndexBinding;                                     // 0x0458(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   // 0x04E8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  // 0x0578(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  // 0x0608(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  // 0x0698(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            CameraOffsetBinding;                                      // 0x0728(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            UVScaleBinding;                                           // 0x07B8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    // 0x0848(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            CustomSortingBinding;                                     // 0x08D8(0x0090) (Edit)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     // 0x0968(0x0090) (Edit)
	int                                                SyncId;                                                   // 0x09F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x09FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSpriteRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraSystem
// 0x01B8 (0x01E0 - 0x0028)
class UNiagaraSystem : public UObject
{
public:
	bool                                               bDumpDebugSystemInfo;                                     // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDumpDebugEmitterInfo;                                    // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	TArray<struct FNiagaraEmitterHandle>               EmitterHandles;                                           // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                             // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<struct FNiagaraSystemCompileRequest>        ActiveCompilations;                                       // 0x0050(0x0010) (ZeroConstructor, Transient)
	class UNiagaraScript*                              SystemSpawnScript;                                        // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNiagaraScript*                              SystemUpdateScript;                                       // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraEmitterSpawnAttributes>      EmitterSpawnAttributes;                                   // 0x0070(0x0010) (ZeroConstructor)
	struct FNiagaraUserRedirectionParameterStore       ExposedParameters;                                        // 0x0080(0x0138)
	bool                                               bAutoDeactivate;                                          // 0x01B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01B9(0x0003) MISSED OFFSET
	float                                              WarmupTime;                                               // 0x01BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                WarmupTickCount;                                          // 0x01C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WarmupTickDelta;                                          // 0x01C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasSystemScriptDIsWithPerInstanceData;                   // 0x01C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01C9(0x0007) MISSED OFFSET
	TArray<struct FName>                               UserDINamesReadInSystemScripts;                           // 0x01D0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSystem");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
