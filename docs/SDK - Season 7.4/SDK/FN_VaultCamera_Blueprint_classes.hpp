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

// BlueprintGeneratedClass VaultCamera_Blueprint.VaultCamera_Blueprint_C
// 0x0020 (0x08A0 - 0x0880)
class AVaultCamera_Blueprint_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             CachedPawn;                                               // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               MouseDown;                                                // 0x0890(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0891(0x0007) MISSED OFFSET
	class AVaultCamera_Blueprint_C*                    VaultActor;                                               // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VaultCamera_Blueprint.VaultCamera_Blueprint_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDeactivated();
	void OnActivated();
	void ExecuteUbergraph_VaultCamera_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
