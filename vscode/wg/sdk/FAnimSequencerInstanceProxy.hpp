#pragma once
#include "FAnimInstanceProxy.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimSequencerInstanceProxy // Size: 0x660
 : public FAnimInstanceProxy // Size: 0x4C0
{
public:
    uint8_t UnknownData4C0[0x1A0];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimSequencerInstanceProxy = sizeof(FAnimSequencerInstanceProxy); // 1632
    static_assert(sizeof(FAnimSequencerInstanceProxy) == 0x660, "Size of FAnimSequencerInstanceProxy is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
