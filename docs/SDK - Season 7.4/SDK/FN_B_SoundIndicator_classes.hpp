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

// BlueprintGeneratedClass B_SoundIndicator.B_SoundIndicator
// 0x03E0 (0x0830 - 0x0450)
class AB_SoundIndicator : public AFortSoundCameraLensEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Chest;                                                    // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FootstepsOrGlider;                                        // 0x0459(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Gunshot;                                                  // 0x045A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Plane;                                                    // 0x045B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Generic;                                                  // 0x045C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x045D(0x0003) MISSED OFFSET
	struct FRuntimeFloatCurve                          Gunshot_Falloff_Long_Range;                               // 0x0460(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Chest_Falloff;                                            // 0x04E8(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Footsteps_Falloff;                                        // 0x0570(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Gunshot_Falloff_Mid_Range;                                // 0x05F8(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Gunshot_Falloff_Melee;                                    // 0x0680(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              OppositeFacingGunshotStrength;                            // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FacingGunshotExponentNear;                                // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForwardFacingGunshotStrength;                             // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FacingGunshotExponentFar;                                 // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceDivisor;                                          // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x071C(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          Glider_Falloff;                                           // 0x0720(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Plane_Falloff;                                            // 0x07A8(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_SoundIndicator.B_SoundIndicator");
		return ptr;
	}


	void CalculateFiringAngle(float* DotResult);
	struct FRuntimeFloatCurve GetWeaponCurve();
	void UpdateEmitterStates();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnEffectActivated();
	void ExecuteUbergraph_B_SoundIndicator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
