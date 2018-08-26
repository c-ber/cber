#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFogHeightDensityPair // Size: 0x8
{
public:
    float Height; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.FogHeightDensityPair.Height */
    float Density; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.FogHeightDensityPair.Density */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFogHeightDensityPair = sizeof(FFogHeightDensityPair); // 8
    static_assert(sizeof(FFogHeightDensityPair) == 0x8, "Size of FFogHeightDensityPair is not correct.");
	auto constexpr FFogHeightDensityPair_Height_Offset = offsetof(FFogHeightDensityPair, Height);
	static_assert(FFogHeightDensityPair_Height_Offset == 0x0, "FFogHeightDensityPair::Height offset is not 0");
	auto constexpr FFogHeightDensityPair_Density_Offset = offsetof(FFogHeightDensityPair, Density);
	static_assert(FFogHeightDensityPair_Density_Offset == 0x4, "FFogHeightDensityPair::Density offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
