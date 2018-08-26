#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FURL // Size: 0x70
{
public:
    FString Protocol; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.URL.Protocol */
    FString Host; /* Ofs: 0x10 Size: 0x10 StrProperty Engine.URL.Host */
    int32_t Port; /* Ofs: 0x20 Size: 0x4 IntProperty Engine.URL.Port */
    uint8_t UnknownData24[0x4];
    FString Map; /* Ofs: 0x28 Size: 0x10 StrProperty Engine.URL.Map */
    FString RedirectURL; /* Ofs: 0x38 Size: 0x10 StrProperty Engine.URL.RedirectURL */
    TArray<struct FString> Op; /* Ofs: 0x48 Size: 0x10 ArrayProperty Engine.URL.Op */
    FString Portal; /* Ofs: 0x58 Size: 0x10 StrProperty Engine.URL.Portal */
    int32_t Valid; /* Ofs: 0x68 Size: 0x4 IntProperty Engine.URL.Valid */
    uint8_t UnknownData6C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFURL = sizeof(FURL); // 112
    static_assert(sizeof(FURL) == 0x70, "Size of FURL is not correct.");
	auto constexpr FURL_Protocol_Offset = offsetof(FURL, Protocol);
	static_assert(FURL_Protocol_Offset == 0x0, "FURL::Protocol offset is not 0");
	auto constexpr FURL_Host_Offset = offsetof(FURL, Host);
	static_assert(FURL_Host_Offset == 0x10, "FURL::Host offset is not 10");
	auto constexpr FURL_Port_Offset = offsetof(FURL, Port);
	static_assert(FURL_Port_Offset == 0x20, "FURL::Port offset is not 20");
	auto constexpr FURL_Map_Offset = offsetof(FURL, Map);
	static_assert(FURL_Map_Offset == 0x28, "FURL::Map offset is not 28");
	auto constexpr FURL_RedirectURL_Offset = offsetof(FURL, RedirectURL);
	static_assert(FURL_RedirectURL_Offset == 0x38, "FURL::RedirectURL offset is not 38");
	auto constexpr FURL_Op_Offset = offsetof(FURL, Op);
	static_assert(FURL_Op_Offset == 0x48, "FURL::Op offset is not 48");
	auto constexpr FURL_Portal_Offset = offsetof(FURL, Portal);
	static_assert(FURL_Portal_Offset == 0x58, "FURL::Portal offset is not 58");
	auto constexpr FURL_Valid_Offset = offsetof(FURL, Valid);
	static_assert(FURL_Valid_Offset == 0x68, "FURL::Valid offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
