#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTrackRenderData // Size: 0x50
{
public:
    uint8_t UnknownData0[0x50];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTrackRenderData = sizeof(FTrackRenderData); // 80
    static_assert(sizeof(FTrackRenderData) == 0x50, "Size of FTrackRenderData is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
