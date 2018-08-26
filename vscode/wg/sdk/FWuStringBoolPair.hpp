#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuStringBoolPair // Size: 0x18
{
public:
    FString First; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.WuStringBoolPair.First */
    bool second; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty TslGame.WuStringBoolPair.second */
    uint8_t UnknownData11[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuStringBoolPair = sizeof(FWuStringBoolPair); // 24
    static_assert(sizeof(FWuStringBoolPair) == 0x18, "Size of FWuStringBoolPair is not correct.");
	auto constexpr FWuStringBoolPair_First_Offset = offsetof(FWuStringBoolPair, First);
	static_assert(FWuStringBoolPair_First_Offset == 0x0, "FWuStringBoolPair::First offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
