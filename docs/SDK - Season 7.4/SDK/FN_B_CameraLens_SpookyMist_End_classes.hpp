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

// BlueprintGeneratedClass B_CameraLens_SpookyMist_End.B_CameraLens_SpookyMist_End_C
// 0x001C (0x040C - 0x03F0)
class AB_CameraLens_SpookyMist_End_C : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      VelocityActor;                                            // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetRot;                                                // 0x0400(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_CameraLens_SpookyMist_End.B_CameraLens_SpookyMist_End_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_CameraLens_SpookyMist_End(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
