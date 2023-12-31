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

// Enum MeshNetwork.EMeshNetworkNodeType
enum class EMeshNetworkNodeType : uint8_t
{
	Root                           = 0,
	Inner                          = 1,
	Edge                           = 2,
	Client                         = 3,
	EMeshNetworkNodeType_MAX       = 4
};


// Enum MeshNetwork.EMeshNetworkRelevancy
enum class EMeshNetworkRelevancy : uint8_t
{
	NotRelevant                    = 0,
	RelevantToEdgeNodes            = 1,
	RelevantToClients              = 2,
	EMeshNetworkRelevancy_MAX      = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MeshNetwork.AggregatedFunction
// 0x0028
struct FAggregatedFunction
{
	class UFunction*                                   Function;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct MeshNetwork.MeshMetaDataStruct
// 0x0001
struct FMeshMetaDataStruct
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
