#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomFieldData // Size: 0x20
{
public:
    FString Key; /* Ofs: 0x0 Size: 0x10 StrProperty BuildPatchServices.CustomFieldData.Key */
    FString Value; /* Ofs: 0x10 Size: 0x10 StrProperty BuildPatchServices.CustomFieldData.Value */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomFieldData = sizeof(FCustomFieldData); // 32
    static_assert(sizeof(FCustomFieldData) == 0x20, "Size of FCustomFieldData is not correct.");
	auto constexpr FCustomFieldData_Key_Offset = offsetof(FCustomFieldData, Key);
	static_assert(FCustomFieldData_Key_Offset == 0x0, "FCustomFieldData::Key offset is not 0");
	auto constexpr FCustomFieldData_Value_Offset = offsetof(FCustomFieldData, Value);
	static_assert(FCustomFieldData_Value_Offset == 0x10, "FCustomFieldData::Value offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
