#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x52 (0x36A - 0x318)
// BlueprintGeneratedClass BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C
class ABP_FortniteLobbyLightSwitcher_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                     DirectionLight;                                    // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkyLight*                             SkyLight;                                          // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APointLight*>                   Pointlights;                                       // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class AExponentialHeightFog*                 ExponentialHeightFog;                              // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                     DirectionalLight_LowDetailMode;                    // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AEmitter*>                      ParticleSystems;                                   // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                         IsActive;                                          // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DebugLOWQualityLighting;                           // 0x369(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_FortniteLobbyLightSwitcher_C");
		return Clss;
	}

	void SetVisiblityofSceneLighting(bool Activate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsMobilePlatform_ReturnValue, int32 Temp_int_Array_Index_Variable1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_IsValid_ReturnValue123, bool CallFunc_IsValid_ReturnValue1234, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue12345, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AEmitter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue123456, class APointLight* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_IsValid_ReturnValue1234567, bool CallFunc_IsValid_ReturnValue12345678);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void EnableLobbySetLighting();
	void DisableLobbySetLighting();
	void UpdateSettings();
	void ExecuteUbergraph_BP_FortniteLobbyLightSwitcher(int32 EntryPoint, bool CallFunc_IsMobilePlatform_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
