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

// BlueprintGeneratedClass Frontend_Command_Hero_Camera.Frontend_Command_Hero_Camera_C
// 0x0010 (0x0890 - 0x0880)
class AFrontend_Command_Hero_Camera_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Frontend_Command_Hero_Camera.Frontend_Command_Hero_Camera_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnActivated();
	void OnDeactivated();
	void CustomEvent();
	void ExecuteUbergraph_Frontend_Command_Hero_Camera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
