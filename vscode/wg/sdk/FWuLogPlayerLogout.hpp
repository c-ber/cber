#pragma once
#include "FLogBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogPlayerLogout // Size: 0x78
 : public FLogBase // Size: 0x58
{
public:
    FString NetId; /* Ofs: 0x58 Size: 0x10 StrProperty TslGame.WuLogPlayerLogout.NetId */
    FString AccountId; /* Ofs: 0x68 Size: 0x10 StrProperty TslGame.WuLogPlayerLogout.AccountId */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogPlayerLogout = sizeof(FWuLogPlayerLogout); // 120
    static_assert(sizeof(FWuLogPlayerLogout) == 0x78, "Size of FWuLogPlayerLogout is not correct.");
	auto constexpr FWuLogPlayerLogout_NetId_Offset = offsetof(FWuLogPlayerLogout, NetId);
	static_assert(FWuLogPlayerLogout_NetId_Offset == 0x58, "FWuLogPlayerLogout::NetId offset is not 58");
	auto constexpr FWuLogPlayerLogout_AccountId_Offset = offsetof(FWuLogPlayerLogout, AccountId);
	static_assert(FWuLogPlayerLogout_AccountId_Offset == 0x68, "FWuLogPlayerLogout::AccountId offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
