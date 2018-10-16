#pragma once
#include "FMaterialInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVector2MaterialInput // Size: 0x48
 : public FMaterialInput // Size: 0x38
{
public:
    bool UseConstant; /* Ofs: 0x38 Size: 0x1 BitMask: 01 BoolProperty Engine.Vector2MaterialInput.UseConstant */
    uint8_t UnknownData39[0x3];
    float ConstantX; /* Ofs: 0x3C Size: 0x4 FloatProperty Engine.Vector2MaterialInput.ConstantX */
    float ConstantY; /* Ofs: 0x40 Size: 0x4 FloatProperty Engine.Vector2MaterialInput.ConstantY */
    uint8_t UnknownData44[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVector2MaterialInput = sizeof(FVector2MaterialInput); // 72
    static_assert(sizeof(FVector2MaterialInput) == 0x48, "Size of FVector2MaterialInput is not correct.");
	auto constexpr FVector2MaterialInput_ConstantX_Offset = offsetof(FVector2MaterialInput, ConstantX);
	static_assert(FVector2MaterialInput_ConstantX_Offset == 0x3c, "FVector2MaterialInput::ConstantX offset is not 3c");
	auto constexpr FVector2MaterialInput_ConstantY_Offset = offsetof(FVector2MaterialInput, ConstantY);
	static_assert(FVector2MaterialInput_ConstantY_Offset == 0x40, "FVector2MaterialInput::ConstantY offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
