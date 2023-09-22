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

// BlueprintGeneratedClass TooltipLibrary.TooltipLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UTooltipLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TooltipLibrary.TooltipLibrary_C");
		return ptr;
	}


	void STATIC_CreateXPTooltip(class APlayerController* Owner, struct FText Header, struct FText CommanderXP, struct FText BoostXP, struct FText RestXP, struct FText Body, class UObject* __WorldContext, class UCommonUserWidget** Out);
	void STATIC_Create_Basic_Multi_Line_Tooltip(class APlayerController* Owning_Player, struct FText Header_Text, class USlateBrushAsset* Icon_Brush, class UObject* __WorldContext, TArray<struct FText>* Body_Text, class UUserWidget** Output);
	void STATIC_Create_Compare_Item_Tooltip(class APlayerController* Owning_Player, struct FText Header_Text, class USlateBrushAsset* Header_Icon, class UFortItem* Item, class UFortItem* ComparedItem, class UObject* __WorldContext, class UWidget** Return_Value);
	void STATIC_Create_Item_Tooltip(class APlayerController* Owning_Player, struct FText Header_Text, class USlateBrushAsset* Header_Icon, class UFortItem* Item, int OverrideQuantity, class UObject* __WorldContext, class UWidget** Return_Value);
	void STATIC_Set_Enabled_And_Tooltip_Text(class UWidget* Widget, bool Enabled, struct FText Tooltip_Text, class UObject* __WorldContext);
	void STATIC_Create_Custom_Tooltip(class APlayerController* Owning_Player, struct FText Header_Text, class USlateBrushAsset* Icon_Brush, class UUserWidget* Widget, class UObject* __WorldContext, class UUserWidget** Output);
	void STATIC_Create_Basic_Tooltip(class APlayerController* Owning_Player, struct FText Body_Text, struct FText Header_Text, class USlateBrushAsset* Icon_Brush, class UClass* Header_Style, class UClass* Body_Style, class UObject* __WorldContext, class UUserWidget** Output);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
