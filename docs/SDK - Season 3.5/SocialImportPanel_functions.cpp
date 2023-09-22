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


// Function SocialImportPanel.SocialImportPanel_C.OnLauncherImportOpened
// (Event, Public, BlueprintEvent)
// Parameters:

void USocialImportPanel_C::OnLauncherImportOpened()
{
	static auto Func = Class->GetFunction("SocialImportPanel_C", "OnLauncherImportOpened");

	Params::USocialImportPanel_C_OnLauncherImportOpened_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialImportPanel.SocialImportPanel_C.OnClaimViewRequested
// (Event, Public, BlueprintEvent)
// Parameters:

void USocialImportPanel_C::OnClaimViewRequested()
{
	static auto Func = Class->GetFunction("SocialImportPanel_C", "OnClaimViewRequested");

	Params::USocialImportPanel_C_OnClaimViewRequested_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialImportPanel.SocialImportPanel_C.OnImportViewRequested
// (Event, Public, BlueprintEvent)
// Parameters:

void USocialImportPanel_C::OnImportViewRequested()
{
	static auto Func = Class->GetFunction("SocialImportPanel_C", "OnImportViewRequested");

	Params::USocialImportPanel_C_OnImportViewRequested_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialImportPanel.SocialImportPanel_C.OnWaitingViewRequested
// (Event, Public, BlueprintEvent)
// Parameters:

void USocialImportPanel_C::OnWaitingViewRequested()
{
	static auto Func = Class->GetFunction("SocialImportPanel_C", "OnWaitingViewRequested");

	Params::USocialImportPanel_C_OnWaitingViewRequested_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialImportPanel.SocialImportPanel_C.OnPanelTypeSet
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ESocialImportPanelType  NewType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialImportPanel_C::OnPanelTypeSet(enum class ESocialImportPanelType NewType)
{
	static auto Func = Class->GetFunction("SocialImportPanel_C", "OnPanelTypeSet");

	Params::USocialImportPanel_C_OnPanelTypeSet_Params Parms;
	Parms.NewType = NewType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialImportPanel.SocialImportPanel_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialImportPanel_C::OnActivated()
{
	static auto Func = Class->GetFunction("SocialImportPanel_C", "OnActivated");

	Params::USocialImportPanel_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialImportPanel.SocialImportPanel_C.ExecuteUbergraph_SocialImportPanel
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESocialImportPanelType  Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESocialImportPanelPlatformTemp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESocialImportPanelPlatformTemp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable1                                              ()
// enum class ESocialImportPanelPlatformTemp_byte_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable12                                             ()
// class FText                        Temp_text_Variable123                                            ()
// enum class ESocialImportPanelPlatformTemp_byte_Variable1234                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESocialImportPanelType  K2Node_Event_NewType                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESocialImportPanelPlatformCallFunc_GetSocialPlatform_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select1_Default                                           ()
// class FText                        K2Node_Select12_Default                                          ()
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        ()
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue1                       ()
// struct FSlateBrush                 K2Node_Select123_Default                                         ()
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select1234_Default                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialImportPanel_C::ExecuteUbergraph_SocialImportPanel(int32 EntryPoint, enum class ESocialImportPanelType Temp_byte_Variable, enum class ESocialImportPanelPlatform Temp_byte_Variable1, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable1, enum class ESocialImportPanelPlatform Temp_byte_Variable12, class FText Temp_text_Variable, class FText Temp_text_Variable1, enum class ESocialImportPanelPlatform Temp_byte_Variable123, class FText Temp_text_Variable12, class FText Temp_text_Variable123, enum class ESocialImportPanelPlatform Temp_byte_Variable1234, enum class ESocialImportPanelType K2Node_Event_NewType, bool K2Node_SwitchEnum_CmpSuccess, enum class ESocialImportPanelPlatform CallFunc_GetSocialPlatform_ReturnValue, class UTexture2D* K2Node_Select_Default, class FText K2Node_Select1_Default, class FText K2Node_Select12_Default, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue1, const struct FSlateBrush& K2Node_Select123_Default, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 K2Node_Select1234_Default)
{
	static auto Func = Class->GetFunction("SocialImportPanel_C", "ExecuteUbergraph_SocialImportPanel");

	Params::USocialImportPanel_C_ExecuteUbergraph_SocialImportPanel_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.Temp_text_Variable12 = Temp_text_Variable12;
	Parms.Temp_text_Variable123 = Temp_text_Variable123;
	Parms.Temp_byte_Variable1234 = Temp_byte_Variable1234;
	Parms.K2Node_Event_NewType = K2Node_Event_NewType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetSocialPlatform_ReturnValue = CallFunc_GetSocialPlatform_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select12_Default = K2Node_Select12_Default;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue1 = CallFunc_MakeBrushFromTexture_ReturnValue1;
	Parms.K2Node_Select123_Default = K2Node_Select123_Default;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.K2Node_Select1234_Default = K2Node_Select1234_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
