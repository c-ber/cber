#pragma once
#include "FMargin.hpp"
#include "FAnchors.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnchorData // Size: 0x28
{
public:
    FMargin Offsets; /* Ofs: 0x0 Size: 0x10 StructProperty UMG.AnchorData.Offsets */
    FAnchors Anchors; /* Ofs: 0x10 Size: 0x10 StructProperty UMG.AnchorData.Anchors */
    FVector2D Alignment; /* Ofs: 0x20 Size: 0x8 StructProperty UMG.AnchorData.Alignment */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnchorData = sizeof(FAnchorData); // 40
    static_assert(sizeof(FAnchorData) == 0x28, "Size of FAnchorData is not correct.");
	auto constexpr FAnchorData_Offsets_Offset = offsetof(FAnchorData, Offsets);
	static_assert(FAnchorData_Offsets_Offset == 0x0, "FAnchorData::Offsets offset is not 0");
	auto constexpr FAnchorData_Anchors_Offset = offsetof(FAnchorData, Anchors);
	static_assert(FAnchorData_Anchors_Offset == 0x10, "FAnchorData::Anchors offset is not 10");
	auto constexpr FAnchorData_Alignment_Offset = offsetof(FAnchorData, Alignment);
	static_assert(FAnchorData_Alignment_Offset == 0x20, "FAnchorData::Alignment offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
