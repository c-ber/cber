#pragma once
#include "FAttackId.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDamageEvent // Size: 0x18
{
public:
    uint8_t UnknownData0[0x8];
    FAttackId AttackId; /* Ofs: 0x8 Size: 0x4 StructProperty Engine.DamageEvent.AttackId */
    uint8_t UnknownDataC[0x4];
    ExternalPtr<struct UClass> DamageTypeClass; /* Ofs: 0x10 Size: 0x8 ClassProperty Engine.DamageEvent.DamageTypeClass */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDamageEvent = sizeof(FDamageEvent); // 24
    static_assert(sizeof(FDamageEvent) == 0x18, "Size of FDamageEvent is not correct.");
	auto constexpr FDamageEvent_AttackId_Offset = offsetof(FDamageEvent, AttackId);
	static_assert(FDamageEvent_AttackId_Offset == 0x8, "FDamageEvent::AttackId offset is not 8");
	auto constexpr FDamageEvent_DamageTypeClass_Offset = offsetof(FDamageEvent, DamageTypeClass);
	static_assert(FDamageEvent_DamageTypeClass_Offset == 0x10, "FDamageEvent::DamageTypeClass offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
