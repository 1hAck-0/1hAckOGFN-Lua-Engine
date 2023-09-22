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

// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemBlueprintLibrary");
		return ptr;
	}


	bool STATIC_TargetDataHasOrigin(struct FGameplayAbilityTargetDataHandle TargetData, int Index);
	bool STATIC_TargetDataHasHitResult(struct FGameplayAbilityTargetDataHandle HitResult, int Index);
	bool STATIC_TargetDataHasEndPoint(struct FGameplayAbilityTargetDataHandle TargetData, int Index);
	bool STATIC_TargetDataHasActor(struct FGameplayAbilityTargetDataHandle TargetData, int Index);
	struct FGameplayEffectSpecHandle STATIC_SetStackCountToMax(struct FGameplayEffectSpecHandle SpecHandle);
	struct FGameplayEffectSpecHandle STATIC_SetStackCount(struct FGameplayEffectSpecHandle SpecHandle, int StackCount);
	struct FGameplayEffectSpecHandle STATIC_SetDuration(struct FGameplayEffectSpecHandle SpecHandle, float Duration);
	void STATIC_SendGameplayEventToActor(class AActor* Actor, struct FGameplayTag EventTag, struct FGameplayEventData Payload);
	bool STATIC_NotEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB);
	struct FGameplayEffectSpecHandle STATIC_MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel);
	struct FGameplayTargetDataFilterHandle STATIC_MakeFilterHandle(struct FGameplayTargetDataFilter Filter, class AActor* FilterActor);
	bool STATIC_IsValid(struct FGameplayAttribute Attribute);
	bool STATIC_IsInstigatorLocallyControlledPlayer(struct FGameplayCueParameters Parameters);
	bool STATIC_IsInstigatorLocallyControlled(struct FGameplayCueParameters Parameters);
	bool STATIC_HasHitResult(struct FGameplayCueParameters Parameters);
	struct FTransform STATIC_GetTargetDataOrigin(struct FGameplayAbilityTargetDataHandle TargetData, int Index);
	struct FTransform STATIC_GetTargetDataEndPointTransform(struct FGameplayAbilityTargetDataHandle TargetData, int Index);
	struct FVector STATIC_GetTargetDataEndPoint(struct FGameplayAbilityTargetDataHandle TargetData, int Index);
	struct FVector STATIC_GetOrigin(struct FGameplayCueParameters Parameters);
	float STATIC_GetModifiedAttributeMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayAttribute Attribute);
	struct FTransform STATIC_GetInstigatorTransform(struct FGameplayCueParameters Parameters);
	class AActor* STATIC_GetInstigatorActor(struct FGameplayCueParameters Parameters);
	struct FHitResult STATIC_GetHitResultFromTargetData(struct FGameplayAbilityTargetDataHandle HitResult, int Index);
	struct FHitResult STATIC_GetHitResult(struct FGameplayCueParameters Parameters);
	bool STATIC_GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, struct FGameplayCueParameters Parameters, struct FVector* Location, struct FVector* Normal);
	bool STATIC_GetGameplayCueDirection(class AActor* TargetActor, struct FGameplayCueParameters Parameters, struct FVector* Direction);
	float STATIC_GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, bool* bSuccessfullyFoundAttribute);
	float STATIC_GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayAttribute Attribute, bool* bSuccessfullyFoundAttribute);
	float STATIC_GetFloatAttributeBase(class AActor* Actor, struct FGameplayAttribute Attribute, bool* bSuccessfullyFoundAttribute);
	float STATIC_GetFloatAttribute(class AActor* Actor, struct FGameplayAttribute Attribute, bool* bSuccessfullyFoundAttribute);
	struct FGameplayEffectContextHandle STATIC_GetEffectContext(struct FGameplayEffectSpecHandle SpecHandle);
	int STATIC_GetDataCountFromTargetData(struct FGameplayAbilityTargetDataHandle TargetData);
	TArray<struct FGameplayEffectSpecHandle> STATIC_GetAllLinkedGameplayEffectSpecHandles(struct FGameplayEffectSpecHandle SpecHandle);
	TArray<class AActor*> STATIC_GetAllActorsFromTargetData(struct FGameplayAbilityTargetDataHandle TargetData);
	TArray<class AActor*> STATIC_GetActorsFromTargetData(struct FGameplayAbilityTargetDataHandle TargetData, int Index);
	int STATIC_GetActorCount(struct FGameplayCueParameters Parameters);
	class AActor* STATIC_GetActorByIndex(struct FGameplayCueParameters Parameters, int Index);
	float STATIC_GetActiveGameplayEffectTotalDuration(struct FActiveGameplayEffectHandle ActiveHandle);
	float STATIC_GetActiveGameplayEffectStartTime(struct FActiveGameplayEffectHandle ActiveHandle);
	int STATIC_GetActiveGameplayEffectStackLimitCount(struct FActiveGameplayEffectHandle ActiveHandle);
	int STATIC_GetActiveGameplayEffectStackCount(struct FActiveGameplayEffectHandle ActiveHandle);
	float STATIC_GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, struct FActiveGameplayEffectHandle ActiveHandle);
	float STATIC_GetActiveGameplayEffectExpectedEndTime(struct FActiveGameplayEffectHandle ActiveHandle);
	struct FString STATIC_GetActiveGameplayEffectDebugString(struct FActiveGameplayEffectHandle ActiveHandle);
	class UAbilitySystemComponent* STATIC_GetAbilitySystemComponent(class AActor* Actor);
	void STATIC_ForwardGameplayCueToTarget(TScriptInterface<class UGameplayCueInterface> TargetCueInterface, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	struct FGameplayAbilityTargetDataHandle STATIC_FilterTargetData(struct FGameplayAbilityTargetDataHandle TargetDataHandle, struct FGameplayTargetDataFilterHandle ActorFilterClass);
	float STATIC_EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, struct FGameplayTagContainer SourceTags, struct FGameplayTagContainer TargetTags, float BaseValue, bool* bSuccess);
	float STATIC_EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, struct FGameplayTagContainer SourceTags, struct FGameplayTagContainer TargetTags, bool* bSuccess);
	bool STATIC_EqualEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB);
	void STATIC_EffectContextSetOrigin(struct FGameplayEffectContextHandle EffectContext, struct FVector Origin);
	bool STATIC_EffectContextIsValid(struct FGameplayEffectContextHandle EffectContext);
	bool STATIC_EffectContextIsInstigatorLocallyControlled(struct FGameplayEffectContextHandle EffectContext);
	bool STATIC_EffectContextHasHitResult(struct FGameplayEffectContextHandle EffectContext);
	class UObject* STATIC_EffectContextGetSourceObject(struct FGameplayEffectContextHandle EffectContext);
	class AActor* STATIC_EffectContextGetOriginalInstigatorActor(struct FGameplayEffectContextHandle EffectContext);
	struct FVector STATIC_EffectContextGetOrigin(struct FGameplayEffectContextHandle EffectContext);
	class AActor* STATIC_EffectContextGetInstigatorActor(struct FGameplayEffectContextHandle EffectContext);
	struct FHitResult STATIC_EffectContextGetHitResult(struct FGameplayEffectContextHandle EffectContext);
	class AActor* STATIC_EffectContextGetEffectCauser(struct FGameplayEffectContextHandle EffectContext);
	void STATIC_EffectContextAddHitResult(struct FGameplayEffectContextHandle EffectContext, struct FHitResult HitResult, bool bReset);
	bool STATIC_DoesTargetDataContainActor(struct FGameplayAbilityTargetDataHandle TargetData, int Index, class AActor* Actor);
	bool STATIC_DoesGameplayCueMeetTagRequirements(struct FGameplayCueParameters Parameters, struct FGameplayTagRequirements SourceTagReqs, struct FGameplayTagRequirements TargetTagReqs);
	struct FGameplayEffectSpecHandle STATIC_CloneSpecHandle(class AActor* InNewInstigator, class AActor* InEffectCauser, struct FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone);
	struct FGameplayEffectSpecHandle STATIC_AssignTagSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag DataTag, float Magnitude);
	struct FGameplayEffectSpecHandle STATIC_AssignSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FName DataName, float Magnitude);
	struct FGameplayAbilityTargetDataHandle STATIC_AppendTargetDataHandle(struct FGameplayAbilityTargetDataHandle TargetHandle, struct FGameplayAbilityTargetDataHandle HandleToAdd);
	struct FGameplayEffectSpecHandle STATIC_AddLinkedGameplayEffectSpec(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayEffectSpecHandle LinkedGameplayEffectSpec);
	struct FGameplayEffectSpecHandle STATIC_AddLinkedGameplayEffect(struct FGameplayEffectSpecHandle SpecHandle, class UClass* LinkedGameplayEffect);
	struct FGameplayEffectSpecHandle STATIC_AddGrantedTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags);
	struct FGameplayEffectSpecHandle STATIC_AddGrantedTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag);
	struct FGameplayEffectSpecHandle STATIC_AddAssetTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags);
	struct FGameplayEffectSpecHandle STATIC_AddAssetTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag);
	struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromLocations(struct FGameplayAbilityTargetingLocationInfo SourceLocation, struct FGameplayAbilityTargetingLocationInfo TargetLocation);
	struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromHitResult(struct FHitResult HitResult);
	struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromActorArray(TArray<class AActor*> ActorArray, bool OneTargetPerHandle);
	struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromActor(class AActor* Actor);
};


