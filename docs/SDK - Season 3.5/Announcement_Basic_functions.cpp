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


// Function Announcement_Basic.Announcement_Basic_C.UpdateWidgetData
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement*     Announcement                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_Basic_C::UpdateWidgetData(class AFortClientAnnouncement* Announcement)
{
	static auto Func = Class->GetFunction("Announcement_Basic_C", "UpdateWidgetData");

	Params::UAnnouncement_Basic_C_UpdateWidgetData_Params Parms;
	Parms.Announcement = Announcement;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announcement_Basic.Announcement_Basic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAnnouncement_Basic_C::Construct()
{
	static auto Func = Class->GetFunction("Announcement_Basic_C", "Construct");

	Params::UAnnouncement_Basic_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announcement_Basic.Announcement_Basic_C.AnnouncementStopped
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement*     Announcement                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_Basic_C::AnnouncementStopped(class AFortClientAnnouncement* Announcement)
{
	static auto Func = Class->GetFunction("Announcement_Basic_C", "AnnouncementStopped");

	Params::UAnnouncement_Basic_C_AnnouncementStopped_Params Parms;
	Parms.Announcement = Announcement;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announcement_Basic.Announcement_Basic_C.ExecuteUbergraph_Announcement_Basic
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortClientAnnouncement*     K2Node_Event_Announcement1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Basic*K2Node_DynamicCast_AsFort_Client_Announcement_Basic              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue12                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// bool                               CallFunc_TextIsEmpty_ReturnValue123                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetBrushResource_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortClientAnnouncement*     K2Node_Event_Announcement                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select12_Default                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_Basic_C::ExecuteUbergraph_Announcement_Basic(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class AFortClientAnnouncement* K2Node_Event_Announcement1, class AFortClientAnnouncement_Basic* K2Node_DynamicCast_AsFort_Client_Announcement_Basic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue12, bool CallFunc_BooleanAND_ReturnValue1, class FText K2Node_Select_Default, bool CallFunc_TextIsEmpty_ReturnValue123, class UObject* CallFunc_GetBrushResource_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_IsValid_ReturnValue, class AFortClientAnnouncement* K2Node_Event_Announcement, bool Temp_bool_Variable12, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility K2Node_Select1_Default, enum class ESlateVisibility Temp_byte_Variable123, enum class ESlateVisibility K2Node_Select12_Default)
{
	static auto Func = Class->GetFunction("Announcement_Basic_C", "ExecuteUbergraph_Announcement_Basic");

	Params::UAnnouncement_Basic_C_ExecuteUbergraph_Announcement_Basic_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_Event_Announcement1 = K2Node_Event_Announcement1;
	Parms.K2Node_DynamicCast_AsFort_Client_Announcement_Basic = K2Node_DynamicCast_AsFort_Client_Announcement_Basic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue1 = CallFunc_TextIsEmpty_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue12 = CallFunc_TextIsEmpty_ReturnValue12;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_TextIsEmpty_ReturnValue123 = CallFunc_TextIsEmpty_ReturnValue123;
	Parms.CallFunc_GetBrushResource_ReturnValue = CallFunc_GetBrushResource_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_Announcement = K2Node_Event_Announcement;
	Parms.Temp_bool_Variable12 = Temp_bool_Variable12;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
