#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogSwimStart // Size: 0xA0
 : public FLogBase // Size: 0x58
{
public:
    FWuLogCharacter Character; /* Ofs: 0x58 Size: 0x48 StructProperty TslGame.WuLogSwimStart.Character */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogSwimStart = sizeof(FWuLogSwimStart); // 160
    static_assert(sizeof(FWuLogSwimStart) == 0xA0, "Size of FWuLogSwimStart is not correct.");
	auto constexpr FWuLogSwimStart_Character_Offset = offsetof(FWuLogSwimStart, Character);
	static_assert(FWuLogSwimStart_Character_Offset == 0x58, "FWuLogSwimStart::Character offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
