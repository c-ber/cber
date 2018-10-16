#pragma once
#include "FLogBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogMatchEnd // Size: 0x68
 : public FLogBase // Size: 0x58
{
public:
    TArray<struct FWuLogCharacter> Characters; /* Ofs: 0x58 Size: 0x10 ArrayProperty TslGame.WuLogMatchEnd.Characters */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogMatchEnd = sizeof(FWuLogMatchEnd); // 104
    static_assert(sizeof(FWuLogMatchEnd) == 0x68, "Size of FWuLogMatchEnd is not correct.");
	auto constexpr FWuLogMatchEnd_Characters_Offset = offsetof(FWuLogMatchEnd, Characters);
	static_assert(FWuLogMatchEnd_Characters_Offset == 0x58, "FWuLogMatchEnd::Characters offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
