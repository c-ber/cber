#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLocalizedSubtitle // Size: 0x28
{
public:
    FString LanguageExt; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.LocalizedSubtitle.LanguageExt */
    TArray<struct FSubtitleCue> Subtitles; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.LocalizedSubtitle.Subtitles */
    bool bMature : 1; /* Ofs: 0x20 Size: 0x1 BitMask: 01 BoolProperty Engine.LocalizedSubtitle.bMature */
    bool bManualWordWrap : 1; /* Ofs: 0x20 Size: 0x1 BitMask: 02 BoolProperty Engine.LocalizedSubtitle.bManualWordWrap */
    bool bSingleLine : 1; /* Ofs: 0x20 Size: 0x1 BitMask: 04 BoolProperty Engine.LocalizedSubtitle.bSingleLine */
    uint8_t UnknownData21[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLocalizedSubtitle = sizeof(FLocalizedSubtitle); // 40
    static_assert(sizeof(FLocalizedSubtitle) == 0x28, "Size of FLocalizedSubtitle is not correct.");
	auto constexpr FLocalizedSubtitle_LanguageExt_Offset = offsetof(FLocalizedSubtitle, LanguageExt);
	static_assert(FLocalizedSubtitle_LanguageExt_Offset == 0x0, "FLocalizedSubtitle::LanguageExt offset is not 0");
	auto constexpr FLocalizedSubtitle_Subtitles_Offset = offsetof(FLocalizedSubtitle, Subtitles);
	static_assert(FLocalizedSubtitle_Subtitles_Offset == 0x10, "FLocalizedSubtitle::Subtitles offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
