#pragma once
#include "FFontData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTypefaceEntry // Size: 0x28
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty SlateCore.TypefaceEntry.Name */
    FFontData Font; /* Ofs: 0x8 Size: 0x20 StructProperty SlateCore.TypefaceEntry.Font */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTypefaceEntry = sizeof(FTypefaceEntry); // 40
    static_assert(sizeof(FTypefaceEntry) == 0x28, "Size of FTypefaceEntry is not correct.");
	auto constexpr FTypefaceEntry_Name_Offset = offsetof(FTypefaceEntry, Name);
	static_assert(FTypefaceEntry_Name_Offset == 0x0, "FTypefaceEntry::Name offset is not 0");
	auto constexpr FTypefaceEntry_Font_Offset = offsetof(FTypefaceEntry, Font);
	static_assert(FTypefaceEntry_Font_Offset == 0x8, "FTypefaceEntry::Font offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
