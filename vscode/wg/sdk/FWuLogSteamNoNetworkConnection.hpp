#pragma once
#include "FLogBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogSteamNoNetworkConnection // Size: 0x60
 : public FLogBase // Size: 0x58
{
public:
    int32_t DisconnectionCountPerGame; /* Ofs: 0x58 Size: 0x4 IntProperty TslGame.WuLogSteamNoNetworkConnection.DisconnectionCountPerGame */
    uint8_t UnknownData5C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogSteamNoNetworkConnection = sizeof(FWuLogSteamNoNetworkConnection); // 96
    static_assert(sizeof(FWuLogSteamNoNetworkConnection) == 0x60, "Size of FWuLogSteamNoNetworkConnection is not correct.");
	auto constexpr FWuLogSteamNoNetworkConnection_DisconnectionCountPerGame_Offset = offsetof(FWuLogSteamNoNetworkConnection, DisconnectionCountPerGame);
	static_assert(FWuLogSteamNoNetworkConnection_DisconnectionCountPerGame_Offset == 0x58, "FWuLogSteamNoNetworkConnection::DisconnectionCountPerGame offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
