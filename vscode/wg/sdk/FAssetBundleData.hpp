#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAssetBundleData // Size: 0x10
{
public:
    TArray<struct FAssetBundleEntry> Bundles; /* Ofs: 0x0 Size: 0x10 ArrayProperty AssetRegistry.AssetBundleData.Bundles */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAssetBundleData = sizeof(FAssetBundleData); // 16
    static_assert(sizeof(FAssetBundleData) == 0x10, "Size of FAssetBundleData is not correct.");
	auto constexpr FAssetBundleData_Bundles_Offset = offsetof(FAssetBundleData, Bundles);
	static_assert(FAssetBundleData_Bundles_Offset == 0x0, "FAssetBundleData::Bundles offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
