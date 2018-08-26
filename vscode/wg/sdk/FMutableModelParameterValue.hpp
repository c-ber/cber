#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMutableModelParameterValue // Size: 0x18
{
public:
    FString Name; /* Ofs: 0x0 Size: 0x10 StrProperty CustomizableObject.MutableModelParameterValue.Name */
    int32_t Value; /* Ofs: 0x10 Size: 0x4 IntProperty CustomizableObject.MutableModelParameterValue.Value */
    uint8_t UnknownData14[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMutableModelParameterValue = sizeof(FMutableModelParameterValue); // 24
    static_assert(sizeof(FMutableModelParameterValue) == 0x18, "Size of FMutableModelParameterValue is not correct.");
	auto constexpr FMutableModelParameterValue_Name_Offset = offsetof(FMutableModelParameterValue, Name);
	static_assert(FMutableModelParameterValue_Name_Offset == 0x0, "FMutableModelParameterValue::Name offset is not 0");
	auto constexpr FMutableModelParameterValue_Value_Offset = offsetof(FMutableModelParameterValue, Value);
	static_assert(FMutableModelParameterValue_Value_Offset == 0x10, "FMutableModelParameterValue::Value offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
