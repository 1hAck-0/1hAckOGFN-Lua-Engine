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

// BlueprintGeneratedClass B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C
// 0x0008 (0x0830 - 0x0828)
class AB_Prj_Athena_FragGrenade_C : public AB_Prj_Athena_Grenade_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0828(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C");
		return ptr;
	}


	void UserConstructionScript();
	void FuseEnded();
	void ExecuteUbergraph_B_Prj_Athena_FragGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
