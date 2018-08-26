#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEngineServiceAuthGrant // Size: 0x20
{
public:
    FString UserName; /* Ofs: 0x0 Size: 0x10 StrProperty EngineMessages.EngineServiceAuthGrant.UserName */
    FString UserToGrant; /* Ofs: 0x10 Size: 0x10 StrProperty EngineMessages.EngineServiceAuthGrant.UserToGrant */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEngineServiceAuthGrant = sizeof(FEngineServiceAuthGrant); // 32
    static_assert(sizeof(FEngineServiceAuthGrant) == 0x20, "Size of FEngineServiceAuthGrant is not correct.");
	auto constexpr FEngineServiceAuthGrant_UserName_Offset = offsetof(FEngineServiceAuthGrant, UserName);
	static_assert(FEngineServiceAuthGrant_UserName_Offset == 0x0, "FEngineServiceAuthGrant::UserName offset is not 0");
	auto constexpr FEngineServiceAuthGrant_UserToGrant_Offset = offsetof(FEngineServiceAuthGrant, UserToGrant);
	static_assert(FEngineServiceAuthGrant_UserToGrant_Offset == 0x10, "FEngineServiceAuthGrant::UserToGrant offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
