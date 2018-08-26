#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAITeamStimulusEvent // Size: 0x38
{
public:
    uint8_t UnknownData0[0x28];
    ExternalPtr<struct UActor> Broadcaster; /* Ofs: 0x28 Size: 0x8 ObjectProperty AIModule.AITeamStimulusEvent.Broadcaster */
    ExternalPtr<struct UActor> Enemy; /* Ofs: 0x30 Size: 0x8 ObjectProperty AIModule.AITeamStimulusEvent.Enemy */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAITeamStimulusEvent = sizeof(FAITeamStimulusEvent); // 56
    static_assert(sizeof(FAITeamStimulusEvent) == 0x38, "Size of FAITeamStimulusEvent is not correct.");
	auto constexpr FAITeamStimulusEvent_Broadcaster_Offset = offsetof(FAITeamStimulusEvent, Broadcaster);
	static_assert(FAITeamStimulusEvent_Broadcaster_Offset == 0x28, "FAITeamStimulusEvent::Broadcaster offset is not 28");
	auto constexpr FAITeamStimulusEvent_Enemy_Offset = offsetof(FAITeamStimulusEvent, Enemy);
	static_assert(FAITeamStimulusEvent_Enemy_Offset == 0x30, "FAITeamStimulusEvent::Enemy offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
