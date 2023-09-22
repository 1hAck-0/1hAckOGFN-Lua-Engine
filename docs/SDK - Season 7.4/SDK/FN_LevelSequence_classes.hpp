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

// Class LevelSequence.LevelSequence
// 0x0150 (0x0498 - 0x0348)
class ULevelSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlueprintGeneratedClass*                    DirectorClass;                                            // 0x0350(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLevelSequenceObjectReferenceMap            ObjectReferences;                                         // 0x0358(0x0050)
	struct FLevelSequenceBindingReferences             BindingReferences;                                        // 0x03A8(0x00A0)
	TMap<struct FString, struct FLevelSequenceObject>  PossessedObjects;                                         // 0x0448(0x0050) (ZeroConstructor, Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequence");
		return ptr;
	}

};


// Class LevelSequence.DefaultLevelSequenceInstanceData
// 0x0048 (0x0070 - 0x0028)
class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class AActor*                                      TransformOriginActor;                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  TransformOrigin;                                          // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.DefaultLevelSequenceInstanceData");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0000 (0x0028 - 0x0028)
class ULevelSequenceBurnInInitSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInInitSettings");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0028 (0x0050 - 0x0028)
class ULevelSequenceBurnInOptions : public UObject
{
public:
	bool                                               bUseBurnIn;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FSoftClassPath                              BurnInClass;                                              // 0x0030(0x0018) (Edit, BlueprintVisible, ZeroConstructor, Config)
	class ULevelSequenceBurnInInitSettings*            Settings;                                                 // 0x0048(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInOptions");
		return ptr;
	}


	void SetBurnIn(struct FSoftClassPath InBurnInClass);
};


// Class LevelSequence.LevelSequenceActor
// 0x0078 (0x03A8 - 0x0330)
class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0330(0x0010) MISSED OFFSET
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x0340(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	class ULevelSequencePlayer*                        SequencePlayer;                                           // 0x0350(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FSoftObjectPath                             LevelSequence;                                            // 0x0358(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class AActor*>                              AdditionalEventReceivers;                                 // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                            // 0x0380(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                         // 0x0388(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bAutoPlay : 1;                                            // 0x0390(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOverrideInstanceData : 1;                                // 0x0390(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bReplicatePlayback : 1;                                   // 0x0390(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	class UObject*                                     DefaultInstanceData;                                      // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ULevelSequenceBurnIn*                        BurnInInstance;                                           // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return ptr;
	}


	void SetSequence(class ULevelSequence* InSequence);
	void SetReplicatePlayback(bool ReplicatePlayback);
	void SetEventReceivers(TArray<class AActor*> AdditionalReceivers);
	void SetBinding(struct FMovieSceneObjectBindingID Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
	void ResetBindings();
	void ResetBinding(struct FMovieSceneObjectBindingID Binding);
	void RemoveBinding(struct FMovieSceneObjectBindingID Binding, class AActor* Actor);
	void OnLevelSequenceLoaded__DelegateSignature();
	class ULevelSequence* LoadSequence();
	class ULevelSequencePlayer* GetSequencePlayer();
	class ULevelSequence* GetSequence();
	void AddBinding(struct FMovieSceneObjectBindingID Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
};


// Class LevelSequence.LevelSequenceBurnIn
// 0x0090 (0x02C0 - 0x0230)
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot                FrameInformation;                                         // 0x0230(0x0088) (BlueprintVisible, BlueprintReadOnly)
	class ALevelSequenceActor*                         LevelSequenceActor;                                       // 0x02B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnIn");
		return ptr;
	}


	void SetSettings(class UObject* InSettings);
	class UClass* GetSettingsClass();
};


// Class LevelSequence.LevelSequenceDirector
// 0x0008 (0x0030 - 0x0028)
class ULevelSequenceDirector : public UObject
{
public:
	class ULevelSequencePlayer*                        Player;                                                   // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceDirector");
		return ptr;
	}


	void OnCreated();
};


// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// 0x0000 (0x00E0 - 0x00E0)
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LegacyLevelSequenceDirectorBlueprint");
		return ptr;
	}

};


// Class LevelSequence.LevelSequencePlayer
// 0x00A0 (0x0860 - 0x07C0)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07C0(0x0010) UNKNOWN PROPERTY: MulticastDelegateProperty LevelSequence.LevelSequencePlayer.OnCameraCut
	unsigned char                                      UnknownData01[0x90];                                      // 0x07D0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return ptr;
	}


	class ULevelSequencePlayer* STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, class ALevelSequenceActor** OutActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
