#pragma once
#include "FAIDataProviderValue.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAIDataProviderTypedValue // Size: 0x28
 : public FAIDataProviderValue // Size: 0x20
{
public:
    ExternalPtr<struct UClass> PropertyType; /* Ofs: 0x20 Size: 0x8 ClassProperty AIModule.AIDataProviderTypedValue.PropertyType */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAIDataProviderTypedValue = sizeof(FAIDataProviderTypedValue); // 40
    static_assert(sizeof(FAIDataProviderTypedValue) == 0x28, "Size of FAIDataProviderTypedValue is not correct.");
	auto constexpr FAIDataProviderTypedValue_PropertyType_Offset = offsetof(FAIDataProviderTypedValue, PropertyType);
	static_assert(FAIDataProviderTypedValue_PropertyType_Offset == 0x20, "FAIDataProviderTypedValue::PropertyType offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
