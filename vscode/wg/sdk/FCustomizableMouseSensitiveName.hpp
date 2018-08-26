#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomizableMouseSensitiveName // Size: 0x28
{
public:
    FText DisplayName; /* Ofs: 0x0 Size: 0x18 TextProperty TslGame.CustomizableMouseSensitiveName.DisplayName */
    FName MouseSensitiveName; /* Ofs: 0x18 Size: 0x8 NameProperty TslGame.CustomizableMouseSensitiveName.MouseSensitiveName */
    float MouseSensitivity; /* Ofs: 0x20 Size: 0x4 FloatProperty TslGame.CustomizableMouseSensitiveName.MouseSensitivity */
    uint8_t UnknownData24[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomizableMouseSensitiveName = sizeof(FCustomizableMouseSensitiveName); // 40
    static_assert(sizeof(FCustomizableMouseSensitiveName) == 0x28, "Size of FCustomizableMouseSensitiveName is not correct.");
	auto constexpr FCustomizableMouseSensitiveName_DisplayName_Offset = offsetof(FCustomizableMouseSensitiveName, DisplayName);
	static_assert(FCustomizableMouseSensitiveName_DisplayName_Offset == 0x0, "FCustomizableMouseSensitiveName::DisplayName offset is not 0");
	auto constexpr FCustomizableMouseSensitiveName_MouseSensitiveName_Offset = offsetof(FCustomizableMouseSensitiveName, MouseSensitiveName);
	static_assert(FCustomizableMouseSensitiveName_MouseSensitiveName_Offset == 0x18, "FCustomizableMouseSensitiveName::MouseSensitiveName offset is not 18");
	auto constexpr FCustomizableMouseSensitiveName_MouseSensitivity_Offset = offsetof(FCustomizableMouseSensitiveName, MouseSensitivity);
	static_assert(FCustomizableMouseSensitiveName_MouseSensitivity_Offset == 0x20, "FCustomizableMouseSensitiveName::MouseSensitivity offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
