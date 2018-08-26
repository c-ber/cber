#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSurportQualityLevel // Size: 0x20
{
public:
    int32_t QualityLevel; /* Ofs: 0x0 Size: 0x4 IntProperty TslGame.SurportQualityLevel.QualityLevel */
    uint8_t UnknownData4[0x4];
    FText DisplayQualityLevelName; /* Ofs: 0x8 Size: 0x18 TextProperty TslGame.SurportQualityLevel.DisplayQualityLevelName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSurportQualityLevel = sizeof(FSurportQualityLevel); // 32
    static_assert(sizeof(FSurportQualityLevel) == 0x20, "Size of FSurportQualityLevel is not correct.");
	auto constexpr FSurportQualityLevel_QualityLevel_Offset = offsetof(FSurportQualityLevel, QualityLevel);
	static_assert(FSurportQualityLevel_QualityLevel_Offset == 0x0, "FSurportQualityLevel::QualityLevel offset is not 0");
	auto constexpr FSurportQualityLevel_DisplayQualityLevelName_Offset = offsetof(FSurportQualityLevel, DisplayQualityLevelName);
	static_assert(FSurportQualityLevel_DisplayQualityLevelName_Offset == 0x8, "FSurportQualityLevel::DisplayQualityLevelName offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
