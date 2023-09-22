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


// Function TabVideoOptions.TabVideoOptions_C.Initialize Display Resolutions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// TArray<class FText>                CallFunc_GetPossibleDisplayResolutions_ReturnValue               (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue1                            ()

void UTabVideoOptions_C::Initialize_Display_Resolutions(class FText CallFunc_MakeLiteralText_ReturnValue, TArray<class FText>& CallFunc_GetPossibleDisplayResolutions_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Initialize Display Resolutions");

	Params::UTabVideoOptions_C_Initialize_Display_Resolutions_Params Parms;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetPossibleDisplayResolutions_ReturnValue = CallFunc_GetPossibleDisplayResolutions_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue1 = CallFunc_MakeLiteralText_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Update Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Reset_Quality_Selector                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue1                            ()
// int32                              CallFunc_GetOverallQualityLevel_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentFPS_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWindowedFullscreen_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBROnly_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentDisplayResolution_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentWindowMode_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetShowFPS_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShowGrass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMotionBlur_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUseVsync_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue123                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPostProcessQuality_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetEffectsQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTextureQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAntiAliasingQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Update_Data(bool Reset_Quality_Selector, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, int32 CallFunc_GetOverallQualityLevel_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsBROnly_ReturnValue, int32 CallFunc_GetCurrentFPS_ReturnValue, bool CallFunc_IsWindowedFullscreen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsBROnly_ReturnValue1, int32 CallFunc_GetCurrentDisplayResolution_ReturnValue, int32 CallFunc_GetCurrentWindowMode_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, bool CallFunc_GetShowFPS_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_GetShowGrass_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue1, bool CallFunc_GetMotionBlur_ReturnValue, bool CallFunc_GetUseVsync_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue12, int32 CallFunc_Conv_BoolToInt_ReturnValue123, int32 CallFunc_GetPostProcessQuality_ReturnValue, int32 CallFunc_GetEffectsQuality_ReturnValue, int32 CallFunc_GetTextureQuality_ReturnValue, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, int32 CallFunc_GetViewDistanceQuality_ReturnValue)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Update Data");

	Params::UTabVideoOptions_C_Update_Data_Params Parms;
	Parms.Reset_Quality_Selector = Reset_Quality_Selector;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue1 = CallFunc_MakeLiteralText_ReturnValue1;
	Parms.CallFunc_GetOverallQualityLevel_ReturnValue = CallFunc_GetOverallQualityLevel_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.CallFunc_GetCurrentFPS_ReturnValue = CallFunc_GetCurrentFPS_ReturnValue;
	Parms.CallFunc_IsWindowedFullscreen_ReturnValue = CallFunc_IsWindowedFullscreen_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsBROnly_ReturnValue1 = CallFunc_IsBROnly_ReturnValue1;
	Parms.CallFunc_GetCurrentDisplayResolution_ReturnValue = CallFunc_GetCurrentDisplayResolution_ReturnValue;
	Parms.CallFunc_GetCurrentWindowMode_ReturnValue = CallFunc_GetCurrentWindowMode_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetShowFPS_ReturnValue = CallFunc_GetShowFPS_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetShowGrass_ReturnValue = CallFunc_GetShowGrass_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue1 = CallFunc_Conv_BoolToInt_ReturnValue1;
	Parms.CallFunc_GetMotionBlur_ReturnValue = CallFunc_GetMotionBlur_ReturnValue;
	Parms.CallFunc_GetUseVsync_ReturnValue = CallFunc_GetUseVsync_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue12 = CallFunc_Conv_BoolToInt_ReturnValue12;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue123 = CallFunc_Conv_BoolToInt_ReturnValue123;
	Parms.CallFunc_GetPostProcessQuality_ReturnValue = CallFunc_GetPostProcessQuality_ReturnValue;
	Parms.CallFunc_GetEffectsQuality_ReturnValue = CallFunc_GetEffectsQuality_ReturnValue;
	Parms.CallFunc_GetTextureQuality_ReturnValue = CallFunc_GetTextureQuality_ReturnValue;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue = CallFunc_GetAntiAliasingQuality_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue = CallFunc_GetViewDistanceQuality_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Initialize Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array12                                         (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array123                                        (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue1                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue12                           ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue123                          ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue1234                         ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue12345                        ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue123456                       ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue1234567                      ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue12345678                     ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue123456789                    ()
// TArray<class FText>                CallFunc_GetPossibleFPS_ReturnValue                              (ZeroConstructor, ReferenceParm)
// TArray<class FText>                CallFunc_GetPossibleWindowModes_ReturnValue                      (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue12345678910                  ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue1234567891011                ()
// TArray<class FText>                K2Node_MakeArray_Array1234                                       (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array12345                                      (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue123456789101112              ()
// TArray<class FText>                K2Node_MakeArray_Array123456                                     (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array1234567                                    (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array12345678                                   (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array123456789                                  (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array12345678910                                (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array1234567891011                              (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_MakeArray_Array123456789101112                            (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue12345678910111213            ()
// TArray<class FText>                K2Node_MakeArray_Array12345678910111213                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue1234567891011121314          ()
// TArray<class FText>                K2Node_MakeArray_Array1234567891011121314                        (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue123456789101112131415        ()
// TArray<class FText>                K2Node_MakeArray_Array123456789101112131415                      (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue12345678910111213141516      ()
// TArray<class FText>                K2Node_MakeArray_Array12345678910111213141516                    (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue1234567891011121314151617    ()
// TArray<class FText>                K2Node_MakeArray_Array1234567891011121314151617                  (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue123456789101112131415161718  ()

void UTabVideoOptions_C::Initialize_Data(const TArray<class FText>& NewLocalVar_0, TArray<class FText>& K2Node_MakeArray_Array, TArray<class FText>& K2Node_MakeArray_Array1, TArray<class FText>& K2Node_MakeArray_Array12, TArray<class FText>& K2Node_MakeArray_Array123, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText CallFunc_MakeLiteralText_ReturnValue12, class FText CallFunc_MakeLiteralText_ReturnValue123, class FText CallFunc_MakeLiteralText_ReturnValue1234, class FText CallFunc_MakeLiteralText_ReturnValue12345, class FText CallFunc_MakeLiteralText_ReturnValue123456, class FText CallFunc_MakeLiteralText_ReturnValue1234567, class FText CallFunc_MakeLiteralText_ReturnValue12345678, class FText CallFunc_MakeLiteralText_ReturnValue123456789, TArray<class FText>& CallFunc_GetPossibleFPS_ReturnValue, TArray<class FText>& CallFunc_GetPossibleWindowModes_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue12345678910, class FText CallFunc_MakeLiteralText_ReturnValue1234567891011, TArray<class FText>& K2Node_MakeArray_Array1234, TArray<class FText>& K2Node_MakeArray_Array12345, class FText CallFunc_MakeLiteralText_ReturnValue123456789101112, TArray<class FText>& K2Node_MakeArray_Array123456, TArray<class FText>& K2Node_MakeArray_Array1234567, TArray<class FText>& K2Node_MakeArray_Array12345678, TArray<class FText>& K2Node_MakeArray_Array123456789, TArray<class FText>& K2Node_MakeArray_Array12345678910, TArray<class FText>& K2Node_MakeArray_Array1234567891011, TArray<class FText>& K2Node_MakeArray_Array123456789101112, class FText CallFunc_MakeLiteralText_ReturnValue12345678910111213, TArray<class FText>& K2Node_MakeArray_Array12345678910111213, class FText CallFunc_MakeLiteralText_ReturnValue1234567891011121314, TArray<class FText>& K2Node_MakeArray_Array1234567891011121314, class FText CallFunc_MakeLiteralText_ReturnValue123456789101112131415, TArray<class FText>& K2Node_MakeArray_Array123456789101112131415, class FText CallFunc_MakeLiteralText_ReturnValue12345678910111213141516, TArray<class FText>& K2Node_MakeArray_Array12345678910111213141516, class FText CallFunc_MakeLiteralText_ReturnValue1234567891011121314151617, TArray<class FText>& K2Node_MakeArray_Array1234567891011121314151617, class FText CallFunc_MakeLiteralText_ReturnValue123456789101112131415161718)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Initialize Data");

	Params::UTabVideoOptions_C_Initialize_Data_Params Parms;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.K2Node_MakeArray_Array12 = K2Node_MakeArray_Array12;
	Parms.K2Node_MakeArray_Array123 = K2Node_MakeArray_Array123;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue1 = CallFunc_MakeLiteralText_ReturnValue1;
	Parms.CallFunc_MakeLiteralText_ReturnValue12 = CallFunc_MakeLiteralText_ReturnValue12;
	Parms.CallFunc_MakeLiteralText_ReturnValue123 = CallFunc_MakeLiteralText_ReturnValue123;
	Parms.CallFunc_MakeLiteralText_ReturnValue1234 = CallFunc_MakeLiteralText_ReturnValue1234;
	Parms.CallFunc_MakeLiteralText_ReturnValue12345 = CallFunc_MakeLiteralText_ReturnValue12345;
	Parms.CallFunc_MakeLiteralText_ReturnValue123456 = CallFunc_MakeLiteralText_ReturnValue123456;
	Parms.CallFunc_MakeLiteralText_ReturnValue1234567 = CallFunc_MakeLiteralText_ReturnValue1234567;
	Parms.CallFunc_MakeLiteralText_ReturnValue12345678 = CallFunc_MakeLiteralText_ReturnValue12345678;
	Parms.CallFunc_MakeLiteralText_ReturnValue123456789 = CallFunc_MakeLiteralText_ReturnValue123456789;
	Parms.CallFunc_GetPossibleFPS_ReturnValue = CallFunc_GetPossibleFPS_ReturnValue;
	Parms.CallFunc_GetPossibleWindowModes_ReturnValue = CallFunc_GetPossibleWindowModes_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue12345678910 = CallFunc_MakeLiteralText_ReturnValue12345678910;
	Parms.CallFunc_MakeLiteralText_ReturnValue1234567891011 = CallFunc_MakeLiteralText_ReturnValue1234567891011;
	Parms.K2Node_MakeArray_Array1234 = K2Node_MakeArray_Array1234;
	Parms.K2Node_MakeArray_Array12345 = K2Node_MakeArray_Array12345;
	Parms.CallFunc_MakeLiteralText_ReturnValue123456789101112 = CallFunc_MakeLiteralText_ReturnValue123456789101112;
	Parms.K2Node_MakeArray_Array123456 = K2Node_MakeArray_Array123456;
	Parms.K2Node_MakeArray_Array1234567 = K2Node_MakeArray_Array1234567;
	Parms.K2Node_MakeArray_Array12345678 = K2Node_MakeArray_Array12345678;
	Parms.K2Node_MakeArray_Array123456789 = K2Node_MakeArray_Array123456789;
	Parms.K2Node_MakeArray_Array12345678910 = K2Node_MakeArray_Array12345678910;
	Parms.K2Node_MakeArray_Array1234567891011 = K2Node_MakeArray_Array1234567891011;
	Parms.K2Node_MakeArray_Array123456789101112 = K2Node_MakeArray_Array123456789101112;
	Parms.CallFunc_MakeLiteralText_ReturnValue12345678910111213 = CallFunc_MakeLiteralText_ReturnValue12345678910111213;
	Parms.K2Node_MakeArray_Array12345678910111213 = K2Node_MakeArray_Array12345678910111213;
	Parms.CallFunc_MakeLiteralText_ReturnValue1234567891011121314 = CallFunc_MakeLiteralText_ReturnValue1234567891011121314;
	Parms.K2Node_MakeArray_Array1234567891011121314 = K2Node_MakeArray_Array1234567891011121314;
	Parms.CallFunc_MakeLiteralText_ReturnValue123456789101112131415 = CallFunc_MakeLiteralText_ReturnValue123456789101112131415;
	Parms.K2Node_MakeArray_Array123456789101112131415 = K2Node_MakeArray_Array123456789101112131415;
	Parms.CallFunc_MakeLiteralText_ReturnValue12345678910111213141516 = CallFunc_MakeLiteralText_ReturnValue12345678910111213141516;
	Parms.K2Node_MakeArray_Array12345678910111213141516 = K2Node_MakeArray_Array12345678910111213141516;
	Parms.CallFunc_MakeLiteralText_ReturnValue1234567891011121314151617 = CallFunc_MakeLiteralText_ReturnValue1234567891011121314151617;
	Parms.K2Node_MakeArray_Array1234567891011121314151617 = K2Node_MakeArray_Array1234567891011121314151617;
	Parms.CallFunc_MakeLiteralText_ReturnValue123456789101112131415161718 = CallFunc_MakeLiteralText_ReturnValue123456789101112131415161718;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Shadows Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Tab_Id                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Shadows_Changed(int32 Tab_Id)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Shadows Changed");

	Params::UTabVideoOptions_C_Shadows_Changed_Params Parms;
	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Anti-Aliasing Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Tab_Id                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Anti_Aliasing_Changed(int32 Tab_Id)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Anti-Aliasing Changed");

	Params::UTabVideoOptions_C_Anti_Aliasing_Changed_Params Parms;
	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Textures Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Tab_Id                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Textures_Changed(int32 Tab_Id)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Textures Changed");

	Params::UTabVideoOptions_C_Textures_Changed_Params Parms;
	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Post-Processing Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Tab_Id                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Post_Processing_Changed(int32 Tab_Id)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Post-Processing Changed");

	Params::UTabVideoOptions_C_Post_Processing_Changed_Params Parms;
	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Effects Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Tab_Id                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Effects_Changed(int32 Tab_Id)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Effects Changed");

	Params::UTabVideoOptions_C_Effects_Changed_Params Parms;
	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Quality Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Tab_Id                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Quality_Changed(int32 Tab_Id)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Quality Changed");

	Params::UTabVideoOptions_C_Quality_Changed_Params Parms;
	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabVideoOptions_C::UpdateOptionsTab()
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "UpdateOptionsTab");

	Params::UTabVideoOptions_C_UpdateOptionsTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Window Mode  Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Window_Mode__Changed(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Window Mode  Changed");

	Params::UTabVideoOptions_C_Window_Mode__Changed_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_22
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::CustomEvent_22(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "CustomEvent_22");

	Params::UTabVideoOptions_C_CustomEvent_22_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_23
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::CustomEvent_23(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "CustomEvent_23");

	Params::UTabVideoOptions_C_CustomEvent_23_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.View Distance Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Tab_Id                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::View_Distance_Changed(int32 Tab_Id)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "View Distance Changed");

	Params::UTabVideoOptions_C_View_Distance_Changed_Params Parms;
	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTabVideoOptions_C::Construct()
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Construct");

	Params::UTabVideoOptions_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabVideoOptions_C::CenterOnTab()
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "CenterOnTab");

	Params::UTabVideoOptions_C_CenterOnTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.VSync Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::VSync_Changed(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "VSync Changed");

	Params::UTabVideoOptions_C_VSync_Changed_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Motion Blur Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::Motion_Blur_Changed(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Motion Blur Changed");

	Params::UTabVideoOptions_C_Motion_Blur_Changed_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::CustomEvent(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "CustomEvent");

	Params::UTabVideoOptions_C_CustomEvent_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::CustomEvent_1(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "CustomEvent_1");

	Params::UTabVideoOptions_C_CustomEvent_1_Params Parms;
	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabVideoOptions_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "PreConstruct");

	Params::UTabVideoOptions_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.3D Resolution Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::_3D_Resolution_Changed(float Slider_Value)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "3D Resolution Changed");

	Params::UTabVideoOptions_C__3D_Resolution_Changed_Params Parms;
	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.OnGameUserSettingsUINeedsUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabVideoOptions_C::OnGameUserSettingsUINeedsUpdate()
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "OnGameUserSettingsUINeedsUpdate");

	Params::UTabVideoOptions_C_OnGameUserSettingsUINeedsUpdate_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTabVideoOptions_C::Destruct()
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Destruct");

	Params::UTabVideoOptions_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.ExecuteUbergraph_TabVideoOptions
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentWindowMode_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123                          (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234                         (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable123                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345                        (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456                       (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_Tab_Id123456                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Tab_Id12345                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Tab_Id1234                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Tab_Id123                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Tab_Id12                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Tab_Id1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Selected_Index123456                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWindowedFullscreen_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Selected_Index12345                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Selected_Index1234                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234567                      (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetCurrentDisplayResolution_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345678                     (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456789                    (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_Tab_Id                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345678910                  (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_Selected_Index123                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Selected_Index12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Selected_Index1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Selected_Index                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue123                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234567891011                (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456789101112              (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12345678910111213            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1234567891011121314          (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123456789101112131415        (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// bool                               CallFunc_IsAthena_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Slider_Value                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_C::ExecuteUbergraph_TabVideoOptions(int32 EntryPoint, int32 CallFunc_GetCurrentWindowMode_ReturnValue, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456, int32 K2Node_CustomEvent_Tab_Id123456, int32 K2Node_CustomEvent_Tab_Id12345, int32 K2Node_CustomEvent_Tab_Id1234, int32 K2Node_CustomEvent_Tab_Id123, int32 K2Node_CustomEvent_Tab_Id12, int32 K2Node_CustomEvent_Tab_Id1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_CustomEvent_Selected_Index123456, bool CallFunc_IsWindowedFullscreen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_CustomEvent_Selected_Index12345, enum class ESlateVisibility K2Node_Select_Default, int32 K2Node_CustomEvent_Selected_Index1234, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567, int32 CallFunc_GetCurrentDisplayResolution_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789, int32 K2Node_CustomEvent_Tab_Id, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910, int32 K2Node_CustomEvent_Selected_Index123, bool CallFunc_Conv_IntToBool_ReturnValue, int32 K2Node_CustomEvent_Selected_Index12, bool CallFunc_Conv_IntToBool_ReturnValue1, int32 K2Node_CustomEvent_Selected_Index1, bool CallFunc_Conv_IntToBool_ReturnValue12, int32 K2Node_CustomEvent_Selected_Index, bool CallFunc_Conv_IntToBool_ReturnValue123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12345678910111213, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1234567891011121314, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123456789101112131415, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_MakeLiteralString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsAthena_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, enum class ESlateVisibility K2Node_Select1_Default, bool CallFunc_IsBROnly_ReturnValue, float K2Node_CustomEvent_Slider_Value, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue1)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "ExecuteUbergraph_TabVideoOptions");

	Params::UTabVideoOptions_C_ExecuteUbergraph_TabVideoOptions_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentWindowMode_ReturnValue = CallFunc_GetCurrentWindowMode_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;
	Parms.K2Node_CreateDelegate_OutputDelegate1234 = K2Node_CreateDelegate_OutputDelegate1234;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.Temp_byte_Variable123 = Temp_byte_Variable123;
	Parms.K2Node_CreateDelegate_OutputDelegate12345 = K2Node_CreateDelegate_OutputDelegate12345;
	Parms.K2Node_CreateDelegate_OutputDelegate123456 = K2Node_CreateDelegate_OutputDelegate123456;
	Parms.K2Node_CustomEvent_Tab_Id123456 = K2Node_CustomEvent_Tab_Id123456;
	Parms.K2Node_CustomEvent_Tab_Id12345 = K2Node_CustomEvent_Tab_Id12345;
	Parms.K2Node_CustomEvent_Tab_Id1234 = K2Node_CustomEvent_Tab_Id1234;
	Parms.K2Node_CustomEvent_Tab_Id123 = K2Node_CustomEvent_Tab_Id123;
	Parms.K2Node_CustomEvent_Tab_Id12 = K2Node_CustomEvent_Tab_Id12;
	Parms.K2Node_CustomEvent_Tab_Id1 = K2Node_CustomEvent_Tab_Id1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Selected_Index123456 = K2Node_CustomEvent_Selected_Index123456;
	Parms.CallFunc_IsWindowedFullscreen_ReturnValue = CallFunc_IsWindowedFullscreen_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_Selected_Index12345 = K2Node_CustomEvent_Selected_Index12345;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Selected_Index1234 = K2Node_CustomEvent_Selected_Index1234;
	Parms.K2Node_CreateDelegate_OutputDelegate1234567 = K2Node_CreateDelegate_OutputDelegate1234567;
	Parms.CallFunc_GetCurrentDisplayResolution_ReturnValue = CallFunc_GetCurrentDisplayResolution_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate12345678 = K2Node_CreateDelegate_OutputDelegate12345678;
	Parms.K2Node_CreateDelegate_OutputDelegate123456789 = K2Node_CreateDelegate_OutputDelegate123456789;
	Parms.K2Node_CustomEvent_Tab_Id = K2Node_CustomEvent_Tab_Id;
	Parms.K2Node_CreateDelegate_OutputDelegate12345678910 = K2Node_CreateDelegate_OutputDelegate12345678910;
	Parms.K2Node_CustomEvent_Selected_Index123 = K2Node_CustomEvent_Selected_Index123;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.K2Node_CustomEvent_Selected_Index12 = K2Node_CustomEvent_Selected_Index12;
	Parms.CallFunc_Conv_IntToBool_ReturnValue1 = CallFunc_Conv_IntToBool_ReturnValue1;
	Parms.K2Node_CustomEvent_Selected_Index1 = K2Node_CustomEvent_Selected_Index1;
	Parms.CallFunc_Conv_IntToBool_ReturnValue12 = CallFunc_Conv_IntToBool_ReturnValue12;
	Parms.K2Node_CustomEvent_Selected_Index = K2Node_CustomEvent_Selected_Index;
	Parms.CallFunc_Conv_IntToBool_ReturnValue123 = CallFunc_Conv_IntToBool_ReturnValue123;
	Parms.K2Node_CreateDelegate_OutputDelegate1234567891011 = K2Node_CreateDelegate_OutputDelegate1234567891011;
	Parms.K2Node_CreateDelegate_OutputDelegate123456789101112 = K2Node_CreateDelegate_OutputDelegate123456789101112;
	Parms.K2Node_CreateDelegate_OutputDelegate12345678910111213 = K2Node_CreateDelegate_OutputDelegate12345678910111213;
	Parms.K2Node_CreateDelegate_OutputDelegate1234567891011121314 = K2Node_CreateDelegate_OutputDelegate1234567891011121314;
	Parms.K2Node_CreateDelegate_OutputDelegate123456789101112131415 = K2Node_CreateDelegate_OutputDelegate123456789101112131415;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsAthena_ReturnValue = CallFunc_IsAthena_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.K2Node_CustomEvent_Slider_Value = K2Node_CustomEvent_Slider_Value;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue1 = CallFunc_GetGameUserSettings_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Disable Overlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabVideoOptions_C::Disable_Overlay__DelegateSignature()
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Disable Overlay__DelegateSignature");

	Params::UTabVideoOptions_C_Disable_Overlay__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions.TabVideoOptions_C.Enable Overlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Accept_Input                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabVideoOptions_C::Enable_Overlay__DelegateSignature(bool Accept_Input)
{
	static auto Func = Class->GetFunction("TabVideoOptions_C", "Enable Overlay__DelegateSignature");

	Params::UTabVideoOptions_C_Enable_Overlay__DelegateSignature_Params Parms;
	Parms.Accept_Input = Accept_Input;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
