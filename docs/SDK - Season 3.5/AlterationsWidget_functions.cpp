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


// Function AlterationsWidget.AlterationsWidget_C.UpdatePerksMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PerkCount                                                        (Edit, BlueprintVisible)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_Format_ReturnValue1                                     ()
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationsWidget_C::UpdatePerksMessage(class FText PerkCount, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue1, enum class EFortRarity CallFunc_GetRarity_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "UpdatePerksMessage");

	Params::UAlterationsWidget_C_UpdatePerksMessage_Params Parms;
	Parms.PerkCount = PerkCount;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue1 = CallFunc_Format_ReturnValue1;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAlterationsWidget_C::Construct()
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "Construct");

	Params::UAlterationsWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.OnGenerateAlteration
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortUIAlteration           AlterationInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UAlterationsWidget_C::OnGenerateAlteration(const struct FFortUIAlteration& AlterationInfo)
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "OnGenerateAlteration");

	Params::UAlterationsWidget_C_OnGenerateAlteration_Params Parms;
	Parms.AlterationInfo = AlterationInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.OnItemChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UAlterationsWidget_C::OnItemChanged()
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "OnItemChanged");

	Params::UAlterationsWidget_C_OnItemChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.OnItemToCompareWithChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UAlterationsWidget_C::OnItemToCompareWithChanged()
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "OnItemToCompareWithChanged");

	Params::UAlterationsWidget_C_OnItemToCompareWithChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.OnStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UAlterationsWidget_C::OnStateChanged()
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "OnStateChanged");

	Params::UAlterationsWidget_C_OnStateChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.ExecuteUbergraph_AlterationsWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAlterationWidget_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlterationUnlocked_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIAlteration           K2Node_Event_AlterationInfo                                      (NoDestructor)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerkDivider_C*              CallFunc_Create_ReturnValue1                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerkDivider_C*              CallFunc_Create_ReturnValue12                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue12                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue123                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationsWidget_C::ExecuteUbergraph_AlterationsWidget(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAlterationWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsAlterationUnlocked_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FFortUIAlteration& K2Node_Event_AlterationInfo, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue12, class UPerkDivider_C* CallFunc_Create_ReturnValue1, class UPerkDivider_C* CallFunc_Create_ReturnValue12, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue12, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue123)
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "ExecuteUbergraph_AlterationsWidget");

	Params::UAlterationsWidget_C_ExecuteUbergraph_AlterationsWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsAlterationUnlocked_ReturnValue = CallFunc_IsAlterationUnlocked_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_Event_AlterationInfo = K2Node_Event_AlterationInfo;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue1 = CallFunc_GetOwningPlayer_ReturnValue1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue12 = CallFunc_GetOwningPlayer_ReturnValue12;
	Parms.CallFunc_Create_ReturnValue1 = CallFunc_Create_ReturnValue1;
	Parms.CallFunc_Create_ReturnValue12 = CallFunc_Create_ReturnValue12;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue1 = CallFunc_AddChildToVerticalBox_ReturnValue1;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue12 = CallFunc_AddChildToVerticalBox_ReturnValue12;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue123 = CallFunc_AddChildToVerticalBox_ReturnValue123;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
