#pragma once
#include "FFOscillator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FROscillator // Size: 0x24
{
public:
    FFOscillator Pitch; /* Ofs: 0x0 Size: 0xC StructProperty Engine.ROscillator.Pitch */
    FFOscillator Yaw; /* Ofs: 0xC Size: 0xC StructProperty Engine.ROscillator.Yaw */
    FFOscillator Roll; /* Ofs: 0x18 Size: 0xC StructProperty Engine.ROscillator.Roll */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFROscillator = sizeof(FROscillator); // 36
    static_assert(sizeof(FROscillator) == 0x24, "Size of FROscillator is not correct.");
	auto constexpr FROscillator_Pitch_Offset = offsetof(FROscillator, Pitch);
	static_assert(FROscillator_Pitch_Offset == 0x0, "FROscillator::Pitch offset is not 0");
	auto constexpr FROscillator_Yaw_Offset = offsetof(FROscillator, Yaw);
	static_assert(FROscillator_Yaw_Offset == 0xc, "FROscillator::Yaw offset is not c");
	auto constexpr FROscillator_Roll_Offset = offsetof(FROscillator, Roll);
	static_assert(FROscillator_Roll_Offset == 0x18, "FROscillator::Roll offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
