// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GAB_Emote_Generic.GAB_Emote_Generic_C.ForceStopMontage
// (Public, BlueprintCallable, BlueprintEvent)

void UGAB_Emote_Generic_C::ForceStopMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Emote_Generic.GAB_Emote_Generic_C.ForceStopMontage");

	UGAB_Emote_Generic_C_ForceStopMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.SetReticleVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldHide                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_Emote_Generic_C::SetReticleVisibility(bool ShouldHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Emote_Generic.GAB_Emote_Generic_C.SetReticleVisibility");

	UGAB_Emote_Generic_C_SetReticleVisibility_Params params;
	params.ShouldHide = ShouldHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.GetMontageToPlay
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMontageItemDefinitionBase* EmoteAsset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortCustomBodyType> BodyType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortCustomGender> Gender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_Emote_Generic_C::GetMontageToPlay(class UFortMontageItemDefinitionBase* EmoteAsset, TEnumAsByte<EFortCustomBodyType> BodyType, TEnumAsByte<EFortCustomGender> Gender)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Emote_Generic.GAB_Emote_Generic_C.GetMontageToPlay");

	UGAB_Emote_Generic_C_GetMontageToPlay_Params params;
	params.EmoteAsset = EmoteAsset;
	params.BodyType = BodyType;
	params.Gender = Gender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.GetBodyTypeAndGender
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortCustomBodyType> BodyType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortCustomGender> Gender                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGAB_Emote_Generic_C::GetBodyTypeAndGender(TEnumAsByte<EFortCustomBodyType>* BodyType, TEnumAsByte<EFortCustomGender>* Gender)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Emote_Generic.GAB_Emote_Generic_C.GetBodyTypeAndGender");

	UGAB_Emote_Generic_C_GetBodyTypeAndGender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BodyType != nullptr)
		*BodyType = params.BodyType;
	if (Gender != nullptr)
		*Gender = params.Gender;
}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.K2_OnEndAbility
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_Emote_Generic_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Emote_Generic.GAB_Emote_Generic_C.K2_OnEndAbility");

	UGAB_Emote_Generic_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.Completed_DE7019AA4E006879EDD264899869FEE2
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_Emote_Generic_C::Completed_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Emote_Generic.GAB_Emote_Generic_C.Completed_DE7019AA4E006879EDD264899869FEE2");

	UGAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.Cancelled_DE7019AA4E006879EDD264899869FEE2
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_Emote_Generic_C::Cancelled_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Emote_Generic.GAB_Emote_Generic_C.Cancelled_DE7019AA4E006879EDD264899869FEE2");

	UGAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.Triggered_DE7019AA4E006879EDD264899869FEE2
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_Emote_Generic_C::Triggered_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Emote_Generic.GAB_Emote_Generic_C.Triggered_DE7019AA4E006879EDD264899869FEE2");

	UGAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_Emote_Generic_C::OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Emote_Generic.GAB_Emote_Generic_C.OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D");

	UGAB_Emote_Generic_C_OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_Emote_Generic_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Emote_Generic.GAB_Emote_Generic_C.K2_ActivateAbility");

	UGAB_Emote_Generic_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.OnMontageStartedPlaying
// (BlueprintCallable, BlueprintEvent)

void UGAB_Emote_Generic_C::OnMontageStartedPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Emote_Generic.GAB_Emote_Generic_C.OnMontageStartedPlaying");

	UGAB_Emote_Generic_C_OnMontageStartedPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.PlayInitialEmoteMontage
// (BlueprintCallable, BlueprintEvent)

void UGAB_Emote_Generic_C::PlayInitialEmoteMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Emote_Generic.GAB_Emote_Generic_C.PlayInitialEmoteMontage");

	UGAB_Emote_Generic_C_PlayInitialEmoteMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Emote_Generic.GAB_Emote_Generic_C.ExecuteUbergraph_GAB_Emote_Generic
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_Emote_Generic_C::ExecuteUbergraph_GAB_Emote_Generic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Emote_Generic.GAB_Emote_Generic_C.ExecuteUbergraph_GAB_Emote_Generic");

	UGAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
