#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogPlayerKicked // Size: 0xB0
 : public FLogBase // Size: 0x58
{
public:
    FWuLogCharacter Character; /* Ofs: 0x58 Size: 0x48 StructProperty TslGame.WuLogPlayerKicked.Character */
    FString Reason; /* Ofs: 0xA0 Size: 0x10 StrProperty TslGame.WuLogPlayerKicked.Reason */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogPlayerKicked = sizeof(FWuLogPlayerKicked); // 176
    static_assert(sizeof(FWuLogPlayerKicked) == 0xB0, "Size of FWuLogPlayerKicked is not correct.");
	auto constexpr FWuLogPlayerKicked_Character_Offset = offsetof(FWuLogPlayerKicked, Character);
	static_assert(FWuLogPlayerKicked_Character_Offset == 0x58, "FWuLogPlayerKicked::Character offset is not 58");
	auto constexpr FWuLogPlayerKicked_Reason_Offset = offsetof(FWuLogPlayerKicked, Reason);
	static_assert(FWuLogPlayerKicked_Reason_Offset == 0xa0, "FWuLogPlayerKicked::Reason offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
