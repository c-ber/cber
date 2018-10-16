#pragma once
#include "EEmitterDynamicParameterValue.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEmitterDynamicParameter // Size: 0x50
{
public:
    FName ParamName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.EmitterDynamicParameter.ParamName */
    bool bUseEmitterTime : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.EmitterDynamicParameter.bUseEmitterTime */
    bool bSpawnTimeOnly : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 02 BoolProperty Engine.EmitterDynamicParameter.bSpawnTimeOnly */
    uint8_t UnknownData9[0x3];
    TEnumAsByte<enum EEmitterDynamicParameterValue> ValueMethod; /* Ofs: 0xC Size: 0x1 ByteProperty Engine.EmitterDynamicParameter.ValueMethod */
    uint8_t UnknownDataD[0x3];
    bool bScaleVelocityByParamValue; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty Engine.EmitterDynamicParameter.bScaleVelocityByParamValue */
    uint8_t UnknownData11[0x7];
    FRawDistributionFloat ParamValue; /* Ofs: 0x18 Size: 0x38 StructProperty Engine.EmitterDynamicParameter.ParamValue */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEmitterDynamicParameter = sizeof(FEmitterDynamicParameter); // 80
    static_assert(sizeof(FEmitterDynamicParameter) == 0x50, "Size of FEmitterDynamicParameter is not correct.");
	auto constexpr FEmitterDynamicParameter_ParamName_Offset = offsetof(FEmitterDynamicParameter, ParamName);
	static_assert(FEmitterDynamicParameter_ParamName_Offset == 0x0, "FEmitterDynamicParameter::ParamName offset is not 0");
	auto constexpr FEmitterDynamicParameter_ValueMethod_Offset = offsetof(FEmitterDynamicParameter, ValueMethod);
	static_assert(FEmitterDynamicParameter_ValueMethod_Offset == 0xc, "FEmitterDynamicParameter::ValueMethod offset is not c");
	auto constexpr FEmitterDynamicParameter_ParamValue_Offset = offsetof(FEmitterDynamicParameter, ParamValue);
	static_assert(FEmitterDynamicParameter_ParamValue_Offset == 0x18, "FEmitterDynamicParameter::ParamValue offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
