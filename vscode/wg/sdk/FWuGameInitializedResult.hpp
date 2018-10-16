#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuGameInitializedResult // Size: 0x8
{
public:
    bool IsSuccess; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty TslGame.WuGameInitializedResult.IsSuccess */
    uint8_t UnknownData1[0x3];
    int32_t Port; /* Ofs: 0x4 Size: 0x4 IntProperty TslGame.WuGameInitializedResult.Port */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuGameInitializedResult = sizeof(FWuGameInitializedResult); // 8
    static_assert(sizeof(FWuGameInitializedResult) == 0x8, "Size of FWuGameInitializedResult is not correct.");
	auto constexpr FWuGameInitializedResult_Port_Offset = offsetof(FWuGameInitializedResult, Port);
	static_assert(FWuGameInitializedResult_Port_Offset == 0x4, "FWuGameInitializedResult::Port offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
