#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8_t
{
	None                           = 0,
	SceneGeometry                  = 1,
	DepthBuffer                    = 2,
	DistanceField                  = 3,
	ENiagaraCollisionMode_MAX      = 4
};


// Enum Niagara.ENiagaraScriptGroup
enum class ENiagaraScriptGroup : uint8_t
{
	Particle                       = 0,
	Emitter                        = 1,
	System                         = 2,
	Max                            = 3
};


// Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8_t
{
	Function                       = 0,
	Module                         = 1,
	DynamicInput                   = 2,
	ParticleSpawnScript            = 3,
	ParticleSpawnScriptInterpolated = 4,
	ParticleUpdateScript           = 5,
	ParticleEventScript            = 6,
	ParticleGPUComputeScript       = 7,
	EmitterSpawnScript             = 8,
	EmitterUpdateScript            = 9,
	SystemSpawnScript              = 10,
	SystemUpdateScript             = 11,
	ENiagaraScriptUsage_MAX        = 12
};


// Enum Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus : uint8_t
{
	NCS_Unknown                    = 0,
	NCS_Dirty                      = 1,
	NCS_Error                      = 2,
	NCS_UpToDate                   = 3,
	NCS_BeingCreated               = 4,
	NCS_UpToDateWithWarnings       = 5,
	NCS_ComputeUpToDateWithWarnings = 6,
	NCS_MAX                        = 7
};


// Enum Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8_t
{
	Undefined                      = 0,
	Parameter                      = 1,
	Attribute                      = 2,
	SystemConstant                 = 3,
	TranslatorConstant             = 4,
	RapidIterationParameter        = 5,
	ENiagaraInputNodeUsage_MAX     = 6
};


// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8_t
{
	ParticleData                   = 0,
	Shared                         = 1,
	Event                          = 2,
	ENiagaraDataSetType_MAX        = 3
};


// Enum Niagara.ENiagaraAgeUpdateMode
enum class ENiagaraAgeUpdateMode : uint8_t
{
	TickDeltaTime                  = 0,
	DesiredAge                     = 1,
	ENiagaraAgeUpdateMode_MAX      = 2
};


// Enum Niagara.ENiagaraSimTarget
enum class ENiagaraSimTarget : uint8_t
{
	CPUSim                         = 0,
	GPUComputeSim                  = 1,
	DynamicLoadBalancedSim         = 2,
	ENiagaraSimTarget_MAX          = 3
};


// Enum Niagara.ENDISkeletalMesh_SkinningMode
enum class ENDISkeletalMesh_SkinningMode : uint8_t
{
	None                           = 0,
	SkinOnTheFly                   = 1,
	PreSkin                        = 2,
	ENDISkeletalMesh_MAX           = 3
};


// Enum Niagara.EScriptExecutionMode
enum class EScriptExecutionMode : uint8_t
{
	EveryParticle                  = 0,
	SpawnedParticles               = 1,
	SingleParticle                 = 2,
	EScriptExecutionMode_MAX       = 3
};


// Enum Niagara.ENiagaraMeshFacingMode
enum class ENiagaraMeshFacingMode : uint8_t
{
	Default                        = 0,
	Velocity                       = 1,
	CameraPosition                 = 2,
	CameraPlane                    = 3,
	ENiagaraMeshFacingMode_MAX     = 4
};


// Enum Niagara.ENiagaraSortMode
enum class ENiagaraSortMode : uint8_t
{
	None                           = 0,
	ViewDepth                      = 1,
	ViewDistance                   = 2,
	CustomAscending                = 3,
	CustomDecending                = 4,
	ENiagaraSortMode_MAX           = 5
};


// Enum Niagara.ENiagaraRibbonDrawDirection
enum class ENiagaraRibbonDrawDirection : uint8_t
{
	FrontToBack                    = 0,
	BackToFront                    = 1,
	ENiagaraRibbonDrawDirection_MAX = 2
};


