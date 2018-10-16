#pragma once
#include "EAnimatableCustomizableTypes.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimatableCustomizableObjectData // Size: 0x18
{
public:
    TEnumAsByte<enum EAnimatableCustomizableTypes> ParamType; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.AnimatableCustomizableObjectData.ParamType */
    uint8_t UnknownData1[0x7];
    TArray<struct FName> AnimatableCustomizableObjectNames; /* Ofs: 0x8 Size: 0x10 ArrayProperty TslGame.AnimatableCustomizableObjectData.AnimatableCustomizableObjectNames */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimatableCustomizableObjectData = sizeof(FAnimatableCustomizableObjectData); // 24
    static_assert(sizeof(FAnimatableCustomizableObjectData) == 0x18, "Size of FAnimatableCustomizableObjectData is not correct.");
	auto constexpr FAnimatableCustomizableObjectData_ParamType_Offset = offsetof(FAnimatableCustomizableObjectData, ParamType);
	static_assert(FAnimatableCustomizableObjectData_ParamType_Offset == 0x0, "FAnimatableCustomizableObjectData::ParamType offset is not 0");
	auto constexpr FAnimatableCustomizableObjectData_AnimatableCustomizableObjectNames_Offset = offsetof(FAnimatableCustomizableObjectData, AnimatableCustomizableObjectNames);
	static_assert(FAnimatableCustomizableObjectData_AnimatableCustomizableObjectNames_Offset == 0x8, "FAnimatableCustomizableObjectData::AnimatableCustomizableObjectNames offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
