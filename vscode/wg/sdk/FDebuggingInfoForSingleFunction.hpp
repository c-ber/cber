#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDebuggingInfoForSingleFunction // Size: 0x1E0
{
public:
    uint8_t UnknownData0[0x1E0];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDebuggingInfoForSingleFunction = sizeof(FDebuggingInfoForSingleFunction); // 480
    static_assert(sizeof(FDebuggingInfoForSingleFunction) == 0x1E0, "Size of FDebuggingInfoForSingleFunction is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
