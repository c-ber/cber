#pragma once
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDirectionTextData // Size: 0x28
{
public:
    FText DirectionText; /* Ofs: 0x0 Size: 0x18 TextProperty TslGame.DirectionTextData.DirectionText */
    FLinearColor TextColor; /* Ofs: 0x18 Size: 0x10 StructProperty TslGame.DirectionTextData.TextColor */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDirectionTextData = sizeof(FDirectionTextData); // 40
    static_assert(sizeof(FDirectionTextData) == 0x28, "Size of FDirectionTextData is not correct.");
	auto constexpr FDirectionTextData_DirectionText_Offset = offsetof(FDirectionTextData, DirectionText);
	static_assert(FDirectionTextData_DirectionText_Offset == 0x0, "FDirectionTextData::DirectionText offset is not 0");
	auto constexpr FDirectionTextData_TextColor_Offset = offsetof(FDirectionTextData, TextColor);
	static_assert(FDirectionTextData_TextColor_Offset == 0x18, "FDirectionTextData::TextColor offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
