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

// BlueprintGeneratedClass Announce_ZoneModifiers.Announce_ZoneModifiers_C
// 0x0008 (0x03C0 - 0x03B8)
class AAnnounce_ZoneModifiers_C : public AFortClientAnnouncement_ZoneModifiers
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_ZoneModifiers.Announce_ZoneModifiers_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
