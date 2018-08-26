#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomGamePadSensitiveData // Size: 0x10
{
public:
    FName GamePadSensitiveName; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.CustomGamePadSensitiveData.GamePadSensitiveName */
    float GamePadSensitivity; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.CustomGamePadSensitiveData.GamePadSensitivity */
    float LastConvertedGamePadSensitivity; /* Ofs: 0xC Size: 0x4 FloatProperty TslGame.CustomGamePadSensitiveData.LastConvertedGamePadSensitivity */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomGamePadSensitiveData = sizeof(FCustomGamePadSensitiveData); // 16
    static_assert(sizeof(FCustomGamePadSensitiveData) == 0x10, "Size of FCustomGamePadSensitiveData is not correct.");
	auto constexpr FCustomGamePadSensitiveData_GamePadSensitiveName_Offset = offsetof(FCustomGamePadSensitiveData, GamePadSensitiveName);
	static_assert(FCustomGamePadSensitiveData_GamePadSensitiveName_Offset == 0x0, "FCustomGamePadSensitiveData::GamePadSensitiveName offset is not 0");
	auto constexpr FCustomGamePadSensitiveData_GamePadSensitivity_Offset = offsetof(FCustomGamePadSensitiveData, GamePadSensitivity);
	static_assert(FCustomGamePadSensitiveData_GamePadSensitivity_Offset == 0x8, "FCustomGamePadSensitiveData::GamePadSensitivity offset is not 8");
	auto constexpr FCustomGamePadSensitiveData_LastConvertedGamePadSensitivity_Offset = offsetof(FCustomGamePadSensitiveData, LastConvertedGamePadSensitivity);
	static_assert(FCustomGamePadSensitiveData_LastConvertedGamePadSensitivity_Offset == 0xc, "FCustomGamePadSensitiveData::LastConvertedGamePadSensitivity offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
