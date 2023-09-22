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

// BlueprintGeneratedClass BP_CameraLens_CrackExit.BP_CameraLens_CrackExit_C
// 0x0008 (0x03F8 - 0x03F0)
class ABP_CameraLens_CrackExit_C : public AEmitterCameraLensEffectBase
{
public:
	class UParticleSystemComponent*                    Portal;                                                   // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CameraLens_CrackExit.BP_CameraLens_CrackExit_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
