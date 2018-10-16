#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAINoiseEvent // Size: 0x30
{
public:
    uint8_t UnknownData0[0x4];
    FVector NoiseLocation; /* Ofs: 0x4 Size: 0xC StructProperty AIModule.AINoiseEvent.NoiseLocation */
    float Loudness; /* Ofs: 0x10 Size: 0x4 FloatProperty AIModule.AINoiseEvent.Loudness */
    float MaxRange; /* Ofs: 0x14 Size: 0x4 FloatProperty AIModule.AINoiseEvent.MaxRange */
    ExternalPtr<struct UActor> Instigator; /* Ofs: 0x18 Size: 0x8 ObjectProperty AIModule.AINoiseEvent.Instigator */
    FName Tag; /* Ofs: 0x20 Size: 0x8 NameProperty AIModule.AINoiseEvent.Tag */
    uint8_t UnknownData28[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAINoiseEvent = sizeof(FAINoiseEvent); // 48
    static_assert(sizeof(FAINoiseEvent) == 0x30, "Size of FAINoiseEvent is not correct.");
	auto constexpr FAINoiseEvent_NoiseLocation_Offset = offsetof(FAINoiseEvent, NoiseLocation);
	static_assert(FAINoiseEvent_NoiseLocation_Offset == 0x4, "FAINoiseEvent::NoiseLocation offset is not 4");
	auto constexpr FAINoiseEvent_Loudness_Offset = offsetof(FAINoiseEvent, Loudness);
	static_assert(FAINoiseEvent_Loudness_Offset == 0x10, "FAINoiseEvent::Loudness offset is not 10");
	auto constexpr FAINoiseEvent_MaxRange_Offset = offsetof(FAINoiseEvent, MaxRange);
	static_assert(FAINoiseEvent_MaxRange_Offset == 0x14, "FAINoiseEvent::MaxRange offset is not 14");
	auto constexpr FAINoiseEvent_Instigator_Offset = offsetof(FAINoiseEvent, Instigator);
	static_assert(FAINoiseEvent_Instigator_Offset == 0x18, "FAINoiseEvent::Instigator offset is not 18");
	auto constexpr FAINoiseEvent_Tag_Offset = offsetof(FAINoiseEvent, Tag);
	static_assert(FAINoiseEvent_Tag_Offset == 0x20, "FAINoiseEvent::Tag offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
