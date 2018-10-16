#pragma once
#include "EAIParamType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEnvNamedValue // Size: 0x10
{
public:
    FName ParamName; /* Ofs: 0x0 Size: 0x8 NameProperty AIModule.EnvNamedValue.ParamName */
    TEnumAsByte<enum EAIParamType> ParamType; /* Ofs: 0x8 Size: 0x1 EnumProperty AIModule.EnvNamedValue.ParamType */
    uint8_t UnknownData9[0x3];
    float Value; /* Ofs: 0xC Size: 0x4 FloatProperty AIModule.EnvNamedValue.Value */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEnvNamedValue = sizeof(FEnvNamedValue); // 16
    static_assert(sizeof(FEnvNamedValue) == 0x10, "Size of FEnvNamedValue is not correct.");
	auto constexpr FEnvNamedValue_ParamName_Offset = offsetof(FEnvNamedValue, ParamName);
	static_assert(FEnvNamedValue_ParamName_Offset == 0x0, "FEnvNamedValue::ParamName offset is not 0");
	auto constexpr FEnvNamedValue_ParamType_Offset = offsetof(FEnvNamedValue, ParamType);
	static_assert(FEnvNamedValue_ParamType_Offset == 0x8, "FEnvNamedValue::ParamType offset is not 8");
	auto constexpr FEnvNamedValue_Value_Offset = offsetof(FEnvNamedValue, Value);
	static_assert(FEnvNamedValue_Value_Offset == 0xc, "FEnvNamedValue::Value offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
