#pragma once
#include "ECollisionChannel.hpp"
#include "ECollisionResponse.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomChannelSetup // Size: 0x18
{
public:
    TEnumAsByte<enum ECollisionChannel> Channel; /* Ofs: 0x0 Size: 0x1 ByteProperty Engine.CustomChannelSetup.Channel */
    uint8_t UnknownData1[0x7];
    FName Name; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.CustomChannelSetup.Name */
    TEnumAsByte<enum ECollisionResponse> DefaultResponse; /* Ofs: 0x10 Size: 0x1 ByteProperty Engine.CustomChannelSetup.DefaultResponse */
    bool bTraceType; /* Ofs: 0x11 Size: 0x1 BitMask: 01 BoolProperty Engine.CustomChannelSetup.bTraceType */
    bool bStaticObject; /* Ofs: 0x12 Size: 0x1 BitMask: 01 BoolProperty Engine.CustomChannelSetup.bStaticObject */
    uint8_t UnknownData13[0x5];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomChannelSetup = sizeof(FCustomChannelSetup); // 24
    static_assert(sizeof(FCustomChannelSetup) == 0x18, "Size of FCustomChannelSetup is not correct.");
	auto constexpr FCustomChannelSetup_Channel_Offset = offsetof(FCustomChannelSetup, Channel);
	static_assert(FCustomChannelSetup_Channel_Offset == 0x0, "FCustomChannelSetup::Channel offset is not 0");
	auto constexpr FCustomChannelSetup_Name_Offset = offsetof(FCustomChannelSetup, Name);
	static_assert(FCustomChannelSetup_Name_Offset == 0x8, "FCustomChannelSetup::Name offset is not 8");
	auto constexpr FCustomChannelSetup_DefaultResponse_Offset = offsetof(FCustomChannelSetup, DefaultResponse);
	static_assert(FCustomChannelSetup_DefaultResponse_Offset == 0x10, "FCustomChannelSetup::DefaultResponse offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
