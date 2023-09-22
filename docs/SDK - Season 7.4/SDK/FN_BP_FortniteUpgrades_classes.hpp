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

// BlueprintGeneratedClass BP_FortniteUpgrades.BP_FortniteUpgrades_C
// 0x0068 (0x0398 - 0x0330)
class ABP_FortniteUpgrades_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADirectionalLight*                           DirectionLight;                                           // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ASkyLight*                                   SkyLight;                                                 // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class APointLight*>                         Pointlights;                                              // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class AExponentialHeightFog*                       ExponentialHeightFog;                                     // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ADirectionalLight*                           DirectionalLight_LowDetailMode;                           // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class AEmitter*>                            ParticleSystems;                                          // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               IsActive;                                                 // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugLOWQualityLighting;                                  // 0x0381(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0382(0x0006) MISSED OFFSET
	class ASkyLight*                                   SkyLight_LowDetailMode;                                   // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AExponentialHeightFog*                       ExponentialHeightfog_LowDetailMode;                       // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FortniteUpgrades.BP_FortniteUpgrades_C");
		return ptr;
	}


	void SetVisiblityofDetailSpecificMeshes();
	void SetVisiblityofSceneLighting(bool Activate);
	void UserConstructionScript();
	void DisableLobbySetLighting();
	void UpdateSettings();
	void EnableLobbySetLighting();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FortniteUpgrades(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
