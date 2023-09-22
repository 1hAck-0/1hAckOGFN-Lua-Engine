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

// BlueprintGeneratedClass Athena_GameMode.Athena_GameMode_C
// 0x0008 (0x1190 - 0x1188)
class AAthena_GameMode_C : public AFortGameModeAthena
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x1188(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Athena_GameMode.Athena_GameMode_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
