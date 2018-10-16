#pragma once
#include "ECollisionResponse.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FResponseChannel // Size: 0x10
{
public:
    FName Channel; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.ResponseChannel.Channel */
    TEnumAsByte<enum ECollisionResponse> Response; /* Ofs: 0x8 Size: 0x1 ByteProperty Engine.ResponseChannel.Response */
    uint8_t UnknownData9[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFResponseChannel = sizeof(FResponseChannel); // 16
    static_assert(sizeof(FResponseChannel) == 0x10, "Size of FResponseChannel is not correct.");
	auto constexpr FResponseChannel_Channel_Offset = offsetof(FResponseChannel, Channel);
	static_assert(FResponseChannel_Channel_Offset == 0x0, "FResponseChannel::Channel offset is not 0");
	auto constexpr FResponseChannel_Response_Offset = offsetof(FResponseChannel, Response);
	static_assert(FResponseChannel_Response_Offset == 0x8, "FResponseChannel::Response offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
