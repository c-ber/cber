#pragma once
#include "FPrimaryAssetType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPrimaryAssetId // Size: 0x10
{
public:
    FPrimaryAssetType PrimaryAssetType; /* Ofs: 0x0 Size: 0x8 StructProperty CoreUObject.PrimaryAssetId.PrimaryAssetType */
    FName PrimaryAssetName; /* Ofs: 0x8 Size: 0x8 NameProperty CoreUObject.PrimaryAssetId.PrimaryAssetName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPrimaryAssetId = sizeof(FPrimaryAssetId); // 16
    static_assert(sizeof(FPrimaryAssetId) == 0x10, "Size of FPrimaryAssetId is not correct.");
	auto constexpr FPrimaryAssetId_PrimaryAssetType_Offset = offsetof(FPrimaryAssetId, PrimaryAssetType);
	static_assert(FPrimaryAssetId_PrimaryAssetType_Offset == 0x0, "FPrimaryAssetId::PrimaryAssetType offset is not 0");
	auto constexpr FPrimaryAssetId_PrimaryAssetName_Offset = offsetof(FPrimaryAssetId, PrimaryAssetName);
	static_assert(FPrimaryAssetId_PrimaryAssetName_Offset == 0x8, "FPrimaryAssetId::PrimaryAssetName offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
