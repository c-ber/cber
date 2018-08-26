#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFogHeightDensityPair2 // Size: 0x8
{
public:
    float Height; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.FogHeightDensityPair2.Height */
    float Density; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.FogHeightDensityPair2.Density */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFogHeightDensityPair2 = sizeof(FFogHeightDensityPair2); // 8
    static_assert(sizeof(FFogHeightDensityPair2) == 0x8, "Size of FFogHeightDensityPair2 is not correct.");
	auto constexpr FFogHeightDensityPair2_Height_Offset = offsetof(FFogHeightDensityPair2, Height);
	static_assert(FFogHeightDensityPair2_Height_Offset == 0x0, "FFogHeightDensityPair2::Height offset is not 0");
	auto constexpr FFogHeightDensityPair2_Density_Offset = offsetof(FFogHeightDensityPair2, Density);
	static_assert(FFogHeightDensityPair2_Density_Offset == 0x4, "FFogHeightDensityPair2::Density offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
