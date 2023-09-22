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

// BlueprintGeneratedClass B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C
// 0x0048 (0x0420 - 0x03D8)
class AB_AthenaPlayerMarker_WithCustomization_C : public AB_AthenaMapMarkerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      TopperClass;                                              // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortMapMarkerTopperActor*                   TopperInstance;                                           // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  TopperTransform;                                          // 0x03F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoaded(class UClass* Loaded);
	void OnSetupMarker(struct FPlayerMarkerData MarkerData);
	void OnMarkerHidden();
	void UpdateTopper();
	void OnMarkerPlaced();
	void ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
