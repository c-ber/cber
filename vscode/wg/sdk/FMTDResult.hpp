#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMTDResult // Size: 0x10
{
public:
    FVector Direction; /* Ofs: 0x0 Size: 0xC StructProperty Engine.MTDResult.Direction */
    float Distance; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.MTDResult.Distance */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMTDResult = sizeof(FMTDResult); // 16
    static_assert(sizeof(FMTDResult) == 0x10, "Size of FMTDResult is not correct.");
	auto constexpr FMTDResult_Direction_Offset = offsetof(FMTDResult, Direction);
	static_assert(FMTDResult_Direction_Offset == 0x0, "FMTDResult::Direction offset is not 0");
	auto constexpr FMTDResult_Distance_Offset = offsetof(FMTDResult, Distance);
	static_assert(FMTDResult_Distance_Offset == 0xc, "FMTDResult::Distance offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
