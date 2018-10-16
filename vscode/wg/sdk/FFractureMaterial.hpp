#pragma once
#include "FVector2D.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFractureMaterial // Size: 0x24
{
public:
    FVector2D UVScale; /* Ofs: 0x0 Size: 0x8 StructProperty Engine.FractureMaterial.UVScale */
    FVector2D UVOffset; /* Ofs: 0x8 Size: 0x8 StructProperty Engine.FractureMaterial.UVOffset */
    FVector Tangent; /* Ofs: 0x10 Size: 0xC StructProperty Engine.FractureMaterial.Tangent */
    float UAngle; /* Ofs: 0x1C Size: 0x4 FloatProperty Engine.FractureMaterial.UAngle */
    int32_t InteriorElementIndex; /* Ofs: 0x20 Size: 0x4 IntProperty Engine.FractureMaterial.InteriorElementIndex */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFractureMaterial = sizeof(FFractureMaterial); // 36
    static_assert(sizeof(FFractureMaterial) == 0x24, "Size of FFractureMaterial is not correct.");
	auto constexpr FFractureMaterial_UVScale_Offset = offsetof(FFractureMaterial, UVScale);
	static_assert(FFractureMaterial_UVScale_Offset == 0x0, "FFractureMaterial::UVScale offset is not 0");
	auto constexpr FFractureMaterial_UVOffset_Offset = offsetof(FFractureMaterial, UVOffset);
	static_assert(FFractureMaterial_UVOffset_Offset == 0x8, "FFractureMaterial::UVOffset offset is not 8");
	auto constexpr FFractureMaterial_Tangent_Offset = offsetof(FFractureMaterial, Tangent);
	static_assert(FFractureMaterial_Tangent_Offset == 0x10, "FFractureMaterial::Tangent offset is not 10");
	auto constexpr FFractureMaterial_UAngle_Offset = offsetof(FFractureMaterial, UAngle);
	static_assert(FFractureMaterial_UAngle_Offset == 0x1c, "FFractureMaterial::UAngle offset is not 1c");
	auto constexpr FFractureMaterial_InteriorElementIndex_Offset = offsetof(FFractureMaterial, InteriorElementIndex);
	static_assert(FFractureMaterial_InteriorElementIndex_Offset == 0x20, "FFractureMaterial::InteriorElementIndex offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
