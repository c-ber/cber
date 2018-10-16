#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPawnActionEvent // Size: 0x18
{
public:
    ExternalPtr<struct UPawnAction> Action; /* Ofs: 0x0 Size: 0x8 ObjectProperty AIModule.PawnActionEvent.Action */
    uint8_t UnknownData8[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPawnActionEvent = sizeof(FPawnActionEvent); // 24
    static_assert(sizeof(FPawnActionEvent) == 0x18, "Size of FPawnActionEvent is not correct.");
	auto constexpr FPawnActionEvent_Action_Offset = offsetof(FPawnActionEvent, Action);
	static_assert(FPawnActionEvent_Action_Offset == 0x0, "FPawnActionEvent::Action offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
