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

// BlueprintGeneratedClass FortAnimNotify_Interface_Interface.FortAnimNotify_Interface_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UFortAnimNotify_Interface_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FortAnimNotify_Interface_Interface.FortAnimNotify_Interface_Interface_C");
		return ptr;
	}


	void TrailOn();
	void TrailOff();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
