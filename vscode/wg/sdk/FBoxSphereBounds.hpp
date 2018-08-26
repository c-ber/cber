#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBoxSphereBounds // Size: 0x1C
{
public:
    FVector Origin; /* Ofs: 0x0 Size: 0xC StructProperty CoreUObject.BoxSphereBounds.Origin */
    FVector BoxExtent; /* Ofs: 0xC Size: 0xC StructProperty CoreUObject.BoxSphereBounds.BoxExtent */
    float SphereRadius; /* Ofs: 0x18 Size: 0x4 FloatProperty CoreUObject.BoxSphereBounds.SphereRadius */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBoxSphereBounds = sizeof(FBoxSphereBounds); // 28
    static_assert(sizeof(FBoxSphereBounds) == 0x1C, "Size of FBoxSphereBounds is not correct.");
	auto constexpr FBoxSphereBounds_Origin_Offset = offsetof(FBoxSphereBounds, Origin);
	static_assert(FBoxSphereBounds_Origin_Offset == 0x0, "FBoxSphereBounds::Origin offset is not 0");
	auto constexpr FBoxSphereBounds_BoxExtent_Offset = offsetof(FBoxSphereBounds, BoxExtent);
	static_assert(FBoxSphereBounds_BoxExtent_Offset == 0xc, "FBoxSphereBounds::BoxExtent offset is not c");
	auto constexpr FBoxSphereBounds_SphereRadius_Offset = offsetof(FBoxSphereBounds, SphereRadius);
	static_assert(FBoxSphereBounds_SphereRadius_Offset == 0x18, "FBoxSphereBounds::SphereRadius offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
