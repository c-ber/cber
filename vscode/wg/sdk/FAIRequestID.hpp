#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAIRequestID // Size: 0x4
{
public:
    uint32_t RequestID; /* Ofs: 0x0 Size: 0x4 UInt32Property AIModule.AIRequestID.RequestID */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAIRequestID = sizeof(FAIRequestID); // 4
    static_assert(sizeof(FAIRequestID) == 0x4, "Size of FAIRequestID is not correct.");
	auto constexpr FAIRequestID_RequestID_Offset = offsetof(FAIRequestID, RequestID);
	static_assert(FAIRequestID_RequestID_Offset == 0x0, "FAIRequestID::RequestID offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
