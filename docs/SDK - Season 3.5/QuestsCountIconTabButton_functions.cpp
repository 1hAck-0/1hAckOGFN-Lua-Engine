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


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.SetTutorialNameID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InTutorialBangID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestsCountIconTabButton_C::SetTutorialNameID(class FName InTutorialBangID)
{
	static auto Func = Class->GetFunction("QuestsCountIconTabButton_C", "SetTutorialNameID");

	Params::UQuestsCountIconTabButton_C_SetTutorialNameID_Params Parms;
	Parms.InTutorialBangID = InTutorialBangID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Update Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bBangEnabled                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestsCountIconTabButton_C::Update_Bang_State(bool bBangEnabled, int32 Count, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestsCountIconTabButton_C", "Update Bang State");

	Params::UQuestsCountIconTabButton_C_Update_Bang_State_Params Parms;
	Parms.bBangEnabled = bBangEnabled;
	Parms.Count = Count;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Update Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              QuestCount                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortQuestCategory*>  CallFunc_GetCurrentQuestsCategories_Categories                   (ZeroConstructor, ReferenceParm)
// class UFortQuestCategory*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuestState         CallFunc_GetQuestState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestsCountIconTabButton_C::Update_Text(int32 QuestCount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue12, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UFortQuestCategory*>& CallFunc_GetCurrentQuestsCategories_Categories, class UFortQuestCategory* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFortQuestItem* CallFunc_Array_Get_Item1, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1)
{
	static auto Func = Class->GetFunction("QuestsCountIconTabButton_C", "Update Text");

	Params::UQuestsCountIconTabButton_C_Update_Text_Params Parms;
	Parms.QuestCount = QuestCount;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue12 = CallFunc_Add_IntInt_ReturnValue12;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentQuestsCategories_Categories = CallFunc_GetCurrentQuestsCategories_Categories;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_GetQuestState_ReturnValue = CallFunc_GetQuestState_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.SetTutorialBorderStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      BorderStyle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestsCountIconTabButton_C::SetTutorialBorderStyle(class UClass* BorderStyle)
{
	static auto Func = Class->GetFunction("QuestsCountIconTabButton_C", "SetTutorialBorderStyle");

	Params::UQuestsCountIconTabButton_C_SetTutorialBorderStyle_Params Parms;
	Parms.BorderStyle = BorderStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.ShowText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestsCountIconTabButton_C::ShowText()
{
	static auto Func = Class->GetFunction("QuestsCountIconTabButton_C", "ShowText");

	Params::UQuestsCountIconTabButton_C_ShowText_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 IconBrush                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuestsCountIconTabButton_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto Func = Class->GetFunction("QuestsCountIconTabButton_C", "Set Icon");

	Params::UQuestsCountIconTabButton_C_Set_Icon_Params Parms;
	Parms.IconBrush = IconBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestsCountIconTabButton_C::Set_Text(class FText ButtonText, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output)
{
	static auto Func = Class->GetFunction("QuestsCountIconTabButton_C", "Set Text");

	Params::UQuestsCountIconTabButton_C_Set_Text_Params Parms;
	Parms.ButtonText = ButtonText;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UQuestsCountIconTabButton_C::OnCurrentTextStyleChanged()
{
	static auto Func = Class->GetFunction("QuestsCountIconTabButton_C", "OnCurrentTextStyleChanged");

	Params::UQuestsCountIconTabButton_C_OnCurrentTextStyleChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestsCountIconTabButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("QuestsCountIconTabButton_C", "PreConstruct");

	Params::UQuestsCountIconTabButton_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.SetTabLabelInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo     TabLabelInfo                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuestsCountIconTabButton_C::SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto Func = Class->GetFunction("QuestsCountIconTabButton_C", "SetTabLabelInfo");

	Params::UQuestsCountIconTabButton_C_SetTabLabelInfo_Params Parms;
	Parms.TabLabelInfo = TabLabelInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UQuestsCountIconTabButton_C::OnSelected()
{
	static auto Func = Class->GetFunction("QuestsCountIconTabButton_C", "OnSelected");

	Params::UQuestsCountIconTabButton_C_OnSelected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UQuestsCountIconTabButton_C::OnDeselected()
{
	static auto Func = Class->GetFunction("QuestsCountIconTabButton_C", "OnDeselected");

	Params::UQuestsCountIconTabButton_C_OnDeselected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuestsCountIconTabButton_C::Construct()
{
	static auto Func = Class->GetFunction("QuestsCountIconTabButton_C", "Construct");

	Params::UQuestsCountIconTabButton_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UQuestsCountIconTabButton_C::OnHovered()
{
	static auto Func = Class->GetFunction("QuestsCountIconTabButton_C", "OnHovered");

	Params::UQuestsCountIconTabButton_C_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UQuestsCountIconTabButton_C::OnUnhovered()
{
	static auto Func = Class->GetFunction("QuestsCountIconTabButton_C", "OnUnhovered");

	Params::UQuestsCountIconTabButton_C_OnUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Handle Quest Count Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestsCountIconTabButton_C::Handle_Quest_Count_Updated()
{
	static auto Func = Class->GetFunction("QuestsCountIconTabButton_C", "Handle Quest Count Updated");

	Params::UQuestsCountIconTabButton_C_Handle_Quest_Count_Updated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnEnabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UQuestsCountIconTabButton_C::OnEnabled()
{
	static auto Func = Class->GetFunction("QuestsCountIconTabButton_C", "OnEnabled");

	Params::UQuestsCountIconTabButton_C_OnEnabled_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnDisabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UQuestsCountIconTabButton_C::OnDisabled()
{
	static auto Func = Class->GetFunction("QuestsCountIconTabButton_C", "OnDisabled");

	Params::UQuestsCountIconTabButton_C_OnDisabled_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.ExecuteUbergraph_QuestsCountIconTabButton
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSelected_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo     K2Node_Event_TabLabelInfo                                        (ConstParm)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue12                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue123                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue1234                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue12345                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetCurrentTextStyleClass_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue123456                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetCurrentTextStyleClass_ReturnValue1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestsCountIconTabButton_C::ExecuteUbergraph_QuestsCountIconTabButton(int32 EntryPoint, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetSelected_ReturnValue1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue1, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, bool CallFunc_EqualEqual_ClassClass_ReturnValue12, bool CallFunc_EqualEqual_ClassClass_ReturnValue123, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue1234, bool CallFunc_EqualEqual_ClassClass_ReturnValue12345, bool K2Node_Event_IsDesignTime, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue123456, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestsCountIconTabButton_C", "ExecuteUbergraph_QuestsCountIconTabButton");

	Params::UQuestsCountIconTabButton_C_ExecuteUbergraph_QuestsCountIconTabButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.CallFunc_GetSelected_ReturnValue1 = CallFunc_GetSelected_ReturnValue1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue1 = CallFunc_EqualEqual_ClassClass_ReturnValue1;
	Parms.K2Node_Event_TabLabelInfo = K2Node_Event_TabLabelInfo;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue12 = CallFunc_EqualEqual_ClassClass_ReturnValue12;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue123 = CallFunc_EqualEqual_ClassClass_ReturnValue123;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue1234 = CallFunc_EqualEqual_ClassClass_ReturnValue1234;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue12345 = CallFunc_EqualEqual_ClassClass_ReturnValue12345;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue = CallFunc_GetCurrentTextStyleClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue123456 = CallFunc_EqualEqual_ClassClass_ReturnValue123456;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue1 = CallFunc_GetCurrentTextStyleClass_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
