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

// 0x120 (0x928 - 0x808)
// WidgetBlueprintGeneratedClass BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C
class UBP_FortExpeditionIconTabButton_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x808(0x8)(Transient, DuplicateTransient)
	class UCommonNumericTextBlock*               AvailableVehicles;                                 // 0x810(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CenterButtonTextWidget;                            // 0x818(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Heading;                                           // 0x820(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LeftSideImage;                                     // 0x828(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                  NormalBangWrapper_0;                               // 0x830(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ButtonText;                                        // 0x838(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                           IconBrush;                                         // 0x850(0x88)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FName                                  TabId;                                             // 0x8D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Hovered_Icon_Tint;                                 // 0x8E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Selected_Icon_Tint;                                // 0x8F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Deselected_Icon_Tint;                              // 0x900(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LandVehicles;                                      // 0x910(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LandVehiclesAvailable;                             // 0x914(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SeaVehicles;                                       // 0x918(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SeaVehiclesAvailable;                              // 0x91C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AirVehicles;                                       // 0x920(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AirVehiclesAvailable;                              // 0x924(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_FortExpeditionIconTabButton_C");
		return Clss;
	}

	void Update_Air_Vehicles(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void Update_Sea_Vehicles(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void Update_Land_Vehicles(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void Update_All_Vehicles(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void Update_Available_Vehicles(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetTotalExpeditionVehiclesAvailable_OutLandVehicles, int32 CallFunc_GetTotalExpeditionVehiclesAvailable_OutLandVehiclesAvailable, int32 CallFunc_GetTotalExpeditionVehiclesAvailable_OutSeaVehicles, int32 CallFunc_GetTotalExpeditionVehiclesAvailable_OutSeaVehiclesAvailable, int32 CallFunc_GetTotalExpeditionVehiclesAvailable_OutAirVehicles, int32 CallFunc_GetTotalExpeditionVehiclesAvailable_OutAirVehiclesAvailable);
	void Set_Tab_Id(class FName TabId);
	void Refresh_Bang_State(int32 NumUnseen, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_TotalUnseenExpeditionsForTab_ReturnValue);
	void Set_Icon(const struct FSlateBrush& IconBrush);
	void Set_Text(class FText ButtonText, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void OnCurrentTextStyleChanged();
	void PreConstruct(bool IsDesignTime);
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo);
	void Construct();
	void OnSelected();
	void OnDeselected();
	void OnHovered();
	void OnUnhovered();
	void ExecuteUbergraph_BP_FortExpeditionIconTabButton(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue1, bool K2Node_Event_IsDesignTime, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetSelected_ReturnValue1, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, const struct FSlateColor& K2Node_MakeStruct_SlateColor12, const struct FSlateColor& K2Node_MakeStruct_SlateColor123, const struct FSlateColor& K2Node_MakeStruct_SlateColor1234, const struct FSlateColor& K2Node_MakeStruct_SlateColor12345, const struct FSlateColor& K2Node_MakeStruct_SlateColor123456);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
