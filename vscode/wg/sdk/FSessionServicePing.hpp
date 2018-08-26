#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSessionServicePing // Size: 0x10
{
public:
    FString UserName; /* Ofs: 0x0 Size: 0x10 StrProperty SessionMessages.SessionServicePing.UserName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSessionServicePing = sizeof(FSessionServicePing); // 16
    static_assert(sizeof(FSessionServicePing) == 0x10, "Size of FSessionServicePing is not correct.");
	auto constexpr FSessionServicePing_UserName_Offset = offsetof(FSessionServicePing, UserName);
	static_assert(FSessionServicePing_UserName_Offset == 0x0, "FSessionServicePing::UserName offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
