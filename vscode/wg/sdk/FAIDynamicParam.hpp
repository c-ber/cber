#pragma once
#include "EAIParamType.hpp"
#include "FBlackboardKeySelector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAIDynamicParam // Size: 0x38
{
public:
    FName ParamName; /* Ofs: 0x0 Size: 0x8 NameProperty AIModule.AIDynamicParam.ParamName */
    TEnumAsByte<enum EAIParamType> ParamType; /* Ofs: 0x8 Size: 0x1 EnumProperty AIModule.AIDynamicParam.ParamType */
    uint8_t UnknownData9[0x3];
    float Value; /* Ofs: 0xC Size: 0x4 FloatProperty AIModule.AIDynamicParam.Value */
    FBlackboardKeySelector BBKey; /* Ofs: 0x10 Size: 0x28 StructProperty AIModule.AIDynamicParam.BBKey */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAIDynamicParam = sizeof(FAIDynamicParam); // 56
    static_assert(sizeof(FAIDynamicParam) == 0x38, "Size of FAIDynamicParam is not correct.");
	auto constexpr FAIDynamicParam_ParamName_Offset = offsetof(FAIDynamicParam, ParamName);
	static_assert(FAIDynamicParam_ParamName_Offset == 0x0, "FAIDynamicParam::ParamName offset is not 0");
	auto constexpr FAIDynamicParam_ParamType_Offset = offsetof(FAIDynamicParam, ParamType);
	static_assert(FAIDynamicParam_ParamType_Offset == 0x8, "FAIDynamicParam::ParamType offset is not 8");
	auto constexpr FAIDynamicParam_Value_Offset = offsetof(FAIDynamicParam, Value);
	static_assert(FAIDynamicParam_Value_Offset == 0xc, "FAIDynamicParam::Value offset is not c");
	auto constexpr FAIDynamicParam_BBKey_Offset = offsetof(FAIDynamicParam, BBKey);
	static_assert(FAIDynamicParam_BBKey_Offset == 0x10, "FAIDynamicParam::BBKey offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
