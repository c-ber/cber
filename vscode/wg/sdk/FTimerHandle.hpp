#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTimerHandle // Size: 0x8
{
public:
    uint64_t Handle; /* Ofs: 0x0 Size: 0x8 UInt64Property Engine.TimerHandle.Handle */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTimerHandle = sizeof(FTimerHandle); // 8
    static_assert(sizeof(FTimerHandle) == 0x8, "Size of FTimerHandle is not correct.");
	auto constexpr FTimerHandle_Handle_Offset = offsetof(FTimerHandle, Handle);
	static_assert(FTimerHandle_Handle_Offset == 0x0, "FTimerHandle::Handle offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
