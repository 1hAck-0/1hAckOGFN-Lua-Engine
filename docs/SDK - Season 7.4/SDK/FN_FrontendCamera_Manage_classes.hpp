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

// BlueprintGeneratedClass FrontendCamera_Manage.FrontendCamera_Manage_C
// 0x0010 (0x0890 - 0x0880)
class AFrontendCamera_Manage_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            LoginCamera_1;                                            // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FrontendCamera_Manage.FrontendCamera_Manage_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDeactivated();
	void OnActivated();
	void ExecuteUbergraph_FrontendCamera_Manage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
