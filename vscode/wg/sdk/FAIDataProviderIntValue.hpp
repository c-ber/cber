#pragma once
#include "FAIDataProviderTypedValue.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAIDataProviderIntValue // Size: 0x30
 : public FAIDataProviderTypedValue // Size: 0x28
{
public:
    int32_t DefaultValue; /* Ofs: 0x28 Size: 0x4 IntProperty AIModule.AIDataProviderIntValue.DefaultValue */
    uint8_t UnknownData2C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAIDataProviderIntValue = sizeof(FAIDataProviderIntValue); // 48
    static_assert(sizeof(FAIDataProviderIntValue) == 0x30, "Size of FAIDataProviderIntValue is not correct.");
	auto constexpr FAIDataProviderIntValue_DefaultValue_Offset = offsetof(FAIDataProviderIntValue, DefaultValue);
	static_assert(FAIDataProviderIntValue_DefaultValue_Offset == 0x28, "FAIDataProviderIntValue::DefaultValue offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
