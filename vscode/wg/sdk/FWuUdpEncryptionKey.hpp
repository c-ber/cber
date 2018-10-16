#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuUdpEncryptionKey // Size: 0x30
{
public:
    FString Key; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.WuUdpEncryptionKey.Key */
    FString ServerIV; /* Ofs: 0x10 Size: 0x10 StrProperty TslGame.WuUdpEncryptionKey.ServerIV */
    FString ClientIV; /* Ofs: 0x20 Size: 0x10 StrProperty TslGame.WuUdpEncryptionKey.ClientIV */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuUdpEncryptionKey = sizeof(FWuUdpEncryptionKey); // 48
    static_assert(sizeof(FWuUdpEncryptionKey) == 0x30, "Size of FWuUdpEncryptionKey is not correct.");
	auto constexpr FWuUdpEncryptionKey_Key_Offset = offsetof(FWuUdpEncryptionKey, Key);
	static_assert(FWuUdpEncryptionKey_Key_Offset == 0x0, "FWuUdpEncryptionKey::Key offset is not 0");
	auto constexpr FWuUdpEncryptionKey_ServerIV_Offset = offsetof(FWuUdpEncryptionKey, ServerIV);
	static_assert(FWuUdpEncryptionKey_ServerIV_Offset == 0x10, "FWuUdpEncryptionKey::ServerIV offset is not 10");
	auto constexpr FWuUdpEncryptionKey_ClientIV_Offset = offsetof(FWuUdpEncryptionKey, ClientIV);
	static_assert(FWuUdpEncryptionKey_ClientIV_Offset == 0x20, "FWuUdpEncryptionKey::ClientIV offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
