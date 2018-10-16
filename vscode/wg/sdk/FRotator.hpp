#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRotator // Size: 0xC
{
public:
    float Pitch; /* Ofs: 0x0 Size: 0x4 FloatProperty CoreUObject.Rotator.Pitch */
    float Yaw; /* Ofs: 0x4 Size: 0x4 FloatProperty CoreUObject.Rotator.Yaw */
    float Roll; /* Ofs: 0x8 Size: 0x4 FloatProperty CoreUObject.Rotator.Roll */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRotator = sizeof(FRotator); // 12
    static_assert(sizeof(FRotator) == 0xC, "Size of FRotator is not correct.");
	auto constexpr FRotator_Pitch_Offset = offsetof(FRotator, Pitch);
	static_assert(FRotator_Pitch_Offset == 0x0, "FRotator::Pitch offset is not 0");
	auto constexpr FRotator_Yaw_Offset = offsetof(FRotator, Yaw);
	static_assert(FRotator_Yaw_Offset == 0x4, "FRotator::Yaw offset is not 4");
	auto constexpr FRotator_Roll_Offset = offsetof(FRotator, Roll);
	static_assert(FRotator_Roll_Offset == 0x8, "FRotator::Roll offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
