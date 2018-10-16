#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAISightEvent // Size: 0x18
{
public:
    uint8_t UnknownData0[0x8];
    ExternalPtr<struct UActor> SeenActor; /* Ofs: 0x8 Size: 0x8 ObjectProperty AIModule.AISightEvent.SeenActor */
    ExternalPtr<struct UActor> Observer; /* Ofs: 0x10 Size: 0x8 ObjectProperty AIModule.AISightEvent.Observer */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAISightEvent = sizeof(FAISightEvent); // 24
    static_assert(sizeof(FAISightEvent) == 0x18, "Size of FAISightEvent is not correct.");
	auto constexpr FAISightEvent_SeenActor_Offset = offsetof(FAISightEvent, SeenActor);
	static_assert(FAISightEvent_SeenActor_Offset == 0x8, "FAISightEvent::SeenActor offset is not 8");
	auto constexpr FAISightEvent_Observer_Offset = offsetof(FAISightEvent, Observer);
	static_assert(FAISightEvent_Observer_Offset == 0x10, "FAISightEvent::Observer offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
