#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVivoxConnectionInfo // Size: 0x20
{
public:
    FString ServerURL; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.VivoxConnectionInfo.ServerURL */
    FString Domain; /* Ofs: 0x10 Size: 0x10 StrProperty TslGame.VivoxConnectionInfo.Domain */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVivoxConnectionInfo = sizeof(FVivoxConnectionInfo); // 32
    static_assert(sizeof(FVivoxConnectionInfo) == 0x20, "Size of FVivoxConnectionInfo is not correct.");
	auto constexpr FVivoxConnectionInfo_ServerURL_Offset = offsetof(FVivoxConnectionInfo, ServerURL);
	static_assert(FVivoxConnectionInfo_ServerURL_Offset == 0x0, "FVivoxConnectionInfo::ServerURL offset is not 0");
	auto constexpr FVivoxConnectionInfo_Domain_Offset = offsetof(FVivoxConnectionInfo, Domain);
	static_assert(FVivoxConnectionInfo_Domain_Offset == 0x10, "FVivoxConnectionInfo::Domain offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