// Enum Niagara.ENiagaraRibbonAgeOffsetMode
enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
	Scale                          = 0,
	Clip                           = 1,
	ENiagaraRibbonAgeOffsetMode_MAX = 2
};


// Enum Niagara.ENiagaraRibbonFacingMode
enum class ENiagaraRibbonFacingMode : uint8_t
{
	Screen                         = 0,
	Custom                         = 1,
	ENiagaraRibbonFacingMode_MAX   = 2
};


// Enum Niagara.ENiagaraModuleDependencyScriptConstraint
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	SameScript                     = 0,
	AllScripts                     = 1,
	ENiagaraModuleDependencyScriptConstraint_MAX = 2
};


// Enum Niagara.ENiagaraModuleDependencyType
enum class ENiagaraModuleDependencyType : uint8_t
{
	PreDependency                  = 0,
	PostDependency                 = 1,
	ENiagaraModuleDependencyType_MAX = 2
};


// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8_t
{
	Copy                           = 0,
	Zero                           = 1,
	None                           = 2,
	MarkInvalid                    = 3,
	PassThrough                    = 4,
	EUnusedAttributeBehaviour_MAX  = 5
};


// Enum Niagara.ENiagaraSpriteFacingMode
enum class ENiagaraSpriteFacingMode : uint8_t
{
	FaceCamera                     = 0,
	FaceCameraPlane                = 1,
	CustomFacingVector             = 2,
	FaceCameraPosition             = 3,
	FaceCameraDistanceBlend        = 4,
	ENiagaraSpriteFacingMode_MAX   = 5
};


// Enum Niagara.ENiagaraSpriteAlignment
enum class ENiagaraSpriteAlignment : uint8_t
{
	Unaligned                      = 0,
	VelocityAligned                = 1,
	CustomAlignment                = 2,
	ENiagaraSpriteAlignment_MAX    = 3
};


// Enum Niagara.ENiagaraExecutionState
enum class ENiagaraExecutionState : uint8_t
{
	Active                         = 0,
	Inactive                       = 1,
	InactiveClear                  = 2,
	Complete                       = 3,
	Disabled                       = 4,
	Num                            = 5,
	ENiagaraExecutionState_MAX     = 6
};


// Enum Niagara.ENiagaraExecutionStateSource
enum class ENiagaraExecutionStateSource : uint8_t
{
	Scalability                    = 0,
	Internal                       = 1,
	Owner                          = 2,
	InternalCompletion             = 3,
	ENiagaraExecutionStateSource_MAX = 4
};


// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	None                           = 0,
	Largest                        = 1,
	Smallest                       = 2,
	Scalar                         = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Niagara.NiagaraTypeDefinition
