#pragma once
#include "FPrimaryAssetId.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAssetBundleEntry // Size: 0x28
{
public:
    FPrimaryAssetId BundleScope; /* Ofs: 0x0 Size: 0x10 StructProperty AssetRegistry.AssetBundleEntry.BundleScope */
    FName BundleName; /* Ofs: 0x10 Size: 0x8 NameProperty AssetRegistry.AssetBundleEntry.BundleName */
    TArray<struct FStringAssetReference> BundleAssets; /* Ofs: 0x18 Size: 0x10 ArrayProperty AssetRegistry.AssetBundleEntry.BundleAssets */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAssetBundleEntry = sizeof(FAssetBundleEntry); // 40
    static_assert(sizeof(FAssetBundleEntry) == 0x28, "Size of FAssetBundleEntry is not correct.");
	auto constexpr FAssetBundleEntry_BundleScope_Offset = offsetof(FAssetBundleEntry, BundleScope);
	static_assert(FAssetBundleEntry_BundleScope_Offset == 0x0, "FAssetBundleEntry::BundleScope offset is not 0");
	auto constexpr FAssetBundleEntry_BundleName_Offset = offsetof(FAssetBundleEntry, BundleName);
	static_assert(FAssetBundleEntry_BundleName_Offset == 0x10, "FAssetBundleEntry::BundleName offset is not 10");
	auto constexpr FAssetBundleEntry_BundleAssets_Offset = offsetof(FAssetBundleEntry, BundleAssets);
	static_assert(FAssetBundleEntry_BundleAssets_Offset == 0x18, "FAssetBundleEntry::BundleAssets offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
