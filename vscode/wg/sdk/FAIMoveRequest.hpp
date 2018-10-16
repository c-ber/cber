#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAIMoveRequest // Size: 0x40
{
public:
    ExternalPtr<struct UActor> GoalActor; /* Ofs: 0x0 Size: 0x8 ObjectProperty AIModule.AIMoveRequest.GoalActor */
    uint8_t UnknownData8[0x38];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAIMoveRequest = sizeof(FAIMoveRequest); // 64
    static_assert(sizeof(FAIMoveRequest) == 0x40, "Size of FAIMoveRequest is not correct.");
	auto constexpr FAIMoveRequest_GoalActor_Offset = offsetof(FAIMoveRequest, GoalActor);
	static_assert(FAIMoveRequest_GoalActor_Offset == 0x0, "FAIMoveRequest::GoalActor offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
