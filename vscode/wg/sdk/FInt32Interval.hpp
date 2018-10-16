#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInt32Interval // Size: 0x8
{
public:
    int32_t Min; /* Ofs: 0x0 Size: 0x4 IntProperty CoreUObject.Int32Interval.Min */
    int32_t Max; /* Ofs: 0x4 Size: 0x4 IntProperty CoreUObject.Int32Interval.Max */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInt32Interval = sizeof(FInt32Interval); // 8
    static_assert(sizeof(FInt32Interval) == 0x8, "Size of FInt32Interval is not correct.");
	auto constexpr FInt32Interval_Min_Offset = offsetof(FInt32Interval, Min);
	static_assert(FInt32Interval_Min_Offset == 0x0, "FInt32Interval::Min offset is not 0");
	auto constexpr FInt32Interval_Max_Offset = offsetof(FInt32Interval, Max);
	static_assert(FInt32Interval_Max_Offset == 0x4, "FInt32Interval::Max offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
