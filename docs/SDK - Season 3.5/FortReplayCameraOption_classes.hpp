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

// 0x9 (0x909 - 0x900)
// WidgetBlueprintGeneratedClass FortReplayCameraOption.FortReplayCameraOption_C
class UFortReplayCameraOption_C : public UIconTextButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x900(0x8)(Transient, DuplicateTransient)
	enum class ESpectatorCameraType              CameraType;                                        // 0x908(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortReplayCameraOption_C");
		return Clss;
	}

	void OnClicked();
	void Construct();
	void ExecuteUbergraph_FortReplayCameraOption(int32 EntryPoint, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
