#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomizableGamePadSensitiveName // Size: 0x30
{
public:
    FText DisplayName; /* Ofs: 0x0 Size: 0x18 TextProperty TslGame.CustomizableGamePadSensitiveName.DisplayName */
    FName GamePadSensitiveName; /* Ofs: 0x18 Size: 0x8 NameProperty TslGame.CustomizableGamePadSensitiveName.GamePadSensitiveName */
    float GamePadSensitivity; /* Ofs: 0x20 Size: 0x4 FloatProperty TslGame.CustomizableGamePadSensitiveName.GamePadSensitivity */
    uint8_t UnknownData24[0x4];
    ExternalPtr<struct UCurveFloat> GamePadCurve; /* Ofs: 0x28 Size: 0x8 ObjectProperty TslGame.CustomizableGamePadSensitiveName.GamePadCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomizableGamePadSensitiveName = sizeof(FCustomizableGamePadSensitiveName); // 48
    static_assert(sizeof(FCustomizableGamePadSensitiveName) == 0x30, "Size of FCustomizableGamePadSensitiveName is not correct.");
	auto constexpr FCustomizableGamePadSensitiveName_DisplayName_Offset = offsetof(FCustomizableGamePadSensitiveName, DisplayName);
	static_assert(FCustomizableGamePadSensitiveName_DisplayName_Offset == 0x0, "FCustomizableGamePadSensitiveName::DisplayName offset is not 0");
	auto constexpr FCustomizableGamePadSensitiveName_GamePadSensitiveName_Offset = offsetof(FCustomizableGamePadSensitiveName, GamePadSensitiveName);
	static_assert(FCustomizableGamePadSensitiveName_GamePadSensitiveName_Offset == 0x18, "FCustomizableGamePadSensitiveName::GamePadSensitiveName offset is not 18");
	auto constexpr FCustomizableGamePadSensitiveName_GamePadSensitivity_Offset = offsetof(FCustomizableGamePadSensitiveName, GamePadSensitivity);
	static_assert(FCustomizableGamePadSensitiveName_GamePadSensitivity_Offset == 0x20, "FCustomizableGamePadSensitiveName::GamePadSensitivity offset is not 20");
	auto constexpr FCustomizableGamePadSensitiveName_GamePadCurve_Offset = offsetof(FCustomizableGamePadSensitiveName, GamePadCurve);
	static_assert(FCustomizableGamePadSensitiveName_GamePadCurve_Offset == 0x28, "FCustomizableGamePadSensitiveName::GamePadCurve offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
