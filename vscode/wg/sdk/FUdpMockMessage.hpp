#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FUdpMockMessage // Size: 0x10
{
public:
    TArray<uint8_t> Data; /* Ofs: 0x0 Size: 0x10 ArrayProperty UdpMessaging.UdpMockMessage.Data */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFUdpMockMessage = sizeof(FUdpMockMessage); // 16
    static_assert(sizeof(FUdpMockMessage) == 0x10, "Size of FUdpMockMessage is not correct.");
	auto constexpr FUdpMockMessage_Data_Offset = offsetof(FUdpMockMessage, Data);
	static_assert(FUdpMockMessage_Data_Offset == 0x0, "FUdpMockMessage::Data offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
