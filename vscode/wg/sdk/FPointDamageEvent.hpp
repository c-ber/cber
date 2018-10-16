#pragma once
#include "FDamageEvent.hpp"
#include "FVector_NetQuantizeNormal.hpp"
#include "FHitResult.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPointDamageEvent // Size: 0xB0
 : public FDamageEvent // Size: 0x18
{
public:
    float Damage; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.PointDamageEvent.Damage */
    FVector_NetQuantizeNormal ShotDirection; /* Ofs: 0x1C Size: 0xC StructProperty Engine.PointDamageEvent.ShotDirection */
    FHitResult HitInfo; /* Ofs: 0x28 Size: 0x88 StructProperty Engine.PointDamageEvent.HitInfo */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPointDamageEvent = sizeof(FPointDamageEvent); // 176
    static_assert(sizeof(FPointDamageEvent) == 0xB0, "Size of FPointDamageEvent is not correct.");
	auto constexpr FPointDamageEvent_Damage_Offset = offsetof(FPointDamageEvent, Damage);
	static_assert(FPointDamageEvent_Damage_Offset == 0x18, "FPointDamageEvent::Damage offset is not 18");
	auto constexpr FPointDamageEvent_ShotDirection_Offset = offsetof(FPointDamageEvent, ShotDirection);
	static_assert(FPointDamageEvent_ShotDirection_Offset == 0x1c, "FPointDamageEvent::ShotDirection offset is not 1c");
	auto constexpr FPointDamageEvent_HitInfo_Offset = offsetof(FPointDamageEvent, HitInfo);
	static_assert(FPointDamageEvent_HitInfo_Offset == 0x28, "FPointDamageEvent::HitInfo offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
