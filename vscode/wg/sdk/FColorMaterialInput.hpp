#pragma once
#include "FMaterialInput.hpp"
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FColorMaterialInput // Size: 0x40
 : public FMaterialInput // Size: 0x38
{
public:
    bool UseConstant; /* Ofs: 0x38 Size: 0x1 BitMask: 01 BoolProperty Engine.ColorMaterialInput.UseConstant */
    uint8_t UnknownData39[0x3];
    FColor Constant; /* Ofs: 0x3C Size: 0x4 StructProperty Engine.ColorMaterialInput.Constant */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFColorMaterialInput = sizeof(FColorMaterialInput); // 64
    static_assert(sizeof(FColorMaterialInput) == 0x40, "Size of FColorMaterialInput is not correct.");
	auto constexpr FColorMaterialInput_Constant_Offset = offsetof(FColorMaterialInput, Constant);
	static_assert(FColorMaterialInput_Constant_Offset == 0x3c, "FColorMaterialInput::Constant offset is not 3c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