// Class GameplayAbilities.AbilitySystemComponent
// 0x1028 (0x1190 - 0x0168)
class UAbilitySystemComponent : public UGameplayTasksComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0168(0x0010) MISSED OFFSET
	TArray<struct FAttributeDefaults>                  DefaultStartingData;                                      // 0x0178(0x0010) (Edit, ZeroConstructor)
	TArray<class UAttributeSet*>                       SpawnedAttributes;                                        // 0x0188(0x0010) (ExportObject, Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x1C0];                                     // 0x0198(0x01C0) MISSED OFFSET
	float                                              OutgoingDuration;                                         // 0x0358(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IncomingDuration;                                         // 0x035C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0360(0x0020) MISSED OFFSET
	TArray<struct FString>                             ClientDebugStrings;                                       // 0x0380(0x0010) (Net, ZeroConstructor)
	TArray<struct FString>                             ServerDebugStrings;                                       // 0x0390(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData03[0x58];                                      // 0x03A0(0x0058) MISSED OFFSET
	bool                                               UserAbilityActivationInhibited;                           // 0x03F8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ReplicationProxyEnabled;                                  // 0x03F9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSuppressGrantAbility;                                    // 0x03FA(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSuppressGameplayCues;                                    // 0x03FB(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	TArray<class AGameplayAbilityTargetActor*>         SpawnedTargetActors;                                      // 0x0400(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x28];                                      // 0x0410(0x0028) MISSED OFFSET
	class AActor*                                      OwnerActor;                                               // 0x0438(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AvatarActor;                                              // 0x0440(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x10];                                      // 0x0448(0x0010) MISSED OFFSET
	struct FGameplayAbilitySpecContainer               ActivatableAbilities;                                     // 0x0458(0x00C8) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData07[0x30];                                      // 0x0520(0x0030) MISSED OFFSET
	TArray<class UGameplayAbility*>                    AllReplicatedInstancedAbilities;                          // 0x0550(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData08[0x1D0];                                     // 0x0560(0x01D0) MISSED OFFSET
	struct FGameplayAbilityRepAnimMontage              RepAnimMontageInfo;                                       // 0x0730(0x0030) (Net)
	bool                                               bCachedIsNetSimulated;                                    // 0x0760(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPendingMontageRep;                                       // 0x0761(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x6];                                       // 0x0762(0x0006) MISSED OFFSET
	struct FGameplayAbilityLocalAnimMontage            LocalAnimMontageInfo;                                     // 0x0768(0x0030)
	unsigned char                                      UnknownData10[0xA0];                                      // 0x0798(0x00A0) MISSED OFFSET
	struct FActiveGameplayEffectsContainer             ActiveGameplayEffects;                                    // 0x0838(0x0428) (Net)
	struct FActiveGameplayCueContainer                 ActiveGameplayCues;                                       // 0x0C60(0x00D0) (Net)
	struct FActiveGameplayCueContainer                 MinimalReplicationGameplayCues;                           // 0x0D30(0x00D0) (Net)
	unsigned char                                      UnknownData11[0x128];                                     // 0x0E00(0x0128) MISSED OFFSET
	TArray<unsigned char>                              BlockedAbilityBindings;                                   // 0x0F28(0x0010) (Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData12[0x128];                                     // 0x0F38(0x0128) MISSED OFFSET
	struct FMinimalReplicationTagCountMap              MinimalReplicationTags;                                   // 0x1060(0x0060) (Net)
	unsigned char                                      UnknownData13[0x10];                                      // 0x10C0(0x0010) MISSED OFFSET
	struct FReplicatedPredictionKeyMap                 ReplicatedPredictionKeyMap;                               // 0x10D0(0x00C0) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemComponent");
		return ptr;
	}


	bool TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation);
	bool TryActivateAbilitiesByTag(struct FGameplayTagContainer GameplayTagContainer, bool bAllowRemoteActivation);
	void TargetConfirm();
	void TargetCancel();
	void SetUserAbilityActivationInhibited(bool NewInhibit);
	void SetActiveGameplayEffectLevelUsingQuery(struct FGameplayEffectQuery Query, int NewLevel);
	void SetActiveGameplayEffectLevel(struct FActiveGameplayEffectHandle ActiveHandle, int NewLevel);
	void ServerTryActivateAbilityWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData);
	void ServerTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, struct FPredictionKey PredictionKey);
	void ServerSetReplicatedTargetDataCancelled(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey);
	void ServerSetReplicatedTargetData(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, struct FGameplayTag ApplicationTag, struct FPredictionKey CurrentPredictionKey);
	void ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey, struct FVector_NetQuantize100 VectorPayload);
	void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey);
	void ServerSetInputReleased(struct FGameplayAbilitySpecHandle AbilityHandle);
	void ServerSetInputPressed(struct FGameplayAbilitySpecHandle AbilityHandle);
	void ServerPrintDebug_RequestWithStrings(TArray<struct FString> Strings);
	void ServerPrintDebug_Request();
	void ServerEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo, struct FPredictionKey PredictionKey);
	void ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate);
	void ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, struct FName SectionName, struct FName NextSectionName);
	void ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, struct FName SectionName);
	void ServerCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo);
	void ServerAbilityRPCBatch(struct FServerAbilityRPCBatch BatchInfo);
	void RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int StacksToRemove);
	bool RemoveActiveGameplayEffect(struct FActiveGameplayEffectHandle Handle, int StacksToRemove);
	int RemoveActiveEffectsWithTags(struct FGameplayTagContainer Tags);
	int RemoveActiveEffectsWithSourceTags(struct FGameplayTagContainer Tags);
	int RemoveActiveEffectsWithGrantedTags(struct FGameplayTagContainer Tags);
	int RemoveActiveEffectsWithAppliedTags(struct FGameplayTagContainer Tags);
	void OnRep_ServerDebugString();
	void OnRep_ReplicatedAnimMontage();
	void OnRep_OwningActor();
	void OnRep_ClientDebugString();
	void OnRep_ActivateAbilities();
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters);
	void NetMulticast_InvokeGameplayCuesExecuted(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext);
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey);
	void NetMulticast_InvokeGameplayCueExecuted(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey);
	void NetMulticast_InvokeGameplayCueAdded_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters Parameters);
	void NetMulticast_InvokeGameplayCueAdded(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext);
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle Context);
	struct FGameplayEffectContextHandle MakeEffectContext();
	void K2_InitStats(class UClass* Attributes, class UDataTable* DataTable);
	bool IsGameplayCueActive(struct FGameplayTag GameplayCueTag);
	bool GetUserAbilityActivationInhibited();
	float GetGameplayEffectMagnitude(struct FActiveGameplayEffectHandle Handle, struct FGameplayAttribute Attribute);
	int GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);
	TArray<struct FActiveGameplayEffectHandle> GetActiveEffects(struct FGameplayEffectQuery Query);
	void ClientTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate);
	void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey);
	void ClientPrintDebug_Response(TArray<struct FString> Strings, int GameFlags);
	void ClientEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo);
	void ClientCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo);
	void ClientActivateAbilitySucceedWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData);
	void ClientActivateAbilitySucceed(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey);
	void ClientActivateAbilityFailed(struct FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, struct FGameplayEffectContextHandle Context);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle EffectContext);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle SpecHandle, class UAbilitySystemComponent* Target);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle SpecHandle);
	void AbilityConfirmOrCancel__DelegateSignature();
	void AbilityAbilityKey__DelegateSignature(int InputID);
};


