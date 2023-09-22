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

// 0x261 (0x4B9 - 0x258)
// WidgetBlueprintGeneratedClass HUD-TeamMemberInfo.HUD-TeamMemberInfo_C
class UHUD_TeamMemberInfo_C : public UFortPlayerTrackerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(Transient, DuplicateTransient)
	class UImage*                                _Image__Class_Icon;                                // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                _Image__Healthbar;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_1;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Platform;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LeaderImage;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMicIndicator_C*                       MicIndicator;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPowerWidget_C*                        PowerWidget_Connected;                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherConnectingStranger;                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherContextualInfo;                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTeamMemberBluGloIndicator_C*          TeamMemberBluGloIndicator;                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextBlock_6;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextPlayerName;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                   MemberInfo;                                        // 0x2C0(0x1F8)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShowingHealth;                                     // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HUD-TeamMemberInfo_C");
		return Clss;
	}

	void UpdateHealthData(TArray<float>& Healths, TArray<float>& Shields, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void SetHealth(float Value, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void Update(const struct FFortTeamMemberInfo& UpdatedMemberInfo, const struct FUniqueNetIdRepl& PlayerPlatformNetId, const struct FUniqueNetIdRepl& PlayerNetId, class UClass* Temp_class_Variable, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, int32 Temp_int_Variable, int32 Temp_int_Variable1, class UClass* Temp_class_Variable1, bool Temp_bool_Variable12, bool Temp_bool_Variable123, enum class ESlateVisibility Temp_byte_Variable12, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility Temp_byte_Variable123, bool CallFunc_IsValid_UniqueNetIdRepl_ReturnValue, bool Temp_bool_Variable1234, int32 Temp_int_Variable12, enum class ESlateVisibility K2Node_Select_Default, int32 Temp_int_Variable123, bool Temp_bool_Variable12345, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, int32 K2Node_Select1_Default, TArray<float>& CallFunc_GetTeamHitPointFractions_HealthFractions, TArray<float>& CallFunc_GetTeamHitPointFractions_ShieldFractions, bool CallFunc_Array_IsValidIndex_ReturnValue, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_IsInLocalPlayersParty_ReturnValue, const struct FUniqueNetIdRepl& K2Node_Select12_Default, class UClass* K2Node_Select123_Default, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_Select1234_Default, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue12, enum class ESlateVisibility K2Node_Select12345_Default);
	void Construct();
	void OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo);
	void ExecuteUbergraph_HUD_TeamMemberInfo(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFortTeamMemberInfo& K2Node_Event_NewInfo, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
