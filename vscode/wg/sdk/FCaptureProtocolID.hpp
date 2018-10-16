#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCaptureProtocolID // Size: 0x8
{
public:
    FName Identifier; /* Ofs: 0x0 Size: 0x8 NameProperty MovieSceneCapture.CaptureProtocolID.Identifier */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCaptureProtocolID = sizeof(FCaptureProtocolID); // 8
    static_assert(sizeof(FCaptureProtocolID) == 0x8, "Size of FCaptureProtocolID is not correct.");
	auto constexpr FCaptureProtocolID_Identifier_Offset = offsetof(FCaptureProtocolID, Identifier);
	static_assert(FCaptureProtocolID_Identifier_Offset == 0x0, "FCaptureProtocolID::Identifier offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