// Class GameplayAbilities.AbilitySystemDebugHUD
// 0x0000 (0x0420 - 0x0420)
class AAbilitySystemDebugHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemDebugHUD");
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemGlobals
// 0x0220 (0x0248 - 0x0028)
class UAbilitySystemGlobals : public UObject
{
public:
	struct FSoftClassPath                              AbilitySystemGlobalsClassName;                            // 0x0028(0x0018) (ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET
	struct FGameplayTag                                ActivateFailIsDeadTag;                                    // 0x0068(0x0008)
	struct FName                                       ActivateFailIsDeadName;                                   // 0x0070(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FGameplayTag                                ActivateFailCooldownTag;                                  // 0x0078(0x0008)
	struct FName                                       ActivateFailCooldownName;                                 // 0x0080(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FGameplayTag                                ActivateFailCostTag;                                      // 0x0088(0x0008)
	struct FName                                       ActivateFailCostName;                                     // 0x0090(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FGameplayTag                                ActivateFailTagsBlockedTag;                               // 0x0098(0x0008)
	struct FName                                       ActivateFailTagsBlockedName;                              // 0x00A0(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FGameplayTag                                ActivateFailTagsMissingTag;                               // 0x00A8(0x0008)
	struct FName                                       ActivateFailTagsMissingName;                              // 0x00B0(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FGameplayTag                                ActivateFailNetworkingTag;                                // 0x00B8(0x0008)
	struct FName                                       ActivateFailNetworkingName;                               // 0x00C0(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MinimalReplicationTagCountBits;                           // 0x00C8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowGameplayModEvaluationChannels;                      // 0x00CC(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EGameplayModEvaluationChannel                      DefaultGameplayModEvaluationChannel;                      // 0x00CD(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00CE(0x0002) MISSED OFFSET
	struct FName                                       GameplayModEvaluationChannelAliases[0xA];                 // 0x00D0(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FSoftObjectPath                             GlobalCurveTableName;                                     // 0x0120(0x0018) (ZeroConstructor, Config)
	class UCurveTable*                                 GlobalCurveTable;                                         // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSoftObjectPath                             GlobalAttributeMetaDataTableName;                         // 0x0140(0x0018) (ZeroConstructor, Config)
	class UDataTable*                                  GlobalAttributeMetaDataTable;                             // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSoftObjectPath                             GlobalAttributeSetDefaultsTableName;                      // 0x0160(0x0018) (ZeroConstructor, Config)
	TArray<struct FSoftObjectPath>                     GlobalAttributeSetDefaultsTableNames;                     // 0x0178(0x0010) (ZeroConstructor, Config)
	TArray<class UCurveTable*>                         GlobalAttributeDefaultsTables;                            // 0x0188(0x0010) (ZeroConstructor)
	struct FSoftObjectPath                             GlobalGameplayCueManagerClass;                            // 0x0198(0x0018) (ZeroConstructor, Config)
	struct FSoftObjectPath                             GlobalGameplayCueManagerName;                             // 0x01B0(0x0018) (ZeroConstructor, Config)
	TArray<struct FString>                             GameplayCueNotifyPaths;                                   // 0x01C8(0x0010) (ZeroConstructor, Config)
	struct FSoftObjectPath                             GameplayTagResponseTableName;                             // 0x01D8(0x0018) (ZeroConstructor, Config)
	class UGameplayTagReponseTable*                    GameplayTagResponseTable;                                 // 0x01F0(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               PredictTargetGameplayEffects;                             // 0x01F8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET
	class UGameplayCueManager*                         GlobalGameplayCueManager;                                 // 0x0200(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x40];                                      // 0x0208(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemGlobals");
		return ptr;
	}


	void ToggleIgnoreAbilitySystemCosts();
	void ToggleIgnoreAbilitySystemCooldowns();
};


// Class GameplayAbilities.AbilitySystemInterface
// 0x0000 (0x0028 - 0x0028)
class UAbilitySystemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemInterface");
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemReplicationProxyInterface
// 0x0000 (0x0028 - 0x0028)
class UAbilitySystemReplicationProxyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemReplicationProxyInterface");
		return ptr;
	}

};


// Class GameplayAbilities.AttributeSet
// 0x0008 (0x0030 - 0x0028)
class UAttributeSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AttributeSet");
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemTestAttributeSet
// 0x0040 (0x0070 - 0x0030)
class UAbilitySystemTestAttributeSet : public UAttributeSet
{
public:
	float                                              MaxHealth;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // 0x0034(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Mana;                                                     // 0x0038(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              MaxMana;                                                  // 0x003C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpellDamage;                                              // 0x0044(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              PhysicalDamage;                                           // 0x0048(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              CritChance;                                               // 0x004C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              CritMultiplier;                                           // 0x0050(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              ArmorDamageReduction;                                     // 0x0054(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              DodgeChance;                                              // 0x0058(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              LifeSteal;                                                // 0x005C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // 0x0060(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              StackingAttribute1;                                       // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StackingAttribute2;                                       // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NoStackAttribute;                                         // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemTestAttributeSet");
		return ptr;
	}

};


