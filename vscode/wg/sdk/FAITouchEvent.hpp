#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAITouchEvent // Size: 0x20
{
public:
    uint8_t UnknownData0[0x10];
    ExternalPtr<struct UActor> TouchReceiver; /* Ofs: 0x10 Size: 0x8 ObjectProperty AIModule.AITouchEvent.TouchReceiver */
    ExternalPtr<struct UActor> OtherActor; /* Ofs: 0x18 Size: 0x8 ObjectProperty AIModule.AITouchEvent.OtherActor */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAITouchEvent = sizeof(FAITouchEvent); // 32
    static_assert(sizeof(FAITouchEvent) == 0x20, "Size of FAITouchEvent is not correct.");
	auto constexpr FAITouchEvent_TouchReceiver_Offset = offsetof(FAITouchEvent, TouchReceiver);
	static_assert(FAITouchEvent_TouchReceiver_Offset == 0x10, "FAITouchEvent::TouchReceiver offset is not 10");
	auto constexpr FAITouchEvent_OtherActor_Offset = offsetof(FAITouchEvent, OtherActor);
	static_assert(FAITouchEvent_OtherActor_Offset == 0x18, "FAITouchEvent::OtherActor offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
