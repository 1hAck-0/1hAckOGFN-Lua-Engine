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

// BlueprintGeneratedClass B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C
// 0x0008 (0x0400 - 0x03F8)
class AB_PlayerShieldDamage_CameraLensEffect_C : public AB_PlayerHealthDamage_CameraLensEffect_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C");
		return ptr;
	}


	void UserConstructionScript();
	void PassParticle_Parameter_Shield(float NewParam);
	void ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
