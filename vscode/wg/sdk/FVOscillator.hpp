#pragma once
#include "FFOscillator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVOscillator // Size: 0x24
{
public:
    FFOscillator X; /* Ofs: 0x0 Size: 0xC StructProperty Engine.VOscillator.X */
    FFOscillator Y; /* Ofs: 0xC Size: 0xC StructProperty Engine.VOscillator.Y */
    FFOscillator Z; /* Ofs: 0x18 Size: 0xC StructProperty Engine.VOscillator.Z */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVOscillator = sizeof(FVOscillator); // 36
    static_assert(sizeof(FVOscillator) == 0x24, "Size of FVOscillator is not correct.");
	auto constexpr FVOscillator_X_Offset = offsetof(FVOscillator, X);
	static_assert(FVOscillator_X_Offset == 0x0, "FVOscillator::X offset is not 0");
	auto constexpr FVOscillator_Y_Offset = offsetof(FVOscillator, Y);
	static_assert(FVOscillator_Y_Offset == 0xc, "FVOscillator::Y offset is not c");
	auto constexpr FVOscillator_Z_Offset = offsetof(FVOscillator, Z);
	static_assert(FVOscillator_Z_Offset == 0x18, "FVOscillator::Z offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
