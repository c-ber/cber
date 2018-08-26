#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTypeface // Size: 0x10
{
public:
    TArray<struct FTypefaceEntry> Fonts; /* Ofs: 0x0 Size: 0x10 ArrayProperty SlateCore.Typeface.Fonts */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTypeface = sizeof(FTypeface); // 16
    static_assert(sizeof(FTypeface) == 0x10, "Size of FTypeface is not correct.");
	auto constexpr FTypeface_Fonts_Offset = offsetof(FTypeface, Fonts);
	static_assert(FTypeface_Fonts_Offset == 0x0, "FTypeface::Fonts offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
