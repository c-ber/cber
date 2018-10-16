#pragma once
#include "FPrimaryAssetRules.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPrimaryAssetTypeInfo // Size: 0x80
{
public:
    FName PrimaryAssetType; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.PrimaryAssetTypeInfo.PrimaryAssetType */
    TAssetPtr<ExternalPtr<struct UClass>> AssetBaseClass; /* Ofs: 0x8 Size: 0x1C AssetClassProperty Engine.PrimaryAssetTypeInfo.AssetBaseClass */
    uint8_t UnknownData24[0x4];
    ExternalPtr<struct UClass> AssetBaseClassLoaded; /* Ofs: 0x28 Size: 0x8 ClassProperty Engine.PrimaryAssetTypeInfo.AssetBaseClassLoaded */
    bool bHasBlueprintClasses; /* Ofs: 0x30 Size: 0x1 BitMask: 01 BoolProperty Engine.PrimaryAssetTypeInfo.bHasBlueprintClasses */
    bool bIsEditorOnly; /* Ofs: 0x31 Size: 0x1 BitMask: 01 BoolProperty Engine.PrimaryAssetTypeInfo.bIsEditorOnly */
    uint8_t UnknownData32[0x6];
    TArray<struct FDirectoryPath> Directories; /* Ofs: 0x38 Size: 0x10 ArrayProperty Engine.PrimaryAssetTypeInfo.Directories */
    TArray<struct FStringAssetReference> SpecificAssets; /* Ofs: 0x48 Size: 0x10 ArrayProperty Engine.PrimaryAssetTypeInfo.SpecificAssets */
    FPrimaryAssetRules Rules; /* Ofs: 0x58 Size: 0x10 StructProperty Engine.PrimaryAssetTypeInfo.Rules */
    TArray<struct FString> AssetScanPaths; /* Ofs: 0x68 Size: 0x10 ArrayProperty Engine.PrimaryAssetTypeInfo.AssetScanPaths */
    bool bIsDynamicAsset; /* Ofs: 0x78 Size: 0x1 BitMask: 01 BoolProperty Engine.PrimaryAssetTypeInfo.bIsDynamicAsset */
    uint8_t UnknownData79[0x3];
    int32_t NumberOfAssets; /* Ofs: 0x7C Size: 0x4 IntProperty Engine.PrimaryAssetTypeInfo.NumberOfAssets */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPrimaryAssetTypeInfo = sizeof(FPrimaryAssetTypeInfo); // 128
    static_assert(sizeof(FPrimaryAssetTypeInfo) == 0x80, "Size of FPrimaryAssetTypeInfo is not correct.");
	auto constexpr FPrimaryAssetTypeInfo_PrimaryAssetType_Offset = offsetof(FPrimaryAssetTypeInfo, PrimaryAssetType);
	static_assert(FPrimaryAssetTypeInfo_PrimaryAssetType_Offset == 0x0, "FPrimaryAssetTypeInfo::PrimaryAssetType offset is not 0");
	auto constexpr FPrimaryAssetTypeInfo_AssetBaseClass_Offset = offsetof(FPrimaryAssetTypeInfo, AssetBaseClass);
	static_assert(FPrimaryAssetTypeInfo_AssetBaseClass_Offset == 0x8, "FPrimaryAssetTypeInfo::AssetBaseClass offset is not 8");
	auto constexpr FPrimaryAssetTypeInfo_AssetBaseClassLoaded_Offset = offsetof(FPrimaryAssetTypeInfo, AssetBaseClassLoaded);
	static_assert(FPrimaryAssetTypeInfo_AssetBaseClassLoaded_Offset == 0x28, "FPrimaryAssetTypeInfo::AssetBaseClassLoaded offset is not 28");
	auto constexpr FPrimaryAssetTypeInfo_Directories_Offset = offsetof(FPrimaryAssetTypeInfo, Directories);
	static_assert(FPrimaryAssetTypeInfo_Directories_Offset == 0x38, "FPrimaryAssetTypeInfo::Directories offset is not 38");
	auto constexpr FPrimaryAssetTypeInfo_SpecificAssets_Offset = offsetof(FPrimaryAssetTypeInfo, SpecificAssets);
	static_assert(FPrimaryAssetTypeInfo_SpecificAssets_Offset == 0x48, "FPrimaryAssetTypeInfo::SpecificAssets offset is not 48");
	auto constexpr FPrimaryAssetTypeInfo_Rules_Offset = offsetof(FPrimaryAssetTypeInfo, Rules);
	static_assert(FPrimaryAssetTypeInfo_Rules_Offset == 0x58, "FPrimaryAssetTypeInfo::Rules offset is not 58");
	auto constexpr FPrimaryAssetTypeInfo_AssetScanPaths_Offset = offsetof(FPrimaryAssetTypeInfo, AssetScanPaths);
	static_assert(FPrimaryAssetTypeInfo_AssetScanPaths_Offset == 0x68, "FPrimaryAssetTypeInfo::AssetScanPaths offset is not 68");
	auto constexpr FPrimaryAssetTypeInfo_NumberOfAssets_Offset = offsetof(FPrimaryAssetTypeInfo, NumberOfAssets);
	static_assert(FPrimaryAssetTypeInfo_NumberOfAssets_Offset == 0x7c, "FPrimaryAssetTypeInfo::NumberOfAssets offset is not 7c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
