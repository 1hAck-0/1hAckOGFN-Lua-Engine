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

// 0x50 (0x868 - 0x818)
// WidgetBlueprintGeneratedClass BP_BannerEditorTile.BP_BannerEditorTile_C
class UBP_BannerEditorTile_C : public UFortPlayerProfileBannerEditorTile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x818(0x8)(Transient, DuplicateTransient)
	class UImage*                                ColorImage;                                        // 0x820(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_0;                            // 0x828(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                IconImage;                                         // 0x830(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLoadGuard*                      IconLoadGuard;                                     // 0x838(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x840(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                  NormalBangWrapper;                                 // 0x848(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ColorMID;                                          // 0x850(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  BannerTileBangUpdated;                             // 0x858(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_BannerEditorTile_C");
		return Clss;
	}

	void Mark_Item_As_Seen(bool bAlreadySeen, class UObject* CallFunc_GetData_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasBeenSeenLocally_ReturnValue);
	void Update_Bang_State(class UObject* CallFunc_GetData_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void Construct();
	void HandleBannerIconLoadGuardFinished(class UObject* Object);
	void OnSelected();
	void OnHovered();
	void ExecuteUbergraph_BP_BannerEditorTile(int32 EntryPoint, class UObject* CallFunc_GetData_ReturnValue, class UFortHomebaseBannerColorItem* K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item, bool K2Node_DynamicCast_bSuccess, class UFortHomebaseBannerIconItem* K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item, bool K2Node_DynamicCast_bSuccess1, class UObject* CallFunc_GetData_ReturnValue1, class UFortHomebaseBannerIconItem* K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item1, bool K2Node_DynamicCast_bSuccess12, TSoftObjectPtr<class UTexture2D> CallFunc_GetBannerSmallIconAsset_ReturnValue, class UObject* K2Node_CustomEvent_Object, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess123, class UObject* CallFunc_GetData_ReturnValue12, class UFortHomebaseBannerColorItem* K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item1, bool K2Node_DynamicCast_bSuccess1234, const struct FLinearColor& CallFunc_GetBannerColorSecondaryColor_ReturnValue, const struct FLinearColor& CallFunc_GetBannerColorPrimaryColor_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList);
	void BannerTileBangUpdated__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
