#pragma once
#include "FAIDataProviderTypedValue.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAIDataProviderBoolValue // Size: 0x30
 : public FAIDataProviderTypedValue // Size: 0x28
{
public:
    bool DefaultValue; /* Ofs: 0x28 Size: 0x1 BitMask: 01 BoolProperty AIModule.AIDataProviderBoolValue.DefaultValue */
    uint8_t UnknownData29[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAIDataProviderBoolValue = sizeof(FAIDataProviderBoolValue); // 48
    static_assert(sizeof(FAIDataProviderBoolValue) == 0x30, "Size of FAIDataProviderBoolValue is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
