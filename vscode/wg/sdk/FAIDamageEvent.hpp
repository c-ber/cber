#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAIDamageEvent // Size: 0x30
{
public:
    float Amount; /* Ofs: 0x0 Size: 0x4 FloatProperty AIModule.AIDamageEvent.Amount */
    FVector Location; /* Ofs: 0x4 Size: 0xC StructProperty AIModule.AIDamageEvent.Location */
    FVector HitLocation; /* Ofs: 0x10 Size: 0xC StructProperty AIModule.AIDamageEvent.HitLocation */
    uint8_t UnknownData1C[0x4];
    ExternalPtr<struct UActor> DamagedActor; /* Ofs: 0x20 Size: 0x8 ObjectProperty AIModule.AIDamageEvent.DamagedActor */
    ExternalPtr<struct UActor> Instigator; /* Ofs: 0x28 Size: 0x8 ObjectProperty AIModule.AIDamageEvent.Instigator */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAIDamageEvent = sizeof(FAIDamageEvent); // 48
    static_assert(sizeof(FAIDamageEvent) == 0x30, "Size of FAIDamageEvent is not correct.");
	auto constexpr FAIDamageEvent_Amount_Offset = offsetof(FAIDamageEvent, Amount);
	static_assert(FAIDamageEvent_Amount_Offset == 0x0, "FAIDamageEvent::Amount offset is not 0");
	auto constexpr FAIDamageEvent_Location_Offset = offsetof(FAIDamageEvent, Location);
	static_assert(FAIDamageEvent_Location_Offset == 0x4, "FAIDamageEvent::Location offset is not 4");
	auto constexpr FAIDamageEvent_HitLocation_Offset = offsetof(FAIDamageEvent, HitLocation);
	static_assert(FAIDamageEvent_HitLocation_Offset == 0x10, "FAIDamageEvent::HitLocation offset is not 10");
	auto constexpr FAIDamageEvent_DamagedActor_Offset = offsetof(FAIDamageEvent, DamagedActor);
	static_assert(FAIDamageEvent_DamagedActor_Offset == 0x20, "FAIDamageEvent::DamagedActor offset is not 20");
	auto constexpr FAIDamageEvent_Instigator_Offset = offsetof(FAIDamageEvent, Instigator);
	static_assert(FAIDamageEvent_Instigator_Offset == 0x28, "FAIDamageEvent::Instigator offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
