#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuStringFloatPair // Size: 0x18
{
public:
    FString First; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.WuStringFloatPair.First */
    float second; /* Ofs: 0x10 Size: 0x4 FloatProperty TslGame.WuStringFloatPair.second */
    uint8_t UnknownData14[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuStringFloatPair = sizeof(FWuStringFloatPair); // 24
    static_assert(sizeof(FWuStringFloatPair) == 0x18, "Size of FWuStringFloatPair is not correct.");
	auto constexpr FWuStringFloatPair_First_Offset = offsetof(FWuStringFloatPair, First);
	static_assert(FWuStringFloatPair_First_Offset == 0x0, "FWuStringFloatPair::First offset is not 0");
	auto constexpr FWuStringFloatPair_second_Offset = offsetof(FWuStringFloatPair, second);
	static_assert(FWuStringFloatPair_second_Offset == 0x10, "FWuStringFloatPair::second offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
