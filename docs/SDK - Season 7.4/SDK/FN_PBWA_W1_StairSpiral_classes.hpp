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

// BlueprintGeneratedClass PBWA_W1_StairSpiral.PBWA_W1_StairSpiral_C
// 0x0000 (0x0BF0 - 0x0BF0)
class APBWA_W1_StairSpiral_C : public ABuildingStairs
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PBWA_W1_StairSpiral.PBWA_W1_StairSpiral_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
