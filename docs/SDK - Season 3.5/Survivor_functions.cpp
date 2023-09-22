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


// Function Survivor.Survivor_C.IsAppearanceApplied
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsApplied                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASurvivor_C::IsAppearanceApplied(bool* IsApplied, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("Survivor_C", "IsAppearanceApplied");

	Params::ASurvivor_C_IsAppearanceApplied_Params Parms;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsApplied != nullptr)
		*IsApplied = Parms.IsApplied;

}


// Function Survivor.Survivor_C.OnRep_InteractionBangEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASurvivor_C::OnRep_InteractionBangEnabled()
{
	static auto Func = Class->GetFunction("Survivor_C", "OnRep_InteractionBangEnabled");

	Params::ASurvivor_C_OnRep_InteractionBangEnabled_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.InteractionBangVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASurvivor_C::InteractionBangVisibility(bool Enabled, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("Survivor_C", "InteractionBangVisibility");

	Params::ASurvivor_C_InteractionBangVisibility_Params Parms;
	Parms.Enabled = Enabled;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.OnRep_TeleportEffectModeReplicated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASurvivor_C::OnRep_TeleportEffectModeReplicated(bool CallFunc_NotEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("Survivor_C", "OnRep_TeleportEffectModeReplicated");

	Params::ASurvivor_C_OnRep_TeleportEffectModeReplicated_Params Parms;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.InitializeMIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASurvivor_C::InitializeMIDs(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue1)
{
	static auto Func = Class->GetFunction("Survivor_C", "InitializeMIDs");

	Params::ASurvivor_C_InitializeMIDs_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.SetLastHitInfoOnBlackboard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESurvivorHitInfoType    SurvivorHitInfoType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Name_SurvivorLastHitInfoTime                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Name_SurvivorLastHitInfoType                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIController*           K2Node_DynamicCast_AsFort_AIController                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASurvivor_C::SetLastHitInfoOnBlackboard(enum class ESurvivorHitInfoType SurvivorHitInfoType, class FName Name_SurvivorLastHitInfoTime, class FName Name_SurvivorLastHitInfoType, float CallFunc_GetGameTimeInSeconds_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue)
{
	static auto Func = Class->GetFunction("Survivor_C", "SetLastHitInfoOnBlackboard");

	Params::ASurvivor_C_SetLastHitInfoOnBlackboard_Params Parms;
	Parms.SurvivorHitInfoType = SurvivorHitInfoType;
	Parms.Name_SurvivorLastHitInfoTime = Name_SurvivorLastHitInfoTime;
	Parms.Name_SurvivorLastHitInfoType = Name_SurvivorLastHitInfoType;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_AIController = K2Node_DynamicCast_AsFort_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.Set Interact Channel Response
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldInteractChannelBeActive                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASurvivor_C::Set_Interact_Channel_Response(bool ShouldInteractChannelBeActive)
{
	static auto Func = Class->GetFunction("Survivor_C", "Set Interact Channel Response");

	Params::ASurvivor_C_Set_Interact_Channel_Response_Params Parms;
	Parms.ShouldInteractChannelBeActive = ShouldInteractChannelBeActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.OnRep_bToggleInteractChannel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECollisionResponse      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionResponse      Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionResponse      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASurvivor_C::OnRep_bToggleInteractChannel(bool Temp_bool_Variable, enum class ECollisionResponse Temp_byte_Variable, enum class ECollisionResponse Temp_byte_Variable1, enum class ECollisionResponse K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("Survivor_C", "OnRep_bToggleInteractChannel");

	Params::ASurvivor_C_OnRep_bToggleInteractChannel_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASurvivor_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("Survivor_C", "UserConstructionScript");

	Params::ASurvivor_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ASurvivor_C::OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("Survivor_C", "OnDamagePlayEffects");

	Params::ASurvivor_C_OnDamagePlayEffects_Params Parms;
	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ASurvivor_C::OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("Survivor_C", "OnDamageServer");

	Params::ASurvivor_C_OnDamageServer_Params Parms;
	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.StopCowering
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASurvivor_C::StopCowering()
{
	static auto Func = Class->GetFunction("Survivor_C", "StopCowering");

	Params::ASurvivor_C_StopCowering_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.StartCowering
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASurvivor_C::StartCowering()
{
	static auto Func = Class->GetFunction("Survivor_C", "StartCowering");

	Params::ASurvivor_C_StartCowering_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.SurvivorSetLockedInPlace
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LockedInPlace                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASurvivor_C::SurvivorSetLockedInPlace(bool LockedInPlace)
{
	static auto Func = Class->GetFunction("Survivor_C", "SurvivorSetLockedInPlace");

	Params::ASurvivor_C_SurvivorSetLockedInPlace_Params Parms;
	Parms.LockedInPlace = LockedInPlace;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.Lock
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASurvivor_C::Lock()
{
	static auto Func = Class->GetFunction("Survivor_C", "Lock");

	Params::ASurvivor_C_Lock_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.Unlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASurvivor_C::Unlock()
{
	static auto Func = Class->GetFunction("Survivor_C", "Unlock");

	Params::ASurvivor_C_Unlock_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.OnDisplaySentence
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        SpeechText                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ASurvivor_C::OnDisplaySentence(class FText& SpeechText)
{
	static auto Func = Class->GetFunction("Survivor_C", "OnDisplaySentence");

	Params::ASurvivor_C_OnDisplaySentence_Params Parms;
	Parms.SpeechText = SpeechText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.OnClearSentence
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASurvivor_C::OnClearSentence()
{
	static auto Func = Class->GetFunction("Survivor_C", "OnClearSentence");

	Params::ASurvivor_C_OnClearSentence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASurvivor_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Survivor_C", "ReceiveBeginPlay");

	Params::ASurvivor_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.OnSurvivorDowned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*                 DownedAI                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 DownedInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASurvivor_C::OnSurvivorDowned(class AFortAIPawn* DownedAI, class AController* DownedInstigator)
{
	static auto Func = Class->GetFunction("Survivor_C", "OnSurvivorDowned");

	Params::ASurvivor_C_OnSurvivorDowned_Params Parms;
	Parms.DownedAI = DownedAI;
	Parms.DownedInstigator = DownedInstigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASurvivor_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static auto Func = Class->GetFunction("Survivor_C", "ReceiveEndPlay");

	Params::ASurvivor_C_ReceiveEndPlay_Params Parms;
	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.AdditiveHitReactDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASurvivor_C::AdditiveHitReactDelay()
{
	static auto Func = Class->GetFunction("Survivor_C", "AdditiveHitReactDelay");

	Params::ASurvivor_C_AdditiveHitReactDelay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.MIDsInitialized
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASurvivor_C::MIDsInitialized()
{
	static auto Func = Class->GetFunction("Survivor_C", "MIDsInitialized");

	Params::ASurvivor_C_MIDsInitialized_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.OnAppearanceOverridden
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASurvivor_C::OnAppearanceOverridden()
{
	static auto Func = Class->GetFunction("Survivor_C", "OnAppearanceOverridden");

	Params::ASurvivor_C_OnAppearanceOverridden_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.PlayTeleportOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASurvivor_C::PlayTeleportOut()
{
	static auto Func = Class->GetFunction("Survivor_C", "PlayTeleportOut");

	Params::ASurvivor_C_PlayTeleportOut_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.PlayTeleportIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASurvivor_C::PlayTeleportIn()
{
	static auto Func = Class->GetFunction("Survivor_C", "PlayTeleportIn");

	Params::ASurvivor_C_PlayTeleportIn_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.GameplayCue.Teleport.In
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ASurvivor_C::GameplayCue_Teleport_In(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("Survivor_C", "GameplayCue.Teleport.In");

	Params::ASurvivor_C_GameplayCue_Teleport_In_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.GameplayCue.Teleport.Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ASurvivor_C::GameplayCue_Teleport_Out(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("Survivor_C", "GameplayCue.Teleport.Out");

	Params::ASurvivor_C_GameplayCue_Teleport_Out_Params Parms;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.ShowInteractionBang
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASurvivor_C::ShowInteractionBang(bool Enabled)
{
	static auto Func = Class->GetFunction("Survivor_C", "ShowInteractionBang");

	Params::ASurvivor_C_ShowInteractionBang_Params Parms;
	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Survivor.Survivor_C.ExecuteUbergraph_Survivor
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Damage1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags1                                         (ConstParm)
// struct FVector                     K2Node_Event_Momentum1                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo1                                            (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   K2Node_Event_InstigatedBy1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext1                                      ()
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       ()
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTags_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_GetOwnedGameplayTags_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetOwnedGameplayTags_TagContainer                       ()
// bool                               CallFunc_HasTags_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData1                             ()
// bool                               K2Node_CustomEvent_LockedInPlace                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_SpeechText                                          (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue               (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIPawn*                 K2Node_CustomEvent_DownedAI                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_DownedInstigator                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateZone*          K2Node_DynamicCast_AsFort_Game_State_Zone                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue12                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// TArray<class USkeletalMeshComponent*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADuplicateResOutMesh_C*      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USkeletalMeshComponent*>K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// struct FTransform                  CallFunc_GetTransform_ReturnValue1                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADuplicateResOutMesh_C*      CallFunc_FinishSpawningActor_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters1                              (ContainsInstancedReference)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters                               (ContainsInstancedReference)
// bool                               CallFunc_HasAuthority_ReturnValue123                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Enabled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsAppearanceApplied_IsApplied                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASurvivor_C::ExecuteUbergraph_Survivor(int32 EntryPoint, bool CallFunc_NotEqual_IntInt_ReturnValue, float K2Node_Event_Damage1, const struct FGameplayTagContainer& K2Node_Event_DamageTags1, const struct FVector& K2Node_Event_Momentum1, const struct FHitResult& K2Node_Event_HitInfo1, class AFortPawn* K2Node_Event_InstigatedBy1, class AActor* K2Node_Event_DamageCauser1, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext1, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_HasTags_ReturnValue, UInterfaceProperty_ CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasTags_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData1, bool K2Node_CustomEvent_LockedInPlace, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class FText K2Node_Event_SpeechText, bool CallFunc_IsValid_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortAIPawn* K2Node_CustomEvent_DownedAI, class AController* K2Node_CustomEvent_DownedInstigator, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue12, bool CallFunc_NotEqual_IntInt_ReturnValue1, const struct FTransform& CallFunc_GetTransform_ReturnValue, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ADuplicateResOutMesh_C* CallFunc_FinishSpawningActor_ReturnValue, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array1, const struct FTransform& CallFunc_GetTransform_ReturnValue1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, class ADuplicateResOutMesh_C* CallFunc_FinishSpawningActor_ReturnValue1, int32 Temp_int_Array_Index_Variable, class AFortPlayerController* CallFunc_Array_Get_Item, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface, bool K2Node_DynamicCast_bSuccess1, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType1, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters1, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool CallFunc_HasAuthority_ReturnValue123, bool K2Node_CustomEvent_Enabled, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsAppearanceApplied_IsApplied, bool CallFunc_BooleanAND_ReturnValue12)
{
	static auto Func = Class->GetFunction("Survivor_C", "ExecuteUbergraph_Survivor");

	Params::ASurvivor_C_ExecuteUbergraph_Survivor_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_Event_Damage1 = K2Node_Event_Damage1;
	Parms.K2Node_Event_DamageTags1 = K2Node_Event_DamageTags1;
	Parms.K2Node_Event_Momentum1 = K2Node_Event_Momentum1;
	Parms.K2Node_Event_HitInfo1 = K2Node_Event_HitInfo1;
	Parms.K2Node_Event_InstigatedBy1 = K2Node_Event_InstigatedBy1;
	Parms.K2Node_Event_DamageCauser1 = K2Node_Event_DamageCauser1;
	Parms.K2Node_Event_EffectContext1 = K2Node_Event_EffectContext1;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue1 = CallFunc_HasAuthority_ReturnValue1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_HasTags_ReturnValue = CallFunc_HasTags_ReturnValue;
	Parms.CallFunc_GetOwnedGameplayTags_self_CastInput = CallFunc_GetOwnedGameplayTags_self_CastInput;
	Parms.CallFunc_GetOwnedGameplayTags_TagContainer = CallFunc_GetOwnedGameplayTags_TagContainer;
	Parms.CallFunc_HasTags_ReturnValue1 = CallFunc_HasTags_ReturnValue1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.K2Node_MakeStruct_GameplayEventData1 = K2Node_MakeStruct_GameplayEventData1;
	Parms.K2Node_CustomEvent_LockedInPlace = K2Node_CustomEvent_LockedInPlace;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.K2Node_Event_SpeechText = K2Node_Event_SpeechText;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue = CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_CustomEvent_DownedAI = K2Node_CustomEvent_DownedAI;
	Parms.K2Node_CustomEvent_DownedInstigator = K2Node_CustomEvent_DownedInstigator;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Zone = K2Node_DynamicCast_AsFort_Game_State_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue12 = CallFunc_HasAuthority_ReturnValue12;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue1 = CallFunc_NotEqual_IntInt_ReturnValue1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_GetTransform_ReturnValue1 = CallFunc_GetTransform_ReturnValue1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue1 = CallFunc_FinishSpawningActor_ReturnValue1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface = K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_GameplayCueEvent_EventType1 = K2Node_GameplayCueEvent_EventType1;
	Parms.K2Node_GameplayCueEvent_Parameters1 = K2Node_GameplayCueEvent_Parameters1;
	Parms.K2Node_GameplayCueEvent_EventType = K2Node_GameplayCueEvent_EventType;
	Parms.K2Node_GameplayCueEvent_Parameters = K2Node_GameplayCueEvent_Parameters;
	Parms.CallFunc_HasAuthority_ReturnValue123 = CallFunc_HasAuthority_ReturnValue123;
	Parms.K2Node_CustomEvent_Enabled = K2Node_CustomEvent_Enabled;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsAppearanceApplied_IsApplied = CallFunc_IsAppearanceApplied_IsApplied;
	Parms.CallFunc_BooleanAND_ReturnValue12 = CallFunc_BooleanAND_ReturnValue12;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
