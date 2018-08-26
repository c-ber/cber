#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAIDataProviderValue // Size: 0x20
{
public:
    uint8_t UnknownData0[0x8];
    ExternalPtr<struct UProperty> CachedProperty; /* Ofs: 0x8 Size: 0x8 ObjectProperty AIModule.AIDataProviderValue.CachedProperty */
    ExternalPtr<struct UAIDataProvider> DataBinding; /* Ofs: 0x10 Size: 0x8 ObjectProperty AIModule.AIDataProviderValue.DataBinding */
    FName DataField; /* Ofs: 0x18 Size: 0x8 NameProperty AIModule.AIDataProviderValue.DataField */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAIDataProviderValue = sizeof(FAIDataProviderValue); // 32
    static_assert(sizeof(FAIDataProviderValue) == 0x20, "Size of FAIDataProviderValue is not correct.");
	auto constexpr FAIDataProviderValue_CachedProperty_Offset = offsetof(FAIDataProviderValue, CachedProperty);
	static_assert(FAIDataProviderValue_CachedProperty_Offset == 0x8, "FAIDataProviderValue::CachedProperty offset is not 8");
	auto constexpr FAIDataProviderValue_DataBinding_Offset = offsetof(FAIDataProviderValue, DataBinding);
	static_assert(FAIDataProviderValue_DataBinding_Offset == 0x10, "FAIDataProviderValue::DataBinding offset is not 10");
	auto constexpr FAIDataProviderValue_DataField_Offset = offsetof(FAIDataProviderValue, DataField);
	static_assert(FAIDataProviderValue_DataField_Offset == 0x18, "FAIDataProviderValue::DataField offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
