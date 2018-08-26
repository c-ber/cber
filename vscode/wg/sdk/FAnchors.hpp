#pragma once
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnchors // Size: 0x10
{
public:
    FVector2D Minimum; /* Ofs: 0x0 Size: 0x8 StructProperty Slate.Anchors.Minimum */
    FVector2D Maximum; /* Ofs: 0x8 Size: 0x8 StructProperty Slate.Anchors.Maximum */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnchors = sizeof(FAnchors); // 16
    static_assert(sizeof(FAnchors) == 0x10, "Size of FAnchors is not correct.");
	auto constexpr FAnchors_Minimum_Offset = offsetof(FAnchors, Minimum);
	static_assert(FAnchors_Minimum_Offset == 0x0, "FAnchors::Minimum offset is not 0");
	auto constexpr FAnchors_Maximum_Offset = offsetof(FAnchors, Maximum);
	static_assert(FAnchors_Maximum_Offset == 0x8, "FAnchors::Maximum offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
