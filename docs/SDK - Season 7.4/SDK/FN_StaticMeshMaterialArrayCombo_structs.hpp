#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct StaticMeshMaterialArrayCombo.StaticMeshMaterialArrayCombo
// 0x0018
struct FStaticMeshMaterialArrayCombo
{
	class AStaticMeshActor*                            StaticMesh;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class UMaterialInterface*>                  MaterialArray;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
