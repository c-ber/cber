#pragma once
#include "FMaterialInput.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVectorMaterialInput // Size: 0x48
 : public FMaterialInput // Size: 0x38
{
public:
    bool UseConstant; /* Ofs: 0x38 Size: 0x1 BitMask: 01 BoolProperty Engine.VectorMaterialInput.UseConstant */
    uint8_t UnknownData39[0x3];
    FVector Constant; /* Ofs: 0x3C Size: 0xC StructProperty Engine.VectorMaterialInput.Constant */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVectorMaterialInput = sizeof(FVectorMaterialInput); // 72
    static_assert(sizeof(FVectorMaterialInput) == 0x48, "Size of FVectorMaterialInput is not correct.");
	auto constexpr FVectorMaterialInput_Constant_Offset = offsetof(FVectorMaterialInput, Constant);
	static_assert(FVectorMaterialInput_Constant_Offset == 0x3c, "FVectorMaterialInput::Constant offset is not 3c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
