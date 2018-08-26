#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFixHighBitCounter // Size: 0xC
{
public:
    uint8_t UnknownData0[0x8];
    int32_t Counter; /* Ofs: 0x8 Size: 0x4 IntProperty TslGame.FixHighBitCounter.Counter */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFixHighBitCounter = sizeof(FFixHighBitCounter); // 12
    static_assert(sizeof(FFixHighBitCounter) == 0xC, "Size of FFixHighBitCounter is not correct.");
	auto constexpr FFixHighBitCounter_Counter_Offset = offsetof(FFixHighBitCounter, Counter);
	static_assert(FFixHighBitCounter_Counter_Offset == 0x8, "FFixHighBitCounter::Counter offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
