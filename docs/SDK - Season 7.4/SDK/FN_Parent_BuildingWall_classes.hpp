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

// BlueprintGeneratedClass Parent_BuildingWall.Parent_BuildingWall_C
// 0x0018 (0x0D00 - 0x0CE8)
class AParent_BuildingWall_C : public ABuildingWall
{
public:
	struct FVector                                     BuildingBoundsMax;                                        // 0x0CE8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BuildingBoundsMin;                                        // 0x0CF4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Parent_BuildingWall.Parent_BuildingWall_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
