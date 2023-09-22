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

// BlueprintGeneratedClass ShowSocialImportAction.ShowSocialImportAction_C
// 0x0012 (0x03A2 - 0x0390)
class AShowSocialImportAction_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bLastStateWasLoginScreen;                                 // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESubGame                                           NewVar_1;                                                 // 0x03A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShowSocialImportAction.ShowSocialImportAction_C");
		return ptr;
	}


	void ShouldShowSocialImport(bool* NewParam);
	void HandleSocialImportClosed();
	void ShowSocialImport();
	void UserConstructionScript();
	void Execute(struct FFortScriptedActionParams Params);
	void ExecuteUbergraph_ShowSocialImportAction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
