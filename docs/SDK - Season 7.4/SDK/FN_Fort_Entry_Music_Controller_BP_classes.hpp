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

// BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
// 0x0048 (0x0378 - 0x0330)
class AFort_Entry_Music_Controller_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Enter_Menu_Loop;                                          // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             MenuMusic_B;                                              // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             MenuMusic_A;                                              // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             LoginMusic;                                               // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	class USoundBase*                                  CurrentMusic;                                             // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Music_Activate_Override;                               // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	class UAthenaMusicPackItemDefinition*              MusicPackToPlayLater;                                     // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void Change_Music(class USoundBase* New_Music);
	void ListenToMusicPacks();
	void OnMusicPackChanged(class UAthenaMusicPackItemDefinition* NewMusicPack);
	void Lobby_Music_Override(bool Lobby_Music_Activate, class USoundBase* New_Music);
	void MakeNextMusicPackStartFromBeginning();
	void DelayedPlayMusicPack(class UAthenaMusicPackItemDefinition* MusicPackToPlayLater);
	void ClearDelayedPlayMusicPack();
	void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