// 0x0018
struct FNiagaraTypeDefinition
{
	class UStruct*                                     Struct;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEnum*                                       Enum;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraVariable
// 0x0030
struct FNiagaraVariable
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraTypeDefinition                      TypeDef;                                                  // 0x0008(0x0018) (Edit)
	TArray<unsigned char>                              VarData;                                                  // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraParameterStore
// 0x00E8
struct FNiagaraParameterStore
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     Owner;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FNiagaraVariable, int>                 ParameterOffsets;                                         // 0x0010(0x0050) (ZeroConstructor)
	TArray<unsigned char>                              ParameterData;                                            // 0x0060(0x0010) (ZeroConstructor)
	TArray<class UNiagaraDataInterface*>               DataInterfaces;                                           // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0080(0x0068) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
// 0x0050 (0x0138 - 0x00E8)
struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{
	TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects;                                   // 0x00E8(0x0050) (ZeroConstructor)
};

// ScriptStruct Niagara.NDIStaticMeshSectionFilter
// 0x0010
struct FNDIStaticMeshSectionFilter
{
	TArray<int>                                        AllowedMaterialSlots;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEventReceiverProperties
// 0x0018
struct FNiagaraEventReceiverProperties
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceEventGenerator;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceEmitter;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraDataSetID
// 0x000C
struct FNiagaraDataSetID
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraDataSetType                                Type;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraDataSetProperties
// 0x0020
struct FNiagaraDataSetProperties
{
	struct FNiagaraDataSetID                           ID;                                                       // 0x0000(0x000C) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FNiagaraVariable>                    Variables;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEventGeneratorProperties
// 0x0030
struct FNiagaraEventGeneratorProperties
{
	int                                                MaxEventsPerFrame;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID;                                                       // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FNiagaraDataSetProperties                   SetProps;                                                 // 0x0010(0x0020)
};

// ScriptStruct Niagara.NiagaraEmitterScriptProperties
// 0x0028
struct FNiagaraEmitterScriptProperties
{
	class UNiagaraScript*                              Script;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraEventReceiverProperties>     EventReceivers;                                           // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraEventGeneratorProperties>    EventGenerators;                                          // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEventScriptProperties
// 0x0030 (0x0058 - 0x0028)
struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{
	EScriptExecutionMode                               ExecutionMode;                                            // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	uint32_t                                           SpawnNumber;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxEventsPerFrame;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SourceEmitterID;                                          // 0x0034(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceEventName;                                          // 0x0044(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomSpawnNumber;                                       // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	uint32_t                                           MinSpawnNumber;                                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraVariableAttributeBinding
// 0x0090
struct FNiagaraVariableAttributeBinding
{
	struct FNiagaraVariable                            BoundVariable;                                            // 0x0000(0x0030)
	struct FNiagaraVariable                            DataSetVariable;                                          // 0x0030(0x0030)
	struct FNiagaraVariable                            DefaultValueIfNonExistent;                                // 0x0060(0x0030)
};

// ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
// 0x0010
struct FNiagaraScriptExecutionPaddingInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
// 0x0020 (0x0108 - 0x00E8)
struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{
	int                                                ParameterSize;                                            // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PaddedParameterSize;                                      // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraScriptExecutionPaddingInfo>  PaddingInfo;                                              // 0x00F0(0x0010) (ZeroConstructor)
	unsigned char                                      bInitialized : 1;                                         // 0x0100(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraVMExecutableDataId
// 0x0068
struct FNiagaraVMExecutableDataId
{
	struct FGuid                                       CompilerVersionID;                                        // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	ENiagaraScriptUsage                                ScriptUsageType;                                          // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FGuid                                       ScriptUsageTypeID;                                        // 0x0014(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FString>                             AdditionalDefines;                                        // 0x0028(0x0010) (ZeroConstructor)
	struct FGuid                                       BaseScriptID;                                             // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               ReferencedDependencyIds;                                  // 0x0048(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0058(0x0010) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraParameters
// 0x0010
struct FNiagaraParameters
{
	TArray<struct FNiagaraVariable>                    Parameters;                                               // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraScriptDataUsageInfo
// 0x0001
struct FNiagaraScriptDataUsageInfo
{
	bool                                               bReadsAttributeData;                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraFunctionSignature
// 0x0038
struct FNiagaraFunctionSignature
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraVariable>                    Inputs;                                                   // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraVariable>                    Outputs;                                                  // 0x0018(0x0010) (ZeroConstructor)
	struct FName                                       OwnerName;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bRequiresContext;                                         // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMemberFunction;                                          // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
// 0x0050
struct FNiagaraScriptDataInterfaceCompileInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                UserPtrIdx;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FNiagaraTypeDefinition                      Type;                                                     // 0x0010(0x0018)
	TArray<struct FNiagaraFunctionSignature>           RegisteredFunctions;                                      // 0x0028(0x0010) (ZeroConstructor)
	struct FName                                       RegisteredParameterMapRead;                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       RegisteredParameterMapWrite;                              // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlaceholder;                                           // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct Niagara.VMExternalFunctionBindingInfo
// 0x0028
struct FVMExternalFunctionBindingInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       OwnerName;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       InputParamLocations;                                      // 0x0010(0x0010) (ZeroConstructor)
	int                                                NumOutputs;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraStatScope
// 0x0010
struct FNiagaraStatScope
{
	struct FName                                       FullName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FriendlyName;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraVMExecutableData
// 0x0168
struct FNiagaraVMExecutableData
{
	TArray<unsigned char>                              ByteCode;                                                 // 0x0000(0x0010) (ZeroConstructor)
	int                                                NumUserPtrs;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FNiagaraParameters                          Parameters;                                               // 0x0018(0x0010)
	struct FNiagaraParameters                          InternalParameters;                                       // 0x0028(0x0010)
	TMap<struct FName, struct FNiagaraParameters>      DataSetToParameters;                                      // 0x0038(0x0050) (ZeroConstructor)
	TArray<struct FNiagaraVariable>                    Attributes;                                               // 0x0088(0x0010) (ZeroConstructor)
	struct FNiagaraScriptDataUsageInfo                 DataUsage;                                                // 0x0098(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;                                        // 0x00A0(0x0010) (ZeroConstructor)
	TArray<struct FVMExternalFunctionBindingInfo>      CalledVMExternalFunctions;                                // 0x00B0(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraDataSetID>                   ReadDataSets;                                             // 0x00C0(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraDataSetProperties>           WriteDataSets;                                            // 0x00D0(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraStatScope>                   StatScopes;                                               // 0x00E0(0x0010) (ZeroConstructor)
	struct FString                                     LastHlslTranslation;                                      // 0x00F0(0x0010) (ZeroConstructor)
	struct FString                                     LastHlslTranslationGPU;                                   // 0x0100(0x0010) (ZeroConstructor)
	struct FString                                     LastAssemblyTranslation;                                  // 0x0110(0x0010) (ZeroConstructor)
	uint32_t                                           LastOpCount;                                              // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	TArray<struct FNiagaraDataInterfaceGPUParamInfo>   DIParamInfo;                                              // 0x0128(0x0010) (ZeroConstructor)
	TArray<struct FString>                             ParameterCollectionPaths;                                 // 0x0138(0x0010) (ZeroConstructor)
	ENiagaraScriptCompileStatus                        LastCompileStatus;                                        // 0x0148(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bReadsAttributeData;                                      // 0x0149(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x014A(0x0006) MISSED OFFSET
	struct FString                                     ErrorMsg;                                                 // 0x0150(0x0010) (ZeroConstructor)
	float                                              CompileTime;                                              // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
// 0x0040
struct FNiagaraScriptDataInterfaceInfo
{
	class UNiagaraDataInterface*                       DataInterface;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                UserPtrIdx;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FNiagaraTypeDefinition                      Type;                                                     // 0x0018(0x0018)
	struct FName                                       RegisteredParameterMapRead;                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       RegisteredParameterMapWrite;                              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraEmitterHandle
// 0x0030
struct FNiagaraEmitterHandle
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       IdName;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsEnabled;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UNiagaraEmitter*                             Instance;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraSystemCompileRequest
// 0x0078
struct FNiagaraSystemCompileRequest
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<class UObject*>                             RootObjects;                                              // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0018(0x0060) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEmitterSpawnAttributes
// 0x0010
struct FNiagaraEmitterSpawnAttributes
{
	TArray<struct FName>                               SpawnAttributes;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
// 0x0030 (0x0050 - 0x0020)
struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FNiagaraVariable                            Parameter;                                                // 0x0020(0x0030)
};

// ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
// 0x0090 (0x00E0 - 0x0050)
struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneBoolChannel                      BoolChannel;                                              // 0x0050(0x0090)
};

// ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
// 0x0280 (0x02D0 - 0x0050)
struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel                     RedChannel;                                               // 0x0050(0x00A0)
	struct FMovieSceneFloatChannel                     GreenChannel;                                             // 0x00F0(0x00A0)
	struct FMovieSceneFloatChannel                     BlueChannel;                                              // 0x0190(0x00A0)
	struct FMovieSceneFloatChannel                     AlphaChannel;                                             // 0x0230(0x00A0)
};

// ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
// 0x00A0 (0x00F0 - 0x0050)
struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel                     FloatChannel;                                             // 0x0050(0x00A0)
};

// ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
// 0x0090 (0x00E0 - 0x0050)
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneIntegerChannel                   IntegerChannel;                                           // 0x0050(0x0090)
};

// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
// 0x0008 (0x0018 - 0x0010)
struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
// 0x0000 (0x0020 - 0x0020)
struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
// 0x0288 (0x02D8 - 0x0050)
struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel                     VectorChannels[0x4];                                      // 0x0050(0x00A0)
	int                                                ChannelsUsed;                                             // 0x02D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
// 0x0030
struct FNiagaraVariableDataInterfaceBinding
{
	struct FNiagaraVariable                            BoundVariable;                                            // 0x0000(0x0030)
};

// ScriptStruct Niagara.NiagaraVariableInfo
// 0x0050
struct FNiagaraVariableInfo
{
	struct FNiagaraVariable                            Variable;                                                 // 0x0000(0x0030)
	struct FText                                       Definition;                                               // 0x0030(0x0018)
	class UNiagaraDataInterface*                       DataInterface;                                            // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.MeshTriCoordinate
// 0x0010
struct FMeshTriCoordinate
{
	int                                                Tri;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BaryCoord;                                                // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraCollisionEventPayload
// 0x002C
struct FNiagaraCollisionEventPayload
{
	struct FVector                                     CollisionPos;                                             // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CollisionNormal;                                          // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CollisionVelocity;                                        // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndex;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PhysicalMaterialIndex;                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraModuleDependency
// 0x0028
struct FNiagaraModuleDependency
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraModuleDependencyType                       Type;                                                     // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraModuleDependencyScriptConstraint           ScriptConstraint;                                         // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0010(0x0018) (Edit)
};

// ScriptStruct Niagara.EmitterCompiledScriptPair
// 0x0098
struct FEmitterCompiledScriptPair
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0000(0x0098) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraVariableMetaData
// 0x0098
struct FNiagaraVariableMetaData
{
	TMap<struct FName, struct FString>                 PropertyMetaData;                                         // 0x0000(0x0050) (Edit, ZeroConstructor)
	struct FText                                       Description;                                              // 0x0050(0x0018) (Edit)
	struct FText                                       CategoryName;                                             // 0x0068(0x0018) (Edit)
	int                                                EditorSortPriority;                                       // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CallSortPriority;                                         // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<TWeakObjectPtr<class UObject>>              ReferencerNodes;                                          // 0x0088(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraID
// 0x0008
struct FNiagaraID
{
	int                                                Index;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AcquireTag;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraSpawnInfo
// 0x0010
struct FNiagaraSpawnInfo
{
	int                                                Count;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InterpStartDt;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IntervalDt;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SpawnGroup;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraMatrix
// 0x0040
struct FNiagaraMatrix
{
	struct FVector4                                    Row0;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Row1;                                                     // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Row2;                                                     // 0x0020(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Row3;                                                     // 0x0030(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraTestStructInner
// 0x0018
struct FNiagaraTestStructInner
{
	struct FVector                                     InnerVector1;                                             // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InnerVector2;                                             // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraTestStruct
// 0x0048
struct FNiagaraTestStruct
{
	struct FVector                                     Vector1;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector2;                                                  // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraTestStructInner                     InnerStruct1;                                             // 0x0018(0x0018) (Edit)
	struct FNiagaraTestStructInner                     InnerStruct2;                                             // 0x0030(0x0018) (Edit)
};

// ScriptStruct Niagara.NiagaraParameterMap
// 0x0001
struct FNiagaraParameterMap
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraNumeric
// 0x0001
struct FNiagaraNumeric
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraBool
// 0x0004
struct FNiagaraBool
{
	int                                                Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraInt32
// 0x0004
struct FNiagaraInt32
{
	int                                                Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraFloat
// 0x0004
struct FNiagaraFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
