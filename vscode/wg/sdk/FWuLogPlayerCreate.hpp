#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogPlayerCreate // Size: 0xA0
 : public FLogBase // Size: 0x58
{
public:
    FWuLogCharacter Character; /* Ofs: 0x58 Size: 0x48 StructProperty TslGame.WuLogPlayerCreate.Character */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogPlayerCreate = sizeof(FWuLogPlayerCreate); // 160
    static_assert(sizeof(FWuLogPlayerCreate) == 0xA0, "Size of FWuLogPlayerCreate is not correct.");
	auto constexpr FWuLogPlayerCreate_Character_Offset = offsetof(FWuLogPlayerCreate, Character);
	static_assert(FWuLogPlayerCreate_Character_Offset == 0x58, "FWuLogPlayerCreate::Character offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