// Class GameplayAbilities.AbilitySystemTestPawn
// 0x0020 (0x03D8 - 0x03B8)
class AAbilitySystemTestPawn : public ADefaultPawn
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03B8(0x0018) MISSED OFFSET
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemTestPawn");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask
// 0x0018 (0x0080 - 0x0068)
class UAbilityTask : public UGameplayTask
{
public:
	class UGameplayAbility*                            Ability;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // 0x0070(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// 0x0038 (0x00B8 - 0x0080)
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{
public:
	struct FName                                       ForceName;                                                // 0x0080(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	ERootMotionFinishVelocityMode                      FinishVelocityMode;                                       // 0x0088(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	struct FVector                                     FinishSetVelocity;                                        // 0x008C(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	float                                              FinishClampVelocity;                                      // 0x0098(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class UCharacterMovementComponent*                 MovementComponent;                                        // 0x00A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base");
		return ptr;
	}

};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// 0x0030 (0x00E8 - 0x00B8)
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.OnFinish
	struct FVector                                     WorldDirection;                                           // 0x00C8(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // 0x00D4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x00D8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAdditive;                                              // 0x00DC(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
	class UCurveFloat*                                 StrengthOverTime;                                         // 0x00E0(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce");
		return ptr;
	}


	class UAbilityTask_ApplyRootMotionConstantForce* STATIC_ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector WorldDirection, float Strength, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish);
};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// 0x0058 (0x0110 - 0x00B8)
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnFinish
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLanded
	struct FRotator                                    Rotation;                                                 // 0x00D8(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x00E4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x00E8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x00EC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              MinimumLandedTriggerTime;                                 // 0x00F0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bFinishOnLanded;                                          // 0x00F4(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x00F8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // 0x0100(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0108(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce");
		return ptr;
	}


	void OnLandedCallback(struct FHitResult Hit);
	void Finish();
	class UAbilityTask_ApplyRootMotionJumpForce* STATIC_ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve);
};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// 0x0078 (0x0130 - 0x00B8)
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnFinished
	unsigned char                                      UnknownData01[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FVector                                     StartLocation;                                            // 0x00D0(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x00DC(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // 0x00E8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocationOffset;                                     // 0x00F0(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	ERootMotionMoveToActorTargetOffsetType             OffsetAlignment;                                          // 0x00FC(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	float                                              Duration;                                                 // 0x0100(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableDestinationReachedInterrupt;                      // 0x0104(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bSetNewMovementMode;                                      // 0x0105(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // 0x0106(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // 0x0107(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                PathOffsetCurve;                                          // 0x0108(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // 0x0110(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TargetLerpSpeedHorizontalCurve;                           // 0x0118(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TargetLerpSpeedVerticalCurve;                             // 0x0120(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce");
		return ptr;
	}


	void OnTargetActorSwapped(class AActor* OriginalTarget, class AActor* NewTarget);
	void OnRep_TargetLocation();
	class UAbilityTask_ApplyRootMotionMoveToActorForce* STATIC_ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FGameplayAbilityTargetDataHandle TargetDataHandle, int TargetDataIndex, int TargetActorIndex, struct FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
	class UAbilityTask_ApplyRootMotionMoveToActorForce* STATIC_ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, struct FName TaskInstanceName, class AActor* TargetActor, struct FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// 0x0050 (0x0108 - 0x00B8)
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.OnTimedOut
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.OnTimedOutAndDestinationReached
	struct FVector                                     StartLocation;                                            // 0x00D8(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x00E4(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x00F0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bSetNewMovementMode;                                      // 0x00F4(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // 0x00F5(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // 0x00F6(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00F7(0x0001) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x00F8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce");
		return ptr;
	}


	class UAbilityTask_ApplyRootMotionMoveToForce* STATIC_ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish);
};


// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// 0x0058 (0x0110 - 0x00B8)
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.OnFinish
	struct FVector                                     Location;                                                 // 0x00C8(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	class AActor*                                      LocationActor;                                            // 0x00D8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // 0x00E0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x00E4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x00E8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPush;                                                  // 0x00EC(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAdditive;                                              // 0x00ED(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bNoZForce;                                                // 0x00EE(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00EF(0x0001) MISSED OFFSET
	class UCurveFloat*                                 StrengthDistanceFalloff;                                  // 0x00F0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 StrengthOverTime;                                         // 0x00F8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFixedWorldDirection;                                  // 0x0100(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	struct FRotator                                    FixedWorldDirection;                                      // 0x0104(0x000C) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce");
		return ptr;
	}


	class UAbilityTask_ApplyRootMotionRadialForce* STATIC_ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, struct FRotator FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish);
};


// Class GameplayAbilities.AbilityTask_MoveToLocation
// 0x0048 (0x00C8 - 0x0080)
class UAbilityTask_MoveToLocation : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_MoveToLocation.OnTargetLocationReached
	unsigned char                                      UnknownData01[0x4];                                       // 0x0090(0x0004) MISSED OFFSET
	struct FVector                                     StartLocation;                                            // 0x0094(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x00A0(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	float                                              DurationOfMovement;                                       // 0x00AC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	class UCurveFloat*                                 LerpCurve;                                                // 0x00B8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                LerpCurveVector;                                          // 0x00C0(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_MoveToLocation");
		return ptr;
	}


	class UAbilityTask_MoveToLocation* STATIC_MoveToLocation(class UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve);
};


// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// 0x0018 (0x0098 - 0x0080)
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSync
	unsigned char                                      UnknownData01[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_NetworkSyncPoint");
		return ptr;
	}


	class UAbilityTask_NetworkSyncPoint* STATIC_WaitNetSync(class UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType);
	void OnSignalCallback();
};


// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// 0x0088 (0x0108 - 0x0080)
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_PlayMontageAndWait.OnCompleted
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_PlayMontageAndWait.OnBlendOut
	unsigned char                                      UnknownData02[0x10];                                      // 0x00A0(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_PlayMontageAndWait.OnInterrupted
	unsigned char                                      UnknownData03[0x10];                                      // 0x00B0(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_PlayMontageAndWait.OnCancelled
	unsigned char                                      UnknownData04[0x28];                                      // 0x00C0(0x0028) MISSED OFFSET
	class UAnimMontage*                                MontageToPlay;                                            // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSection;                                             // 0x00F4(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              AnimRootMotionTranslationScale;                           // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAbilityEnds;                                     // 0x0100(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0101(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_PlayMontageAndWait");
		return ptr;
	}


	void OnMontageInterrupted();
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	class UAbilityTask_PlayMontageAndWait* STATIC_CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, struct FName TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, struct FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale);
};


// Class GameplayAbilities.AbilityTask_Repeat
// 0x0038 (0x00B8 - 0x0080)
class UAbilityTask_Repeat : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_Repeat.OnPerformAction
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_Repeat.OnFinished
	unsigned char                                      UnknownData02[0x18];                                      // 0x00A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_Repeat");
		return ptr;
	}


	class UAbilityTask_Repeat* STATIC_RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int TotalActionCount);
};


// Class GameplayAbilities.AbilityTask_SpawnActor
// 0x0040 (0x00C0 - 0x0080)
class UAbilityTask_SpawnActor : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_SpawnActor.Success
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_SpawnActor.DidNotSpawn
	unsigned char                                      UnknownData02[0x20];                                      // 0x00A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_SpawnActor");
		return ptr;
	}


	class UAbilityTask_SpawnActor* STATIC_SpawnActor(class UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, class UClass* Class);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, class UClass* Class, class AActor** SpawnedActor);
};


// Class GameplayAbilities.AbilityTask_StartAbilityState
// 0x0038 (0x00B8 - 0x0080)
class UAbilityTask_StartAbilityState : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_StartAbilityState.OnStateEnded
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_StartAbilityState.OnStateInterrupted
	unsigned char                                      UnknownData02[0x18];                                      // 0x00A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_StartAbilityState");
		return ptr;
	}


	class UAbilityTask_StartAbilityState* STATIC_StartAbilityState(class UGameplayAbility* OwningAbility, struct FName StateName, bool bEndCurrentState);
};


// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// 0x0028 (0x00A8 - 0x0080)
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_VisualizeTargeting.TimeElapsed
	unsigned char                                      UnknownData01[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_VisualizeTargeting");
		return ptr;
	}


	class UAbilityTask_VisualizeTargeting* STATIC_VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, struct FName TaskInstanceName, float Duration);
	class UAbilityTask_VisualizeTargeting* STATIC_VisualizeTargeting(class UGameplayAbility* OwningAbility, class UClass* Class, struct FName TaskInstanceName, float Duration);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
};


// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// 0x00B8 (0x0138 - 0x0080)
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitAbilityActivate.OnActivate
	unsigned char                                      UnknownData01[0xA8];                                      // 0x0090(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAbilityActivate");
		return ptr;
	}


	class UAbilityTask_WaitAbilityActivate* STATIC_WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, struct FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce);
	class UAbilityTask_WaitAbilityActivate* STATIC_WaitForAbilityActivate_Query(class UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce);
	class UAbilityTask_WaitAbilityActivate* STATIC_WaitForAbilityActivate(class UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
	void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);
};


// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// 0x0078 (0x00F8 - 0x0080)
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitAbilityCommit.OnCommit
	unsigned char                                      UnknownData01[0x68];                                      // 0x0090(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAbilityCommit");
		return ptr;
	}


	class UAbilityTask_WaitAbilityCommit* STATIC_WaitForAbilityCommit_Query(class UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool TriggerOnce);
	class UAbilityTask_WaitAbilityCommit* STATIC_WaitForAbilityCommit(class UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTage, bool TriggerOnce);
	void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);
};


// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// 0x0060 (0x00E0 - 0x0080)
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitAttributeChange.OnChange
	unsigned char                                      UnknownData01[0x48];                                      // 0x0090(0x0048) MISSED OFFSET
	class UAbilitySystemComponent*                     ExternalOwner;                                            // 0x00D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChange");
		return ptr;
	}


	class UAbilityTask_WaitAttributeChange* STATIC_WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, struct FGameplayAttribute InAttribute, struct FGameplayTag InWithTag, struct FGameplayTag InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce, class AActor* OptionalExternalOwner);
	class UAbilityTask_WaitAttributeChange* STATIC_WaitForAttributeChange(class UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, struct FGameplayTag WithSrcTag, struct FGameplayTag WithoutSrcTag, bool TriggerOnce, class AActor* OptionalExternalOwner);
};


// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// 0x0090 (0x0110 - 0x0080)
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.OnChange
	unsigned char                                      UnknownData01[0x78];                                      // 0x0090(0x0078) MISSED OFFSET
	class UAbilitySystemComponent*                     ExternalOwner;                                            // 0x0108(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold");
		return ptr;
	}


	class UAbilityTask_WaitAttributeChangeRatioThreshold* STATIC_WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, struct FGameplayAttribute AttributeNumerator, struct FGameplayAttribute AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner);
};


// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// 0x0058 (0x00D8 - 0x0080)
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.OnChange
	unsigned char                                      UnknownData01[0x40];                                      // 0x0090(0x0040) MISSED OFFSET
	class UAbilitySystemComponent*                     ExternalOwner;                                            // 0x00D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold");
		return ptr;
	}


	class UAbilityTask_WaitAttributeChangeThreshold* STATIC_WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner);
};


// Class GameplayAbilities.AbilityTask_WaitCancel
// 0x0018 (0x0098 - 0x0080)
class UAbilityTask_WaitCancel : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitCancel.OnCancel
	unsigned char                                      UnknownData01[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitCancel");
		return ptr;
	}


	class UAbilityTask_WaitCancel* STATIC_WaitCancel(class UGameplayAbility* OwningAbility);
	void OnLocalCancelCallback();
	void OnCancelCallback();
};


// Class GameplayAbilities.AbilityTask_WaitConfirm
// 0x0020 (0x00A0 - 0x0080)
class UAbilityTask_WaitConfirm : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitConfirm.OnConfirm
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitConfirm");
		return ptr;
	}


	class UAbilityTask_WaitConfirm* STATIC_WaitConfirm(class UGameplayAbility* OwningAbility);
	void OnConfirmCallback(class UGameplayAbility* InAbility);
};


// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// 0x0028 (0x00A8 - 0x0080)
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirm
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancel
	unsigned char                                      UnknownData02[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitConfirmCancel");
		return ptr;
	}


	class UAbilityTask_WaitConfirmCancel* STATIC_WaitConfirmCancel(class UGameplayAbility* OwningAbility);
	void OnLocalConfirmCallback();
	void OnLocalCancelCallback();
	void OnConfirmCallback();
	void OnCancelCallback();
};


// Class GameplayAbilities.AbilityTask_WaitDelay
// 0x0018 (0x0098 - 0x0080)
class UAbilityTask_WaitDelay : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitDelay.OnFinish
	unsigned char                                      UnknownData01[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitDelay");
		return ptr;
	}


	class UAbilityTask_WaitDelay* STATIC_WaitDelay(class UGameplayAbility* OwningAbility, float Time);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// 0x0138 (0x01B8 - 0x0080)
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0080(0x0128) MISSED OFFSET
	class UAbilitySystemComponent*                     ExternalOwner;                                            // 0x01A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied");
		return ptr;
	}


	void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, struct FGameplayEffectSpec SpecApplied, struct FActiveGameplayEffectHandle ActiveHandle);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// 0x0020 (0x01D8 - 0x01B8)
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.OnApplied
	unsigned char                                      UnknownData01[0x10];                                      // 0x01C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self");
		return ptr;
	}


	class UAbilityTask_WaitGameplayEffectApplied_Self* STATIC_WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
	class UAbilityTask_WaitGameplayEffectApplied_Self* STATIC_WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// 0x0020 (0x01D8 - 0x01B8)
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.OnApplied
	unsigned char                                      UnknownData01[0x10];                                      // 0x01C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target");
		return ptr;
	}


	class UAbilityTask_WaitGameplayEffectApplied_Target* STATIC_WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
	class UAbilityTask_WaitGameplayEffectApplied_Target* STATIC_WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle TargetFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// 0x00A8 (0x0128 - 0x0080)
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.bLocked
	unsigned char                                      UnknownData01[0x88];                                      // 0x0090(0x0088) MISSED OFFSET
	class UAbilitySystemComponent*                     ExternalOwner;                                            // 0x0118(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity");
		return ptr;
	}


	class UAbilityTask_WaitGameplayEffectBlockedImmunity* STATIC_WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// 0x0040 (0x00C0 - 0x0080)
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnRemoved
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.InvalidHandle
	unsigned char                                      UnknownData02[0x20];                                      // 0x00A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved");
		return ptr;
	}


	class UAbilityTask_WaitGameplayEffectRemoved* STATIC_WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle);
	void OnGameplayEffectRemoved(struct FGameplayEffectRemovalInfo InGameplayEffectRemovalInfo);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// 0x0038 (0x00B8 - 0x0080)
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnChange
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.InvalidHandle
	unsigned char                                      UnknownData02[0x18];                                      // 0x00A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange");
		return ptr;
	}


	class UAbilityTask_WaitGameplayEffectStackChange* STATIC_WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle);
	void OnGameplayEffectStackChange(struct FActiveGameplayEffectHandle Handle, int NewCount, int OldCount);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// 0x0030 (0x00B0 - 0x0080)
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitGameplayEvent.EventReceived
	unsigned char                                      UnknownData01[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                   // 0x0098(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEvent");
		return ptr;
	}


	class UAbilityTask_WaitGameplayEvent* STATIC_WaitGameplayEvent(class UGameplayAbility* OwningAbility, struct FGameplayTag EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// 0x0028 (0x00A8 - 0x0080)
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                   // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTag");
		return ptr;
	}


	void GameplayTagCallback(struct FGameplayTag Tag, int NewCount);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// 0x0010 (0x00B8 - 0x00A8)
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitGameplayTagAdded.Added

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded");
		return ptr;
	}


	class UAbilityTask_WaitGameplayTagAdded* STATIC_WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, struct FGameplayTag Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// 0x0010 (0x00B8 - 0x00A8)
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A8(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.Removed

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved");
		return ptr;
	}


	class UAbilityTask_WaitGameplayTagRemoved* STATIC_WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, struct FGameplayTag Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};


