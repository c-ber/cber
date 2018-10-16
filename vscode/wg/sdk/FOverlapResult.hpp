#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FOverlapResult // Size: 0x18
{
public:
    TWeakObjectPtr<ExternalPtr<struct UActor>> Actor; /* Ofs: 0x0 Size: 0x8 WeakObjectProperty Engine.OverlapResult.Actor */
    TWeakObjectPtr<ExternalPtr<struct UPrimitiveComponent>> Component; /* Ofs: 0x8 Size: 0x8 WeakObjectProperty Engine.OverlapResult.Component */
    uint8_t UnknownData10[0x4];
    bool bBlockingHit; /* Ofs: 0x14 Size: 0x1 BitMask: 01 BoolProperty Engine.OverlapResult.bBlockingHit */
    uint8_t UnknownData15[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFOverlapResult = sizeof(FOverlapResult); // 24
    static_assert(sizeof(FOverlapResult) == 0x18, "Size of FOverlapResult is not correct.");
	auto constexpr FOverlapResult_Actor_Offset = offsetof(FOverlapResult, Actor);
	static_assert(FOverlapResult_Actor_Offset == 0x0, "FOverlapResult::Actor offset is not 0");
	auto constexpr FOverlapResult_Component_Offset = offsetof(FOverlapResult, Component);
	static_assert(FOverlapResult_Component_Offset == 0x8, "FOverlapResult::Component offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
