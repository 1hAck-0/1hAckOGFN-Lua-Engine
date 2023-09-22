#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Get FortPC
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortPlayerController*       FortPC                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ItemTransform_TabButton_C::Get_FortPC(class AFortPlayerController** FortPC, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "Get FortPC");

	Params::UBP_ItemTransform_TabButton_C_Get_FortPC_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (FortPC != nullptr)
		*FortPC = Parms.FortPC;

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Get Item from Transform Seen State
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*            Transform_Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            Item                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Catalyst_Tags                                                    (Edit, BlueprintVisible)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortConversionControlItemDefinition*K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetRequiredCatalysts_ReturnValue                        ()
// class AFortPlayerController*       CallFunc_Get_FortPC_FortPC                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHomebaseNodeItem*       CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumGameplayTagsInContainer_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ItemTransform_TabButton_C::Get_Item_from_Transform_Seen_State(class UFortAccountItem* Transform_Key, class UFortAccountItem** Item, const struct FGameplayTagContainer& Catalyst_Tags, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortConversionControlItemDefinition* K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_GetRequiredCatalysts_ReturnValue, class AFortPlayerController* CallFunc_Get_FortPC_FortPC, class UFortHomebaseNodeItem* CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue, int32 CallFunc_GetNumGameplayTagsInContainer_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "Get Item from Transform Seen State");

	Params::UBP_ItemTransform_TabButton_C_Get_Item_from_Transform_Seen_State_Params Parms;
	Parms.Transform_Key = Transform_Key;
	Parms.Catalyst_Tags = Catalyst_Tags;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition = K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRequiredCatalysts_ReturnValue = CallFunc_GetRequiredCatalysts_ReturnValue;
	Parms.CallFunc_Get_FortPC_FortPC = CallFunc_Get_FortPC_FortPC;
	Parms.CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue = CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue;
	Parms.CallFunc_GetNumGameplayTagsInContainer_ReturnValue = CallFunc_GetNumGameplayTagsInContainer_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = Parms.Item;

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Calculate Unseen Keys
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortAccountItem*>    Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              NumUnseen                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalNumUnseen                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_Get_Item_from_Transform_Seen_State_Item                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasBeenSeenLocally_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ItemTransform_TabButton_C::Calculate_Unseen_Keys(TArray<class UFortAccountItem*>& Array, int32* NumUnseen, int32 LocalNumUnseen, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class UFortAccountItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFortAccountItem* CallFunc_Get_Item_from_Transform_Seen_State_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HasBeenSeenLocally_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "Calculate Unseen Keys");

	Params::UBP_ItemTransform_TabButton_C_Calculate_Unseen_Keys_Params Parms;
	Parms.Array = Array;
	Parms.LocalNumUnseen = LocalNumUnseen;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Get_Item_from_Transform_Seen_State_Item = CallFunc_Get_Item_from_Transform_Seen_State_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_HasBeenSeenLocally_ReturnValue = CallFunc_HasBeenSeenLocally_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NumUnseen != nullptr)
		*NumUnseen = Parms.NumUnseen;

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Get Tab Id as Request Type
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EConversionControlKeyRequestReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class EConversionControlKeyRequest UBP_ItemTransform_TabButton_C::Get_Tab_Id_as_Request_Type(bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1)
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "Get Tab Id as Request Type");

	Params::UBP_ItemTransform_TabButton_C_Get_Tab_Id_as_Request_Type_Params Parms;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue1 = CallFunc_EqualEqual_NameName_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Tab Id
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemTransform_TabButton_C::Set_Tab_Id(class FName TabId)
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "Set Tab Id");

	Params::UBP_ItemTransform_TabButton_C_Set_Tab_Id_Params Parms;
	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Refresh Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumUnseen                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EConversionControlKeyRequestCallFunc_Get_Tab_Id_as_Request_Type_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortAccountItem*>    CallFunc_GetTransformKeys_TransformKeys                          (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Calculate_Unseen_Keys_NumUnseen                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemTransform_TabButton_C::Refresh_Bang_State(int32 NumUnseen, enum class EConversionControlKeyRequest CallFunc_Get_Tab_Id_as_Request_Type_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetTransformKeys_TransformKeys, int32 CallFunc_Calculate_Unseen_Keys_NumUnseen)
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "Refresh Bang State");

	Params::UBP_ItemTransform_TabButton_C_Refresh_Bang_State_Params Parms;
	Parms.NumUnseen = NumUnseen;
	Parms.CallFunc_Get_Tab_Id_as_Request_Type_ReturnValue = CallFunc_Get_Tab_Id_as_Request_Type_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetTransformKeys_TransformKeys = CallFunc_GetTransformKeys_TransformKeys;
	Parms.CallFunc_Calculate_Unseen_Keys_NumUnseen = CallFunc_Calculate_Unseen_Keys_NumUnseen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 IconBrush                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ItemTransform_TabButton_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "Set Icon");

	Params::UBP_ItemTransform_TabButton_C_Set_Icon_Params Parms;
	Parms.IconBrush = IconBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ItemTransform_TabButton_C::Set_Text(class FText ButtonText, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output)
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "Set Text");

	Params::UBP_ItemTransform_TabButton_C_Set_Text_Params Parms;
	Parms.ButtonText = ButtonText;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ItemTransform_TabButton_C::OnCurrentTextStyleChanged()
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "OnCurrentTextStyleChanged");

	Params::UBP_ItemTransform_TabButton_C_OnCurrentTextStyleChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ItemTransform_TabButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "PreConstruct");

	Params::UBP_ItemTransform_TabButton_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.SetTabLabelInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo     TabLabelInfo                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_ItemTransform_TabButton_C::SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "SetTabLabelInfo");

	Params::UBP_ItemTransform_TabButton_C_SetTabLabelInfo_Params Parms;
	Parms.TabLabelInfo = TabLabelInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_ItemTransform_TabButton_C::Construct()
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "Construct");

	Params::UBP_ItemTransform_TabButton_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ItemTransform_TabButton_C::OnSelected()
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "OnSelected");

	Params::UBP_ItemTransform_TabButton_C_OnSelected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ItemTransform_TabButton_C::OnDeselected()
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "OnDeselected");

	Params::UBP_ItemTransform_TabButton_C_OnDeselected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ItemTransform_TabButton_C::OnHovered()
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "OnHovered");

	Params::UBP_ItemTransform_TabButton_C_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ItemTransform_TabButton_C::OnUnhovered()
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "OnUnhovered");

	Params::UBP_ItemTransform_TabButton_C_OnUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.ExecuteUbergraph_BP_ItemTransform_TabButton
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetCurrentTextStyleClass_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetCurrentTextStyleClass_ReturnValue1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo     K2Node_Event_TabLabelInfo                                        (ConstParm)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSelected_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor1                                    ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor12                                   ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor123                                  ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor1234                                 ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor12345                                ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor123456                               ()

