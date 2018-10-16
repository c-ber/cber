#pragma once
#include "FLogBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogPlayerLogin // Size: 0x90
 : public FLogBase // Size: 0x58
{
public:
    FString NetId; /* Ofs: 0x58 Size: 0x10 StrProperty TslGame.WuLogPlayerLogin.NetId */
    bool Result; /* Ofs: 0x68 Size: 0x1 BitMask: 01 BoolProperty TslGame.WuLogPlayerLogin.Result */
    uint8_t UnknownData69[0x7];
    FString ErrorMessage; /* Ofs: 0x70 Size: 0x10 StrProperty TslGame.WuLogPlayerLogin.ErrorMessage */
    FString AccountId; /* Ofs: 0x80 Size: 0x10 StrProperty TslGame.WuLogPlayerLogin.AccountId */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogPlayerLogin = sizeof(FWuLogPlayerLogin); // 144
    static_assert(sizeof(FWuLogPlayerLogin) == 0x90, "Size of FWuLogPlayerLogin is not correct.");
	auto constexpr FWuLogPlayerLogin_NetId_Offset = offsetof(FWuLogPlayerLogin, NetId);
	static_assert(FWuLogPlayerLogin_NetId_Offset == 0x58, "FWuLogPlayerLogin::NetId offset is not 58");
	auto constexpr FWuLogPlayerLogin_ErrorMessage_Offset = offsetof(FWuLogPlayerLogin, ErrorMessage);
	static_assert(FWuLogPlayerLogin_ErrorMessage_Offset == 0x70, "FWuLogPlayerLogin::ErrorMessage offset is not 70");
	auto constexpr FWuLogPlayerLogin_AccountId_Offset = offsetof(FWuLogPlayerLogin, AccountId);
	static_assert(FWuLogPlayerLogin_AccountId_Offset == 0x80, "FWuLogPlayerLogin::AccountId offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
