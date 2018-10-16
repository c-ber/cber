#pragma once
#include "FVector.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPOV // Size: 0x1C
{
public:
    FVector Location; /* Ofs: 0x0 Size: 0xC StructProperty Engine.POV.Location */
    FRotator Rotation; /* Ofs: 0xC Size: 0xC StructProperty Engine.POV.Rotation */
    float FOV; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.POV.FOV */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPOV = sizeof(FPOV); // 28
    static_assert(sizeof(FPOV) == 0x1C, "Size of FPOV is not correct.");
	auto constexpr FPOV_Location_Offset = offsetof(FPOV, Location);
	static_assert(FPOV_Location_Offset == 0x0, "FPOV::Location offset is not 0");
	auto constexpr FPOV_Rotation_Offset = offsetof(FPOV, Rotation);
	static_assert(FPOV_Rotation_Offset == 0xc, "FPOV::Rotation offset is not c");
	auto constexpr FPOV_FOV_Offset = offsetof(FPOV, FOV);
	static_assert(FPOV_FOV_Offset == 0x18, "FPOV::FOV offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
