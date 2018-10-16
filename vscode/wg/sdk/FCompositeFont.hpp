#pragma once
#include "FTypeface.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCompositeFont // Size: 0x28
{
public:
    FTypeface DefaultTypeface; /* Ofs: 0x0 Size: 0x10 StructProperty SlateCore.CompositeFont.DefaultTypeface */
    TArray<struct FCompositeSubFont> SubTypefaces; /* Ofs: 0x10 Size: 0x10 ArrayProperty SlateCore.CompositeFont.SubTypefaces */
    uint8_t UnknownData20[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCompositeFont = sizeof(FCompositeFont); // 40
    static_assert(sizeof(FCompositeFont) == 0x28, "Size of FCompositeFont is not correct.");
	auto constexpr FCompositeFont_DefaultTypeface_Offset = offsetof(FCompositeFont, DefaultTypeface);
	static_assert(FCompositeFont_DefaultTypeface_Offset == 0x0, "FCompositeFont::DefaultTypeface offset is not 0");
	auto constexpr FCompositeFont_SubTypefaces_Offset = offsetof(FCompositeFont, SubTypefaces);
	static_assert(FCompositeFont_SubTypefaces_Offset == 0x10, "FCompositeFont::SubTypefaces offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
