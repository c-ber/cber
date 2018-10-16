#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDummySpacerCameraTypes // Size: 0x1
{
public:
    uint8_t UnknownData0[0x1];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDummySpacerCameraTypes = sizeof(FDummySpacerCameraTypes); // 1
    static_assert(sizeof(FDummySpacerCameraTypes) == 0x1, "Size of FDummySpacerCameraTypes is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
