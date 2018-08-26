#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomMouseSensitiveData // Size: 0x10
{
public:
    FName MouseSensitiveName; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.CustomMouseSensitiveData.MouseSensitiveName */
    float MouseSensitivity; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.CustomMouseSensitiveData.MouseSensitivity */
    float LastConvertedMouseSensitivity; /* Ofs: 0xC Size: 0x4 FloatProperty TslGame.CustomMouseSensitiveData.LastConvertedMouseSensitivity */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomMouseSensitiveData = sizeof(FCustomMouseSensitiveData); // 16
    static_assert(sizeof(FCustomMouseSensitiveData) == 0x10, "Size of FCustomMouseSensitiveData is not correct.");
	auto constexpr FCustomMouseSensitiveData_MouseSensitiveName_Offset = offsetof(FCustomMouseSensitiveData, MouseSensitiveName);
	static_assert(FCustomMouseSensitiveData_MouseSensitiveName_Offset == 0x0, "FCustomMouseSensitiveData::MouseSensitiveName offset is not 0");
	auto constexpr FCustomMouseSensitiveData_MouseSensitivity_Offset = offsetof(FCustomMouseSensitiveData, MouseSensitivity);
	static_assert(FCustomMouseSensitiveData_MouseSensitivity_Offset == 0x8, "FCustomMouseSensitiveData::MouseSensitivity offset is not 8");
	auto constexpr FCustomMouseSensitiveData_LastConvertedMouseSensitivity_Offset = offsetof(FCustomMouseSensitiveData, LastConvertedMouseSensitivity);
	static_assert(FCustomMouseSensitiveData_LastConvertedMouseSensitivity_Offset == 0xc, "FCustomMouseSensitiveData::LastConvertedMouseSensitivity offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
