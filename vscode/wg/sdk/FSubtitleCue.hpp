#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSubtitleCue // Size: 0x20
{
public:
    FText Text; /* Ofs: 0x0 Size: 0x18 TextProperty Engine.SubtitleCue.Text */
    float Time; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.SubtitleCue.Time */
    uint8_t UnknownData1C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSubtitleCue = sizeof(FSubtitleCue); // 32
    static_assert(sizeof(FSubtitleCue) == 0x20, "Size of FSubtitleCue is not correct.");
	auto constexpr FSubtitleCue_Text_Offset = offsetof(FSubtitleCue, Text);
	static_assert(FSubtitleCue_Text_Offset == 0x0, "FSubtitleCue::Text offset is not 0");
	auto constexpr FSubtitleCue_Time_Offset = offsetof(FSubtitleCue, Time);
	static_assert(FSubtitleCue_Time_Offset == 0x18, "FSubtitleCue::Time offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
