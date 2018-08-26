#pragma once
#include "FVector.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBasedPosition // Size: 0x38
{
public:
    ExternalPtr<struct UActor> Base; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.BasedPosition.Base */
    FVector Position; /* Ofs: 0x8 Size: 0xC StructProperty Engine.BasedPosition.Position */
    FVector CachedBaseLocation; /* Ofs: 0x14 Size: 0xC StructProperty Engine.BasedPosition.CachedBaseLocation */
    FRotator CachedBaseRotation; /* Ofs: 0x20 Size: 0xC StructProperty Engine.BasedPosition.CachedBaseRotation */
    FVector CachedTransPosition; /* Ofs: 0x2C Size: 0xC StructProperty Engine.BasedPosition.CachedTransPosition */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBasedPosition = sizeof(FBasedPosition); // 56
    static_assert(sizeof(FBasedPosition) == 0x38, "Size of FBasedPosition is not correct.");
	auto constexpr FBasedPosition_Base_Offset = offsetof(FBasedPosition, Base);
	static_assert(FBasedPosition_Base_Offset == 0x0, "FBasedPosition::Base offset is not 0");
	auto constexpr FBasedPosition_Position_Offset = offsetof(FBasedPosition, Position);
	static_assert(FBasedPosition_Position_Offset == 0x8, "FBasedPosition::Position offset is not 8");
	auto constexpr FBasedPosition_CachedBaseLocation_Offset = offsetof(FBasedPosition, CachedBaseLocation);
	static_assert(FBasedPosition_CachedBaseLocation_Offset == 0x14, "FBasedPosition::CachedBaseLocation offset is not 14");
	auto constexpr FBasedPosition_CachedBaseRotation_Offset = offsetof(FBasedPosition, CachedBaseRotation);
	static_assert(FBasedPosition_CachedBaseRotation_Offset == 0x20, "FBasedPosition::CachedBaseRotation offset is not 20");
	auto constexpr FBasedPosition_CachedTransPosition_Offset = offsetof(FBasedPosition, CachedTransPosition);
	static_assert(FBasedPosition_CachedTransPosition_Offset == 0x2c, "FBasedPosition::CachedTransPosition offset is not 2c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
