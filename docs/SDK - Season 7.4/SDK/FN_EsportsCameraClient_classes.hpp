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

// Class EsportsCameraClient.EsportsCameraClient
// 0x0040 (0x0370 - 0x0330)
class AEsportsCameraClient : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0330(0x0010) MISSED OFFSET
	class AWebCamReader*                               WebCamReader;                                             // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)
	class AWebCamViewer*                               WebCamViewer;                                             // 0x0348(0x0008) (ZeroConstructor, IsPlainOldData)
	class AM3U8MovieViewer*                            M3U8MovieViewer;                                          // 0x0350(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0358(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EsportsCameraClient.EsportsCameraClient");
		return ptr;
	}


	void SetDynamicMaterial(class UMaterialInstanceDynamic* MaterialInstanceDynamic);
	bool IsPlayingWebMovie();
	bool IsPlatformEnabled();
	bool HasDynamicMaterial();
};


// Class EsportsCameraClient.EsportsCameraStatusBase
// 0x0000 (0x0238 - 0x0238)
class UEsportsCameraStatusBase : public UCommonUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EsportsCameraClient.EsportsCameraStatusBase");
		return ptr;
	}


	void FollowedPlayerChanged(class AEsportsCameraClient* InEsportsCameraClient);
};


// Class EsportsCameraClient.WebCamBase
// 0x0048 (0x0378 - 0x0330)
class AWebCamBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0330(0x0008) MISSED OFFSET
	class UTexture2D*                                  DynamicTexture;                                           // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaterialInstanceDynamic;                                  // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              DynamicColors;                                            // 0x0348(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0358(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EsportsCameraClient.WebCamBase");
		return ptr;
	}

};


// Class EsportsCameraClient.M3U8MovieViewer
// 0x0040 (0x03B8 - 0x0378)
class AM3U8MovieViewer : public AWebCamBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0378(0x0028) MISSED OFFSET
	class UAudioComponent*                             AudioComponent;                                           // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMySoundWave*                                MySoundWave;                                              // 0x03A8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EsportsCameraClient.M3U8MovieViewer");
		return ptr;
	}

};


// Class EsportsCameraClient.MySoundWave
// 0x0010 (0x02A0 - 0x0290)
class UMySoundWave : public USoundWaveProcedural
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0290(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EsportsCameraClient.MySoundWave");
		return ptr;
	}

};


// Class EsportsCameraClient.WebCamReader
// 0x0000 (0x0378 - 0x0378)
class AWebCamReader : public AWebCamBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EsportsCameraClient.WebCamReader");
		return ptr;
	}

};


// Class EsportsCameraClient.WebCamViewer
// 0x0008 (0x0380 - 0x0378)
class AWebCamViewer : public AWebCamBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0378(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EsportsCameraClient.WebCamViewer");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
