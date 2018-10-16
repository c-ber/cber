#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAIPredictionEvent // Size: 0x18
{
public:
    ExternalPtr<struct UActor> Requestor; /* Ofs: 0x0 Size: 0x8 ObjectProperty AIModule.AIPredictionEvent.Requestor */
    ExternalPtr<struct UActor> PredictedActor; /* Ofs: 0x8 Size: 0x8 ObjectProperty AIModule.AIPredictionEvent.PredictedActor */
    uint8_t UnknownData10[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAIPredictionEvent = sizeof(FAIPredictionEvent); // 24
    static_assert(sizeof(FAIPredictionEvent) == 0x18, "Size of FAIPredictionEvent is not correct.");
	auto constexpr FAIPredictionEvent_Requestor_Offset = offsetof(FAIPredictionEvent, Requestor);
	static_assert(FAIPredictionEvent_Requestor_Offset == 0x0, "FAIPredictionEvent::Requestor offset is not 0");
	auto constexpr FAIPredictionEvent_PredictedActor_Offset = offsetof(FAIPredictionEvent, PredictedActor);
	static_assert(FAIPredictionEvent_PredictedActor_Offset == 0x8, "FAIPredictionEvent::PredictedActor offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
