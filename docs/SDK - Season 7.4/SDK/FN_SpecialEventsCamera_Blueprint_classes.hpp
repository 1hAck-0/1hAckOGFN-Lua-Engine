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

// BlueprintGeneratedClass SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C
// 0x0008 (0x0888 - 0x0880)
class ASpecialEventsCamera_Blueprint_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_SpecialEventsCamera_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
