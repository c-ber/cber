#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCameraCutInfo // Size: 0x10
{
public:
    FVector Location; /* Ofs: 0x0 Size: 0xC StructProperty Engine.CameraCutInfo.Location */
    float Timestamp; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.CameraCutInfo.Timestamp */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCameraCutInfo = sizeof(FCameraCutInfo); // 16
    static_assert(sizeof(FCameraCutInfo) == 0x10, "Size of FCameraCutInfo is not correct.");
	auto constexpr FCameraCutInfo_Location_Offset = offsetof(FCameraCutInfo, Location);
	static_assert(FCameraCutInfo_Location_Offset == 0x0, "FCameraCutInfo::Location offset is not 0");
	auto constexpr FCameraCutInfo_Timestamp_Offset = offsetof(FCameraCutInfo, Timestamp);
	static_assert(FCameraCutInfo_Timestamp_Offset == 0xc, "FCameraCutInfo::Timestamp offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
