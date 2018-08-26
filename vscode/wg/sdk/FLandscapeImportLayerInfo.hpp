#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLandscapeImportLayerInfo // Size: 0x1
{
public:
    uint8_t UnknownData0[0x1];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLandscapeImportLayerInfo = sizeof(FLandscapeImportLayerInfo); // 1
    static_assert(sizeof(FLandscapeImportLayerInfo) == 0x1, "Size of FLandscapeImportLayerInfo is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
