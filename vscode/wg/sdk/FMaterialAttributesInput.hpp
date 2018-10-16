#pragma once
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMaterialAttributesInput // Size: 0x40
 : public FExpressionInput // Size: 0x38
{
public:
    int32_t PropertyConnectedBitmask; /* Ofs: 0x38 Size: 0x4 IntProperty Engine.MaterialAttributesInput.PropertyConnectedBitmask */
    uint8_t UnknownData3C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMaterialAttributesInput = sizeof(FMaterialAttributesInput); // 64
    static_assert(sizeof(FMaterialAttributesInput) == 0x40, "Size of FMaterialAttributesInput is not correct.");
	auto constexpr FMaterialAttributesInput_PropertyConnectedBitmask_Offset = offsetof(FMaterialAttributesInput, PropertyConnectedBitmask);
	static_assert(FMaterialAttributesInput_PropertyConnectedBitmask_Offset == 0x38, "FMaterialAttributesInput::PropertyConnectedBitmask offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
