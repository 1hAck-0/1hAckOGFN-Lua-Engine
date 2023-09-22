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

// BlueprintGeneratedClass Frontend_Lobby_Layout2.Frontend_Lobby_Layout2_C
// 0x0018 (0x0360 - 0x0348)
class AFrontend_Lobby_Layout2_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       CurrentBackgroundLevelName;                               // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       NewBackgroundLevelName;                                   // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Frontend_Lobby_Layout2.Frontend_Lobby_Layout2_C");
		return ptr;
	}


	void OnBackgroundChanged();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Frontend_Lobby_Layout2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
