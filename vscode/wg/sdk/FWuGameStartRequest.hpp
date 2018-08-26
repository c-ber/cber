#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuGameStartRequest // Size: 0x10
{
public:
    TArray<struct FWuStringStringPair> StringParameters; /* Ofs: 0x0 Size: 0x10 ArrayProperty TslGame.WuGameStartRequest.StringParameters */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuGameStartRequest = sizeof(FWuGameStartRequest); // 16
    static_assert(sizeof(FWuGameStartRequest) == 0x10, "Size of FWuGameStartRequest is not correct.");
	auto constexpr FWuGameStartRequest_StringParameters_Offset = offsetof(FWuGameStartRequest, StringParameters);
	static_assert(FWuGameStartRequest_StringParameters_Offset == 0x0, "FWuGameStartRequest::StringParameters offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