// Class GameplayAbilities.AbilityTask_WaitInputPress
// 0x0020 (0x00A0 - 0x0080)
class UAbilityTask_WaitInputPress : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitInputPress.OnPress
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitInputPress");
		return ptr;
	}


	class UAbilityTask_WaitInputPress* STATIC_WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);
	void OnPressCallback();
};


// Class GameplayAbilities.AbilityTask_WaitInputRelease
// 0x0020 (0x00A0 - 0x0080)
class UAbilityTask_WaitInputRelease : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitInputRelease.OnRelease
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitInputRelease");
		return ptr;
	}


	class UAbilityTask_WaitInputRelease* STATIC_WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased);
	void OnReleaseCallback();
};


// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// 0x0020 (0x00A0 - 0x0080)
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitMovementModeChange.OnChange
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitMovementModeChange");
		return ptr;
	}


	void OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	class UAbilityTask_WaitMovementModeChange* STATIC_CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode);
};


// Class GameplayAbilities.AbilityTask_WaitOverlap
// 0x0010 (0x0090 - 0x0080)
class UAbilityTask_WaitOverlap : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitOverlap.OnOverlap

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitOverlap");
		return ptr;
	}


	class UAbilityTask_WaitOverlap* STATIC_WaitForOverlap(class UGameplayAbility* OwningAbility);
	void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit);
};


// Class GameplayAbilities.AbilityTask_WaitTargetData
// 0x0040 (0x00C0 - 0x0080)
class UAbilityTask_WaitTargetData : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitTargetData.ValidData
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitTargetData.Cancelled
	class UClass*                                      TargetClass;                                              // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AGameplayAbilityTargetActor*                 TargetActor;                                              // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitTargetData");
		return ptr;
	}


	class UAbilityTask_WaitTargetData* STATIC_WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, struct FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor);
	class UAbilityTask_WaitTargetData* STATIC_WaitTargetData(class UGameplayAbility* OwningAbility, struct FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class UClass* Class);
	void OnTargetDataReplicatedCancelledCallback();
	void OnTargetDataReplicatedCallback(struct FGameplayAbilityTargetDataHandle Data, struct FGameplayTag ActivationTag);
	void OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle Data);
	void OnTargetDataCancelledCallback(struct FGameplayAbilityTargetDataHandle Data);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
};


// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// 0x0028 (0x00A8 - 0x0080)
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty GameplayAbilities.AbilityTask_WaitVelocityChange.OnVelocityChage
	class UMovementComponent*                          CachedMovementComponent;                                  // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitVelocityChange");
		return ptr;
	}


	class UAbilityTask_WaitVelocityChange* STATIC_CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, struct FVector Direction, float MinimumMagnitude);
};


// Class GameplayAbilities.GameplayAbility
// 0x03D0 (0x03F8 - 0x0028)
class UGameplayAbility : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET
	struct FGameplayTagContainer                       AbilityTags;                                              // 0x00A8(0x0020) (Edit, DisableEditOnInstance)
	bool                                               bReplicateInputDirectly;                                  // 0x00C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RemoteInstanceEnded;                                      // 0x00C9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00CA(0x0004) MISSED OFFSET
	TEnumAsByte<EGameplayAbilityReplicationPolicy>     ReplicationPolicy;                                        // 0x00CE(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EGameplayAbilityInstancingPolicy>      InstancingPolicy;                                         // 0x00CF(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bServerRespectsRemoteAbilityCancellation;                 // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRetriggerInstancedAbility;                               // 0x00D1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00D2(0x0006) MISSED OFFSET
	struct FGameplayAbilityActivationInfo              CurrentActivationInfo;                                    // 0x00D8(0x0020) (BlueprintVisible, BlueprintReadOnly)
	struct FGameplayEventData                          CurrentEventData;                                         // 0x00F8(0x00A8) (BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EGameplayAbilityNetExecutionPolicy>    NetExecutionPolicy;                                       // 0x01A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET
	class UClass*                                      CostGameplayEffectClass;                                  // 0x01A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FAbilityTriggerData>                 AbilityTriggers;                                          // 0x01B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      CooldownGameplayEffectClass;                              // 0x01C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagQuery                           CancelAbilitiesMatchingTagQuery;                          // 0x01C8(0x0048) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       CancelAbilitiesWithTag;                                   // 0x0210(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       BlockAbilitiesWithTag;                                    // 0x0230(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       ActivationOwnedTags;                                      // 0x0250(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       ActivationRequiredTags;                                   // 0x0270(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       ActivationBlockedTags;                                    // 0x0290(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       SourceRequiredTags;                                       // 0x02B0(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       SourceBlockedTags;                                        // 0x02D0(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       TargetRequiredTags;                                       // 0x02F0(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       TargetBlockedTags;                                        // 0x0310(0x0020) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x20];                                      // 0x0330(0x0020) MISSED OFFSET
	TArray<class UGameplayTask*>                       ActiveTasks;                                              // 0x0350(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0360(0x0010) MISSED OFFSET
	class UAnimMontage*                                CurrentMontage;                                           // 0x0370(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x60];                                      // 0x0378(0x0060) MISSED OFFSET
	bool                                               bIsActive;                                                // 0x03D8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsCancelable;                                            // 0x03D9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsBlockingOtherAbilities;                                // 0x03DA(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x15];                                      // 0x03DB(0x0015) MISSED OFFSET
	bool                                               bMarkPendingKillOnAbilityEnd;                             // 0x03F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility");
		return ptr;
	}


	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);
	void SetCanBeCanceled(bool bCanBeCanceled);
	void SendGameplayEvent(struct FGameplayTag EventTag, struct FGameplayEventData Payload);
	void RemoveGrantedByEffect();
	void MontageStop(float OverrideBlendOutTime);
	void MontageSetNextSectionName(struct FName FromSectionName, struct FName ToSectionName);
	void MontageJumpToSection(struct FName SectionName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(struct FName SocketName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level);
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload);
	void K2_RemoveGameplayCue(struct FGameplayTag GameplayCueTag);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ExecuteGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters GameplayCueParameters);
	void K2_ExecuteGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context);
	void K2_EndAbility();
	void K2_CommitExecute();
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent);
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);
	bool K2_CommitAbility();
	bool K2_CheckAbilityCost();
	bool K2_CheckAbilityCooldown();
	void K2_CancelAbility();
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer* RelevantTags);
	TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle EffectSpecHandle, struct FGameplayAbilityTargetDataHandle TargetData);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(struct FGameplayEffectSpecHandle EffectSpecHandle);
	void K2_AddGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters GameplayCueParameter, bool bRemoveOnAbilityEnd);
	void K2_AddGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void K2_ActivateAbility();
	void InvalidateClientPredictionKey();
	class USkeletalMeshComponent* GetOwningComponentFromActorInfo();
	class AActor* GetOwningActorFromActorInfo();
	struct FGameplayEffectContextHandle GetGrantedByEffectContext();
	class UObject* GetCurrentSourceObject();
	class UAnimMontage* GetCurrentMontage();
	float GetCooldownTimeRemaining();
	struct FGameplayEffectContextHandle GetContextFromOwner(struct FGameplayAbilityTargetDataHandle OptionalTargetData);
	class AActor* GetAvatarActorFromActorInfo();
	struct FGameplayAbilityActorInfo GetActorInfo();
	class UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo();
	int GetAbilityLevel();
	void EndTaskByInstanceName(struct FName InstanceName);
	void EndAbilityState(struct FName OptionalStateNameToEnd);
	void ConfirmTaskByInstanceName(struct FName InstanceName, bool bEndTask);
	void CancelTaskByInstanceName(struct FName InstanceName);
	void BP_RemoveGameplayEffectFromOwnerWithHandle(struct FActiveGameplayEffectHandle Handle, int StacksToRemove);
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(struct FGameplayTagContainer WithGrantedTags, int StacksToRemove);
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(struct FGameplayTagContainer WithAssetTags, int StacksToRemove);
	TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(struct FGameplayAbilityTargetDataHandle TargetData, class UClass* GameplayEffectClass, int GameplayEffectLevel, int Stacks);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int GameplayEffectLevel, int Stacks);
};


