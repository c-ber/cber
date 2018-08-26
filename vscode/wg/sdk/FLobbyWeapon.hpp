#pragma once
#include "FLobbyItem.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLobbyWeapon // Size: 0x28
 : public FLobbyItem // Size: 0x20
{
public:
    ExternalPtr<struct UTslWeapon> TslWeapon; /* Ofs: 0x20 Size: 0x8 ObjectProperty TslGame.LobbyWeapon.TslWeapon */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLobbyWeapon = sizeof(FLobbyWeapon); // 40
    static_assert(sizeof(FLobbyWeapon) == 0x28, "Size of FLobbyWeapon is not correct.");
	auto constexpr FLobbyWeapon_TslWeapon_Offset = offsetof(FLobbyWeapon, TslWeapon);
	static_assert(FLobbyWeapon_TslWeapon_Offset == 0x20, "FLobbyWeapon::TslWeapon offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
