#pragma once
#include "FMinimalViewInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCameraCacheEntry // Size: 0x590
{
public:
    float Timestamp; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.CameraCacheEntry.Timestamp */
    uint8_t UnknownData4[0xC];
    FMinimalViewInfo POV; /* Ofs: 0x10 Size: 0x580 StructProperty Engine.CameraCacheEntry.POV */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCameraCacheEntry = sizeof(FCameraCacheEntry); // 1424
    static_assert(sizeof(FCameraCacheEntry) == 0x590, "Size of FCameraCacheEntry is not correct.");
	auto constexpr FCameraCacheEntry_Timestamp_Offset = offsetof(FCameraCacheEntry, Timestamp);
	static_assert(FCameraCacheEntry_Timestamp_Offset == 0x0, "FCameraCacheEntry::Timestamp offset is not 0");
	auto constexpr FCameraCacheEntry_POV_Offset = offsetof(FCameraCacheEntry, POV);
	static_assert(FCameraCacheEntry_POV_Offset == 0x10, "FCameraCacheEntry::POV offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