// Class GameplayAbilities.GameplayAbility_CharacterJump
// 0x0000 (0x03F8 - 0x03F8)
class UGameplayAbility_CharacterJump : public UGameplayAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility_CharacterJump");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbility_Montage
// 0x0038 (0x0430 - 0x03F8)
class UGameplayAbility_Montage : public UGameplayAbility
{
public:
	class UAnimMontage*                                MontageToPlay;                                            // 0x03F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0400(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SectionName;                                              // 0x0404(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	TArray<class UClass*>                              GameplayEffectClassesWhileAnimating;                      // 0x0410(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UGameplayEffect*>                     GameplayEffectsWhileAnimating;                            // 0x0420(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility_Montage");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityBlueprint
// 0x0000 (0x00E0 - 0x00E0)
class UGameplayAbilityBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityBlueprint");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilitySet
// 0x0010 (0x0040 - 0x0030)
class UGameplayAbilitySet : public UDataAsset
{
public:
	TArray<struct FGameplayAbilityBindInfo>            Abilities;                                                // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilitySet");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor
// 0x0120 (0x0450 - 0x0330)
class AGameplayAbilityTargetActor : public AActor
{
public:
	bool                                               ShouldProduceTargetDataOnServer;                          // 0x0330(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0331(0x000F) MISSED OFFSET
	struct FGameplayAbilityTargetingLocationInfo       StartLocation;                                            // 0x0340(0x0070) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData01[0x30];                                      // 0x03B0(0x0030) MISSED OFFSET
	class APlayerController*                           MasterPC;                                                 // 0x03E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UGameplayAbility*                            OwningAbility;                                            // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyOnConfirmation;                                   // 0x03F0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	class AActor*                                      SourceActor;                                              // 0x03F8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FWorldReticleParameters                     ReticleParams;                                            // 0x0400(0x000C) (BlueprintVisible)
	unsigned char                                      UnknownData03[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	class UClass*                                      ReticleClass;                                             // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTargetDataFilterHandle             Filter;                                                   // 0x0418(0x0010) (BlueprintVisible, Net)
	bool                                               bDebug;                                                   // 0x0428(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x17];                                      // 0x0429(0x0017) MISSED OFFSET
	class UAbilitySystemComponent*                     GenericDelegateBoundASC;                                  // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0448(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor");
		return ptr;
	}


	void ConfirmTargeting();
	void CancelTargeting();
};


// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// 0x0010 (0x0460 - 0x0450)
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0450(0x0004) MISSED OFFSET
	bool                                               bTraceAffectsAimPitch;                                    // 0x0454(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0455(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_Trace");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// 0x0020 (0x0480 - 0x0460)
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{
public:
	float                                              CollisionRadius;                                          // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionHeight;                                          // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0468(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// 0x0020 (0x04A0 - 0x0480)
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{
public:
	class UClass*                                      PlacedActorClass;                                         // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          PlacedActorMaterial;                                      // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0490(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// 0x0000 (0x0450 - 0x0450)
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_Radius");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// 0x0000 (0x0460 - 0x0460)
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayAbilityWorldReticle
// 0x0020 (0x0350 - 0x0330)
class AGameplayAbilityWorldReticle : public AActor
{
public:
	struct FWorldReticleParameters                     Parameters;                                               // 0x0330(0x000C) (Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                               bFaceOwnerFlat;                                           // 0x033C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToTargetedActor;                                     // 0x033D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTargetValid;                                           // 0x033E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTargetAnActor;                                         // 0x033F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           MasterPC;                                                 // 0x0340(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetingActor;                                           // 0x0348(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityWorldReticle");
		return ptr;
	}


	void SetReticleMaterialParamVector(struct FName ParamName, struct FVector Value);
	void SetReticleMaterialParamFloat(struct FName ParamName, float Value);
	void OnValidTargetChanged(bool bNewValue);
	void OnTargetingAnActor(bool bNewValue);
	void OnParametersInitialized();
	void FaceTowardSource(bool bFaceIn2D);
};


// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// 0x0018 (0x0368 - 0x0350)
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{
public:
	class UCapsuleComponent*                           CollisionComponent;                                       // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UActorComponent*>                     VisualizationComponents;                                  // 0x0358(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayCueInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueInterface");
		return ptr;
	}


	void ForwardGameplayCueToParent();
	void BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
};


// Class GameplayAbilities.GameplayCueManager
// 0x02D0 (0x0300 - 0x0030)
class UGameplayCueManager : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
	struct FGameplayCueObjectLibrary                   RuntimeGameplayCueObjectLibrary;                          // 0x0048(0x0050) (Transient)
	struct FGameplayCueObjectLibrary                   EditorGameplayCueObjectLibrary;                           // 0x0098(0x0050) (Transient)
	unsigned char                                      UnknownData01[0x1B8];                                     // 0x00E8(0x01B8) MISSED OFFSET
	TArray<class UClass*>                              LoadedGameplayCueNotifyClasses;                           // 0x02A0(0x0010) (ZeroConstructor, Transient)
	TArray<class UClass*>                              GameplayCueClassesForPreallocation;                       // 0x02B0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGameplayCuePendingExecute>          PendingExecuteCues;                                       // 0x02C0(0x0010) (ZeroConstructor, Transient)
	int                                                GameplayCueSendContextCount;                              // 0x02D0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	TArray<struct FPreallocationInfo>                  PreallocationInfoList_Internal;                           // 0x02D8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x18];                                      // 0x02E8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueManager");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueNotify_Actor
// 0x0070 (0x03A0 - 0x0330)
class AGameplayCueNotify_Actor : public AActor
{
public:
	bool                                               bAutoDestroyOnRemove;                                     // 0x0330(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0331(0x0003) MISSED OFFSET
	float                                              AutoDestroyDelay;                                         // 0x0334(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               WarnIfTimelineIsStillRunning;                             // 0x0338(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               WarnIfLatentActionIsStillRunning;                         // 0x0339(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x033A(0x0002) MISSED OFFSET
	struct FGameplayTag                                GameplayCueTag;                                           // 0x033C(0x0008) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	struct FGameplayTagReferenceHelper                 ReferenceHelper;                                          // 0x0348(0x0010) (Edit)
	struct FName                                       GameplayCueName;                                          // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoAttachToOwner;                                       // 0x0360(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOverride;                                               // 0x0361(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUniqueInstancePerInstigator;                             // 0x0362(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUniqueInstancePerSourceObject;                           // 0x0363(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowMultipleOnActiveEvents;                             // 0x0364(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowMultipleWhileActiveEvents;                          // 0x0365(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0366(0x0002) MISSED OFFSET
	int                                                NumPreallocatedInstances;                                 // 0x0368(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x34];                                      // 0x036C(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_Actor");
		return ptr;
	}


	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	void OnOwnerDestroyed(class AActor* DestroyedActor);
	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
	void K2_EndGameplayCue();
};


// Class GameplayAbilities.GameplayCueNotify_Static
// 0x0028 (0x0050 - 0x0028)
class UGameplayCueNotify_Static : public UObject
{
public:
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0028(0x0008) (Edit, DisableEditOnInstance)
	struct FGameplayTagReferenceHelper                 ReferenceHelper;                                          // 0x0030(0x0010) (Edit)
	struct FName                                       GameplayCueName;                                          // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsOverride;                                               // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_Static");
		return ptr;
	}


	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, struct FGameplayCueParameters Parameters);
};