void UBP_ItemTransform_TabButton_C::ExecuteUbergraph_BP_ItemTransform_TabButton(int32 EntryPoint, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue1, bool K2Node_Event_IsDesignTime, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetSelected_ReturnValue1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, const struct FSlateColor& K2Node_MakeStruct_SlateColor12, const struct FSlateColor& K2Node_MakeStruct_SlateColor123, const struct FSlateColor& K2Node_MakeStruct_SlateColor1234, const struct FSlateColor& K2Node_MakeStruct_SlateColor12345, const struct FSlateColor& K2Node_MakeStruct_SlateColor123456)
{
	static auto Func = Class->GetFunction("BP_ItemTransform_TabButton_C", "ExecuteUbergraph_BP_ItemTransform_TabButton");

	Params::UBP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue = CallFunc_GetCurrentTextStyleClass_ReturnValue;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue1 = CallFunc_GetCurrentTextStyleClass_ReturnValue1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_TabLabelInfo = K2Node_Event_TabLabelInfo;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.CallFunc_GetSelected_ReturnValue1 = CallFunc_GetSelected_ReturnValue1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor1 = K2Node_MakeStruct_SlateColor1;
	Parms.K2Node_MakeStruct_SlateColor12 = K2Node_MakeStruct_SlateColor12;
	Parms.K2Node_MakeStruct_SlateColor123 = K2Node_MakeStruct_SlateColor123;
	Parms.K2Node_MakeStruct_SlateColor1234 = K2Node_MakeStruct_SlateColor1234;
	Parms.K2Node_MakeStruct_SlateColor12345 = K2Node_MakeStruct_SlateColor12345;
	Parms.K2Node_MakeStruct_SlateColor123456 = K2Node_MakeStruct_SlateColor123456;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
