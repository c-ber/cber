#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStateMachineDebugData // Size: 0xB0
{
public:
    uint8_t UnknownData0[0xB0];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStateMachineDebugData = sizeof(FStateMachineDebugData); // 176
    static_assert(sizeof(FStateMachineDebugData) == 0xB0, "Size of FStateMachineDebugData is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
