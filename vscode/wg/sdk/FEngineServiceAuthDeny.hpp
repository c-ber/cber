#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEngineServiceAuthDeny // Size: 0x20
{
public:
    FString UserName; /* Ofs: 0x0 Size: 0x10 StrProperty EngineMessages.EngineServiceAuthDeny.UserName */
    FString UserToDeny; /* Ofs: 0x10 Size: 0x10 StrProperty EngineMessages.EngineServiceAuthDeny.UserToDeny */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEngineServiceAuthDeny = sizeof(FEngineServiceAuthDeny); // 32
    static_assert(sizeof(FEngineServiceAuthDeny) == 0x20, "Size of FEngineServiceAuthDeny is not correct.");
	auto constexpr FEngineServiceAuthDeny_UserName_Offset = offsetof(FEngineServiceAuthDeny, UserName);
	static_assert(FEngineServiceAuthDeny_UserName_Offset == 0x0, "FEngineServiceAuthDeny::UserName offset is not 0");
	auto constexpr FEngineServiceAuthDeny_UserToDeny_Offset = offsetof(FEngineServiceAuthDeny, UserToDeny);
	static_assert(FEngineServiceAuthDeny_UserToDeny_Offset == 0x10, "FEngineServiceAuthDeny::UserToDeny offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
