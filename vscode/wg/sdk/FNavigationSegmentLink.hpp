#pragma once
#include "FNavigationLinkBase.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNavigationSegmentLink // Size: 0x68
 : public FNavigationLinkBase // Size: 0x38
{
public:
    FVector LeftStart; /* Ofs: 0x38 Size: 0xC StructProperty Engine.NavigationSegmentLink.LeftStart */
    FVector LeftEnd; /* Ofs: 0x44 Size: 0xC StructProperty Engine.NavigationSegmentLink.LeftEnd */
    FVector RightStart; /* Ofs: 0x50 Size: 0xC StructProperty Engine.NavigationSegmentLink.RightStart */
    FVector RightEnd; /* Ofs: 0x5C Size: 0xC StructProperty Engine.NavigationSegmentLink.RightEnd */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNavigationSegmentLink = sizeof(FNavigationSegmentLink); // 104
    static_assert(sizeof(FNavigationSegmentLink) == 0x68, "Size of FNavigationSegmentLink is not correct.");
	auto constexpr FNavigationSegmentLink_LeftStart_Offset = offsetof(FNavigationSegmentLink, LeftStart);
	static_assert(FNavigationSegmentLink_LeftStart_Offset == 0x38, "FNavigationSegmentLink::LeftStart offset is not 38");
	auto constexpr FNavigationSegmentLink_LeftEnd_Offset = offsetof(FNavigationSegmentLink, LeftEnd);
	static_assert(FNavigationSegmentLink_LeftEnd_Offset == 0x44, "FNavigationSegmentLink::LeftEnd offset is not 44");
	auto constexpr FNavigationSegmentLink_RightStart_Offset = offsetof(FNavigationSegmentLink, RightStart);
	static_assert(FNavigationSegmentLink_RightStart_Offset == 0x50, "FNavigationSegmentLink::RightStart offset is not 50");
	auto constexpr FNavigationSegmentLink_RightEnd_Offset = offsetof(FNavigationSegmentLink, RightEnd);
	static_assert(FNavigationSegmentLink_RightEnd_Offset == 0x5c, "FNavigationSegmentLink::RightEnd offset is not 5c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
