#pragma once
#include "FDamageEvent.hpp"
#include "FRadialDamageParams.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRadialDamageEvent // Size: 0x48
 : public FDamageEvent // Size: 0x18
{
public:
    FRadialDamageParams Params; /* Ofs: 0x18 Size: 0x14 StructProperty Engine.RadialDamageEvent.Params */
    FVector Origin; /* Ofs: 0x2C Size: 0xC StructProperty Engine.RadialDamageEvent.Origin */
    TArray<struct FHitResult> ComponentHits; /* Ofs: 0x38 Size: 0x10 ArrayProperty Engine.RadialDamageEvent.ComponentHits */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRadialDamageEvent = sizeof(FRadialDamageEvent); // 72
    static_assert(sizeof(FRadialDamageEvent) == 0x48, "Size of FRadialDamageEvent is not correct.");
	auto constexpr FRadialDamageEvent_Params_Offset = offsetof(FRadialDamageEvent, Params);
	static_assert(FRadialDamageEvent_Params_Offset == 0x18, "FRadialDamageEvent::Params offset is not 18");
	auto constexpr FRadialDamageEvent_Origin_Offset = offsetof(FRadialDamageEvent, Origin);
	static_assert(FRadialDamageEvent_Origin_Offset == 0x2c, "FRadialDamageEvent::Origin offset is not 2c");
	auto constexpr FRadialDamageEvent_ComponentHits_Offset = offsetof(FRadialDamageEvent, ComponentHits);
	static_assert(FRadialDamageEvent_ComponentHits_Offset == 0x38, "FRadialDamageEvent::ComponentHits offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
