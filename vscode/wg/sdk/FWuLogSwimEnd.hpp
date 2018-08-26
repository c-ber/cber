#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogSwimEnd // Size: 0xA0
 : public FLogBase // Size: 0x58
{
public:
    FWuLogCharacter Character; /* Ofs: 0x58 Size: 0x48 StructProperty TslGame.WuLogSwimEnd.Character */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogSwimEnd = sizeof(FWuLogSwimEnd); // 160
    static_assert(sizeof(FWuLogSwimEnd) == 0xA0, "Size of FWuLogSwimEnd is not correct.");
	auto constexpr FWuLogSwimEnd_Character_Offset = offsetof(FWuLogSwimEnd, Character);
	static_assert(FWuLogSwimEnd_Character_Offset == 0x58, "FWuLogSwimEnd::Character offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
