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

// BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C
// 0x00B8 (0x2D28 - 0x2C70)
class AAthena_PlayerController_C : public AFortPlayerControllerAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2C70(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             ListenerOverride;                                         // 0x2C78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VictoryRoyaleAudio;                                       // 0x2C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VictoryRoyaleMusic;                                       // 0x2C88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  VictoryRoyaleMenuMusicAsset;                              // 0x2C90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x2C98(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Athena_PlayerController.Athena_PlayerController_C.CreativeTool
	struct FGameplayTagContainer                       BladeWielderTag;                                          // 0x2CC0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	EFortItemType                                      InteractingItemType;                                      // 0x2CE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2CE1(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       InteractionTags;                                          // 0x2CE8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x10];                                      // 0x2D08(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty Athena_PlayerController.Athena_PlayerController_C.PawnPossessedDispatcher
	float                                              PermissionRecheckTime;                                    // 0x2D18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x2D1C(0x0004) MISSED OFFSET
	struct FTimerHandle                                PermissionsRecheckTimerHandle;                            // 0x2D20(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C");
		return ptr;
	}


	void SetupPermissionRecheckTimer();
	void LeftAllVolumes(bool* bLeftVolumes);
	void UserConstructionScript();
	void OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D(class UObject* Loaded);
	void ReceiveBeginPlay();
	void PlayWinEffects(class APawn* FinisherPawn, class UFortWeaponItemDefinition* FinishingWeapon, EDeathCause DeathCause);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void Start_Victory_Royale_Music();
	void OnMusicPackLoaded(class UAthenaMusicPackItemDefinition* NewMusicPack);
	void OnLeaveVolume(class AFortVolume* Volume);
	void OnEnterVolume(class AFortVolume* Volume);
	void HandlePermissions(class AFortVolume* Volume);
	void GrantItem();
	void RevokeItem();
	void PermissionsChanged();
	void OnLocalInteraction(class AActor* ReceivingActor);
	void RemoveItem();
	void RevokeCreativeTool();
	void ReactToPawnPossession(class APawn* PossessedPawn);
	void ExecuteUbergraph_Athena_PlayerController(int EntryPoint);
	void PawnPossessedDispatcher__DelegateSignature(class APawn* PossessedPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
