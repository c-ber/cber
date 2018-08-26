#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFloatInterval // Size: 0x8
{
public:
    float Min; /* Ofs: 0x0 Size: 0x4 FloatProperty CoreUObject.FloatInterval.Min */
    float Max; /* Ofs: 0x4 Size: 0x4 FloatProperty CoreUObject.FloatInterval.Max */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFloatInterval = sizeof(FFloatInterval); // 8
    static_assert(sizeof(FFloatInterval) == 0x8, "Size of FFloatInterval is not correct.");
	auto constexpr FFloatInterval_Min_Offset = offsetof(FFloatInterval, Min);
	static_assert(FFloatInterval_Min_Offset == 0x0, "FFloatInterval::Min offset is not 0");
	auto constexpr FFloatInterval_Max_Offset = offsetof(FFloatInterval, Max);
	static_assert(FFloatInterval_Max_Offset == 0x4, "FFloatInterval::Max offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
