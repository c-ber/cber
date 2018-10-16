#pragma once
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDamageFieldLayout // Size: 0x18
{
public:
    float CreationDelay; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.DamageFieldLayout.CreationDelay */
    FVector2D LocationOffset; /* Ofs: 0x4 Size: 0x8 StructProperty TslGame.DamageFieldLayout.LocationOffset */
    uint8_t UnknownDataC[0xC];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDamageFieldLayout = sizeof(FDamageFieldLayout); // 24
    static_assert(sizeof(FDamageFieldLayout) == 0x18, "Size of FDamageFieldLayout is not correct.");
	auto constexpr FDamageFieldLayout_CreationDelay_Offset = offsetof(FDamageFieldLayout, CreationDelay);
	static_assert(FDamageFieldLayout_CreationDelay_Offset == 0x0, "FDamageFieldLayout::CreationDelay offset is not 0");
	auto constexpr FDamageFieldLayout_LocationOffset_Offset = offsetof(FDamageFieldLayout, LocationOffset);
	static_assert(FDamageFieldLayout_LocationOffset_Offset == 0x4, "FDamageFieldLayout::LocationOffset offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
