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

// BlueprintGeneratedClass Frontend_Manage_Camera.Frontend_Manage_Camera_C
// 0x0040 (0x08C0 - 0x0880)
class AFrontend_Manage_Camera_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      FortEntryMusic;                                           // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFort_Entry_Music_Controller_BP_C*           Fort_Entry_Music_Controller;                              // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x08A0(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty Frontend_Manage_Camera.Frontend_Manage_Camera_C.CameraHasBeenSelected
	unsigned char                                      UnknownData01[0x10];                                      // 0x08B0(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty Frontend_Manage_Camera.Frontend_Manage_Camera_C.CameraHasBeenDeselected

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Frontend_Manage_Camera.Frontend_Manage_Camera_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnActivated();
	void OnDeactivated();
	void CameraSelected(bool IsSensei);
	void CameraDeselected();
	void ExecuteUbergraph_Frontend_Manage_Camera(int EntryPoint);
	void CameraHasBeenDeselected__DelegateSignature();
	void CameraHasBeenSelected__DelegateSignature(bool IsSensei);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
