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

// 0x40 (0x848 - 0x808)
// WidgetBlueprintGeneratedClass FriendCodePC.FriendCodePC_C
class UFriendCodePC_C : public UFriendCodeEntryBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x808(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      CodeText;                                          // 0x810(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CopyLinkText;                                      // 0x818(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      UrlText;                                           // 0x820(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFriendCode                           FriendCode;                                        // 0x828(0x20)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FriendCodePC_C");
		return Clss;
	}

	void GetCodeText(class FText* Result, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetFriendCodeDisplayName_ReturnValue, class FText CallFunc_GetFriendCodeDescription_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void GetFriendCodeUrl(class FString* Result, bool Temp_bool_Variable, bool CallFunc_IsTencentBuild_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_Select_Default);
	void Construct();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnClicked();
	void ExecuteUbergraph_FriendCodePC(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent1, const struct FPointerEvent& K2Node_Event_MouseEvent, const class FString& CallFunc_GetFriendCodeUrl_Result, class FText CallFunc_GetCodeText_Result, bool CallFunc_IsTencentBuild_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
