#pragma once
#include "FAIDataProviderTypedValue.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAIDataProviderFloatValue // Size: 0x30
 : public FAIDataProviderTypedValue // Size: 0x28
{
public:
    float DefaultValue; /* Ofs: 0x28 Size: 0x4 FloatProperty AIModule.AIDataProviderFloatValue.DefaultValue */
    uint8_t UnknownData2C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAIDataProviderFloatValue = sizeof(FAIDataProviderFloatValue); // 48
    static_assert(sizeof(FAIDataProviderFloatValue) == 0x30, "Size of FAIDataProviderFloatValue is not correct.");
	auto constexpr FAIDataProviderFloatValue_DefaultValue_Offset = offsetof(FAIDataProviderFloatValue, DefaultValue);
	static_assert(FAIDataProviderFloatValue_DefaultValue_Offset == 0x28, "FAIDataProviderFloatValue::DefaultValue offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
