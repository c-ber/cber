#pragma once
#include "FMaterialInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FScalarMaterialInput // Size: 0x40
 : public FMaterialInput // Size: 0x38
{
public:
    bool UseConstant; /* Ofs: 0x38 Size: 0x1 BitMask: 01 BoolProperty Engine.ScalarMaterialInput.UseConstant */
    uint8_t UnknownData39[0x3];
    float Constant; /* Ofs: 0x3C Size: 0x4 FloatProperty Engine.ScalarMaterialInput.Constant */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFScalarMaterialInput = sizeof(FScalarMaterialInput); // 64
    static_assert(sizeof(FScalarMaterialInput) == 0x40, "Size of FScalarMaterialInput is not correct.");
	auto constexpr FScalarMaterialInput_Constant_Offset = offsetof(FScalarMaterialInput, Constant);
	static_assert(FScalarMaterialInput_Constant_Offset == 0x3c, "FScalarMaterialInput::Constant offset is not 3c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
