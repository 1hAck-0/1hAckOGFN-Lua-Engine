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

// BlueprintGeneratedClass PBWA_S1_Solid.PBWA_S1_Solid_C
// 0x0028 (0x0D10 - 0x0CE8)
class APBWA_S1_Solid_C : public ABuildingWall
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                GnomeWallChance;                                          // 0x0CF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GnomeWallMax;                                             // 0x0CF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Gnomed;                                                   // 0x0CF8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0CF9(0x0007) MISSED OFFSET
	class UMaterialInstanceConstant*                   GnomeMaterial;                                            // 0x0D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 GnomeWall;                                                // 0x0D08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PBWA_S1_Solid.PBWA_S1_Solid_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PBWA_S1_Solid(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
