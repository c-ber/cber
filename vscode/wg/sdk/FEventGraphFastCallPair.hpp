#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEventGraphFastCallPair // Size: 0x10
{
public:
    ExternalPtr<struct UFunction> FunctionToPatch; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.EventGraphFastCallPair.FunctionToPatch */
    int32_t EventGraphCallOffset; /* Ofs: 0x8 Size: 0x4 IntProperty Engine.EventGraphFastCallPair.EventGraphCallOffset */
    uint8_t UnknownDataC[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEventGraphFastCallPair = sizeof(FEventGraphFastCallPair); // 16
    static_assert(sizeof(FEventGraphFastCallPair) == 0x10, "Size of FEventGraphFastCallPair is not correct.");
	auto constexpr FEventGraphFastCallPair_FunctionToPatch_Offset = offsetof(FEventGraphFastCallPair, FunctionToPatch);
	static_assert(FEventGraphFastCallPair_FunctionToPatch_Offset == 0x0, "FEventGraphFastCallPair::FunctionToPatch offset is not 0");
	auto constexpr FEventGraphFastCallPair_EventGraphCallOffset_Offset = offsetof(FEventGraphFastCallPair, EventGraphCallOffset);
	static_assert(FEventGraphFastCallPair_EventGraphCallOffset_Offset == 0x8, "FEventGraphFastCallPair::EventGraphCallOffset offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