// Class GameplayAbilities.GameplayCueNotify_HitImpact
// 0x0010 (0x0060 - 0x0050)
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{
public:
	class USoundBase*                                  Sound;                                                    // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_HitImpact");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueSet
// 0x0060 (0x0090 - 0x0030)
class UGameplayCueSet : public UDataAsset
{
public:
	TArray<struct FGameplayCueNotifyData>              GameplayCueData;                                          // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueSet");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueTranslator
// 0x0000 (0x0028 - 0x0028)
class UGameplayCueTranslator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueTranslator");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayCueTranslator_Test
// 0x0000 (0x0028 - 0x0028)
class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueTranslator_Test");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffect
// 0x05C8 (0x05F0 - 0x0028)
class UGameplayEffect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	EGameplayEffectDurationType                        DurationPolicy;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FGameplayEffectModifierMagnitude            DurationMagnitude;                                        // 0x0038(0x0190) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              Period;                                                   // 0x01C8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bExecutePeriodicEffectOnApplication;                      // 0x01E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01E9(0x0007) MISSED OFFSET
	TArray<struct FGameplayModifierInfo>               Modifiers;                                                // 0x01F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGameplayEffectExecutionDefinition>  Executions;                                               // 0x0200(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FScalableFloat                              ChanceToApplyToTarget;                                    // 0x0210(0x0020) (Edit, DisableEditOnInstance)
	TArray<class UClass*>                              ApplicationRequirements;                                  // 0x0230(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              TargetEffectClasses;                                      // 0x0240(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FConditionalGameplayEffect>          ConditionalGameplayEffects;                               // 0x0250(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              OverflowEffects;                                          // 0x0260(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDenyOverflowApplication;                                 // 0x0270(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClearStackOnOverflow;                                    // 0x0271(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0272(0x0006) MISSED OFFSET
	TArray<class UClass*>                              PrematureExpirationEffectClasses;                         // 0x0278(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              RoutineExpirationEffectClasses;                           // 0x0288(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bRequireModifierSuccessToTriggerCues;                     // 0x0298(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSuppressStackingCues;                                    // 0x0299(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x029A(0x0006) MISSED OFFSET
	TArray<struct FGameplayEffectCue>                  GameplayCues;                                             // 0x02A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UGameplayEffectUIData*                       UIData;                                                   // 0x02B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FInheritedTagContainer                      InheritableGameplayEffectTags;                            // 0x02B8(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FInheritedTagContainer                      InheritableOwnedTagsContainer;                            // 0x0318(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagRequirements                    OngoingTagRequirements;                                   // 0x0378(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagRequirements                    ApplicationTagRequirements;                               // 0x03B8(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FInheritedTagContainer                      RemoveGameplayEffectsWithTags;                            // 0x03F8(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagRequirements                    GrantedApplicationImmunityTags;                           // 0x0458(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayEffectQuery                        GrantedApplicationImmunityQuery;                          // 0x0498(0x0138) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x1];                                       // 0x05D0(0x0001) MISSED OFFSET
	EGameplayEffectStackingType                        StackingType;                                             // 0x05D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x05D2(0x0002) MISSED OFFSET
	int                                                StackLimitCount;                                          // 0x05D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGameplayEffectStackingDurationPolicy              StackDurationRefreshPolicy;                               // 0x05D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGameplayEffectStackingPeriodPolicy                StackPeriodResetPolicy;                                   // 0x05D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGameplayEffectStackingExpirationPolicy            StackExpirationPolicy;                                    // 0x05DA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5];                                       // 0x05DB(0x0005) MISSED OFFSET
	TArray<struct FGameplayAbilitySpecDef>             GrantedAbilities;                                         // 0x05E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffect");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectCalculation
// 0x0010 (0x0038 - 0x0028)
class UGameplayEffectCalculation : public UObject
{
public:
	TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture;                              // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectCalculation");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
// 0x0000 (0x0028 - 0x0028)
class UGameplayEffectCustomApplicationRequirement : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectCustomApplicationRequirement");
		return ptr;
	}


	bool CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, struct FGameplayEffectSpec Spec, class UAbilitySystemComponent* ASC);
};


// Class GameplayAbilities.GameplayEffectExecutionCalculation
// 0x0008 (0x0040 - 0x0038)
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{
public:
	bool                                               bRequiresPassedInTags;                                    // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExecutionCalculation");
		return ptr;
	}


	void Execute(struct FGameplayEffectCustomExecutionParameters ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput);
};


// Class GameplayAbilities.GameplayEffectTemplate
// 0x0000 (0x05F0 - 0x05F0)
class UGameplayEffectTemplate : public UGameplayEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectTemplate");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectUIData
// 0x0000 (0x0028 - 0x0028)
class UGameplayEffectUIData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectUIData");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayEffectUIData_TextOnly
// 0x0018 (0x0040 - 0x0028)
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{
public:
	struct FText                                       Description;                                              // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectUIData_TextOnly");
		return ptr;
	}

};


// Class GameplayAbilities.GameplayModMagnitudeCalculation
// 0x0008 (0x0040 - 0x0038)
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{
public:
	bool                                               bAllowNonNetAuthorityDependencyRegistration;              // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayModMagnitudeCalculation");
		return ptr;
	}


	float CalculateBaseMagnitude(struct FGameplayEffectSpec Spec);
};


// Class GameplayAbilities.GameplayTagReponseTable
// 0x01A0 (0x01D0 - 0x0030)
class UGameplayTagReponseTable : public UDataAsset
{
public:
	TArray<struct FGameplayTagResponseTableEntry>      Entries;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x190];                                     // 0x0040(0x0190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayTagReponseTable");
		return ptr;
	}


	void TagResponseEvent(struct FGameplayTag Tag, int NewCount, class UAbilitySystemComponent* ASC, int idx);
};


// Class GameplayAbilities.TickableAttributeSetInterface
// 0x0000 (0x0028 - 0x0028)
class UTickableAttributeSetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.TickableAttributeSetInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
