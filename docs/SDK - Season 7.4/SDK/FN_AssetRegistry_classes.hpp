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

// Class AssetRegistry.AssetRegistryImpl
// 0x0738 (0x0760 - 0x0028)
class UAssetRegistryImpl : public UObject
{
public:
	unsigned char                                      UnknownData00[0x738];                                     // 0x0028(0x0738) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AssetRegistry.AssetRegistryImpl");
		return ptr;
	}

};


// Class AssetRegistry.AssetRegistryHelpers
// 0x0000 (0x0028 - 0x0028)
class UAssetRegistryHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AssetRegistry.AssetRegistryHelpers");
		return ptr;
	}


	struct FSoftObjectPath STATIC_ToSoftObjectPath(struct FAssetData InAssetData);
	struct FARFilter STATIC_SetFilterTagsAndValues(struct FARFilter InFilter, TArray<struct FTagAndValue> InTagsAndValues);
	bool STATIC_IsValid(struct FAssetData InAssetData);
	bool STATIC_IsUAsset(struct FAssetData InAssetData);
	bool STATIC_IsRedirector(struct FAssetData InAssetData);
	bool STATIC_IsAssetLoaded(struct FAssetData InAssetData);
	bool STATIC_GetTagValue(struct FAssetData InAssetData, struct FName InTagName, struct FString* OutTagValue);
	struct FString STATIC_GetFullName(struct FAssetData InAssetData);
	struct FString STATIC_GetExportTextName(struct FAssetData InAssetData);
	class UClass* STATIC_GetClass(struct FAssetData InAssetData);
	TScriptInterface<class UAssetRegistry> STATIC_GetAssetRegistry();
	class UObject* STATIC_GetAsset(struct FAssetData InAssetData);
	struct FAssetData STATIC_CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass);
};


// Class AssetRegistry.AssetRegistry
// 0x0000 (0x0028 - 0x0028)
class UAssetRegistry : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AssetRegistry.AssetRegistry");
		return ptr;
	}


	void UseFilterToExcludeAssets(struct FARFilter Filter, TArray<struct FAssetData>* AssetDataList);
	void SearchAllAssets(bool bSynchronousSearch);
	void ScanPathsSynchronous(TArray<struct FString> InPaths, bool bForceRescan);
	void ScanModifiedAssetFiles(TArray<struct FString> InFilePaths);
	void ScanFilesSynchronous(TArray<struct FString> InFilePaths, bool bForceRescan);
	void RunAssetsThroughFilter(struct FARFilter Filter, TArray<struct FAssetData>* AssetDataList);
	void PrioritizeSearchPath(struct FString PathToPrioritize);
	bool IsLoadingAssets();
	bool HasAssets(struct FName PackagePath, bool bRecursive);
	void GetSubPaths(struct FString InBasePath, bool bInRecurse, TArray<struct FString>* OutPathList);
	bool GetAssetsByPath(struct FName PackagePath, bool bRecursive, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData);
	bool GetAssetsByPackageName(struct FName PackageName, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData);
	bool GetAssetsByClass(struct FName ClassName, bool bSearchSubClasses, TArray<struct FAssetData>* OutAssetData);
	bool GetAssets(struct FARFilter Filter, TArray<struct FAssetData>* OutAssetData);
	struct FAssetData GetAssetByObjectPath(struct FName ObjectPath, bool bIncludeOnlyOnDiskAssets);
	void GetAllCachedPaths(TArray<struct FString>* OutPathList);
	bool GetAllAssets(bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
