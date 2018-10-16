#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCompilerNativizationOptions // Size: 0x80
{
public:
    FName PlatformName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.CompilerNativizationOptions.PlatformName */
    bool ServerOnlyPlatform; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.CompilerNativizationOptions.ServerOnlyPlatform */
    bool ClientOnlyPlatform; /* Ofs: 0x9 Size: 0x1 BitMask: 01 BoolProperty Engine.CompilerNativizationOptions.ClientOnlyPlatform */
    uint8_t UnknownDataA[0x6];
    TArray<struct FName> ExcludedModules; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.CompilerNativizationOptions.ExcludedModules */
    TSet<struct FStringAssetReference> ExcludedAssets; /* Ofs: 0x20 Size: 0x50 SetProperty Engine.CompilerNativizationOptions.ExcludedAssets */
    TArray<struct FString> ExcludedFolderPaths; /* Ofs: 0x70 Size: 0x10 ArrayProperty Engine.CompilerNativizationOptions.ExcludedFolderPaths */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCompilerNativizationOptions = sizeof(FCompilerNativizationOptions); // 128
    static_assert(sizeof(FCompilerNativizationOptions) == 0x80, "Size of FCompilerNativizationOptions is not correct.");
	auto constexpr FCompilerNativizationOptions_PlatformName_Offset = offsetof(FCompilerNativizationOptions, PlatformName);
	static_assert(FCompilerNativizationOptions_PlatformName_Offset == 0x0, "FCompilerNativizationOptions::PlatformName offset is not 0");
	auto constexpr FCompilerNativizationOptions_ExcludedModules_Offset = offsetof(FCompilerNativizationOptions, ExcludedModules);
	static_assert(FCompilerNativizationOptions_ExcludedModules_Offset == 0x10, "FCompilerNativizationOptions::ExcludedModules offset is not 10");
	auto constexpr FCompilerNativizationOptions_ExcludedAssets_Offset = offsetof(FCompilerNativizationOptions, ExcludedAssets);
	static_assert(FCompilerNativizationOptions_ExcludedAssets_Offset == 0x20, "FCompilerNativizationOptions::ExcludedAssets offset is not 20");
	auto constexpr FCompilerNativizationOptions_ExcludedFolderPaths_Offset = offsetof(FCompilerNativizationOptions, ExcludedFolderPaths);
	static_assert(FCompilerNativizationOptions_ExcludedFolderPaths_Offset == 0x70, "FCompilerNativizationOptions::ExcludedFolderPaths offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
