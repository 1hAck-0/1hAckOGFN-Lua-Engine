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

// BlueprintGeneratedClass FrontendCamera_Inspect.FrontendCamera_Inspect_C
// 0x0010 (0x0890 - 0x0880)
class AFrontendCamera_Inspect_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            LoginCamera_1;                                            // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FrontendCamera_Inspect.FrontendCamera_Inspect_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_FrontendCamera_Inspect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
