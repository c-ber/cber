#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAxis // Size: 0x10
{
public:
    FVector Axis; /* Ofs: 0x0 Size: 0xC StructProperty Engine.Axis.Axis */
    bool bInLocalSpace; /* Ofs: 0xC Size: 0x1 BitMask: 01 BoolProperty Engine.Axis.bInLocalSpace */
    uint8_t UnknownDataD[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAxis = sizeof(FAxis); // 16
    static_assert(sizeof(FAxis) == 0x10, "Size of FAxis is not correct.");
	auto constexpr FAxis_Axis_Offset = offsetof(FAxis, Axis);
	static_assert(FAxis_Axis_Offset == 0x0, "FAxis::Axis offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
